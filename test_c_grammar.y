 /* test version of the grammar, with debuging code removed for less clutter */

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

struct declNode{
  char* id;
  unsigned int specs;
  int lineno;
  declNode* next;
};

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

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN


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
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

//I'll rest easier tonight if I can at least get the pushing and popping right
function_definition
: declarator {st.push();} compound_statement {st.pop();st.pop();}
| declarator declaration_list {st.push();} compound_statement {st.pop();}
| declaration_specifiers declarator {st.push();} compound_statement {st.pop();st.pop();}
| declaration_specifiers declarator declaration_list {st.push();}compound_statement {st.pop();st.pop();}
	;


declaration
: declaration_specifiers ';'
	  //for right now I'm just assuming no list, just a declator
	| declaration_specifiers init_declarator_list ';' 
{
  std::cout<<(*$1).specs;
  /*
   SymbolContent * sc = st.searchAll($2);
   if(sc == 0)
    {
      //make this an error later
      std::cout<<"Warning! trying to use a variable not declared"<<std::endl;
    }
  else
    {

    (*sc).specs = $1;
    std::cout<<$1;
    }
 
  */

}
	;

declaration_list
: declaration {$$ = $1;}
	| declaration_list declaration
	;

//these should all singnal that we're indecle mode
declaration_specifiers
: storage_class_specifier {
  /*
  if($1=="AUTO")
    {
      $$ |= xAUTO;
    }
  else if($1 == "REGISTER")
    {
      $$ |= xREGISTER;
    }
  else if($1 ==  "STATIC")
    {
      $$ |= xSTATIC;
    }
  else if($1 == "EXTERN")
    {
      $$ |= xEXTERN;
    }
  else if($1 ==  "TYPEDEF")
    {   
      $$ |= xTYPEDEF;
    }
  */}
| storage_class_specifier declaration_specifiers
{/*
  $$ = $2;
  if($1=="AUTO")
    {
      $$ |= xAUTO;
    }
  else if($1 == "REGISTER")
    {
      $$ |= xREGISTER;
    }
  else if($1 ==  "STATIC")
    {
      $$ |= xREGISTER;
    }
  else if($1 == "EXTERN")
    {
      $$ |= xEXTERN;
    }
  else if($1 ==  "TYPEDEF")
    {   
      $$ |= xTYPEDEF;
    }
 */
}
| type_specifier
{/*
  $$ = 0;
  std::cout<<$$<<std::endl;
  if($1 == "VOID")
    {
      $$ |= xVOID;
    }
  else if($1 == "CHAR")
    {
      $$ |= xCHAR;
    }
  else if($1 == "SHORT")
    {
      $$ |= xSHORT;
    }
  else if($1 == "INT")
    {
      std::cout<<"y homes!\n";
      std::cout<<$$<<std::endl;
      $$ |= xINT;
      std::cout<<$$<<std::endl;
      }
  else if($1 == "LONG")
    {
      $$ |= xLONG;
    }
  else if($1 == "FLOAT")
    {
      $$ |= xFLOAT;
    }
  else if($1 == "DOUBLE")
    {
      $$ |= xDOUBLE;
    }
  else if($1 == "SIGNED")
    {
      $$  |= xSIGNED;
    }
  else if($1 == "UNSIGNED")
    {
      $$ |= xUNSIGNED; 
    }
  else if($1 == "STRUCT")
    {
      $$ |= xSTRUCT;
    }
  else if($1 == "UNION" )
    {
      $$ |= xUNION;
    }
  else if($1 ==  "ENUM")
    {
      $$  |= xENUM;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      $$ |=  xTYPEDEF_NAME;
      }*/
}
| type_specifier declaration_specifiers 
{/*
     $$ = $2;
 if($1 == "VOID")
    {
      $$ |= xVOID;
    }
  else if($1 == "CHAR")
    {
      $$ |= xCHAR;
    }
  else if($1 == "SHORT")
    {
      $$ |= xSHORT;
    }
  else if($1 == "INT")
    {
      $$ |= xINT;
    }
  else if($1 == "LONG")
    {
      $$ |= xLONG;
    }
  else if($1 == "FLOAT")
    {
      $$ |= xFLOAT;
    }
  else if($1 == "DOUBLE")
    {
      $$ |= xDOUBLE;
    }
  else if($1 == "SIGNED")
    {
      $$  |= xSIGNED;
    }
  else if($1 == "UNSIGNED")
    {
      $$ |= xUNSIGNED; 
    }
  else if($1 == "STRUCT")
    {
      $$ |= xSTRUCT;
    }
  else if($1 == "UNION" )
    {
      $$ |= xUNION;
    }
  else if($1 ==  "ENUM")
    {
      $$  |= xENUM;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      $$ |=  xTYPEDEF_NAME;
    }
 */}
| type_qualifier
{
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
| type_qualifier declaration_specifiers
{
  /*
  $$ = $2;
  if($1 == "CONST")
    {
      $$  |= xCONST;
    }
  else if($1 == "VOLATILE")
    {
      $$ |= xVOLATILE;
      }*/

}
	;

storage_class_specifier
: AUTO {declMode = true; $$ = "AUTO";}
| REGISTER {declMode = true; $$ = "REGISTER";}
| STATIC {declMode = true; $$ = "STATIC";}
| EXTERN {declMode = true;$$ = "EXTERN";}
| TYPEDEF {declMode = true;$$ = "TYPEDEF";}
	;

type_specifier
: VOID {declMode = true; $$ = "VOID";}
| CHAR {declMode = true; $$ = "CHAR";}
| SHORT {declMode = true; $$ = "SHORT";}
| INT {declMode = true; $$ = "INT";}
| LONG {declMode = true; $$ = "LONG";}
| FLOAT {declMode = true; $$ = "FLOAT";}
| DOUBLE {declMode = true; $$ = "DOUBLE";}
| SIGNED {declMode = true; $$ = "SIGNED";}
| UNSIGNED {declMode = true; $$ = "UNSIGNED";}
//this \/ I'm not so sure about
| struct_or_union_specifier {declMode = true; $$ = "NEED TO FIGURE OUT";}
| enum_specifier {declMode = true; $$ = "Same!";}
| TYPEDEF_NAME {declMode = true; $$ = "TYPEDEF_NAME";}
	;

type_qualifier
: CONST {declMode = true; $$ = "CONST";}
| VOLATILE {declMode = true; $$ = "VOLATILE";}
	;


//right now we're not worried about this
struct_or_union_specifier
	: struct_or_union identifier '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union identifier
	;

struct_or_union
: STRUCT {$$ = "STRUCT";}
| UNION {$$ = "UNION";}
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

//I'll worry about lists of declators later
init_declarator_list
: init_declarator {$$ = $1;}
| init_declarator_list ',' init_declarator {$$ = $3;}
	;

//all declators assignment should set declMode to false
init_declarator
: declarator {$$ = $1 ;}
| declarator '='{declMode = false;} initializer {$$ = $1;}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier
	| type_specifier specifier_qualifier_list
	| type_qualifier
	| type_qualifier specifier_qualifier_list
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM identifier '{' enumerator_list '}'
	| ENUM identifier
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: identifier
	| identifier '='{declMode = false;} constant_expression
	;


//for this second, not worried about pointers.. figure out later
declarator
: direct_declarator {$$ = $1;}
| pointer direct_declarator {
  declNode dn = *$2;
  dn.specs |= xPOINTER;
  $$ = &dn;
 }
	;

//for now I'm just passing up the id string
direct_declarator
: identifier { 
  $$ = $1;
 } 
| '(' declarator ')' {
  $$ = $2;}//not quite sure what this is for
//array
| direct_declarator '[' ']' {
  declNode dn = *$1;
  dn.specs |= xARRAY;
  $$=&dn;}
//array
| direct_declarator '[' constant_expression ']' { 
  declNode dn = *$1;
  dn.specs |= xARRAY;
  $$=&dn;}
| direct_declarator '('')' { 
  declNode dn = *$1;
  dn.specs |= xFUNCTION;
  $$=&dn;
st.push();}//though empty all funcs wil pop 2x
| direct_declarator '('{st.push();} parameter_type_list ')' 
{
 declNode dn = *$1;
 dn.specs |= xFUNCTION;
 $$=&dn;
}
| direct_declarator '(' identifier_list ')' 
{
  declNode dn = *$1;
  dn.specs |= xFUNCTION;
  $$=&dn;
}
	;

pointer
: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	| declaration_specifiers abstract_declarator
	;

identifier_list
: identifier {$$ = $1;}
| identifier_list ',' identifier
{
  declNode dn = *$1;
  dn.next = $3;
  $$ = &dn;
}
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

statement
	: labeled_statement
	| {st.push();}compound_statement {st.pop();}
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: identifier ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

expression_statement
	: ';'
	| expression ';'
	;

compound_statement
: '{' '}'
| '{'statement_list '}'
| '{' declaration_list '}'
| '{' declaration_list statement_list '}'
	;

statement_list
	: statement
	| statement_list statement
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' ';' ';' ')' statement
	| FOR '(' ';' ';' expression ')' statement
	| FOR '(' ';' expression ';' ')' statement
	| FOR '(' ';' expression ';' expression ')' statement
	| FOR '(' expression ';' ';' ')' statement
	| FOR '(' expression ';' ';' expression ')' statement
	| FOR '(' expression ';' expression ';' ')' statement
	| FOR '(' expression ';' expression ';' expression ')' statement
	;

jump_statement
	: GOTO identifier ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

 /*all of these should turn decl mode off*/
assignment_operator
: '=' {declMode = false;}
        | MUL_ASSIGN {declMode = false;}
        | DIV_ASSIGN {declMode = false;}
        | MOD_ASSIGN {declMode = false;}
	| ADD_ASSIGN {declMode = false;}
	| SUB_ASSIGN {declMode = false;}
	| LEFT_ASSIGN {declMode = false;}
	| RIGHT_ASSIGN {declMode = false;}
	| AND_ASSIGN {declMode = false;}
	| XOR_ASSIGN {declMode = false;}
	| OR_ASSIGN {declMode = false;}
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

constant_expression
	: conditional_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' identifier
	| postfix_expression PTR_OP identifier
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

primary_expression
	: identifier
	| constant
	| string
	| '(' expression ')'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

constant
	: INTEGER_CONSTANT
	| CHARACTER_CONSTANT
	| FLOATING_CONSTANT
	| ENUMERATION_CONSTANT
	;

string
	: STRING_LITERAL
	;

identifier 
: IDENTIFIER {
  declNode dn;
  dn.id = $1;
  $$ = &dn;
 }
  ;
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
