/*
 *   $Id: nmsettings.cpp,v 1.1.1.1 2007-05-26 17:41:22 rserral Exp $
 *
 *   Copyright (c) 2006 Pau Capella
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#include "nmsettings.h"

#define NMPORT 6122

NMSettings *NMSettings::settings = 0;

NMSettings::NMSettings()
:m_port(NMPORT)
{
}


NMSettings::~NMSettings()
{
}

NMSettings *NMSettings::self()
{
	if(settings)
		return settings;
	return settings = new NMSettings(); 
}

void NMSettings::setNMPort( const int &port)
{
	m_port = port;
}

int NMSettings::nmport()
{
	return m_port;
}


