#include "ExprUnaryNode.h"

CExprUnaryNode::CExprUnaryNode(void):op(L""),node(0)
{
}

// unary for int type
//CExprUnaryNode::CExprUnaryNode(wstring o, int v):op(o),val(v)
//{
//}

CExprUnaryNode::CExprUnaryNode(const wstring o, const CExpr& v):op(o),node(v)
{
}


CExprUnaryNode::~CExprUnaryNode(void)
{
}


// print evalled result
void CExprUnaryNode::print(wostream& o)
{
	o<<op<<node;
}

//wostream& operator<<(wostream& o, CExprUnaryNode& node)
//{
//	node.print(o);
//	return o;
//}