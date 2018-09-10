/*
 * Copyright (C) 2008 Search Solution Corporation. All rights reserved by Search Solution.
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

//
// record_descriptor.cpp - extended functionality of recdes
//

#include "record_descriptor.hpp"

#include "error_code.h"
#include "memory_alloc.h"
#include "slotted_page.h"

#include <cstring>

//  record_descriptor extends functionality for recdes:
//
//  typedef struct recdes RECDES;	/* RECORD DESCRIPTOR */
//  struct recdes
//  {
//    int area_size;		/* Length of the allocated area. It includes only the data field. The value is negative
//				 * if data is inside buffer. For example, peeking in a slotted page. */
//    int length;			/* Length of the data. Does not include the length and type fields */
//    INT16 type;			/* Type of record */
//    char *data;			/* The data */
//  };
//

record_descriptor::record_descriptor (void)
{
  m_recdes.area_size = 0;
  m_recdes.length = 0;
  m_recdes.type = REC_HOME;
  m_recdes.data = NULL;
  m_own_data = NULL;
}

record_descriptor::record_descriptor (const recdes &rec)
{
  // copy content from argument
  m_recdes.type = rec.type;
  if (rec.length == 0)
    {
      m_recdes.length = 0;
      m_recdes.area_size = 0;
      m_recdes.data = NULL;
    }
  else
    {
      m_recdes.area_size = rec.length;
      m_recdes.length = m_recdes.area_size;
      m_own_data = m_recdes.data = (char *) db_private_alloc (NULL, m_recdes.area_size);
      std::memcpy (m_recdes.data, rec.data, m_recdes.length);
    }
}

record_descriptor::~record_descriptor (void)
{
  if (m_own_data != NULL)
    {
      db_private_free (NULL, m_own_data);
    }
}

int
record_descriptor::peek (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid)
{
  return get (thread_p, page, slotid, record_get_mode::PEEK_RECORD);
}

int
record_descriptor::copy (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid)
{
  return get (thread_p, page, slotid, record_get_mode::COPY_RECORD);
}

int
record_descriptor::get (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid, record_get_mode mode)
{
  int mode_to_int = static_cast<int> (mode);
  SCAN_CODE sc = spage_get_record (thread_p, page, slotid, &m_recdes, mode_to_int);
  if (sc == S_SUCCESS)
    {
      return NO_ERROR;
    }

  if (sc == S_DOESNT_FIT)
    {
      // extend and try again
      assert (m_recdes.length < 0);
      assert (mode == record_get_mode::COPY_RECORD);

      size_t required_size = static_cast<size_t> (-m_recdes.length);
      if (m_own_data == NULL)
	{
	  m_own_data = (char *) db_private_alloc (thread_p, required_size);
	}
      else
	{
	  m_own_data = (char *) db_private_realloc (thread_p, m_own_data, required_size);
	}
      m_recdes.data = m_own_data;
      m_recdes.area_size = (int) required_size;

      sc = spage_get_record (thread_p, page, slotid, &m_recdes, mode_to_int);
      if (sc == S_SUCCESS)
	{
	  return NO_ERROR;
	}
    }

  // failed
  assert (false);
  return ER_FAILED;
}

const recdes &
record_descriptor::get_recdes (void)
{
  return m_recdes;
}
