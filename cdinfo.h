/*
  Copyright (C) 2002 Rik Hemsley (rikkus) <rik@kde.org>
  Copyright (C) 2002 Benjamin Meyer <ben-devel@meyerhome.net>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.

  You should have received a copy of the GNU Library General Public License
  along with this library; see the file COPYING.LIB.  If not, write to
  the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.
*/

#ifndef KCDDB_CDINFO_H
#define KCDDB_CDINFO_H

#include <qstringlist.h>

#include <libkcddb/trackinfolist.h>

namespace KCDDB
{
  class CDInfo
  {
    public:

      CDInfo();

      bool load(const QString &);
      bool load(const QStringList &);

      QString toString() const;

      QString       artist;
      QString       title;
      QString       genre;
      uint          year;
      uint          length;
      QString       id;
      TrackInfoList trackInfoList;
  };

  typedef QValueList<CDInfo> CDInfoList;
}

#endif // KCDDB_CDINFO_H
// vim:tabstop=2:shiftwidth=2:expandtab:cinoptions=(s,U1,m1