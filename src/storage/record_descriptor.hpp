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
// record_descriptor - RECDES extended functionality
//

#include "memory_alloc.h"
#include "storage_common.h"

// forward definitions
namespace cubthread
{
  class entry;
};

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

// explicit aliases for PEEK/COPY
enum class record_get_mode
{
  PEEK_RECORD = PEEK,
  COPY_RECORD = COPY
};

class record_descriptor
{
  public:

    // constructors

    // default
    record_descriptor (void);
    ~record_descriptor (void);

    // based on an aligned buffer
    template <size_t S>
    record_descriptor (aligned_stack_memory_buffer<S> &membuf);

    // based on recdes
    record_descriptor (const recdes &rec);

    int peek (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid);
    int copy (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid);
    int get (cubthread::entry *thread_p, PAGE_PTR page, PGSLOTID slotid, record_get_mode mode);

    const recdes &get_recdes (void) const;

    const char *get_data (void) const;
    std::size_t get_size (void) const;
    char *get_data_for_modify (void);   // try to avoid

    void modify_data (std::size_t offset, std::size_t old_size, std::size_t new_size, const char *new_data);
    void delete_data (std::size_t offset, std::size_t data_size);
    void insert_data (std::size_t offset, std::size_t new_size, const char *new_data);
    void move_data (std::size_t dest_offset, std::size_t source_offset);

  private:

    void resize (cubthread::entry *thread_p, std::size_t size, bool copy_data);
    void check_changes_are_permitted (void) const;

    enum class status
    {
      INVALID,
      PEEKED,
      COPIED,
      NEW
    };
    void inline update_status_after_get (record_get_mode mode);

    recdes m_recdes;
    char *m_own_data;
    status m_status;
};

//////////////////////////////////////////////////////////////////////////
// template/inline
//////////////////////////////////////////////////////////////////////////

template <size_t S>
record_descriptor::record_descriptor (aligned_stack_memory_buffer<S> &membuf)
{
  m_recdes.area_size = membuf.SIZE;
  m_recdes.length = 0;
  m_recdes.type = REC_HOME;
  m_recdes.data = membuf.get_ptr ();
  m_own_data = NULL;
  m_status = status::NEW;
}
