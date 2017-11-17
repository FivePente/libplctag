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

#ifndef __PROTOCOLS_AB_LOGIX_SESSION_H__
#define __PROTOCOLS_AB_LOGIX_SESSION_H__ 1


typedef struct logix_session_t *logix_session_p;

extern logix_session_p logix_get_session(const char *path);

extern int logix_get_session_status(logix_session_p session);

extern int logix_session_read_tag(logix_session_p session, const char *tag_name, bytebuf_p data);
extern int logix_session_write_tag(logix_session_p session, const char *tag_name, bytebuf_p data);
extern int logix_session_abort_tag(logix_session_p session, const char *tag_name);

#endif