/* Formatted output to strings.
   Copyright (C) 1999, 2002, 2005-2007, 2009-2016 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unistdio.h"

#include <stdarg.h>

#define ASPRINTF u16_u16_asprintf
#define VASPRINTF u16_u16_vasprintf
#define FCHAR_T uint16_t
#define DCHAR_T uint16_t
#include "u-asprintf.h"
