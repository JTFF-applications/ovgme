/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/
 */

#ifndef GME_H_INCLUDED
#define GME_H_INCLUDED

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <process.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <tchar.h>
#include <vector>

#include <winsock2.h>
#include <ws2tcpip.h>

#include <commctrl.h>
#include <htmlhelp.h>
#include <inttypes.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <stdint.h>
#include <windows.h>

/*
   Mini lib for Zip implementation, found here:
	 https://code.google.com/archive/p/miniz/
 */
#include "miniz.h"

/*
  xxHash - Extremely Fast Hash algorithm:
    https://github.com/Cyan4973/xxHash
*/
#include "xxhash.h"

using ubyte = unsigned char;

#include "../resource.h"

#define GPL_HEADER L"\
This program is free software: you canredistribute it and/or modify \
it under the terms of the GNU General Public License as published \
by the Free Software Foundation, either version 3 of the License, or \
(at your option) any later version.\
\n\nThis program is distributed in the hope that it will be useful, \
but WITHOUT ANY WARRANTY; without even the implied warranty of \
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  \
See the GNU General Public License for more details.\
\n\nYou should have received a copy of the GNU General Public License \
along with this program. If not, see http://www.gnu.org/licenses/"

// global defines
#define GME_APP_NAME      L"OvGME Afterburner"
#define GME_APP_MAJOR     1
#define GME_APP_MINOR     7
#define GME_APP_REVIS     8
#define GME_APP_DATE      L"September 2022"

/* handle for folder changes tracking */
extern HANDLE g_hChange;

/* global handles to GUI elements */
extern HINSTANCE g_hInst;
extern HICON g_hicnMain;
extern HWND g_hwndMain;
extern HMENU g_hmnuMain;
extern HMENU g_hmnuSubProf;
extern HWND g_hwndAddGame;
extern HWND g_hwndEdiGame;
extern HWND g_hwndNewAMod;
extern HWND g_hwndSnapNew;
extern HWND g_hwndSnapCmp;
extern HWND g_hwndUninst;
extern HWND g_hwndRepUpd;
extern HWND g_hwndRepXml;
extern HWND g_hwndRepXts;
extern HWND g_hwndRepConf;
extern HWND g_hwndProfNew;
extern HWND g_hwndProfDel;
extern HWND g_hwndDebug;

auto GME_GetVersionString() -> wchar_t*;

#endif // GME_H_INCLUDED
