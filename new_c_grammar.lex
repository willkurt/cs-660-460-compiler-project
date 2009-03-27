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
#include <errno.h>

extern int errno;

extern bool declMode;
extern SymbolTable st;
extern bool lexDebug;
extern bool parseDebug;
extern std::ofstream lexDebugOut;
extern std::ofstream parseDebugOut;
int lineCount = 0;
/*this increments so that we now where on the line we are*/
int currentCharDepth = 0;

char** yytext2;

extern bool undeclVar;
extern bool redeclVar;

extern int prevFlag;

extern bool shortFlag;
extern bool uShortFlag;
extern bool intFlag;
extern bool uIntFlag;
extern bool longFlag;
extern bool uLongFlag;
extern bool lLongFlag;
extern bool uLLongFlag;
extern bool floatFlag;
extern bool doubleFlag;
extern bool lDoubleFlag;

%}




/* Definitions to save a little time */


ws		[\t]+
digit	[0-9]	
integer	{digit}+
letter	[A-Za-z]
hex		[A-Fa-f0-9]
id		("_"|{letter})({letter}|{digit}|"_")* 
float_const {digit}+"."{digit}+("e"[+-]?{digit}+)?
character   \'.\'
string   \".*\"
ccomment "/*"(.|"\n")"*/"
cppcomment "//".*"\n"
	      
 /* %token  ENUMERATION_CONSTANT */


 /*Token definitions and related actions
 Defined in the order given in the c_grammar.y file
 Questionable definitions marked with ? */

%%
{ccomment}    {}
{cppcomment}  {lineCount++;currentCharDepth = 0;}
"!!S"         {st.outputToFile();}
"\n"            {if(lexDebug)
			{
			  lexDebugOut << "NEWLINE "<<currentCharDepth<<"-"<<lineCount<<"\n";
			}
                  if(parseDebug){
		                   parseDebugOut<<"***end ln: "<<lineCount<<"*****\n";
		                }
                  lineCount++;currentCharDepth = 0;}
[ \t]+ 		{
currentCharDepth += yyleng;/* Do nothing for whitespace other than increment char counter */}
"auto"		{
if(lexDebug)
{lexDebugOut << "AUTO ";}
currentCharDepth += yyleng;return (AUTO);}
"break"		{
if(lexDebug)
{lexDebugOut << "BREAK ";}
currentCharDepth += yyleng;return (BREAK);}
"case"		{
if(lexDebug)
{lexDebugOut << "CASE ";}
currentCharDepth += yyleng;return (CASE);}
"char"		{
if(lexDebug)
{lexDebugOut << "CHAR ";}
currentCharDepth += yyleng;return (CHAR);}
"const"		{
if(lexDebug)
{lexDebugOut << "CONST ";}
currentCharDepth += yyleng;return (CONST);}
"continue"	{
if(lexDebug)
{lexDebugOut << "CONTINUE ";}
currentCharDepth += yyleng;return (CONTINUE);}
"default"	{
if(lexDebug)
{lexDebugOut << "DEFAULT ";}
currentCharDepth += yyleng;return (DEFAULT);}
"do"		{
if(lexDebug)
{lexDebugOut << "DO ";}
currentCharDepth += yyleng;return (DO);}
"double"	{
if(lexDebug)
{lexDebugOut << "DOUBLE ";}
currentCharDepth += yyleng;return (DOUBLE);}
"else"		{
if(lexDebug)
{lexDebugOut << "ELSE ";}
currentCharDepth += yyleng;return (ELSE);}
"enum"		{
if(lexDebug)
{lexDebugOut << "ENUM ";}
currentCharDepth += yyleng;return (ENUM);}
"extern"	{
if(lexDebug)
{lexDebugOut << "EXTERN ";}
currentCharDepth += yyleng;return (EXTERN);}
"float"		{
if(lexDebug)
{lexDebugOut << "FLOAT ";}
currentCharDepth += yyleng;return (FLOAT);}
"for"		{
if(lexDebug)
{lexDebugOut << "FOR ";}/*??*/
currentCharDepth += yyleng;return (FOR);}
"goto"		{
if(lexDebug)
{lexDebugOut << "GOTO ";}
currentCharDepth += yyleng;return (GOTO);}
"if"		{
if(lexDebug)
{lexDebugOut << "IF ";}
currentCharDepth += yyleng;return (IF);}
"int"		{
if(lexDebug)
{lexDebugOut << "INT ";}
currentCharDepth += yyleng;return (INT);}
"long"		{
if(lexDebug)
{lexDebugOut << "LONG ";}
currentCharDepth += yyleng;return (LONG);}
"register"	{
if(lexDebug)
{lexDebugOut << "REGISTER ";}
currentCharDepth += yyleng;return (REGISTER);}
"return"	{
if(lexDebug)
{lexDebugOut << "RETURN ";}
currentCharDepth += yyleng;return (RETURN);}
"short"		{
if(lexDebug)
{lexDebugOut << "SHORT ";}
currentCharDepth += yyleng;return (SHORT);}
"signed"	{
if(lexDebug)
{lexDebugOut << "SIGNED ";}
currentCharDepth += yyleng;return (SIGNED);}
"sizeof"	{
if(lexDebug)
{lexDebugOut << "SIZEOF ";}
currentCharDepth += yyleng;return (SIZEOF);}
"static"	{
if(lexDebug)
{lexDebugOut << "STATIC ";}
currentCharDepth += yyleng;return (STATIC);}
"struct"	{
if(lexDebug)
{lexDebugOut << "STRUCT ";}
currentCharDepth += yyleng;return (STRUCT);}
"switch"	{
if(lexDebug)
{lexDebugOut << "SWITCH ";}
currentCharDepth += yyleng;return (SWITCH);}
"typedef"	{
if(lexDebug)
{lexDebugOut << "TYPEDEF ";}
currentCharDepth += yyleng;return (TYPEDEF);}
"union"		{
if(lexDebug)
{lexDebugOut << "UNION ";}
currentCharDepth += yyleng;return (UNION);}
"unsigned"	{
if(lexDebug)
{lexDebugOut << "UNSIGNED ";}
currentCharDepth += yyleng;return (UNSIGNED);}
"void"		{
if(lexDebug)
{lexDebugOut << "VOID ";}
currentCharDepth += yyleng;return (VOID);}
"volatile"	{
if(lexDebug)
{lexDebugOut << "VOLATILE ";}
currentCharDepth += yyleng;return (VOLATILE);}
"while"		{
if(lexDebug)
{lexDebugOut << "WHILE ";}
currentCharDepth += yyleng;return (WHILE);}
"..."		{
if(lexDebug)
{lexDebugOut << "ELIPSIS ";}
currentCharDepth += yyleng;return (ELIPSIS);}
"->"		{if(lexDebug)/*?? What an online source said*/
{lexDebugOut << "PTR_OP ";}
currentCharDepth += yyleng;return (PTR_OP);} 
"++"		{
if(lexDebug)
{lexDebugOut << "INC_OP ";}
currentCharDepth += yyleng;return (INC_OP);}
"--"		{
if(lexDebug)
{lexDebugOut << "DEC_OP ";}
currentCharDepth += yyleng;return (DEC_OP);}
"<<"		{
if(lexDebug)
{lexDebugOut << "LEFT_OP ";}
currentCharDepth += yyleng;return (LEFT_OP);}
">>"		{
if(lexDebug)
{lexDebugOut << "RIGHT_OP ";}
currentCharDepth += yyleng;return (RIGHT_OP);}
"<="		{
if(lexDebug)
{lexDebugOut << "LE_OP ";}
currentCharDepth += yyleng;return (LE_OP);}
">="		{
if(lexDebug)
{lexDebugOut << "GE_OP ";}
currentCharDepth += yyleng;return (GE_OP);}
"=="		{
if(lexDebug)
{lexDebugOut << "EQ_OP ";}
currentCharDepth += yyleng;return (EQ_OP);}
"!="		{
if(lexDebug)
{lexDebugOut << "NE_OP ";}
currentCharDepth += yyleng;return (NE_OP);}
"&&"		{
if(lexDebug)
{lexDebugOut << "AND_OP ";}
currentCharDepth += yyleng;return (AND_OP);}
"||"		{
if(lexDebug)
{lexDebugOut << "OR_OP ";}
currentCharDepth += yyleng;return (OR_OP);}
"*="		{
if(lexDebug)
{lexDebugOut << "MUL_ASSIGN ";}
currentCharDepth += yyleng;return (MUL_ASSIGN);}
"/="		{
if(lexDebug)
{lexDebugOut << "DIV_ASSIGN ";}
currentCharDepth += yyleng;return (DIV_ASSIGN);}
"%="		{
if(lexDebug)
{lexDebugOut << "MOD_ASSIGN ";}
currentCharDepth += yyleng;return (MOD_ASSIGN);}
"+="		{
if(lexDebug)
{lexDebugOut << "ADD_ASSIGN ";}
currentCharDepth += yyleng;return (ADD_ASSIGN);}
"-="		{
if(lexDebug){lexDebugOut << "SUB_ASSIGN ";}
currentCharDepth += yyleng;return (SUB_ASSIGN);}
"<<="		{
if(lexDebug)
{lexDebugOut << "LEFT_ASSIGN ";}
currentCharDepth += yyleng;return (LEFT_ASSIGN);}
">>="		{
if(lexDebug)
{lexDebugOut << "RIGHT_ASSIGN ";}
currentCharDepth += yyleng;return (RIGHT_ASSIGN);}
"&="		{
if(lexDebug)
{lexDebugOut << "AND_ASSIGN ";}
currentCharDepth += yyleng;return (AND_ASSIGN);}
"^="		{
if(lexDebug)
{lexDebugOut << "XOR_ASSIGN ";}
currentCharDepth += yyleng;return (XOR_ASSIGN);}
"|="		{
if(lexDebug)
{lexDebugOut << "OR_ASSIGN ";}
currentCharDepth += yyleng;return (OR_ASSIGN);}

 /* Single character tokens 
    let's add tokens for these later on
*/
 
";"		{
if(lexDebug)
{lexDebugOut << "';' ";}
currentCharDepth += yyleng;return (';'); }
"{"		{
if(lexDebug)
{lexDebugOut << "'{' ";}
currentCharDepth += yyleng;return ('{'); }
"}"		{
if(lexDebug)
{lexDebugOut << "'}' ";}
currentCharDepth += yyleng;return ('}'); }
","		{
if(lexDebug)
{lexDebugOut << "',' ";}
currentCharDepth += yyleng;return (','); }
":"		{
if(lexDebug)
{lexDebugOut << "':' ";}
currentCharDepth += yyleng;return (':'); }
"="		{
if(lexDebug)
{lexDebugOut << "'=' ";}
currentCharDepth += yyleng;return ('='); }
"("		{
if(lexDebug)
{lexDebugOut << "'(' ";}
currentCharDepth += yyleng;return ('('); }
")"		{
if(lexDebug)
{lexDebugOut << "')' ";}
currentCharDepth += yyleng;return (')'); }
"["		{
if(lexDebug)
{lexDebugOut << "'[' ";}
currentCharDepth += yyleng;return ('['); }
"]"		{
if(lexDebug)
{lexDebugOut << "']' ";}
currentCharDepth += yyleng;return (']'); }
"."		{
if(lexDebug)
{lexDebugOut << "'.' ";}
currentCharDepth += yyleng;return ('.'); }
"&"		{
if(lexDebug)
{lexDebugOut << "'&' ";}
currentCharDepth += yyleng;return ('&'); }
"!"		{
if(lexDebug)
{lexDebugOut << "'!' ";}
currentCharDepth += yyleng;return ('!'); }
"~"		{
if(lexDebug)
{lexDebugOut << "'~' ";}
currentCharDepth += yyleng;return ('~'); }
"-"		{
if(lexDebug)
{lexDebugOut << "'-' ";}
currentCharDepth += yyleng;return ('-'); }
"+"		{
if(lexDebug)
{lexDebugOut << "'+' ";}
currentCharDepth += yyleng;return ('+'); }
"*"		{
if(lexDebug)
{lexDebugOut << "'*' ";}
currentCharDepth += yyleng;return ('*'); }
"/"		{
if(lexDebug)
{lexDebugOut << "'/' ";}
currentCharDepth += yyleng;return ('/'); }
"%"		{
if(lexDebug)
{lexDebugOut << "'%' ";}
currentCharDepth += yyleng;return ('%'); }
"<"		{
if(lexDebug)
{lexDebugOut << "'<' ";}
currentCharDepth += yyleng;return ('<'); }
">"		{
if(lexDebug)
{lexDebugOut << "'>' ";}
currentCharDepth += yyleng;return ('>'); }
"^"		{
if(lexDebug)
{lexDebugOut << "'^' ";}
currentCharDepth += yyleng;return ('^'); }
"|"		{
if(lexDebug)
{lexDebugOut << "'|' ";}
currentCharDepth += yyleng;return ('|'); }
"?"		{
if(lexDebug)
{lexDebugOut << "'?' ";}
currentCharDepth += yyleng;return ('?'); }

 /*place stuff for floats etc*/


{float_const}    {

  if(floatFlag)
  	{yylval.dval = strtof(yytext, 0);}
  else if(doubleFlag)
  	{yylval.dval = strtod(yytext, 0);}
  else if(lDoubleFlag)
  	{yylval.dval = strtold(yytext, 0);}
  

  if (errno == ERANGE && floatFlag)
  {
  	std::cout << "Warning: Floating point over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	floatFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && doubleFlag)
  {
  	std::cout << "Warning: Double over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	doubleFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && lDoubleFlag)
  {
  	std::cout << "Warning: Long double over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	lDoubleFlag = false;
  	prevFlag = 0;
  }

  
  if(lexDebug){lexDebugOut << "FLOATING_CONSTANT("<<yylval.dval<<")";}
  currentCharDepth += yyleng;return (FLOATING_CONSTANT); } 
{integer}        {

  if(shortFlag)
  	{yylval.dval = strtol(yytext, 0, 0);
  	if(yylval.dval > 32767)
  		{errno = ERANGE;}
	else if(yylval.dval < -32767)
  		{errno = ERANGE;}
  	}
  if(uShortFlag)
  	{yylval.dval = strtol(yytext, 0, 0);
  	if(yylval.dval > 65535)
  		{errno = ERANGE;}
	else if(yylval.dval < 0)
  		{errno = ERANGE;}
  	}

  if(intFlag)
  	{yylval.dval = strtol(yytext, 0, 0);
  	if(yylval.dval > 2147483647)
  		{errno = ERANGE;}
	else if(yylval.dval < -2147483647)
  		{errno = ERANGE;}
  	}
  if(uIntFlag)
  	{yylval.dval = strtol(yytext, 0, 0);
  	if(yylval.dval > 4294967295)
  		{errno = ERANGE;}
	else if(yylval.dval < 0)
  		{errno = ERANGE;}
  	}
  if(longFlag)
  	{yylval.dval = strtol(yytext, 0, 0);}
  if(uLongFlag)
  	{yylval.dval = strtoul(yytext, 0, 0);}
  else if(lLongFlag)
  	{yylval.dval = strtoll(yytext, 0, 0);}
  if(uLLongFlag)
  	{yylval.dval = strtoull(yytext, 0, 0);}

  if (errno == ERANGE && shortFlag)
  {
  	std::cout << "Warning: Short over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	shortFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && uShortFlag)
  {
  	std::cout << "Warning: Unsigned short over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	uShortFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && intFlag)
  {
  	std::cout << "Warning: Integer over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	intFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && uIntFlag)
  {
  	std::cout << "Warning: Unsigned integer over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	uIntFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && longFlag)
  {
  	std::cout << "Warning: Long over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	longFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && uLongFlag)
  {
  	std::cout << "Warning: Unsigned long over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	uLongFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && lLongFlag)
  {
  	std::cout << "Warning: Long long over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	lLongFlag = false;
  	prevFlag = 0;
  }
  else if (errno == ERANGE && uLLongFlag)
  {
  	std::cout << "Warning: Unsigned long long over/underflow on line " << lineCount << std::endl;
  	errno = 0;
  	uLLongFlag = false;
  	prevFlag = 0;
  }
  //yylval.ival = atoi(yytext);
  if(lexDebug){lexDebugOut << "INTEGER_CONSTANT("<<yylval.ival<<")";}
  currentCharDepth += yyleng;return (INTEGER_CONSTANT); }
{character}      {
  yylval.cval = yytext[1];
  if(lexDebug){lexDebugOut << "CHARACTER_CONSTANT("<<yylval.cval<<")";}
  currentCharDepth += yyleng;return (CHARACTER_CONSTANT); }
 /*retains the quotes... might not be desired behavoir */
{string}         {
  yylval.sval = strdup(yytext);
  if(lexDebug){lexDebugOut << "STRING_LITERAL("<<yylval.sval<<")";}
  currentCharDepth += yyleng;return (STRING_LITERAL); }


{id}            {yylval.sval = strdup(yytext);
  if(declMode){
    SymbolContent sc;
    sc.lineno = lineCount;
    sc.specs = 0;
    if(st.shadowing(yytext))
      {
	SymbolContent* shadowsc = st.searchAll(yytext);
	std::cout<<"warning: "<<yytext<<" is shadowing an earlier declaration at line: "<<(*shadowsc).lineno<<std::endl;
      }
    /*actually I might want to call an error, but for now this is allowed*/
    if(!st.add(yytext,sc))
      {
	std::cout<<"Error: "<<yytext<<" is already defined in current scope"<< std::endl;
	redeclVar = true;
      }
    else
      {
	st.update(yytext,sc);
      }
  }
  else{
  	if(st.searchTop(yytext))
  	{
  	std::cout << "using in same scope" << std::endl;
  	}
  	else if(st.searchAll(yytext))
  	{
  	std::cout << "using in narrower scope" << std::endl;
  	}
	else
	{
  	std::cout << "using undeclared variable" << std::endl;
  	undeclVar = true;
  	}
  	}
  if(lexDebug)
  {lexDebugOut << "IDENTIFIER("<<yylval.sval<<")";}
  currentCharDepth += yyleng;
  if(yyleng > 32)
  	{std::cout<< "Warning: Identifier "<< yytext << " is too long" << std::endl;}
  	return (IDENTIFIER); }
 /*All else would be an error-note error token not working*/
.		{return(ERROR);}

 /*I have no idea if this works*/


%%
