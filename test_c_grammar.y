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
 %}

%union{
  //consider making this a string pointer
  char* sval;
  float dval;
  int ival;
  char cval;
  /* barrayval is for all the possible specifies
     here is the key:
     * --storage
     * 0-AUTO
     * 1-REGISTER
     * 2-STATIC
     * 3-EXTERN
     * 4-TYPEDEF
     * --Types
     * 5-VOID
     * 6-CHAR
     * 7-SHORT
     * 8-INT
     * 9-LONG
     *10-FLOAT
     *11-DOUBLE
     *12-SIGNED
     *13-UNSIGNED
     *14-STRUCT
     *15-UNION
     *16-ENUM no idea what I'm doing with this!
     *17-TYPEDEF_NAME
     *---type qualifiers
     *18-CONST
     *19-VOLATILE
   */
  bool barrayval[20];
  std::list<std::string>* slistval;
  /*right now I don't know how to put structs in, so we'll fake it*/
  SymbolContent* scptrval;
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


%type <sval> identifier
%type <sval> type_specifier storage_class_specifier
%type <sval> type_qualifier struct_or_union

%type <barrayval> declaration_specifiers

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

function_definition
	: declarator compound_statement
	| declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declaration_specifiers declarator declaration_list compound_statement
	;


declaration
        : declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

//these should all singnal that we're indecle mode
declaration_specifiers
: storage_class_specifier {
  std::cout<<"SCS HERE YO!"<<std::endl;
  if($1=="AUTO")
    {
      $$[0] = true;
    }
  else if($1 == "REGISTER")
    {
      $$[1] = true;
    }
  else if($1 ==  "STATIC")
    {
      $$[2] = true;
    }
  else if($1 == "EXTERN")
    {
      $$[3] = true;
    }
  else if($1 ==  "TYPEDEF")
    {   
      $$[4] = true;
    }
}
| storage_class_specifier declaration_specifiers
{

  int asize = sizeof($$)/sizeof($$[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      $$[i] = $2[i];
    }
  if($1=="AUTO")
    {
      $$[0] = true;
    }
  else if($1 == "REGISTER")
    {
      $$[1] = true;
    }
  else if($1 ==  "STATIC")
    {
      $$[2] = true;
    }
  else if($1 == "EXTERN")
    {
      $$[3] = true;
    }
  else if($1 ==  "TYPEDEF")
    {   
      $$[4] = true;
    }
  std::cout<<"this should be 11-> "<<$$[0]<<$$[8]<<std::endl;
}
| type_specifier
{std::cout<<"YO TS HERE!\n";
  if($1 == "VOID")
    {
      $$[5] = true;
    }
  else if($1 == "CHAR")
    {
      $$[6] = true;
    }
  else if($1 == "SHORT")
    {
      $$[7] = true;
    }
  else if($1 == "INT")
    {
      $$[8] = true;
    }
  else if($1 == "LONG")
    {
      $$[9] = true;
    }
  else if($1 == "FLOAT")
    {
      $$[10] = true;
    }
  else if($1 == "DOUBLE")
    {
      $$[11] = true;
    }
  else if($1 == "SIGNED")
    {
      $$[12] = true;
    }
  else if($1 == "UNSIGNED")
    {
      $$[13] = true; 
    }
  else if($1 == "STRUCT")
    {
      $$[14] = true;
    }
  else if($1 == "UNION" )
    {
      $$[15] = true;
    }
  else if($1 ==  "ENUM")
    {
      $$[16] = true;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      $$[17] =  true;
    }
}
| type_specifier declaration_specifiers 
{
  int asize = sizeof($$)/sizeof($$[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      $$[i] = $2[i];
    }
 if($1 == "VOID")
    {
      $$[5] = true;
    }
  else if($1 == "CHAR")
    {
      $$[6] = true;
    }
  else if($1 == "SHORT")
    {
      $$[7] = true;
    }
  else if($1 == "INT")
    {
      $$[8] = true;
    }
  else if($1 == "LONG")
    {
      $$[9] = true;
    }
  else if($1 == "FLOAT")
    {
      $$[10] = true;
    }
  else if($1 == "DOUBLE")
    {
      $$[11] = true;
    }
  else if($1 == "SIGNED")
    {
      $$[12] = true;
    }
  else if($1 == "UNSIGNED")
    {
      $$[13] = true; 
    }
  else if($1 == "STRUCT")
    {
      $$[14] = true;
    }
  else if($1 == "UNION" )
    {
      $$[15] = true;
    }
  else if($1 ==  "ENUM")
    {
      $$[16] = true;
    }
  else if($1 == "TYPEDEF_NAME")
    {
      $$[17] =  true;
    }
}
| type_qualifier
{
  if($1 == "CONST")
    {
      $$[18] = true;
    }
  else if($1 == "VOLATILE")
    {
      $$[19] = true;
    }

}
| type_qualifier declaration_specifiers
{
  int asize = sizeof($$)/sizeof($$[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      $$[i] = $2[i];
    }
 if($1 == "CONST")
    {
      $$[18] = true;
    }
  else if($1 == "VOLATILE")
    {
      $$[19] = true;
    }

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

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

//all declators assiment should set declMode to false
init_declarator
	: declarator
	| declarator '='{declMode = false;} initializer
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

declarator
	: direct_declarator
	| pointer direct_declarator
	;

direct_declarator
	: identifier
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '(' ')'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
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
	: identifier
	| identifier_list ',' identifier
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
	| compound_statement
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
	| '{' statement_list '}'
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
: IDENTIFIER {$$ = $1;}
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
