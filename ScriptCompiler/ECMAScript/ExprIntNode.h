#pragma once
#include "exprnode.h"
#include "Expr.h"
#include <iostream>

using namespace std;

class CExprIntNode :
	public CExprNode
{
	//friend wostream& operator<<(wostream&, CExprIntNode&);
	friend class CExpr;
public:
	CExprIntNode(int);
	virtual ~CExprIntNode(void);
protected:
	CExprIntNode(void);
	void print(wostream&);
private:
	int val;
};

