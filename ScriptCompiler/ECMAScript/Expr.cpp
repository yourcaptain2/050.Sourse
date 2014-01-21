#include "Expr.h"
#include "ExprIntNode.h"
#include "ExprUnaryNode.h"
#include "ExprBinaryNode.h"
#include "ExprNode.h"


CExpr::CExpr(void)
{
}

CExpr::CExpr(int v)
{
	node = new CExprIntNode(v);
}

//delegate of CExprUnuayNode
//CExpr::CExpr(const wstring o, const int v)
//{
//	node = new CExprUnaryNode(o, v);
//}

CExpr::CExpr(const wstring o, const CExpr& v)
{
	node = new CExprUnaryNode(o, v);
}

//CExpr::CExpr(const int v1, const wstring o,const int v2)
//{
//	node = new CExprBinaryNode( v1, o, v2);
//}

CExpr::CExpr(const CExpr& v1, const wstring o, const CExpr& v2)
{
	node = new CExprBinaryNode(v1, o, v2);
}

CExpr& CExpr::operator= (const CExpr& exp)
{
	if(this->node != exp.node)
	{
		this->node = exp.node;
	}
	return *this;
}

CExpr::CExpr(const CExpr& exp)
{
	*this = exp;
}

CExpr::~CExpr(void)
{
	if (node != 0)
	{
		delete node;
	}
}

void CExpr::print(wostream& o)
{
	node->print(o);
}

wostream& operator<<(wostream& o, CExpr& e)
{
	o<<e.node;
	return o;
}