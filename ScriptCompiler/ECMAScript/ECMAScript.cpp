#include "ECMAScript.h"

void ParseSourse(const wchar_t* pSourse)
{
	wstring sourse(pSourse);
	CFourOperations fo(sourse);
	fo.Invok();
}