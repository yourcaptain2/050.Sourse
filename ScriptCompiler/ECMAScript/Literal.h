#pragma once
#include "exprnode.h"
//template <class T>
class CLiteral :
	public CExprNode
{
public:
	CLiteral(void);
	virtual  ~CLiteral(void);
};

