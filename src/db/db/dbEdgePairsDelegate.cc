
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbEdgePairsDelegate.h"

namespace db
{

// -------------------------------------------------------------------------------------------------------------

EdgePairsDelegate::EdgePairsDelegate ()
{
  m_base_verbosity = 30;
  m_report_progress = false;
}

EdgePairsDelegate::EdgePairsDelegate (const EdgePairsDelegate &other)
  : ShapeCollectionDelegateBase ()
{
  operator= (other);
}

EdgePairsDelegate &
EdgePairsDelegate::operator= (const EdgePairsDelegate &other)
{
  if (this != &other) {
    m_base_verbosity = other.m_base_verbosity;
    m_report_progress = other.m_report_progress;
  }
  return *this;
}

EdgePairsDelegate::~EdgePairsDelegate ()
{
  //  .. nothing yet ..
}

void EdgePairsDelegate::set_base_verbosity (int vb)
{
  m_base_verbosity = vb;
}

void EdgePairsDelegate::enable_progress (const std::string &progress_desc)
{
  m_report_progress = true;
  m_progress_desc = progress_desc;
}

void EdgePairsDelegate::disable_progress ()
{
  m_report_progress = false;
}

}

