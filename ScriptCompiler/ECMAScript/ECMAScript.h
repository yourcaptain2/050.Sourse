#pragma once

#include <string>
#include "FourOperations.h"

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )
#define CMethod extern "C"

CMethod DllExport void ParseSourse(const wchar_t* pSourse);