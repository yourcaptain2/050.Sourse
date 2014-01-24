#pragma once

#include <string>
#include "FourOperations.h"

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )
#define CMethod extern "C"

CMethod DllExport  void ParseSourse(const wchar_t* pSourse);

extern "C"
{
	class __declspec( dllexport )  MyClass
	{
		public:
			MyClass();
			virtual ~MyClass();
			virtual bool Print(string);
		private:
			string default_str;
	};
}

CMethod DllExport  MyClass* CreateMyClass();