#pragma once
#include <iostream>
#include <ostream>
#include <string>

using namespace std;
class CFourOperations
{
public:
	CFourOperations();
	//Init the code sourse
	CFourOperations(string);
	//Init the output stream and the code sourse
	CFourOperations(ostream&, string);
	//Invoke the code sourse and then print the result
	void Invok();
public:
	void SetSourse(string);

private:
	void parseSourse();

private:
	ostream o;
	string sourse;
}