#include "ECMAScript.h"
#include "Expr.h"

using namespace www_yesdata_net;


void ParseSourse(const wchar_t* pSourse)
{
	wstring sourse(pSourse);
	CFourOperations fo(sourse);
	fo.Invok();
}

MyClass* CreateMyClass()
{
	return new MyClass();
}


MyClass::MyClass():default_str("default string.")
{}

MyClass::~MyClass()
{}

bool MyClass::Print(string str)
{
	if (str == "")
	{
		if(default_str == "")
		{
			cout<<"WARNING!NO STRING SOURSE TO BE PRINTED OUT!"<<endl;
		}
		else
		{
			cout<<default_str<<endl;
		}
	}
	else
	{
		cout<<str<<endl;
	}

	return true;
}