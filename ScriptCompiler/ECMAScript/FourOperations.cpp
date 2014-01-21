#include "FourOperations.h"
#include "AST.h"
#include "KeyWord.h"
#include "Expr.h"

//
CFourOperations::CFourOperations():o(cout),sourse(wstring())
{}

CFourOperations::CFourOperations(wstring s):o(cout),sourse(s)
{}

CFourOperations::CFourOperations(ostream& output, wstring s):o(output),sourse(s)
{}

void CFourOperations::SetSourse(wstring sourse_code)
{
	sourse = sourse_code;
}

//Perform the operations generated by AST
void CFourOperations::Invok()
{
	try
	{
		if (sourse.length() == 0)
		{
			o<<"Give me your sourse code please."<<endl;
			return;
		}

		parseSourse();
		o<<"Invok finished."<<endl;

		//perform a expression 
		wcout<<CExpr(CExpr(10, L"+", 5), L"*", CExpr(L"-", 2))<<endl;;

	}
	catch(exception* e)
	{
		o<<"Some error occurred."<<endl;
	}
}

//Make AST
void CFourOperations::parseSourse()
{
	if (sourse.length() == 0)
	{
		throw new exception("Error.Sourse code is required.");
	}

	//wcout<<L"Start to parse :"<<sourse<<endl;

	wstring::iterator it_begin = sourse.begin();
	wstring lexeme;
	CKeyWords keyword;
	while (it_begin != sourse.end())
	{
		wchar_t c = *it_begin;		
		
		if(c==L' ' || c==L'\t')// get a blank
		{
			if(lexeme.length() > 0)
			{
				//make a normal lexeme token-attribute, then continue the loop
				//todo
				lexeme_token_attribute.push_back(lexeme);
				lexeme.clear();
			}
			else
			{
				//ignore this charactor
			}
		}
		else// not blank
		{
			//single charactor is a key word
			wstring single_op;
			single_op.push_back(c);
			if(keyword.VerifyKeyWord(single_op))
			{
				//
				if(lexeme.length()>0)
				{
					lexeme_token_attribute.push_back(lexeme);
					lexeme.clear();
				}

				lexeme.push_back(c);
				lexeme_token_attribute.push_back(lexeme);
				lexeme.clear();
			}
			else
			{
				lexeme.push_back(c);
			
				if(keyword.VerifyKeyWord(lexeme))// find a keyword
				{
					//make a normal lexeme token-attribute, then continue the loop
					//todo
					lexeme_token_attribute.push_back(lexeme);
					lexeme.clear();
				}
			}
		}
	
		it_begin++;
	}
	if(lexeme.length()>0)
	{
		lexeme_token_attribute.push_back(lexeme);
		lexeme.clear();
	}

	//debug
	for(list<wstring>::iterator it=lexeme_token_attribute.begin();it!=lexeme_token_attribute.end();it++)
	{
		wcout<<(*it)<<L" ";
	}
	o<<endl;

	AST ast(sourse);
	
}