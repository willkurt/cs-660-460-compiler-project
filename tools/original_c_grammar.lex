/*
 *Known problems with lexer:
 * pointer declarations not working (int* x)
 * FLOAT of the literals are working
 */



/* Text to be copied into lex.yy.c
 * May not be necessary, following Harris' convention
 * TODO:  enum_consts'?, make sure string_lits and char_consts
 * can contain \n
 */
%{
#include "c_grammar.h"
#include <stdio.h>
#include "y.tab.h"
extern bool lexDebug;
extern std::ofstream lexDebugOut;
int lineCount = 0;
/*this increments so that we now where on the line we are*/
int currentCharDept = 0;

%}


/* Definitions to save a little time */


ws	[\t]+
letter	[A-Za-z]
digit	[0-9]
id	{letter}({letter}|{digit}|'_')* 	
integer	[+-]?{digit}+
float_const [+-]?{digit}+"."{digit}+("e"[+-]?{digit}+)?
character   \'.\'
string   \".*\" 

	      
 /* %token  ENUMERATION_CONSTANT */


 /*Token definitions and related actions
 Defined in the order given in the c_grammar.y file
 Questionable definitions marked with ? */
%%
"\n"            {lineCount++;}
[ \t]+ 		{/* Do nothing for whitespace */}
"auto"		{return (AUTO);}
"break"		{return (BREAK);}
"case"		{return (CASE);}
"char"		{return (CHAR);}
"const"		{return (CONST);}
"continue"	{return (CONTINUE);}
"default"	{return (DEFAULT);}
"do"		{return (DO);}
"double"	{return (DOUBLE);}
"else"		{return (ELSE);}
"enum"		{return (ENUM);}
"extern"	{return (EXTERN);}
"float"		{return (FLOAT);}
"for"		{return (FOR);}
"goto"		{return (GOTO);}
"if"		{return (IF);}
"int"		{return (INT);}
"long"		{return (LONG);}
"register"	{return (REGISTER);}
"return"	{return (RETURN);}
"short"		{return (SHORT);}
"signed"	{return (SIGNED);}
"sizeof"	{return (SIZEOF);}
"static"	{return (STATIC);}
"struct"	{return (STRUCT);}
"switch"	{return (SWITCH);}
"typedef"	{return (TYPEDEF);}
"union"		{return (UNION);}
"unsigned"	{return (UNSIGNED);}
"void"		{return (VOID);}
"volatile"	{return (VOLATILE);}
"while"		{return (WHILE);}


"..."		{return (ELIPSIS);}
 /* this also need to be returned as a literal for some cases
    I'm not 100% sure what a ptr_opp in this case...
  "*"		{return (PTR_OP);}
 */
"++"		{return (INC_OP);}
"--"		{return (DEC_OP);}
"<<"		{return (LEFT_OP);}
">>"		{return (RIGHT_OP);}
"<="		{return (LE_OP);}
">="		{return (GE_OP);}
"=="		{return (EQ_OP);}
"!="		{return (NE_OP);}
"&&"		{return (AND_OP);}
"||"		{return (OR_OP);}
"*="		{return (MUL_ASSIGN);}
"/="		{return (DIV_ASSIGN);}
"%="		{return (MOD_ASSIGN);}
"+="		{return (ADD_ASSIGN);}
"-="		{return (SUB_ASSIGN);}
"<<="		{return (LEFT_ASSIGN);}
">>="		{return (RIGHT_ASSIGN);}
"&="		{return (AND_ASSIGN);}
"^="		{return (XOR_ASSIGN);}
"|="		{return (OR_ASSIGN);}


 /* Single character tokens 
    let's add tokens for these later on
 also, I don't understand all the 'count()'s so
 I'm removing them...*/

";"		{return (';'); }
"{"		{return ('{'); }
"}"		{return ('}'); }
","		{return (','); }
":"		{return (':'); }
"="		{return ('='); }
"("		{return ('('); }
")"		{return (')'); }
"["		{return ('['); }
"]"		{return (']'); }
"."		{return ('.'); }
"&"		{return ('&'); }
"!"		{return ('!'); }
"~"		{return ('~'); }
"-"		{return ('-'); }
"+"		{return ('+'); }
"*"		{return ('*'); }
"/"		{return ('/'); }
"%"		{return ('%'); }
"<"		{return ('<'); }
">"		{return ('>'); }
"^"		{return ('^'); }
"|"		{return ('|'); }
"?"		{return ('?'); }

 /*place stuff for floats etc*/


{float_const}    {return (FLOATING_CONSTANT); } 
{integer}        {return (INTEGER_CONSTANT); }
{character}      {return (CHARACTER_CONSTANT); }
{string}         {return (STRING_LITERAL); }


{id}            {return (IDENTIFIER); }
 /*All else would be an error-note error token not working*/
.		{}

 /*I have no idea if this works*/


%%
