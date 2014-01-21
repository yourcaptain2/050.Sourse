#pragma once
#include <iostream>
#include "Expr.h"

using namespace std;

class CExprNode
{
	//friend wostream& operator<<(wostream&, CExprNode&);
	friend class CExpr;
public:
	CExprNode(int v);
	virtual ~CExprNode(void);
protected:
	CExprNode(void);
protected:
	virtual void print(wostream&) = 0;

};

