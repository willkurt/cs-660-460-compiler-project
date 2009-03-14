
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
 letter?\"(\\.|[^\\"])*\	{if(lexDebug){lexDebugOut << "STRING
_LITERAL ";}return (STRING_LITERAL); }
 */


 /*Token definitions and related actions
 Defined in the order given in the c_grammar.y file
 Questionable definitions marked with ? */
%%
"\n"            {if(lexDebug){lexDebugOut << "NEWLINE\n ";}}
ws 		{/* Do nothing for whitespace */}
"auto"		{if(lexDebug){lexDebugOut << "AUTO ";}return (AUTO);}
"break"		{if(lexDebug){lexDebugOut << "BREAK ";}return (BREAK);}
"case"		{if(lexDebug){lexDebugOut << "CASE ";}return (CASE);}
"char"		{if(lexDebug){lexDebugOut << "CHAR ";}return (CHAR);}
"const"		{if(lexDebug){lexDebugOut << "CONST ";}return (CONST);}
"continue"	{if(lexDebug){lexDebugOut << "CONTINUE ";}return (CONTINUE);}
"default"	{if(lexDebug){lexDebugOut << "DEFAULT ";}return (DEFAULT);}
"do"		{if(lexDebug){lexDebugOut << "DO ";}return (DO);}
"double"	{if(lexDebug){lexDebugOut << "DOUBLE ";}return (DOUBLE);}
"else"		{if(lexDebug){lexDebugOut << "ELSE ";}return (ELSE);}
"enum"		{if(lexDebug){lexDebugOut << "ENUM ";}return (ENUM);}
"extern"	{if(lexDebug){lexDebugOut << "EXTERN ";}return (EXTERN);}
"float"		{if(lexDebug){lexDebugOut << "FLOAT ";}return (FLOAT);}
"for"		{if(lexDebug){lexDebugOut << "FOR ";}return (FOR);}
"goto"		{if(lexDebug){lexDebugOut << "GOTO ";}return (GOTO);}
"if"		{if(lexDebug){lexDebugOut << "IF ";}return (IF);}
"int"		{if(lexDebug){lexDebugOut << "INT ";}return (INT);}
"long"		{if(lexDebug){lexDebugOut << "LONG ";}return (LONG);}
"register"	{if(lexDebug){lexDebugOut << "REGISTER ";}return (REGISTER);}
"return"	{if(lexDebug){lexDebugOut << "RETURN ";}return (RETURN);}
"short"		{if(lexDebug){lexDebugOut << "SHORT ";}return (SHORT);}
"signed"	{if(lexDebug){lexDebugOut << "SIGNED ";}return (SIGNED);}
"sizeof"	{if(lexDebug){lexDebugOut << "SIZEOF ";}return (SIZEOF);}
"static"	{if(lexDebug){lexDebugOut << "STATIC ";}return (STATIC);}
"struct"	{if(lexDebug){lexDebugOut << "STRUCT ";}return (STRUCT);}
"switch"	{if(lexDebug){lexDebugOut << "SWITCH ";}return (SWITCH);}
"typedef"	{if(lexDebug){lexDebugOut << "TYPEDEF ";}return (TYPEDEF);}
"union"		{if(lexDebug){lexDebugOut << "UNION ";}return (UNION);}
"unsigned"	{if(lexDebug){lexDebugOut << "UNSIGNED ";}return (UNSIGNED);}
"void"		{if(lexDebug){lexDebugOut << "VOID ";}return (VOID);}
"volatile"	{if(lexDebug){lexDebugOut << "VOLATILE ";}return (VOLATILE);}
"while"		{if(lexDebug){lexDebugOut << "WHILE ";}return (WHILE);}

 /*place stuff for floats etc*/
float_const     {if(lexDebug){lexDebugOut << "FLOATING_CONSTANT ";}return (FLOATING_CONSTANT); }
integer_const   {if(lexDebug){lexDebugOut << "INTEGER_CONSTANT ";}return (INTEGER_CONSTANT); }
char_const      {if(lexDebug){lexDebugOut << "CHARACTER_CONSTANT ";}return (CHARACTER_CONSTANT); }
string_lit      {if(lexDebug){lexDebugOut << "STRING_LITERAL ";}return (STRING_LITERAL); }

"..."		{if(lexDebug){lexDebugOut << "ELIPSIS ";}return (ELIPSIS);}
"*"		{if(lexDebug){lexDebugOut << "PTR_OP ";}return (PTR_OP);}
"++"		{if(lexDebug){lexDebugOut << "INC_OP ";}return (INC_OP);}
"--"		{if(lexDebug){lexDebugOut << "DEC_OP ";}return (DEC_OP);}
"<<"		{if(lexDebug){lexDebugOut << "LEFT_OP ";}return (LEFT_OP);}
">>"		{if(lexDebug){lexDebugOut << "RIGHT_OP ";}return (RIGHT_OP);}
"<="		{if(lexDebug){lexDebugOut << "LE_OP ";}return (LE_OP);}
">="		{if(lexDebug){lexDebugOut << "GE_OP ";}return (GE_OP);}
"=="		{if(lexDebug){lexDebugOut << "EQ_OP ";}return (EQ_OP);}
"!="		{if(lexDebug){lexDebugOut << "NE_OP ";}return (NE_OP);}
"&&"		{if(lexDebug){lexDebugOut << "AND_OP ";}return (AND_OP);}
"||"		{if(lexDebug){lexDebugOut << "OR_OP ";}return (OR_OP);}
"*="		{if(lexDebug){lexDebugOut << "MUL_ASSIGN ";}return (MUL_ASSIGN);}
"/="		{if(lexDebug){lexDebugOut << "DIV_ASSIGN ";}return (DIV_ASSIGN);}
"%="		{if(lexDebug){lexDebugOut << "MOD_ASSIGN ";}return (MOD_ASSIGN);}
"+="		{if(lexDebug){lexDebugOut << "ADD_ASSIGN ";}return (ADD_ASSIGN);}
"-="		{if(lexDebug){lexDebugOut << "SUB_ASSIGN ";}return (SUB_ASSIGN);}
"<<="		{if(lexDebug){lexDebugOut << "LEFT_ASSIGN ";}return (LEFT_ASSIGN);}
">>="		{if(lexDebug){lexDebugOut << "RIGHT_ASSIGN ";}return (RIGHT_ASSIGN);}
"&="		{if(lexDebug){lexDebugOut << "AND_ASSIGN ";}return (AND_ASSIGN);}
"^="		{if(lexDebug){lexDebugOut << "XOR_ASSIGN ";}return (XOR_ASSIGN);}
"|="		{if(lexDebug){lexDebugOut << "OR_ASSIGN ";}return (OR_ASSIGN);}


 /* Single character tokens 
    let's add tokens for these later on
 also, I don't understand all the 'count()'s so
 I'm removing them...*/

";"		{if(lexDebug){lexDebugOut << "';' ";}return (';'); }
"{"		{if(lexDebug){lexDebugOut << "'{' ";}return ('{'); }
"}"		{if(lexDebug){lexDebugOut << "'}' ";}return ('}'); }
","		{if(lexDebug){lexDebugOut << "',' ";}return (','); }
":"		{if(lexDebug){lexDebugOut << "':' ";}return (':'); }
"="		{if(lexDebug){lexDebugOut << "'=' ";}return ('='); }
"("		{if(lexDebug){lexDebugOut << "'(' ";}return ('('); }
")"		{if(lexDebug){lexDebugOut << ") ";}return (')'); }
"["		{if(lexDebug){lexDebugOut << "'[' ";}return ('['); }
"]"		{if(lexDebug){lexDebugOut << "']' ";}return (']'); }
"."		{if(lexDebug){lexDebugOut << "'.' ";}return ('.'); }
"&"		{if(lexDebug){lexDebugOut << "'&' ";}return ('&'); }
"!"		{if(lexDebug){lexDebugOut << "'!' ";}return ('!'); }
"~"		{if(lexDebug){lexDebugOut << "'~' ";}return ('~'); }
"-"		{if(lexDebug){lexDebugOut << "'-' ";}return ('-'); }
"+"		{if(lexDebug){lexDebugOut << "'+' ";}return ('+'); }
 /* for reasons unknown right now, single quotes work, not double quotes */
'*'		{if(lexDebug){lexDebugOut << "'*' ";}return ('*'); }
"/"		{if(lexDebug){lexDebugOut << "'/' ";}return ('/'); }
"%"		{if(lexDebug){lexDebugOut << "'%' ";}return ('%'); }
"<"		{if(lexDebug){lexDebugOut << "'<' ";}return ('<'); }
">"		{if(lexDebug){lexDebugOut << "'>' ";}return ('>'); }
"^"		{if(lexDebug){lexDebugOut << "'^' ";}return ('^'); }
"|"		{if(lexDebug){lexDebugOut << "'|' ";}return ('|'); }
"?"		{if(lexDebug){lexDebugOut << "'?' ";}return ('?'); }

{id}            {if(lexDebug){lexDebugOut << "IDENTIFIER ";}return (IDENTIFIER); }
 /*All else would be an error-note error token not working*/
.		{}

 /*I have no idea if this works*/


%%
