/*
 * $Id: BKE_world.h 36772 2011-05-19 11:21:37Z blendix $ 
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */
#ifndef BKE_WORLD_H
#define BKE_WORLD_H

/** \file BKE_world.h
 *  \ingroup bke
 *  \since March 2001
 *  \author nzc
 */

struct World;

void free_world(struct World *sc); 
struct World *add_world(const char *name);
struct World *copy_world(struct World *wrld);
struct World *localize_world(struct World *wrld);
void make_local_world(struct World *wrld);

#endif

