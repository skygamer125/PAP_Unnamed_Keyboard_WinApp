// header.h : include file for standard system include files,
// or project specific include files
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <shellapi.h>
#include <iostream>
#include <sstream>
#include <strsafe.h>
#include <commctrl.h>
#include <objidl.h>
#include <gdiplus.h>
#include <bluetoothapis.h>
#include <bthdef.h>
#include <bthsdpdef.h>
#include <ws2bth.h>
#pragma comment (lib, "Gdiplus.lib")
using namespace Gdiplus;