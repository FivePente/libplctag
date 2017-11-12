/***************************************************************************
 *   Copyright (C) 2017 by Kyle Hayes                                      *
 *   Author Kyle Hayes  kyle.hayes@gmail.com                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef __UTIL_BYTEBUF_H__
#define __UTIL_BYTEBUF_H__

#include <stdint.h>
#include <util/refcount.h>

typedef struct bytebuf_t *bytebuf_p;

extern bytebuf_p bytebuf_create(int initial_cap, uint32_t int16_bo, uint32_t int32_bo, uint32_t int64_bo, uint32_t float32_bo, uint32_t float64_bo);
extern int bytebuf_set_cursor(bytebuf_p buf, int cursor);
extern int bytebuf_get_cursor(bytebuf_p buf);
extern int bytebuf_set_capacity(bytebuf_p buf, int capacity);
extern int bytebuf_get_capacity(bytebuf_p buf);
extern int bytebuf_get_size(bytebuf_p buf);
extern uint8_t *bytebuf_get_buffer(bytebuf_p buf);
extern int bytebuf_reset(bytebuf_p buf);
extern int bytebuf_destroy(bytebuf_p buf);

/* data accessors */
extern int bytebuf_get_int8(bytebuf_p buf, int8_t *val);
extern int bytebuf_set_int8(bytebuf_p buf, int8_t val);

extern int bytebuf_get_int16(bytebuf_p buf, int16_t *val);
extern int bytebuf_set_int16(bytebuf_p buf, int16_t val);

extern int bytebuf_get_int32(bytebuf_p buf, int32_t *val);
extern int bytebuf_set_int32(bytebuf_p buf, int32_t val);

extern int bytebuf_get_int64(bytebuf_p buf, int64_t *val);
extern int bytebuf_set_int64(bytebuf_p buf, int64_t val);

extern int bytebuf_get_float32(bytebuf_p buf, float *val);
extern int bytebuf_set_float32(bytebuf_p buf, float val);

extern int bytebuf_get_float64(bytebuf_p buf, double *val);
extern int bytebuf_set_float64(bytebuf_p buf, double val);

#endif
