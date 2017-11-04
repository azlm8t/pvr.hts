/*
 *      Copyright (C) 2005-2011 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "Event.h"

#include "p8-platform/util/StringUtils.h"

using namespace tvheadend::entity;

void Event::SetWriters(const std::vector<std::string> &writers)
{
  m_writers = StringUtils::Join(writers, ",");
}

void Event::SetDirectors(const std::vector<std::string> &directors)
{
  m_directors = StringUtils::Join(directors, ",");
}

void Event::SetActors(const std::vector<std::string> &actors)
{
  m_actors = StringUtils::Join(actors, ",");
}

void Event::SetCategories(const std::vector<std::string> &categories)
{
  m_categories = StringUtils::Join(categories, ",");
}
