
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
%}


/* Definitions to save a little time */

delim	{ \t\n}
ws	{delim}+
letter	[A-Za-z]
digit	[0-9]
id	{letter}({letter}|{digit}|'_')* 
		/* this was here- typedef_name  not sure what to do with it*/	
integer_const	(+|-)?{digit}+
float_const     (+|-)?{digit)+'.'{digit}+('e'(+|-){digit}+)?  
     
  /* this doesn't include newlines need to fix*/
char_const   \'.\'
string_lit   \".*\"

	      
 /* %token  ENUMERATION_CONSTANT */



 /*Hmm...
 letter?\"(\\.|[^\\"])*\	{return(STRING_LITERAL); }
 */


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
"int"		{
  if(lexDebug)
    {printf("hello will!");}
 return (INT);}
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

 /*place stuff for floats etc*/
float_const     {return (FLOATING_CONSTANT); }
integer_const   {return (INTEGER_CONSTANT); }
char_const      {return (CHARACTER_CONSTANT); }
string_lit      {return (STRING_LITERAL); }

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
    let's add tokens for these later on
 also, I don't understand all the 'count()'s so
 I'm removing them...*/

";"		{ return(';'); }
"{"		{ return('{'); }
"}"		{ return('}'); }
","		{ return(','); }
":"		{ return(':'); }
"="		{ return('='); }
"("		{ return('('); }
")"		{ return(')'); }
"["		{ return('['); }
"]"		{ return(']'); }
"."		{ return('.'); }
"&"		{ return('&'); }
"!"		{ return('!'); }
"~"		{ return('~'); }
"-"		{ return('-'); }
"+"		{ return('+'); }
 /* for reasons unknown right now, single quotes work, not double quotes */
'*'		{ return('*'); }
"/"		{ return('/'); }
"%"		{ return('%'); }
"<"		{ return('<'); }
">"		{ return('>'); }
"^"		{ return('^'); }
"|"		{ return('|'); }
"?"		{ return('?'); }

{id}            { return (IDENTIFIER); }
 /*All else would be an error-note error token not working*/
.		{}

 /*I have no idea if this works*/
 /*
"typedef"{ws}{letter}+	{return (TYPEDEF_NAME);}
 */

%%
