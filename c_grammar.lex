
/* Text to be copied into lex.yy.c
 * May not be necessary, following Harris' convention
 */
%{
#include <iostream>
#include "y.tab.c"
%}

/* Definitions to save a little time */

delim	{ \t\n}
ws	{delim}+
letter	[A-Za-z]
digit	[0-9]
id	{letter}({letter}|{digit})* 
		/*need to handle special chars*/
		/* this was here- typedef_name  not sure what to do with it*/	
number	{digit}+
	       /*also need to handle floats*/



 /*Token definitions and related actions
 Defined in the order given in the c_grammar.y file
 Questionable definitions marked with ? */
%%
ws 		{/* Do nothing for whitespace */}
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
"int"		{return (INT;}
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

{digit}*"."{digit}+	{return (FLOATING_CONSTANT);}
{digit}+"."{digit}*	{return (FLOATING_CONSTANT);}
{digit}*	{return (INTEGER_CONSTANT);}
 /* %token  FLOATING_CONSTANT CHARACTER_CONSTANT ENUMERATION_CONSTANT */



 /*Hmm...
 letter?\"(\\.|[^\\"])*\	{return(STRING_LITERAL); }
 */


"..."		{return (ELIPSIS);}
"*"		{return (PTR_OP);}
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
    let's add tokens for these later on*/

";"		{ count(); return(';'); }
"{"		{ count(); return('{'); }
"}"		{ count(); return('}'); }
","		{ count(); return(','); }
":"		{ count(); return(':'); }
"="		{ count(); return('='); }
"("		{ count(); return('('); }
")"		{ count(); return(')'); }
"["		{ count(); return('['); }
"]"		{ count(); return(']'); }
"."		{ count(); return('.'); }
"&"		{ count(); return('&'); }
"!"		{ count(); return('!'); }
"~"		{ count(); return('~'); }
"-"		{ count(); return('-'); }
"+"		{ count(); return('+'); }
 /* for reasons unknown right now, single quotes work, not double quotes */
'*'		{ count(); return('*'); }
"/"		{ count(); return('/'); }
"%"		{ count(); return('%'); }
"<"		{ count(); return('<'); }
">"		{ count(); return('>'); }
"^"		{ count(); return('^'); }
"|"		{ count(); return('|'); }
"?"		{ count(); return('?'); }
{id}            { return (IDENTIFIER); }
 /*All else would be an error*/
.		{return (ERROR);}

 /*I have no idea if this works*/
 /*
"typedef"{ws}{letter}+	{return (TYPEDEF_NAME);}
 */

%%
