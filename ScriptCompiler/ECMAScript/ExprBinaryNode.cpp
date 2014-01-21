#include "ExprBinaryNode.h"


CExprBinaryNode::CExprBinaryNode(void)
{
}

//CExprBinaryNode::CExprBinaryNode(int v1, wstring o, int v2):op(o),val1(v1),val2(v2)
//{}

CExprBinaryNode::CExprBinaryNode(const CExpr& v1, const wstring o, const CExpr& v2)
	:op(o),node1(v1),node2(v2)
{
}


CExprBinaryNode::~CExprBinaryNode(void)
{
}

// print evalled result
void CExprBinaryNode::print(wostream& o)
{
	o<< L"(" << node1 << op << node2 << L")";
}

//wostream& operator<<(wostream& o, CExprBinaryNode& node)
//{
//	node.print(o);
//	return o;
//}