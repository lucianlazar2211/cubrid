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
 */

/*
 * mem_block.hpp - Memory Block Functionality
 *
 *  Memory Block is defined as a contiguous memory buffer.
 *
 *  Glossary:
 *
 *    block - the pair of memory pointer and size.
 *    stack block - a block on stack memory
 *    heap block - a block on heap memory; does not have its own structure (a simple block can be used).
 *    extensible block - a block that can be extended when required
 *    extensible stack block - a block that starts as a stack block and can be extended to a heap block.
 */

#ifndef _MEM_BLOCK_HPP_
#define _MEM_BLOCK_HPP_

#include <memory.h>
#include <functional>

#include <cinttypes>

namespace mem
{
  const size_t DEFAULT_ALIGNMENT = 8;
  template <typename T>
  inline T *ptr_align (T *ptr);

  /*
   * Memory Block
   * - groups together memory address and its size
   * - doesn't own the memory, just points to it
   * - used to allocate, deallocate and share memory
   * - could be extended with helper info: allocator, src file&line where allocation was made, ...
   */
  struct block
  {
    public:
      size_t dim;
      char *ptr;

      inline block ();
      inline block (size_t dim, void *ptr);
      inline block (block &&b);             //move ctor

      inline block &operator= (block &&b);  //move assign

      inline bool is_valid () const;

      inline char *move_ptr ();                                    //NOT RECOMMENDED! use move semantics: std::move()

    private:
      block (const block &) = delete;
      block &operator= (const block &) = delete;
  };

  template <size_t S>
  class stack_block
  {
    public:
      static const size_t SIZE = S;

      stack_block (void) = default;
      char *get_ptr (void)
      {
	return m_buf;
      }
      const block get_block (void)
      {
	return block (m_buf, SIZE);
      }

    private:
      union
      {
	char m_buf[SIZE];
	std::int64_t dummy;
      };
  };

  /* Memory Block - Extensible
   * - able to extend/reallocate to accommodate additional bytes
   * - owns the memory by default and it will free the memory in destructor unless it is moved:
   *    {
   *        mem::block_ext block{some_realloc, some_dealloc};//some_realloc/dealloc = functions, functors or lambdas
   *        //...
   *        //move it or it will be deallocated; simple copy => compiler error because it is not designed to be copied
   *        mem::block b = std::move(block);
   *    }
   */
  struct extensible_block : public block
  {
    public:
      inline extensible_block ();                                          //default ctor
      inline extensible_block (extensible_block &&b);                             //move ctor
      inline extensible_block (std::function<void (block &b, size_t n)> extend,
			       std::function<void (block &b)> dealloc);    //general ctor
      inline ~extensible_block ();                                         //dtor

      inline extensible_block &operator= (extensible_block &&b);                  //move assignment

      inline void extend_by (size_t additional_bytes);
      inline void extend_to (size_t total_bytes)
      {
	if (total_bytes <= dim)
	  {
	    return;
	  }
	extend_by (total_bytes - dim);
      }

      char *get_ptr () const
      {
	return ptr;
      }

      std::size_t get_size () const
      {
	return dim;
      }

      char *release_ptr ()
      {
	char *ret_ptr = ptr;
	ptr = NULL;
	return ret_ptr;
      }

    private:
      std::function<void (block &b, size_t n)> m_extend;  //extend memory block to fit at least additional n bytes
      std::function<void (block &b)> m_dealloc;           //deallocate memory block

      extensible_block (const extensible_block &) = delete;             //copy ctor
      extensible_block &operator= (const extensible_block &) = delete;  //copy assignment
  };

  template <size_t S>
  class extensible_stack_block
  {
    public:
      extensible_stack_block ()
	: m_stack ()
	, m_ext_block ()
	, m_ptr (m_stack.get_ptr ())
      {
      }

      void extend_by (size_t additional_bytes)
      {
	if (m_ext_block.ptr == NULL)
	  {
	    m_ext_block.extend_to (m_stack.SIZE + additional_bytes);
	  }
	else
	  {
	    m_ext_block.extend_by (additional_bytes);
	  }
	m_ptr = m_ext_block.get_ptr ();
      }

      void extend_to (size_t total_bytes)
      {
	if (total_bytes <= m_stack.SIZE)
	  {
	    return;
	  }
	m_ext_block.extend_to (total_bytes);
	m_ptr = m_ext_block.get_ptr ();
      }

      char *get_ptr () const
      {
	return m_ptr;
      }
      std::size_t get_size () const
      {
	return m_ptr == m_stack.get_ptr () ? m_stack.SIZE : m_ext_block.get_size ();
      }

    private:
      stack_block<S> m_stack;
      extensible_block m_ext_block;
      char *m_ptr;
  };

  //
  // other functions
  //
  inline void default_realloc (block &b, size_t len);
  inline void default_dealloc (block &b);

} // namespace mem

//////////////////////////////////////////////////////////////////////////
// inline/template implementation
//////////////////////////////////////////////////////////////////////////

namespace mem
{
  //
  // alignment
  //
  template <typename T>
  T *
  ptr_align (T *ptr)
  {
    std::uintptr_t pt = (std::uintptr_t) ptr;
    pt = (pt + DEFAULT_ALIGNMENT - 1) & (DEFAULT_ALIGNMENT - 1);
    return (T *) pt;
  }

  //
  // block
  //
  block::block ()
    : dim { 0 }
    , ptr { NULL }
  {
  }

  block::block (block &&b)
    : dim {b.dim}
    , ptr {b.ptr}
  {
    b.dim = 0;
    b.ptr = NULL;
  }

  block::block (size_t dim, void *ptr)
    : dim {dim}
    , ptr { (char *) ptr}
  {
  }

  block &
  block::operator= (block &&b)   //move assign
  {
    if (this != &b)
      {
	dim = b.dim;
	ptr = b.ptr;
	b.dim = 0;
	b.ptr = NULL;
      }
    return *this;
  }

  bool
  block::is_valid () const
  {
    return (dim != 0 && ptr != NULL);
  }

  char *
  block::move_ptr ()
  {
    char *p = ptr;

    dim = 0;
    ptr = NULL;

    return p;
  }

  //
  // block_ext
  //
  extensible_block::extensible_block ()
    : extensible_block {default_realloc, default_dealloc}
  {
  }

  extensible_block::extensible_block (extensible_block &&b)
    : extensible_block {b.m_extend, b.m_dealloc}
  {
    b.dim = 0;
    b.ptr = NULL;
  }

  extensible_block::extensible_block (std::function<void (block &b, size_t n)> extend,
				      std::function<void (block &b)> dealloc)
    : block {}
    , m_extend { extend }
    , m_dealloc { dealloc }
  {
  }

  extensible_block &
  extensible_block::operator= (extensible_block &&b)
  {
    if (this != &b)
      {
	m_dealloc (*this);
	dim = b.dim;
	ptr = b.ptr;
	m_extend = b.m_extend;
	m_dealloc = b.m_dealloc;
	b.dim = 0;
	b.ptr = NULL;
      }

    return *this;
  }

  extensible_block::~extensible_block ()
  {
    m_dealloc (*this);
  }

  void
  extensible_block::extend_by (size_t additional_bytes)
  {
    m_extend (*this, additional_bytes);
  }

  //
  // other functions
  //
  void
  default_realloc (block &b, size_t len)
  {
    size_t dim = b.dim ? b.dim : 1;

    // calc next power of 2 >= b.dim
    for (; dim < b.dim + len; dim *= 2)
      ;

    block x{dim, new char[dim]};
    memcpy (x.ptr, b.ptr, b.dim);

    delete [] b.ptr;

    b = std::move (x);
  }

  void
  default_dealloc (block &b)
  {
    delete [] b.ptr;
    b = {};
  }
} // namespace mem

#endif // _MEM_BLOCK_HPP_
