/*  aviout.h

    Copyright (C) 2006-2009 DeSmuME team

    This file is part of DeSmuME

    DeSmuME is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    DeSmuME is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DeSmuME; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef _AVIOUT_H_
#define _AVIOUT_H_

bool DRV_AviBegin(const char* fname);
void DRV_AviEnd();
void DRV_AviSoundUpdate(void* soundData, int soundLen);
bool AVI_IsRecording();
void DRV_AviVideoUpdate(const u16* buffer);

#endif
