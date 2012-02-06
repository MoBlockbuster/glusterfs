/*
   Copyright (c) 2007-2011 Gluster, Inc. <http://www.gluster.com>
   This file is part of GlusterFS.

   GlusterFS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3 of the License,
   or (at your option) any later version.

   GlusterFS is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see
   <http://www.gnu.org/licenses/>.
*/

#ifndef __INODE_READ_H__
#define __INODE_READ_H__

int32_t
afr_access (call_frame_t *frame, xlator_t *this,
	    loc_t *loc, int32_t mask);

int32_t
afr_stat (call_frame_t *frame, xlator_t *this,
	  loc_t *loc);

int32_t
afr_fstat (call_frame_t *frame, xlator_t *this,
	   fd_t *fd);

int32_t
afr_readlink (call_frame_t *frame, xlator_t *this,
	      loc_t *loc, size_t size);

int32_t
afr_readv (call_frame_t *frame, xlator_t *this,
	   fd_t *fd, size_t size, off_t offset, uint32_t flags);

int32_t
afr_getxattr (call_frame_t *frame, xlator_t *this,
	      loc_t *loc, const char *name);

int32_t
afr_fgetxattr (call_frame_t *frame, xlator_t *this,
               fd_t *fd, const char *name);

#endif /* __INODE_READ_H__ */
