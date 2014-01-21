#pragma once
#include <string>
#include <iostream>
#include "exprnode.h"
#include "Expr.h"

using namespace std;

class CExprBinaryNode :
	public CExprNode
{
	//friend wostream& operator<<(wostream&, CExprBinaryNode&);
	friend class CExpr;
public:
	//CExprBinaryNode(int v1, wstring o, int v2);
	CExprBinaryNode(const CExpr& v1, const wstring o, const CExpr& v2);
	virtual ~CExprBinaryNode(void);
protected:
	CExprBinaryNode(void);
protected:
	virtual void print(wostream&);
private:
	wstring op;
	CExpr node1;
	CExpr node2;
};

