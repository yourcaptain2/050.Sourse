#pragma once
#include <string>

using namespace std;

enum SYMBOL_TYPE
{
	 NAME =1
	,OPERATOR
	,PROCEDURE
	,VALUE
} enum_symbol_type;

class SymbolTable
{
public:
	SymbolTable(void);
	~SymbolTable(void);

public:
	void perform();

private:
	/*wstring name;
	bool keyword;
	SYMBOL_TYPE type;
	SymbolTable& item;*/

};

