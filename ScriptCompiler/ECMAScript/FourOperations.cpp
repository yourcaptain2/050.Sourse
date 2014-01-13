#include "FourOperations.h"

//
CFourOperations::CFourOperations():o(cout),sourse("")
{
}

CFourOperations::CFourOperations(string s):o(cout),sourse(s)
{}

CFourOperations::CFourOperations(ostream& output, string s):o(output),sourse(s)
{}

void CFourOperations::SetSourse(string sourse_code)
{
	sourse = sourse_code;
}

void CFourOperations::Invok()
{

}

void CFourOperations::parseSourse()
{
	if (sourse == "")
	{
		return;
	}
}