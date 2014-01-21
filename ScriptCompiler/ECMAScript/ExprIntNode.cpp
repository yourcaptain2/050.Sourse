#include "ExprIntNode.h"


CExprIntNode::CExprIntNode(void)
{
}

CExprIntNode::CExprIntNode(int v):val(v)
{
}


CExprIntNode::~CExprIntNode(void)
{
}

void CExprIntNode::print(wostream& o)
{
	o<<val;
}

//wostream& operator<<(wostream& o, CExprIntNode& node)
//{
//	o<<node;
//	return o;
//}