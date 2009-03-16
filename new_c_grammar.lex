/*
 *Known problems with lexer:
 * pnt_op confusion
 */



/* Text to be copied into lex.yy.c
 * May not be necessary, following Harris' convention
 * TODO:  yylval stuff
 */
%{
#include "c_grammar.h"
#include <stdio.h>
#include "y.tab.h"
extern bool lexDebug;
extern std::ofstream lexDebugOut;
int lineCount = 0;
/*this increments so that we now where on the line we are*/
int currentCharDepth = 0;

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
"\n"            {if(lexDebug){lexDebugOut << "NEWLINE "<<currentCharDepth<<"-"<<lineCount<<"\n";}lineCount++;currentCharDepth = 0;}
[ \t]+ 		{currentCharDepth += yyleng;/* Do nothing for whitspace other than increment char counter */}
"auto"		{if(lexDebug){lexDebugOut << "AUTO ";}currentCharDepth += yyleng;return (AUTO);}
"break"		{if(lexDebug){lexDebugOut << "BREAK ";}currentCharDepth += yyleng;return (BREAK);}
"case"		{if(lexDebug){lexDebugOut << "CASE ";}currentCharDepth += yyleng;return (CASE);}
"char"		{if(lexDebug){lexDebugOut << "CHAR ";}currentCharDepth += yyleng;return (CHAR);}
"const"		{if(lexDebug){lexDebugOut << "CONST ";}currentCharDepth += yyleng;return (CONST);}
"continue"	{if(lexDebug){lexDebugOut << "CONTINUE ";}currentCharDepth += yyleng;return (CONTINUE);}
"default"	{if(lexDebug){lexDebugOut << "DEFAULT ";}currentCharDepth += yyleng;return (DEFAULT);}
"do"		{if(lexDebug){lexDebugOut << "DO ";}currentCharDepth += yyleng;return (DO);}
"double"	{if(lexDebug){lexDebugOut << "DOUBLE ";}currentCharDepth += yyleng;return (DOUBLE);}
"else"		{if(lexDebug){lexDebugOut << "ELSE ";}currentCharDepth += yyleng;return (ELSE);}
"enum"		{if(lexDebug){lexDebugOut << "ENUM ";}currentCharDepth += yyleng;return (ENUM);}
"extern"	{if(lexDebug){lexDebugOut << "EXTERN ";}currentCharDepth += yyleng;return (EXTERN);}
"float"		{if(lexDebug){lexDebugOut << "FLOAT ";}currentCharDepth += yyleng;return (FLOAT);}
"for"		{if(lexDebug){lexDebugOut << "FOR ";}currentCharDepth += yyleng;return (FOR);}
"goto"		{if(lexDebug){lexDebugOut << "GOTO ";}currentCharDepth += yyleng;return (GOTO);}
"if"		{if(lexDebug){lexDebugOut << "IF ";}currentCharDepth += yyleng;return (IF);}
"int"		{if(lexDebug){lexDebugOut << "INT ";}currentCharDepth += yyleng;return (INT);}
"long"		{if(lexDebug){lexDebugOut << "LONG ";}currentCharDepth += yyleng;return (LONG);}
"register"	{if(lexDebug){lexDebugOut << "REGISTER ";}currentCharDepth += yyleng;return (REGISTER);}
"return"	{if(lexDebug){lexDebugOut << "RETURN ";}currentCharDepth += yyleng;return (RETURN);}
"short"		{if(lexDebug){lexDebugOut << "SHORT ";}currentCharDepth += yyleng;return (SHORT);}
"signed"	{if(lexDebug){lexDebugOut << "SIGNED ";}currentCharDepth += yyleng;return (SIGNED);}
"sizeof"	{if(lexDebug){lexDebugOut << "SIZEOF ";}currentCharDepth += yyleng;return (SIZEOF);}
"static"	{if(lexDebug){lexDebugOut << "STATIC ";}currentCharDepth += yyleng;return (STATIC);}
"struct"	{if(lexDebug){lexDebugOut << "STRUCT ";}currentCharDepth += yyleng;return (STRUCT);}
"switch"	{if(lexDebug){lexDebugOut << "SWITCH ";}currentCharDepth += yyleng;return (SWITCH);}
"typedef"	{if(lexDebug){lexDebugOut << "TYPEDEF ";}currentCharDepth += yyleng;return (TYPEDEF);}
"union"		{if(lexDebug){lexDebugOut << "UNION ";}currentCharDepth += yyleng;return (UNION);}
"unsigned"	{if(lexDebug){lexDebugOut << "UNSIGNED ";}currentCharDepth += yyleng;return (UNSIGNED);}
"void"		{if(lexDebug){lexDebugOut << "VOID ";}currentCharDepth += yyleng;return (VOID);}
"volatile"	{if(lexDebug){lexDebugOut << "VOLATILE ";}currentCharDepth += yyleng;return (VOLATILE);}
"while"		{if(lexDebug){lexDebugOut << "WHILE ";}currentCharDepth += yyleng;return (WHILE);}


"..."		{if(lexDebug){lexDebugOut << "ELIPSIS ";}currentCharDepth += yyleng;return (ELIPSIS);}
 /* this also need to be returned as a literal for some cases
    I'm not 100% sure what a ptr_opp in this case...
  "*"		{if(lexDebug){lexDebugOut << "PTR_OP ";}currentCharDepth += yyleng;return (PTR_OP);}
 */
"++"		{if(lexDebug){lexDebugOut << "INC_OP ";}currentCharDepth += yyleng;return (INC_OP);}
"--"		{if(lexDebug){lexDebugOut << "DEC_OP ";}currentCharDepth += yyleng;return (DEC_OP);}
"<<"		{if(lexDebug){lexDebugOut << "LEFT_OP ";}currentCharDepth += yyleng;return (LEFT_OP);}
">>"		{if(lexDebug){lexDebugOut << "RIGHT_OP ";}currentCharDepth += yyleng;return (RIGHT_OP);}
"<="		{if(lexDebug){lexDebugOut << "LE_OP ";}currentCharDepth += yyleng;return (LE_OP);}
">="		{if(lexDebug){lexDebugOut << "GE_OP ";}currentCharDepth += yyleng;return (GE_OP);}
"=="		{if(lexDebug){lexDebugOut << "EQ_OP ";}currentCharDepth += yyleng;return (EQ_OP);}
"!="		{if(lexDebug){lexDebugOut << "NE_OP ";}currentCharDepth += yyleng;return (NE_OP);}
"&&"		{if(lexDebug){lexDebugOut << "AND_OP ";}currentCharDepth += yyleng;return (AND_OP);}
"||"		{if(lexDebug){lexDebugOut << "OR_OP ";}currentCharDepth += yyleng;return (OR_OP);}
"*="		{if(lexDebug){lexDebugOut << "MUL_ASSIGN ";}currentCharDepth += yyleng;return (MUL_ASSIGN);}
"/="		{if(lexDebug){lexDebugOut << "DIV_ASSIGN ";}currentCharDepth += yyleng;return (DIV_ASSIGN);}
"%="		{if(lexDebug){lexDebugOut << "MOD_ASSIGN ";}currentCharDepth += yyleng;return (MOD_ASSIGN);}
"+="		{if(lexDebug){lexDebugOut << "ADD_ASSIGN ";}currentCharDepth += yyleng;return (ADD_ASSIGN);}
"-="		{if(lexDebug){lexDebugOut << "SUB_ASSIGN ";}currentCharDepth += yyleng;return (SUB_ASSIGN);}
"<<="		{if(lexDebug){lexDebugOut << "LEFT_ASSIGN ";}currentCharDepth += yyleng;return (LEFT_ASSIGN);}
">>="		{if(lexDebug){lexDebugOut << "RIGHT_ASSIGN ";}currentCharDepth += yyleng;return (RIGHT_ASSIGN);}
"&="		{if(lexDebug){lexDebugOut << "AND_ASSIGN ";}currentCharDepth += yyleng;return (AND_ASSIGN);}
"^="		{if(lexDebug){lexDebugOut << "XOR_ASSIGN ";}currentCharDepth += yyleng;return (XOR_ASSIGN);}
"|="		{if(lexDebug){lexDebugOut << "OR_ASSIGN ";}currentCharDepth += yyleng;return (OR_ASSIGN);}


 /* Single character tokens 
    let's add tokens for these later on
 also, I don't understand all the 'count()'s so
 I'm removing them...*/

";"		{if(lexDebug){lexDebugOut << "';' ";}currentCharDepth += yyleng;return (';'); }
"{"		{if(lexDebug){lexDebugOut << "'{' ";}currentCharDepth += yyleng;return ('{'); }
"}"		{if(lexDebug){lexDebugOut << "'}' ";}currentCharDepth += yyleng;return ('}'); }
","		{if(lexDebug){lexDebugOut << "',' ";}currentCharDepth += yyleng;return (','); }
":"		{if(lexDebug){lexDebugOut << "':' ";}currentCharDepth += yyleng;return (':'); }
"="		{if(lexDebug){lexDebugOut << "'=' ";}currentCharDepth += yyleng;return ('='); }
"("		{if(lexDebug){lexDebugOut << "'(' ";}currentCharDepth += yyleng;return ('('); }
")"		{if(lexDebug){lexDebugOut << ") ";}currentCharDepth += yyleng;return (')'); }
"["		{if(lexDebug){lexDebugOut << "'[' ";}currentCharDepth += yyleng;return ('['); }
"]"		{if(lexDebug){lexDebugOut << "']' ";}currentCharDepth += yyleng;return (']'); }
"."		{if(lexDebug){lexDebugOut << "'.' ";}currentCharDepth += yyleng;return ('.'); }
"&"		{if(lexDebug){lexDebugOut << "'&' ";}currentCharDepth += yyleng;return ('&'); }
"!"		{if(lexDebug){lexDebugOut << "'!' ";}currentCharDepth += yyleng;return ('!'); }
"~"		{if(lexDebug){lexDebugOut << "'~' ";}currentCharDepth += yyleng;return ('~'); }
"-"		{if(lexDebug){lexDebugOut << "'-' ";}currentCharDepth += yyleng;return ('-'); }
"+"		{if(lexDebug){lexDebugOut << "'+' ";}currentCharDepth += yyleng;return ('+'); }
"*"		{if(lexDebug){lexDebugOut << "'*' ";}currentCharDepth += yyleng;return ('*'); }
"/"		{if(lexDebug){lexDebugOut << "'/' ";}currentCharDepth += yyleng;return ('/'); }
"%"		{if(lexDebug){lexDebugOut << "'%' ";}currentCharDepth += yyleng;return ('%'); }
"<"		{if(lexDebug){lexDebugOut << "'<' ";}currentCharDepth += yyleng;return ('<'); }
">"		{if(lexDebug){lexDebugOut << "'>' ";}currentCharDepth += yyleng;return ('>'); }
"^"		{if(lexDebug){lexDebugOut << "'^' ";}currentCharDepth += yyleng;return ('^'); }
"|"		{if(lexDebug){lexDebugOut << "'|' ";}currentCharDepth += yyleng;return ('|'); }
"?"		{if(lexDebug){lexDebugOut << "'?' ";}currentCharDepth += yyleng;return ('?'); }

 /*place stuff for floats etc*/


{float_const}    {if(lexDebug){lexDebugOut << "FLOATING_CONSTANT ";}currentCharDepth += yyleng;return (FLOATING_CONSTANT); } 
{integer}        {if(lexDebug){lexDebugOut << "INTEGER_CONSTANT ";}currentCharDepth += yyleng;return (INTEGER_CONSTANT); }
{character}      {if(lexDebug){lexDebugOut << "CHARACTER_CONSTANT ";}currentCharDepth += yyleng;return (CHARACTER_CONSTANT); }
{string}         {if(lexDebug){lexDebugOut << "STRING_LITERAL ";}currentCharDepth += yyleng;return (STRING_LITERAL); }


{id}            {if(lexDebug){lexDebugOut << "IDENTIFIER ";}currentCharDepth += yyleng;return (IDENTIFIER); }
 /*All else would be an error-note error token not working*/
.		{}

 /*I have no idea if this works*/


%%
