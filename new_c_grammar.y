%{
#include "c_grammar.h"
#include <stdio.h>
  /* #include "SymbolTable.hpp" */

extern SymbolTable st;
extern bool parseDebug;
extern std::ofstream parseDebugOut;
extern int lineCount;
/*for declaration or not*/
extern bool declMode;

extern bool undeclVar;
extern bool redeclVar;

struct declNode{
  char* id;
  unsigned int specs;
  int lineno;
  declNode* next;
};

int prevFlag = 0;
/* prevFlag key:
	* 1 = short
	* 2 = uShort
	* 3 = int
	* 4 = uInt
	* 5 = long
	* 6 = uLong
	* 7 = lLong
	* 8 = uLLong
	* 9 = float
	* 10 = double
	* 11 = lDouble
	* 12 = unsigned
*/

bool shortFlag;
bool uShortFlag;
bool intFlag;
bool uIntFlag;
bool longFlag;
bool uLongFlag;
bool lLongFlag;
bool uLLongFlag;
bool floatFlag;
bool doubleFlag;
bool lDoubleFlag;
bool unsignedFlag;

 %}

%union{
  //consider making this a string pointer
  char* sval;
  float dval;
  int ival;
  long lval;
  char cval;
  struct declNode *declval;
 }


%token <sval> IDENTIFIER 
%token <ival> INTEGER_CONSTANT 
%token <dval> FLOATING_CONSTANT 
%token <cval> CHARACTER_CONSTANT 
%token ENUMERATION_CONSTANT 
%token <sval> STRING_LITERAL 
%token SIZEOF
%token PTR_OP 
%token INC_OP DEC_OP 
%token LEFT_OP RIGHT_OP 
%token LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP 
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN 
%token LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN 
%token TYPEDEF_NAME
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELIPSIS RANGE

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN ERROR


%type <declval> identifier identifier_list
%type <sval> type_specifier storage_class_specifier
%type <sval> type_qualifier struct_or_union
%type <declval> declarator direct_declarator
%type <declval> init_declarator init_declarator_list
%type <declval> declaration declaration_list

%type <declval> declaration_specifiers

%start translation_unit
%%

translation_unit
:  external_declaration 
 {if(parseDebug)
	{parseDebugOut << "translation_unit <- external_declaration\n";}}
	 |  translation_unit external_declaration
 {if(parseDebug)
 	{parseDebugOut << "translation_unit <- translation_unit external_declaration\n";}}
 	;

external_declaration
	 :  function_definition
 {if(parseDebug)
	{parseDebugOut << "external_declaration <- function_definition\n";}}
	 |  declaration
 {if(parseDebug)
 	{parseDebugOut << "external_declaration <- declaration\n";}}
 	;

function_definition
:  declarator {st.push();declMode = false;} compound_statement {st.pop();}
 {if(parseDebug)
	{parseDebugOut << "function_definition <- declarator compound_statement\n";}}
|  declarator declaration_list {st.push();declMode=false;} compound_statement {st.pop();}
 {if(parseDebug)
 	{parseDebugOut << "function_definition <- declarator declaration_list compound_statement\n";}}
|  declaration_specifiers declarator {st.push();declMode=false;} compound_statement {st.pop();}
 {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator compound_statement\n";}}
|  declaration_specifiers declarator declaration_list {st.push();declMode=false;} compound_statement {st.pop();}
 {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator declaration_list compound_statement\n";}}
 	;

declaration
	 :  declaration_specifiers ';' identifier_flag_clear
{if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers ';'\n";}}
	 |  declaration_specifiers init_declarator_list identifier_flag_clear ';'
{
  declNode dn = *$2;
  SymbolContent *sc = st.searchAll((*$2).id);
  if(sc == 0)
    {
      //make this an error later
      std::cout<<"Warning! trying to use a variable not declared"<<std::endl;
    }
  else
    {
      SymbolContent newsc;
      
      newsc.specs = dn.specs;
      newsc.lineno = lineCount;
      st.update((*$2).id,newsc);
    }
  SymbolContent *sn = st.searchAll((*$2).id);
 }
{if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers init_declarator_list ';'\n";}}
    	;

declaration_list
	 :  start_decl declaration end_decl {$$ = $2;}
{if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration\n";}}
	 |  declaration_list start_decl declaration end_decl
{
  declNode dn = *$3;
  dn.next = $1;
  $$ = &dn;
}

{if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration_list declaration\n";}}
    	;
	     
start_decl
	: {declMode = true;}
	;

end_decl
	: {declMode = false;}
	;

declaration_specifiers
	 :  storage_class_specifier
	 {declMode = true;
if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier\n";}} 
{
  declNode dn;
  dn.specs = 0;
  if($1=="AUTO")
    {
      dn.specs |= xAUTO;
    }
  else if($1 == "REGISTER")
    {
      dn.specs |= xREGISTER;
    }
  else if($1 ==  "STATIC")
    {
      dn.specs |= xSTATIC;
    }
  else if($1 == "EXTERN")
    {
      dn.specs |= xEXTERN;
    }
  else if($1 ==  "TYPEDEF")
    {   
      dn.specs |= xTYPEDEF;
    }
    $$ = &dn;
 }
   
	 |  storage_class_specifier declaration_specifiers
	 {declMode = true;
if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier declaration_specifiers\n";}
 }
{
  declNode dn = *$2;
  if($1=="AUTO")
    {
      dn.specs |= xAUTO;
    }
  else if($1 == "REGISTER")
    {
      dn.specs |= xREGISTER;
    }
  else if($1 ==  "STATIC")
    {
      dn.specs |= xSTATIC;
    }
  else if($1 == "EXTERN")
    {
      dn.specs |= xEXTERN;
    }
  else if($1 ==  "TYPEDEF")
    {   
      dn.specs |= xTYPEDEF;
    }
    $$ = &dn;
 
}
	 
	|  type_specifier 
	{declMode = true;
if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier\n";}
  }
{
  declNode dn;
  dn.specs = 0;
  if($1 == "VOID")
    {
      dn.specs |= xVOID;
    }
  else if($1 == "CHAR")
    {
      dn.specs |= xCHAR;
    }
  else if($1 == "SHORT")
    {
      dn.specs |= xSHORT;
    }
  else if($1 == "INT")
    {
      dn.specs |= xINT;
      }
  else if($1 == "LONG")
    {
      dn.specs |= xLONG;
    }
  else if($1 == "FLOAT")
    {
      dn.specs |= xFLOAT;
    }
  else if($1 == "DOUBLE")
    {
      dn.specs |= xDOUBLE;
    }
  else if($1 == "SIGNED")
    {
      dn.specs  |= xSIGNED;
    }
  else if($1 == "UNSIGNED")
    {
      dn.specs |= xUNSIGNED; 
    }
  else if($1 == "STRUCT")
    {
      dn.specs |= xSTRUCT;
    }
  else if($1 == "UNION" )
    {
      dn.specs |= xUNION;
    }
  else if($1 ==  "ENUM")
    {
      dn.specs  |= xENUM;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      dn.specs |=  xTYPEDEF_NAME;
      }
$$=&dn;
}
	 
     |  type_specifier declaration_specifiers  
     {declMode = true;
if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier declaration_specifiers\n";}
 }
	 {
     declNode dn = *$2;
 if($1 == "VOID")
    {
      dn.specs |= xVOID;
    }
  else if($1 == "CHAR")
    {
      dn.specs |= xCHAR;
    }
  else if($1 == "SHORT")
    {
      dn.specs |= xSHORT;
    }
  else if($1 == "INT")
    {
      dn.specs |= xINT;
    }
  else if($1 == "LONG")
    {
      dn.specs |= xLONG;
    }
  else if($1 == "FLOAT")
    {
      dn.specs |= xFLOAT;
    }
  else if($1 == "DOUBLE")
    {
      dn.specs |= xDOUBLE;
    }
  else if($1 == "SIGNED")
    {
      dn.specs  |= xSIGNED;
    }
  else if($1 == "UNSIGNED")
    {
      dn.specs |= xUNSIGNED; 
    }
  else if($1 == "STRUCT")
    {
      dn.specs |= xSTRUCT;
    }
  else if($1 == "UNION" )
    {
      dn.specs |= xUNION;
    }
  else if($1 ==  "ENUM")
    {
      dn.specs  |= xENUM;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      dn.specs |=  xTYPEDEF_NAME;
    }
 $$ = &dn;
 }
         |  type_qualifier 
{if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier\n";}
  
  declNode dn;
  dn.specs = 0;
  if($1 == "CONST")
    {
      dn.specs |= xCONST;
    }
  else if($1 == "VOLATILE")
    {
      dn.specs |= xVOLATILE;
    }
  $$ = &dn;
}	 
         |  type_qualifier declaration_specifiers
	 {declMode = true; 
if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier declaration_specifiers\n";}
}
{
  declNode dn  = *$2;
  if($1 == "CONST")
    {
      dn.specs  |= xCONST;
    }
  else if($1 == "VOLATILE")
    {
      dn.specs |= xVOLATILE;
      }
  $$ = &dn;

}
    	;

storage_class_specifier
	 :  AUTO
{if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- AUTO\n";}
    $$ = "AUTO";}
	 |  REGISTER
{if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- REGISTER\n";}
    $$ = "REGISTER";}
      |  STATIC
{if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- STATIC\n";}
    $$ = "STATIC";}	 
      |  EXTERN
{if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- EXTERN\n";}
    $$ = "EXTERN";}	 
      |  TYPEDEF
{if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- TYPEDEF\n";}
    $$ = "TYPEDEF";}
    	;

type_specifier
	:  VOID  
{$$ = "VOID";if(parseDebug)
    {parseDebugOut << "type_specifier <- VOID\n";}
    $$ = "VOID";}
     |  CHAR
{if(parseDebug)
    {parseDebugOut << "type_specifier <- CHAR\n";}
    $$ = "CHAR	";}
      |  SHORT
{if(parseDebug)
    {parseDebugOut << "type_specifier <- SHORT\n";}
    $$ = "SHORT";
    if(prevFlag == 12)
        {uShortFlag = true;
	    shortFlag = false;
	    //uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 2;}
    else
    	   {shortFlag = true;
    	    //shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

    	   prevFlag = 1;}
    	    }
      |  INT
{if(parseDebug)
    {parseDebugOut << "type_specifier <- INT\n";}
    $$ = "INT";
    if(prevFlag == 1)
        {shortFlag = true;
         //shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 1;}
    else if(prevFlag == 2)
        {uShortFlag = true;
         shortFlag = false;
	    //uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 2;}
    else if(prevFlag == 5)
        {longFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    //longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 5;}
    else if(prevFlag == 6)
        {uLongFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    //uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 6;}
    else if(prevFlag == 7)
        {lLongFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    //lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 7;}
    else if(prevFlag == 8)
        {uLLongFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    //uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 8;}
    else if(prevFlag == 12)
        {uIntFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    //uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 12;}
    else
    	    {intFlag = true;
    	    shortFlag = false;
	    uShortFlag = false;
	    //intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;}
         }	 
      |  LONG
{if(parseDebug)
	{parseDebugOut << "type_specifier <- LONG\n";}
	$$ = "LONG";
	switch(prevFlag)
	{case 5: lLongFlag = true;
	    shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    //lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 7;
         break;
     case 6: uLLongFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    //uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;
     
         prevFlag = 8;
         break;
     case 12: uLongFlag = true;
     	shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    longFlag = false;
	    //uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 6;
         break;    
     default: longFlag = true;
         shortFlag = false;
	    uShortFlag = false;
	    intFlag = false;
	    uIntFlag = false;
	    //longFlag = false;
	    uLongFlag = false;
	    lLongFlag = false;
	    uLLongFlag = false;
	    floatFlag = false;
	    doubleFlag = false;
	    lDoubleFlag = false;
	    unsignedFlag = false;

         prevFlag = 5;
      }}	 
	 |  FLOAT 
{if(parseDebug)
	{parseDebugOut << "type_specifier <- FLOAT\n";}
	$$ = "FLOAT";
	floatFlag = true;
	shortFlag = false;
     uShortFlag = false;
     intFlag = false;
     uIntFlag = false;
     longFlag = false;
     uLongFlag = false;
     lLongFlag = false;
     uLLongFlag = false;
     //floatFlag = false;
     doubleFlag = false;
     lDoubleFlag = false;
     unsignedFlag = false;
	prevFlag = 9;} 
	 |  DOUBLE
{if(parseDebug)
 	{parseDebugOut << "type_specifier <- DOUBLE\n";}
 	$$ = "DOUBLE";
 	switch(prevFlag)
 	{case 5:lDoubleFlag = true;
 	shortFlag = false;
     uShortFlag = false;
     intFlag = false;
     uIntFlag = false;
     longFlag = false;
     uLongFlag = false;
     lLongFlag = false;
     uLLongFlag = false;
     floatFlag = false;
     doubleFlag = false;
     //lDoubleFlag = false;
     unsignedFlag = false;

 	 prevFlag = 11;
 	 break;
 	default:
 	 doubleFlag = true;
 	 shortFlag = false;
      uShortFlag = false;
      intFlag = false;
      uIntFlag = false;
      longFlag = false;
      uLongFlag = false;
      lLongFlag = false;
      uLLongFlag = false;
      floatFlag = false;
      //doubleFlag = false;
      lDoubleFlag = false;
      unsignedFlag = false;

 	 prevFlag = 10;
 	 }}
	 |  SIGNED
{if(parseDebug)
 	{parseDebugOut << "type_specifier <- SIGNED\n";}
 	$$ = "SIGNED";}
	 |  UNSIGNED
{if(parseDebug)
 	{parseDebugOut << "type_specifier <- UNSIGNED\n";}
 	$$ = "UNSIGNED";
 	prevFlag = 12;}	 
	 |  struct_or_union_specifier
{if(parseDebug)
  	{parseDebugOut << "type_specifier <- struct_or_union_specifier\n";}
  	$$ = "!!STRUCT/UNION";}
 	 |  enum_specifier
{if(parseDebug)
 	{parseDebugOut << "type_specifier <- enum_specifier\n";}
 	$$ = "!!ENUM";}
	 |  TYPEDEF_NAME
{if(parseDebug)
	{parseDebugOut << "type_specifier <- TYPEDEF_NAME\n";}
	$$ = "TYPEDEF_NAME";}	;

type_qualifier
	 :  CONST
 {if(parseDebug)
	{parseDebugOut << "type_qualifier <- CONST\n";}
	$$ = "CONST";}
	 |  VOLATILE
 {if(parseDebug)
 	{parseDebugOut << "type_qualifier <- VOLATILE\n";}
 	$$ = "VOLATILE";}
 	;

struct_or_union_specifier
	 :  struct_or_union identifier '{' struct_declaration_list '}'
 {if(parseDebug)
	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier '{' struct_declaration_list '}'\n";}}
	 |  struct_or_union '{' struct_declaration_list '}'
 {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union '{' struct_declaration_list '}'\n";}}
 	 |  struct_or_union identifier
 {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier\n";}}
 	;

struct_or_union
	 :  STRUCT
 {if(parseDebug)
	{parseDebugOut << "struct_or_union <- STRUCT\n";}
	$$ = "STRUCT";}
	 |  UNION
 {if(parseDebug)
 	{parseDebugOut << "struct_or_union <- UNION\n";}
 	$$ = "SIGNED";}
 	;

struct_declaration_list
	 :  struct_declaration
 {if(parseDebug)
	{parseDebugOut << "struct_declaration_list <- struct_declaration\n";}}
	 |  struct_declaration_list struct_declaration
 {if(parseDebug)
 	{parseDebugOut << "struct_declaration_list <- struct_declaration_list struct_declaration\n";}}
 	;

init_declarator_list
	 :  init_declarator
 {if(parseDebug)
	{parseDebugOut << "init_declarator_list <- init_declarator\n";}
	$$ = $1;}
	 |  init_declarator_list ',' init_declarator
 {if(parseDebug)
 	{parseDebugOut << "init_declarator_list <- init_declarator_list ',' init_declarator\n";}
 	$$ = $3;}
 	;

init_declarator
	 :  declarator
 {if(parseDebug)
	{parseDebugOut << "init_declarator <- declarator\n";}
	$$ = $1;}
	 |  declarator '=' initializer
 {if(parseDebug)
 	{parseDebugOut << "init_declarator <- declarator '=' initializer\n";}
 	$$ = $1;}	;

struct_declaration
	 :  specifier_qualifier_list struct_declarator_list ';'
 {if(parseDebug)
	{parseDebugOut << "struct_declaration <- specifier_qualifier_list struct_declarator_list ';'\n";}}
	;

specifier_qualifier_list
	 :  type_specifier
 {if(parseDebug)
	{parseDebugOut << "specifier_qualifier_list <- type_specifier\n";}}
	 |  type_specifier specifier_qualifier_list
 {if(parseDebug)
 	{parseDebugOut << "specifier_qualifier_list <- type_specifier specifier_qualifier_list\n";}}
 	 |  type_qualifier
 {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier\n";}}
 	 |  type_qualifier specifier_qualifier_list
 {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier specifier_qualifier_list\n";}}
 	;

struct_declarator_list
	 :  struct_declarator
 {if(parseDebug)
	{parseDebugOut << "struct_declarator_list <- struct_declarator\n";}}
	 |  struct_declarator_list ',' struct_declarator
 {if(parseDebug)
	 {parseDebugOut << "struct_declarator_list <- struct_declarator_list ',' struct_declarator\n";}}
 	;

struct_declarator
	 :  declarator
 {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator\n";}}
	 |  ':' constant_expression
 {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- ':' constant_expression\n";}}
 	 |  declarator ':' constant_expression
 {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator ':' constant_expression\n";}}
	 ;
	 
enum_specifier
	 :  ENUM '{' enumerator_list '}'
 {if(parseDebug)
	{parseDebugOut << "enum_specifier <- ENUM '{' enumerator_list '}'\n";}}
	 |  ENUM identifier '{' enumerator_list '}'
 {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier '{' enumerator_list '}'\n";}}
 	 |  ENUM identifier
 {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier\n";}}
 	;

enumerator_list
	 :  enumerator
 {if(parseDebug)
	{parseDebugOut << "enumerator_list <- enumerator\n";}}
	 |  enumerator_list ',' enumerator
 {if(parseDebug)
 	{parseDebugOut << "enumerator_list <- enumerator_list ',' enumerator\n";}}
 	;

enumerator
	 :  identifier
 {if(parseDebug)
	{parseDebugOut << "enumerator <- identifier\n";}}
	 |  identifier '=' constant_expression
 {if(parseDebug)
 	{parseDebugOut << "enumerator <- identifier '=' constant_expression\n";}}
 	;

/*for this second, not worried about pointers.. figure out later*/
declarator
	 :  direct_declarator 
 {if(parseDebug)
	{parseDebugOut << "declarator <- direct_declarator\n";}
	$$ = $1;}
	 |  pointer direct_declarator
 {if(parseDebug)
 	{parseDebugOut << "declarator <- pointer direct_declarator\n";}
        declNode dn = *$2;
	dn.specs |= xPOINTER;
	$$ = &dn;
        }
 	;


direct_declarator
	 :  identifier
 {if(parseDebug)
	{parseDebugOut << "direct_declarator <- identifier\n";}
	declNode dn = *$1;
	dn.next = 0;
	$$ = &dn;
}
	 |  '(' declarator ')'
 {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- '(' declarator ')'\n";}
 	 declNode dn = *$2;
	 $$ = &dn;
}
//array
 	 |  direct_declarator '[' ']'
 {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' ']'\n";}
 	 declNode dn = *$1;
	 dn.specs |= xARRAY;
	 $$=&dn;
}
 	 |  direct_declarator '[' constant_expression ']'
 {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' constant_expression ']'\n";}
        declNode dn = *$1;
	dn.specs |= xARRAY;
	$$=&dn;}
 	 |  direct_declarator '(' ')'
 {
if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' ')'\n";}
 	 declNode dn = *$1;
	 dn.specs |= xFUNCTION;
	 $$=&dn;
 	st.push();}/*though empty all funcs wil pop 2x*/ 	
 	 |  direct_declarator '(' {st.push();} parameter_type_list ')'
 {
if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' parameter_type_list ')'\n";}
   declNode dn = *$1;
   dn.specs |= xFUNCTION;
   $$=&dn;
}
 	 |  direct_declarator '(' identifier_list ')'
	 {
if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' identifier_list ')'\n";}
  declNode dn = *$1;
  dn.specs |= xFUNCTION;
  $$=&dn;
}
 	;

pointer
	 :  '*'
 {if(parseDebug)
	{parseDebugOut << "pointer <- '*'\n";}}
	 |  '*' type_qualifier_list
 {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list\n";}}
 	 |  '*' pointer
 {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' pointer\n";}}
 	 |  '*' type_qualifier_list pointer
 {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list pointer\n";}}
 	;

type_qualifier_list
	 :  type_qualifier
 {if(parseDebug)
	{parseDebugOut << "type_qualifier_list <- type_qualifier\n";}}
	 |  type_qualifier_list type_qualifier
 {if(parseDebug)
 	{parseDebugOut << "type_qualifier_list <- type_qualifier_list type_qualifier\n";}}
 	;

parameter_type_list
	 :  parameter_list
 {if(parseDebug)
	{parseDebugOut << "parameter_type_list <- parameter_list\n";}}
	 |  parameter_list ',' ELIPSIS
 {if(parseDebug)
 	{parseDebugOut << "parameter_type_list <- parameter_list ',' ELIPSIS\n";}}
 	;

parameter_list
	 :  parameter_declaration
 {if(parseDebug)
	{parseDebugOut << "parameter_list <- parameter_declaration\n";}}
	 |  parameter_list ',' parameter_declaration
 {if(parseDebug)
 	{parseDebugOut << "parameter_list <- parameter_list ',' parameter_declaration\n";}}
 	;

parameter_declaration
	 :  declaration_specifiers declarator
 {if(parseDebug)
	{parseDebugOut << "parameter_declaration <- declaration_specifiers declarator\n";}}
	 |  declaration_specifiers
 {if(parseDebug)
 	{parseDebugOut << "parameter_declaration <- declaration_specifiers\n";}}
 	 |  declaration_specifiers abstract_declarator
 {if(parseDebug)
 {parseDebugOut << "parameter_declaration <- declaration_specifiers abstract_declarator\n";}}
 	 ;

identifier_list
	 :  identifier
 {if(parseDebug)
	{parseDebugOut << "identifier_list <- identifier\n";}

 declNode dn = *$1;
  $$ = &dn;
}
	 |  identifier_list ',' identifier
 {if(parseDebug)
 	{parseDebugOut << "identifier_list <- identifier_list ',' identifier\n";}

   declNode dn = *$1;
   dn.next = $3;
   $$ = &dn;
}
 	;

initializer
	 :  assignment_expression
 {if(parseDebug)
	{parseDebugOut << "initializer <- assignment_expression\n";}}
	 |  '{' initializer_list '}'
 {if(parseDebug)
 {parseDebugOut << "initializer <- '{' initializer_list '}'\n";}}
 	 |  '{' initializer_list ',' '}'
 {if(parseDebug)
 	{parseDebugOut << "initializer <- '{' initializer_list ',' '}'\n";}}
 	;

initializer_list
	 :  initializer
 {if(parseDebug)
	{parseDebugOut << "initializer_list <- initializer\n";}}
	 |  initializer_list ',' initializer
 {if(parseDebug)
 	{parseDebugOut << "initializer_list <- initializer_list ',' initializer\n";}}
 	;

type_name
	 :  specifier_qualifier_list
 {if(parseDebug)
	{parseDebugOut << "type_name <- specifier_qualifier_list\n";}}
	 |  specifier_qualifier_list abstract_declarator
 {if(parseDebug)
 	{parseDebugOut << "type_name <- specifier_qualifier_list abstract_declarator\n";}}
 	;

abstract_declarator
	 :  pointer
 {if(parseDebug)
	{parseDebugOut << "abstract_declarator <- pointer\n";}}
	 |  direct_abstract_declarator
 {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- direct_abstract_declarator\n";}}
 	 |  pointer direct_abstract_declarator
 {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- pointer direct_abstract_declarator\n";}}
 	;

direct_abstract_declarator
	 :  '(' abstract_declarator ')'
 {if(parseDebug)
	{parseDebugOut << "direct_abstract_declarator <- '(' abstract_declarator ')'\n";}}
	 |  '[' ']'
 {if(parseDebug)
 {parseDebugOut << "direct_abstract_declarator <- '[' ']'\n";}}
 	 |  '[' constant_expression ']'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '[' constant_expression ']'\n";}}
 	 |  direct_abstract_declarator '[' ']'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' ']'\n";}}
 	 |  direct_abstract_declarator '[' constant_expression ']'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' constant_expression ']'\n";}}
 	 |  '(' ')'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' ')'\n";}}
 	 |  '(' parameter_type_list ')'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' parameter_type_list ')'\n";}}
 	 |  direct_abstract_declarator '(' ')'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' ')'\n";}}
 	 |  direct_abstract_declarator '(' parameter_type_list ')'
 {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' parameter_type_list ')'\n";}}
 	;

statement
	 :  labeled_statement
 {if(parseDebug)
	{parseDebugOut << "statement <- labeled_statement\n";}}
|{st.push();}  compound_statement {st.pop();}
 {if(parseDebug)
 	{parseDebugOut << "statement <- compound_statement\n";}}
 	 |  expression_statement
 {if(parseDebug)
 	{parseDebugOut << "statement <- expression_statement\n";}}
 	 |  selection_statement
 {if(parseDebug)
 	{parseDebugOut << "statement <- selection_statement\n";}}
 	 |  iteration_statement
 {if(parseDebug)
 	{parseDebugOut << "statement <- iteration_statement\n";}}
 	 |  jump_statement
 {if(parseDebug)
 	{parseDebugOut << "statement <- jump_statement\n";}}
 	;

labeled_statement
	 :  identifier ':' statement
 {if(parseDebug)
	{parseDebugOut << "labeled_statement <- identifier ':' statement\n";}}
	 |  CASE constant_expression ':' statement
 {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- CASE constant_expression ':' statement\n";}}
 	 |  DEFAULT ':' statement
 {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- DEFAULT ':' statement\n";}}
 	;

expression_statement
	 :  ';'
 {if(parseDebug)
	{parseDebugOut << "expression_statement <- ';'\n";}}
	 |  expression ';'
 {if(parseDebug)
 	{parseDebugOut << "expression_statement <- expression ';'\n";}}
 	;

compound_statement
	 :  '{' '}'
 {if(parseDebug)
	{parseDebugOut << "compound_statement <- '{' '}'\n";}}
	 |  '{' statement_list '}'
 {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' statement_list '}'\n";}}
 	 |  '{' declaration_list '}'
 {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list '}'\n";}}
 	 |  '{' declaration_list statement_list '}'
 {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list statement_list '}'\n";}}
 	;

statement_list
	 :  statement
 {if(parseDebug)
	{parseDebugOut << "statement_list <- statement\n";}}
	 |  statement_list statement
 {if(parseDebug)
 	{parseDebugOut << "statement_list <- statement_list statement\n";}}
 	;

selection_statement
	 :  IF '(' expression ')' statement
 {if(parseDebug)
	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement\n";}}
	 |  IF '(' expression ')' statement ELSE statement
 {if(parseDebug)
 	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement ELSE statement\n";}}
 	 |  SWITCH '(' expression ')' statement
 {if(parseDebug)
 	{parseDebugOut << "selection_statement <- SWITCH '(' expression ')' statement\n";}}
 	;

iteration_statement
	 :  WHILE '(' expression ')' statement
 {if(parseDebug)
	{parseDebugOut << "iteration_statement <- WHILE '(' expression ')' statement\n";}}
	 |  DO statement WHILE '(' expression ')' ';'
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- DO statement WHILE '(' expression ')' ';'\n";}}
 	 |  FOR '(' ';' ';' ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' ')' statement\n";}}
 	 |  FOR '(' ';' ';' expression ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' expression ')' statement\n";}}
 	 |  FOR '(' ';' expression ';' ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' ')' statement\n";}}
 	 |  FOR '(' ';' expression ';' expression ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' expression ')' statement\n";}}
 	 |  FOR '(' expression ';' ';' ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' ')' statement\n";}}
 	 |  FOR '(' expression ';' ';' expression ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' expression ')' statement\n";}}		
 	|  FOR '(' expression ';' expression ';' ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' ')' statement\n";}}	
 	|  FOR '(' expression ';' expression ';' expression ')' statement
 {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' expression ')' statement\n";}}
 	;

jump_statement
	 :  GOTO identifier ';'
 {if(parseDebug)
	{parseDebugOut << "jump_statement <- GOTO identifier ';'\n";}}
	 |  CONTINUE ';'
 {if(parseDebug)
 	{parseDebugOut << "jump_statement <- CONTINUE ';'\n";}}
 	 |  BREAK ';'
 {if(parseDebug)
 	{parseDebugOut << "jump_statement <- BREAK ';'\n";}}
 	 |  RETURN ';'
 {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN ';'\n";}}
 	 |  RETURN expression ';'
 {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN expression ';'\n";}}
 	;

expression
	 :  assignment_expression
 {if(parseDebug)
	{parseDebugOut << "expression <- assignment_expression\n";}}
	 |  expression ',' assignment_expression
 {if(parseDebug)
 	{parseDebugOut << "expression <- expression ',' assignment_expression\n";}}
 	;

assignment_expression
	 :  conditional_expression
 {if(parseDebug)
	{parseDebugOut << "assignment_expression <- conditional_expression\n";}}
	 |  unary_expression assignment_operator assignment_expression
 {if(parseDebug)
 	{parseDebugOut << "assignment_expression <- unary_expression assignment_operator assignment_expression\n";}}
 	;

assignment_operator
	 :  '='
 {if(parseDebug)
	{parseDebugOut << "assignment_operator <- '='\n";}}
	 |  MUL_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MUL_ASSIGN\n";}}
 	 |  DIV_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- DIV_ASSIGN\n";}}
 	 |  MOD_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MOD_ASSIGN\n";}}
 	 |  ADD_ASSIGN
 {if(parseDebug)
	{parseDebugOut << "assignment_operator <- ADD_ASSIGN\n";}}
	 |  SUB_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- SUB_ASSIGN\n";}}
 	 |  LEFT_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- LEFT_ASSIGN\n";}}
 	 |  RIGHT_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- RIGHT_ASSIGN\n";}}
 	 |  AND_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- AND_ASSIGN\n";}}
 	 |  XOR_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- XOR_ASSIGN\n";}}
 	 |  OR_ASSIGN
 {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- OR_ASSIGN\n";}}
 	;

conditional_expression
	 :  logical_or_expression
 {if(parseDebug)
	{parseDebugOut << "conditional_expression <- logical_or_expression\n";}}
	 |  logical_or_expression '?' expression ':' conditional_expression
 {if(parseDebug)
 	{parseDebugOut << "conditional_expression <- logical_or_expression '?' expression ':' conditional_expression\n";}}
 	;

constant_expression
	 :  conditional_expression
 {if(parseDebug)
	{parseDebugOut << "constant_expression <- conditional_expression\n";}}
	;

logical_or_expression
	 :  logical_and_expression
 {if(parseDebug)
	{parseDebugOut << "logical_or_expression <- logical_and_expression\n";}}
	 |  logical_or_expression OR_OP logical_and_expression
 {if(parseDebug)
 	{parseDebugOut << "logical_or_expression <- logical_or_expression OR_OP logical_and_expression\n";}}
 	;

logical_and_expression
	 :  inclusive_or_expression
 {if(parseDebug)
	{parseDebugOut << "logical_and_expression <- inclusive_or_expression\n";}}
	 |  logical_and_expression AND_OP inclusive_or_expression
 {if(parseDebug)
 	{parseDebugOut << "logical_and_expression <- logical_and_expression AND_OP inclusive_or_expression\n";}}
 	;

inclusive_or_expression
	 :  exclusive_or_expression
 {if(parseDebug)
	{parseDebugOut << "inclusive_or_expression <- exclusive_or_expression\n";}}
	 |  inclusive_or_expression '|' exclusive_or_expression
 {if(parseDebug)
 	{parseDebugOut << "inclusive_or_expression <- inclusive_or_expression '|' exclusive_or_expression\n";}}
 	;

exclusive_or_expression
	 :  and_expression
 {if(parseDebug)
	{parseDebugOut << "exclusive_or_expression <- and_expression\n";}}
	 |  exclusive_or_expression '^' and_expression
 {if(parseDebug)
 	{parseDebugOut << "exclusive_or_expression <- exclusive_or_expression '^' and_expression\n";}}
 	;

and_expression
	 :  equality_expression
 {if(parseDebug)
	{parseDebugOut << "and_expression <- equality_expression\n";}}
	 |  and_expression '&' equality_expression
 {if(parseDebug)
 	{parseDebugOut << "and_expression <- and_expression '&' equality_expression\n";}}
 	;

equality_expression
	 :  relational_expression
 {if(parseDebug)
	{parseDebugOut << "equality_expression <- relational_expression\n";}}
	 |  equality_expression EQ_OP relational_expression
 {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression EQ_OP relational_expression\n";}}
 	 |  equality_expression NE_OP relational_expression
 {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression NE_OP relational_expression\n";}}
 	;

relational_expression
	 :  shift_expression
 {if(parseDebug)
	{parseDebugOut << "relational_expression <- shift_expression\n";}}
	 |  relational_expression '<' shift_expression
 {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '<' shift_expression\n";}}
 	 |  relational_expression '>' shift_expression
 {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '>' shift_expression\n";}}
 	 |  relational_expression LE_OP shift_expression
 {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression LE_OP shift_expression\n";}}
 	 |  relational_expression GE_OP shift_expression
 {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression GE_OP shift_expression\n";}}
 	;

shift_expression
	 :  additive_expression
 {if(parseDebug)
	{parseDebugOut << "shift_expression <- additive_expression\n";}}
	 |  shift_expression LEFT_OP additive_expression
 {if(parseDebug)
 	{parseDebugOut << "shift_expression <- shift_expression LEFT_OP additive_expression\n";}}
 	 |  shift_expression RIGHT_OP additive_expression
 {if(parseDebug)
	{parseDebugOut << "shift_expression <- shift_expression RIGHT_OP additive_expression\n";}}
	;

additive_expression
	 :  multiplicative_expression
 {if(parseDebug)
{parseDebugOut << "additive_expression <- multiplicative_expression\n";}}
	 |  additive_expression '+' multiplicative_expression
 {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '+' multiplicative_expression\n";}}
 	 |  additive_expression '-' multiplicative_expression
 {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '-' multiplicative_expression\n";}}
 	;

multiplicative_expression
	 :  cast_expression
 {if(parseDebug)
	{parseDebugOut << "multiplicative_expression <- cast_expression\n";}}
	 |  multiplicative_expression '*' cast_expression
 {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '*' cast_expression\n";}}
 	 |  multiplicative_expression '/' cast_expression
 {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '/' cast_expression\n";}}
 	 |  multiplicative_expression '%' cast_expression
 {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '%' cast_expression\n";}}
 	;

cast_expression
	 :  unary_expression
 {if(parseDebug)
	{parseDebugOut << "cast_expression <- unary_expression\n";}}
	 |  '(' type_name ')' cast_expression
 {if(parseDebug)
 	{parseDebugOut << "cast_expression <- '(' type_name ')' cast_expression\n";}}
 	;

unary_expression
	 :  postfix_expression
 {if(parseDebug)
	{parseDebugOut << "unary_expression <- postfix_expression\n";}}
	 |  INC_OP unary_expression
 {if(parseDebug)
 	{parseDebugOut << "unary_expression <- INC_OP unary_expression\n";}}
 	 |  DEC_OP unary_expression
 {if(parseDebug)
 	{parseDebugOut << "unary_expression <- DEC_OP unary_expression\n";}}
 	 |  unary_operator cast_expression
 {if(parseDebug)
 	{parseDebugOut << "unary_expression <- unary_operator cast_expression\n";}}
 	 |  SIZEOF unary_expression
 {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF unary_expression\n";}}
 	 |  SIZEOF '(' type_name ')'
 {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF '(' type_name ')'\n";}}
 	;

unary_operator
	 :  '&'
 {if(parseDebug)
	{parseDebugOut << "unary_operator <- '&'\n";}}
	 |  '*'
 {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '*'\n";}}
 	 |  '+'
 {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '+'\n";}}
 	 |  '-'
 {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '-'\n";}}
 	 |  '~'
 {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '~'\n";}}
 	 |  '!'
 {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '!'\n";}}
 	;

postfix_expression
	 :  primary_expression
 {if(parseDebug)
	{parseDebugOut << "postfix_expression <- primary_expression\n";}}
	 |  postfix_expression '[' expression ']'
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '[' expression ']'\n";}}
 	 |  postfix_expression '(' ')'
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' ')'\n";}}
 	 |  postfix_expression '(' argument_expression_list ')'
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' argument_expression_list ')'\n";}}
 	 |  postfix_expression '.' identifier
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '.' identifier\n";}}
 	 |  postfix_expression PTR_OP identifier
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression PTR_OP identifier\n";}}
 	 |  postfix_expression INC_OP
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression INC_OP\n";}}
 	 |  postfix_expression DEC_OP
 {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression DEC_OP\n";}}
 	;

primary_expression
	 :  identifier
 {if(parseDebug)
	{parseDebugOut << "primary_expression <- identifier\n";}}
	 |  constant
 {if(parseDebug)
 	{parseDebugOut << "primary_expression <- constant\n";}}
 	 |  string
 {if(parseDebug)
 	{parseDebugOut << "primary_expression <- string\n";}}
 	 |  '(' expression ')'
 {if(parseDebug)
 	{parseDebugOut << "primary_expression <- '(' expression ')'\n";}}
 	;

argument_expression_list
	 :  assignment_expression
 {if(parseDebug)
	{parseDebugOut << "argument_expression_list <- assignment_expression\n";}}
	 |  argument_expression_list ',' assignment_expression
 {if(parseDebug)
 	{parseDebugOut << "argument_expression_list <- argument_expression_list ',' assignment_expression\n";}}
 	;

constant
	 :  INTEGER_CONSTANT
 {if(parseDebug)
	{parseDebugOut << "constant <- INTEGER_CONSTANT\n";}}
	 |  CHARACTER_CONSTANT
 {if(parseDebug)
 	{parseDebugOut << "constant <- CHARACTER_CONSTANT\n";}}
 	 |  FLOATING_CONSTANT
 {if(parseDebug)
 	{parseDebugOut << "constant <- FLOATING_CONSTANT\n";}}
 	 |  ENUMERATION_CONSTANT
 {if(parseDebug)
 	{parseDebugOut << "constant <- ENUMERATION_CONSTANT\n";}}
 	;

string
	 :  STRING_LITERAL
 {if(parseDebug)
	{parseDebugOut << "string <- STRING_LITERAL\n";}}
	;

identifier 
	 :  IDENTIFIER 
	 {
	   declNode dn;
	   dn.id = $1;
	   $$ = &dn;
	   if(parseDebug)
	     {parseDebugOut << "identifier  <- IDENTIFIER\n";}
	   if(undeclVar || redeclVar) 
	    	{return 1;}
	 }
	;
	
identifier_flag_clear
	: { prevFlag = 0;
	   }
%%

#include <stdio.h>

extern char yytext[];
extern int column;



/*
yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
*/
