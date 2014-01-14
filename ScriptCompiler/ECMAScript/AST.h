#pragma once
#include <string>

using namespace std;
class AST
{
public:
	AST(void);
	AST(wstring&);
	~AST(void);
public:
	void GenerateAST();

private:
	wstring sourse;
};

