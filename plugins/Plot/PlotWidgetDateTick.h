/*
 *  Qtstalker stock charter
 *
 *  Copyright (C) 2001-2010 Stefan S. Stratigakos
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 */

// *************************************************************************************************
// *************************************************************************************************

#ifndef PLUGIN_PLOT_WIDGET_DATE_TICK_HPP
#define PLUGIN_PLOT_WIDGET_DATE_TICK_HPP

#include <QString>
#include <QMap>
#include <QList>
#include <QDateTime>

#include "Data.h"

typedef struct
{
  int type;
  QString text;
  
} DateTickItem;


class PlotWidgetDateTick
{
  public:
    PlotWidgetDateTick ();
    ~PlotWidgetDateTick ();
    void clear ();
    void setTicks (QMap<int, Data *> &, QString dateKey);
    int tick (int index, int &type, QString &text);
    int size ();
    
  protected:
//    void dailyTicks (QList<QDateTime> &);
//    void weeklyTicks (QList<QDateTime> &);
//    void monthlyTicks (QList<QDateTime> &);
//    void minuteTicks (QList<QDateTime> &, OFCTypeBarLength::Length);
    
    
    QMap<int, DateTickItem *> _ticks;
};

#endif
