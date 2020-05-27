/**************************************************************************
 **
 ** sngrep - SIP Messages flow viewer
 **
 ** Copyright (C) 2013-2019 Ivan Alonso (Kaian)
 ** Copyright (C) 2013-2019 Irontec SL. All rights reserved.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **
 ****************************************************************************/
/**
 * @file scrollbar.h
 * @author Ivan Alonso [aka Kaian] <kaian@irontec.com>
 *
 * @brief
 *
 */
#ifndef __SNGREP_SCROLLBAR_H__
#define __SNGREP_SCROLLBAR_H__

#include <glib.h>
#include "tui/widgets/container.h"
#include "orientable.h"

G_BEGIN_DECLS

// Class declaration
#define SNG_TYPE_SCROLLBAR sng_scrollbar_get_type()
G_DECLARE_FINAL_TYPE(SngScrollbar, sng_scrollbar, SNG, SCROLLBAR, SngWidget)

struct _SngScrollbar
{
    //! Parent object attributes
    SngWidget parent;
    //! Vertical or Horizontal scrollbar
    SngOrientation orientation;
    //! Current bar position
    gint position;
    //! Max position
    gint max_position;
};

SngWidget *
sng_scrollbar_new(SngOrientation orientation);

gint
sng_scrollbar_get_position(SngScrollbar *scrollbar);

void
sng_scrollbar_set_position(SngScrollbar *scrollbar, gint position);

gint
sng_scrollbar_get_max_position(SngScrollbar *scrollbar);

void
sng_scrollbar_set_max_position(SngScrollbar *scrollbar, gint max_position);

gint
sng_scrollbar_get_max(SngScrollbar *scrollbar);

G_END_DECLS

#endif    /* __SNGREP_SCROLLBAR_H__ */
