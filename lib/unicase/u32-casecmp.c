/* Case and normalization insensitive comparison of UTF-32 strings.
   Copyright (C) 2009-2016 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2009.

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
#include "unicase.h"

#include <errno.h>
#include <stdlib.h>

#include "minmax.h"
#include "uninorm.h"
#include "unistr.h"

#define FUNC u32_casecmp
#define UNIT uint32_t
#define SRC_UNIT uint32_t
#define U_CASEFOLD u32_casefold
#define U_CMP2 u32_cmp2
#include "u-casecmp.h"
