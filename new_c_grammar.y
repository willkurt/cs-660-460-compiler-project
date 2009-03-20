%{
#include "c_grammar.h"
#include <stdio.h>
  /* #include "SymbolTable.hpp" */
extern bool parseDebug;
extern std::ofstream parseDebugOut;
 %}


%token IDENTIFIER 
%token INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT ENUMERATION_CONSTANT 
%token STRING_LITERAL 
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

%start translation_unit
%%

translation_unit
	 :  external_declaration
 {if(parseDebug)
{parseDebugOut << "translation_unit <- external_declaration\n";}}
	 |  translation_unit external_declaration
 {if(parseDebug){parseDebugOut << "translation_unit <- translation_unit external_declaration\n";}}	;

external_declaration
	 :  function_definition
 {if(parseDebug)
{parseDebugOut << "external_declaration <- function_definition\n";}}
	 |  declaration
 {if(parseDebug){parseDebugOut << "external_declaration <- declaration\n";}}	;

function_definition
	 :  declarator compound_statement
 {if(parseDebug)
{parseDebugOut << "function_definition <- declarator compound_statement\n";}}
	 |  declarator declaration_list compound_statement
 {if(parseDebug){parseDebugOut << "function_definition <- declarator declaration_list compound_statement\n";}}	 |  declaration_specifiers declarator compound_statement
 {if(parseDebug){parseDebugOut << "function_definition <- declaration_specifiers declarator compound_statement\n";}}	 |  declaration_specifiers declarator declaration_list compound_statement
 {if(parseDebug){parseDebugOut << "function_definition <- declaration_specifiers declarator declaration_list compound_statement\n";}}	;

declaration
	 :  declaration_specifiers ';'
 {if(parseDebug)
{parseDebugOut << "declaration <- declaration_specifiers ';'\n";}}
	 |  declaration_specifiers init_declarator_list ';'
 {if(parseDebug){parseDebugOut << "declaration <- declaration_specifiers init_declarator_list ';'\n";}}	;

declaration_list
	 :  declaration
 {if(parseDebug)
{parseDebugOut << "declaration_list <- declaration\n";}}
	 |  declaration_list declaration
 {if(parseDebug){parseDebugOut << "declaration_list <- declaration_list declaration\n";}}	;

declaration_specifiers
	 :  storage_class_specifier
 {if(parseDebug)
{parseDebugOut << "declaration_specifiers <- storage_class_specifier\n";}}
	 |  storage_class_specifier declaration_specifiers
 {if(parseDebug){parseDebugOut << "declaration_specifiers <- storage_class_specifier declaration_specifiers\n";}}	 |  type_specifier
 {if(parseDebug){parseDebugOut << "declaration_specifiers <- type_specifier\n";}}	 |  type_specifier declaration_specifiers
 {if(parseDebug){parseDebugOut << "declaration_specifiers <- type_specifier declaration_specifiers\n";}}	 |  type_qualifier 
 {if(parseDebug){parseDebugOut << "declaration_specifiers <- type_qualifier\n";}}	 |  type_qualifier declaration_specifiers
 {if(parseDebug){parseDebugOut << "declaration_specifiers <- type_qualifier declaration_specifiers\n";}}	;

storage_class_specifier
	 :  AUTO
 {if(parseDebug)
{parseDebugOut << "storage_class_specifier <- AUTO\n";}}
	 |  REGISTER
 {if(parseDebug){parseDebugOut << "storage_class_specifier <- REGISTER\n";}}	 |  STATIC
 {if(parseDebug){parseDebugOut << "storage_class_specifier <- STATIC\n";}}	 |  EXTERN
 {if(parseDebug){parseDebugOut << "storage_class_specifier <- EXTERN\n";}}	 |  TYPEDEF
 {if(parseDebug){parseDebugOut << "storage_class_specifier <- TYPEDEF\n";}}	;

type_specifier
	 :  VOID
 {if(parseDebug)
{parseDebugOut << "type_specifier <- VOID\n";}}
	 |  CHAR
 {if(parseDebug){parseDebugOut << "type_specifier <- CHAR\n";}}	 |  SHORT
 {if(parseDebug){parseDebugOut << "type_specifier <- SHORT\n";}}	 |  INT
 {if(parseDebug){parseDebugOut << "type_specifier <- INT\n";}}	 |  LONG
 {if(parseDebug){parseDebugOut << "type_specifier <- LONG\n";}}	 |  FLOAT 
 {if(parseDebug){parseDebugOut << "type_specifier <- FLOAT\n";}}	 |  DOUBLE
 {if(parseDebug){parseDebugOut << "type_specifier <- DOUBLE\n";}}	 |  SIGNED
 {if(parseDebug){parseDebugOut << "type_specifier <- SIGNED\n";}}	 |  UNSIGNED
 {if(parseDebug){parseDebugOut << "type_specifier <- UNSIGNED\n";}}	 |  struct_or_union_specifier
 {if(parseDebug){parseDebugOut << "type_specifier <- struct_or_union_specifier\n";}}	 |  enum_specifier
 {if(parseDebug){parseDebugOut << "type_specifier <- enum_specifier\n";}}	 |  TYPEDEF_NAME
 {if(parseDebug){parseDebugOut << "type_specifier <- TYPEDEF_NAME\n";}}	;

type_qualifier
	 :  CONST
 {if(parseDebug)
{parseDebugOut << "type_qualifier <- CONST\n";}}
	 |  VOLATILE
 {if(parseDebug){parseDebugOut << "type_qualifier <- VOLATILE\n";}}	;

struct_or_union_specifier
	 :  struct_or_union identifier '{' struct_declaration_list '}'
 {if(parseDebug)
{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier '{' struct_declaration_list '}'\n";}}
	 |  struct_or_union '{' struct_declaration_list '}'
 {if(parseDebug){parseDebugOut << "struct_or_union_specifier <- struct_or_union '{' struct_declaration_list '}'\n";}}	 |  struct_or_union identifier
 {if(parseDebug){parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier\n";}}	;

struct_or_union
	 :  STRUCT
 {if(parseDebug)
{parseDebugOut << "struct_or_union <- STRUCT\n";}}
	 |  UNION
 {if(parseDebug){parseDebugOut << "struct_or_union <- UNION\n";}}	;

struct_declaration_list
	 :  struct_declaration
 {if(parseDebug)
{parseDebugOut << "struct_declaration_list <- struct_declaration\n";}}
	 |  struct_declaration_list struct_declaration
 {if(parseDebug){parseDebugOut << "struct_declaration_list <- struct_declaration_list struct_declaration\n";}}	;

init_declarator_list
	 :  init_declarator
 {if(parseDebug)
{parseDebugOut << "init_declarator_list <- init_declarator\n";}}
	 |  init_declarator_list ',' init_declarator
 {if(parseDebug){parseDebugOut << "init_declarator_list <- init_declarator_list ',' init_declarator\n";}}	;

init_declarator
	 :  declarator
 {if(parseDebug)
{parseDebugOut << "init_declarator <- declarator\n";}}
	 |  declarator '=' initializer
 {if(parseDebug){parseDebugOut << "init_declarator <- declarator '=' initializer\n";}}	;

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
 {if(parseDebug){parseDebugOut << "specifier_qualifier_list <- type_specifier specifier_qualifier_list\n";}}	 |  type_qualifier
 {if(parseDebug){parseDebugOut << "specifier_qualifier_list <- type_qualifier\n";}}	 |  type_qualifier specifier_qualifier_list
 {if(parseDebug){parseDebugOut << "specifier_qualifier_list <- type_qualifier specifier_qualifier_list\n";}}	;

struct_declarator_list
	 :  struct_declarator
 {if(parseDebug)
{parseDebugOut << "struct_declarator_list <- struct_declarator\n";}}
	 |  struct_declarator_list ',' struct_declarator
 {if(parseDebug){parseDebugOut << "struct_declarator_list <- struct_declarator_list ',' struct_declarator\n";}}	;

struct_declarator
	 :  declarator
 {if(parseDebug)
{parseDebugOut << "struct_declarator <- declarator\n";}}
	 |  ':' constant_expression
 {if(parseDebug){parseDebugOut << "struct_declarator <- ':' constant_expression\n";}}	 |  declarator ':' constant_expression
 {if(parseDebug){parseDebugOut << "struct_declarator <- declarator ':' constant_expression\n";}}	;

enum_specifier
	 :  ENUM '{' enumerator_list '}'
 {if(parseDebug)
{parseDebugOut << "enum_specifier <- ENUM '{' enumerator_list '}'\n";}}
	 |  ENUM identifier '{' enumerator_list '}'
 {if(parseDebug){parseDebugOut << "enum_specifier <- ENUM identifier '{' enumerator_list '}'\n";}}	 |  ENUM identifier
 {if(parseDebug){parseDebugOut << "enum_specifier <- ENUM identifier\n";}}	;

enumerator_list
	 :  enumerator
 {if(parseDebug)
{parseDebugOut << "enumerator_list <- enumerator\n";}}
	 |  enumerator_list ',' enumerator
 {if(parseDebug){parseDebugOut << "enumerator_list <- enumerator_list ',' enumerator\n";}}	;

enumerator
	 :  identifier
 {if(parseDebug)
{parseDebugOut << "enumerator <- identifier\n";}}
	 |  identifier '=' constant_expression
 {if(parseDebug){parseDebugOut << "enumerator <- identifier '=' constant_expression\n";}}	;

declarator
	 :  direct_declarator
 {if(parseDebug)
{parseDebugOut << "declarator <- direct_declarator\n";}}
	 |  pointer direct_declarator
 {if(parseDebug){parseDebugOut << "declarator <- pointer direct_declarator\n";}}	;

direct_declarator
	 :  identifier
 {if(parseDebug)
{parseDebugOut << "direct_declarator <- identifier\n";}}
	 |  '(' declarator ')'
 {if(parseDebug){parseDebugOut << "direct_declarator <- '(' declarator ')'\n";}}	 |  direct_declarator '[' ']'
 {if(parseDebug){parseDebugOut << "direct_declarator <- direct_declarator '[' ']'\n";}}	 |  direct_declarator '[' constant_expression ']'
 {if(parseDebug){parseDebugOut << "direct_declarator <- direct_declarator '[' constant_expression ']'\n";}}	 |  direct_declarator '(' ')'
 {if(parseDebug){parseDebugOut << "direct_declarator <- direct_declarator '(' ')'\n";}}	 |  direct_declarator '(' parameter_type_list ')'
 {if(parseDebug){parseDebugOut << "direct_declarator <- direct_declarator '(' parameter_type_list ')'\n";}}	 |  direct_declarator '(' identifier_list ')'
 {if(parseDebug){parseDebugOut << "direct_declarator <- direct_declarator '(' identifier_list ')'\n";}}	;

pointer
	 :  '*'
 {if(parseDebug)
{parseDebugOut << "pointer <- '*'\n";}}
	 |  '*' type_qualifier_list
 {if(parseDebug){parseDebugOut << "pointer <- '*' type_qualifier_list\n";}}	 |  '*' pointer
 {if(parseDebug){parseDebugOut << "pointer <- '*' pointer\n";}}	 |  '*' type_qualifier_list pointer
 {if(parseDebug){parseDebugOut << "pointer <- '*' type_qualifier_list pointer\n";}}	;

type_qualifier_list
	 :  type_qualifier
 {if(parseDebug)
{parseDebugOut << "type_qualifier_list <- type_qualifier\n";}}
	 |  type_qualifier_list type_qualifier
 {if(parseDebug){parseDebugOut << "type_qualifier_list <- type_qualifier_list type_qualifier\n";}}	;

parameter_type_list
	 :  parameter_list
 {if(parseDebug)
{parseDebugOut << "parameter_type_list <- parameter_list\n";}}
	 |  parameter_list ',' ELIPSIS
 {if(parseDebug){parseDebugOut << "parameter_type_list <- parameter_list ',' ELIPSIS\n";}}	;

parameter_list
	 :  parameter_declaration
 {if(parseDebug)
{parseDebugOut << "parameter_list <- parameter_declaration\n";}}
	 |  parameter_list ',' parameter_declaration
 {if(parseDebug){parseDebugOut << "parameter_list <- parameter_list ',' parameter_declaration\n";}}	;

parameter_declaration
	 :  declaration_specifiers declarator
 {if(parseDebug)
{parseDebugOut << "parameter_declaration <- declaration_specifiers declarator\n";}}
	 |  declaration_specifiers
 {if(parseDebug){parseDebugOut << "parameter_declaration <- declaration_specifiers\n";}}	 |  declaration_specifiers abstract_declarator
 {if(parseDebug){parseDebugOut << "parameter_declaration <- declaration_specifiers abstract_declarator\n";}}	;

identifier_list
	 :  identifier
 {if(parseDebug)
{parseDebugOut << "identifier_list <- identifier\n";}}
	 |  identifier_list ',' identifier
 {if(parseDebug){parseDebugOut << "identifier_list <- identifier_list ',' identifier\n";}}	;

initializer
	 :  assignment_expression
 {if(parseDebug)
{parseDebugOut << "initializer <- assignment_expression\n";}}
	 |  '{' initializer_list '}'
 {if(parseDebug){parseDebugOut << "initializer <- '{' initializer_list '}'\n";}}	 |  '{' initializer_list ',' '}'
 {if(parseDebug){parseDebugOut << "initializer <- '{' initializer_list ',' '}'\n";}}	;

initializer_list
	 :  initializer
 {if(parseDebug)
{parseDebugOut << "initializer_list <- initializer\n";}}
	 |  initializer_list ',' initializer
 {if(parseDebug){parseDebugOut << "initializer_list <- initializer_list ',' initializer\n";}}	;

type_name
	 :  specifier_qualifier_list
 {if(parseDebug)
{parseDebugOut << "type_name <- specifier_qualifier_list\n";}}
	 |  specifier_qualifier_list abstract_declarator
 {if(parseDebug){parseDebugOut << "type_name <- specifier_qualifier_list abstract_declarator\n";}}	;

abstract_declarator
	 :  pointer
 {if(parseDebug)
{parseDebugOut << "abstract_declarator <- pointer\n";}}
	 |  direct_abstract_declarator
 {if(parseDebug){parseDebugOut << "abstract_declarator <- direct_abstract_declarator\n";}}	 |  pointer direct_abstract_declarator
 {if(parseDebug){parseDebugOut << "abstract_declarator <- pointer direct_abstract_declarator\n";}}	;

direct_abstract_declarator
	 :  '(' abstract_declarator ')'
 {if(parseDebug)
{parseDebugOut << "direct_abstract_declarator <- '(' abstract_declarator ')'\n";}}
	 |  '[' ']'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- '[' ']'\n";}}	 |  '[' constant_expression ']'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- '[' constant_expression ']'\n";}}	 |  direct_abstract_declarator '[' ']'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' ']'\n";}}	 |  direct_abstract_declarator '[' constant_expression ']'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' constant_expression ']'\n";}}	 |  '(' ')'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- '(' ')'\n";}}	 |  '(' parameter_type_list ')'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- '(' parameter_type_list ')'\n";}}	 |  direct_abstract_declarator '(' ')'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' ')'\n";}}	 |  direct_abstract_declarator '(' parameter_type_list ')'
 {if(parseDebug){parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' parameter_type_list ')'\n";}}	;

statement
	 :  labeled_statement
 {if(parseDebug)
{parseDebugOut << "statement <- labeled_statement\n";}}
	 |  compound_statement
 {if(parseDebug){parseDebugOut << "statement <- compound_statement\n";}}	 |  expression_statement
 {if(parseDebug){parseDebugOut << "statement <- expression_statement\n";}}	 |  selection_statement
 {if(parseDebug){parseDebugOut << "statement <- selection_statement\n";}}	 |  iteration_statement
 {if(parseDebug){parseDebugOut << "statement <- iteration_statement\n";}}	 |  jump_statement
 {if(parseDebug){parseDebugOut << "statement <- jump_statement\n";}}	;

labeled_statement
	 :  identifier ':' statement
 {if(parseDebug)
{parseDebugOut << "labeled_statement <- identifier ':' statement\n";}}
	 |  CASE constant_expression ':' statement
 {if(parseDebug){parseDebugOut << "labeled_statement <- CASE constant_expression ':' statement\n";}}	 |  DEFAULT ':' statement
 {if(parseDebug){parseDebugOut << "labeled_statement <- DEFAULT ':' statement\n";}}	;

expression_statement
	 :  ';'
 {if(parseDebug)
{parseDebugOut << "expression_statement <- ';'\n";}}
	 |  expression ';'
 {if(parseDebug){parseDebugOut << "expression_statement <- expression ';'\n";}}	;

compound_statement
	 :  '{' '}'
 {if(parseDebug)
{parseDebugOut << "compound_statement <- '{' '}'\n";}}
	 |  '{' statement_list '}'
 {if(parseDebug){parseDebugOut << "compound_statement <- '{' statement_list '}'\n";}}	 |  '{' declaration_list '}'
 {if(parseDebug){parseDebugOut << "compound_statement <- '{' declaration_list '}'\n";}}	 |  '{' declaration_list statement_list '}'
 {if(parseDebug){parseDebugOut << "compound_statement <- '{' declaration_list statement_list '}'\n";}}	;

statement_list
	 :  statement
 {if(parseDebug)
{parseDebugOut << "statement_list <- statement\n";}}
	 |  statement_list statement
 {if(parseDebug){parseDebugOut << "statement_list <- statement_list statement\n";}}	;

selection_statement
	 :  IF '(' expression ')' statement
 {if(parseDebug)
{parseDebugOut << "selection_statement <- IF '(' expression ')' statement\n";}}
	 |  IF '(' expression ')' statement ELSE statement
 {if(parseDebug){parseDebugOut << "selection_statement <- IF '(' expression ')' statement ELSE statement\n";}}	 |  SWITCH '(' expression ')' statement
 {if(parseDebug){parseDebugOut << "selection_statement <- SWITCH '(' expression ')' statement\n";}}	;

iteration_statement
	 :  WHILE '(' expression ')' statement
 {if(parseDebug)
{parseDebugOut << "iteration_statement <- WHILE '(' expression ')' statement\n";}}
	 |  DO statement WHILE '(' expression ')' ';'
 {if(parseDebug){parseDebugOut << "iteration_statement <- DO statement WHILE '(' expression ')' ';'\n";}}	 |  FOR '(' ';' ';' ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' ';' ';' ')' statement\n";}}	 |  FOR '(' ';' ';' expression ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' ';' ';' expression ')' statement\n";}}	 |  FOR '(' ';' expression ';' ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' ')' statement\n";}}	 |  FOR '(' ';' expression ';' expression ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' expression ')' statement\n";}}	 |  FOR '(' expression ';' ';' ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' ')' statement\n";}}	 |  FOR '(' expression ';' ';' expression ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' expression ')' statement\n";}}	 |  FOR '(' expression ';' expression ';' ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' ')' statement\n";}}	 |  FOR '(' expression ';' expression ';' expression ')' statement
 {if(parseDebug){parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' expression ')' statement\n";}}	;

jump_statement
	 :  GOTO identifier ';'
 {if(parseDebug)
{parseDebugOut << "jump_statement <- GOTO identifier ';'\n";}}
	 |  CONTINUE ';'
 {if(parseDebug){parseDebugOut << "jump_statement <- CONTINUE ';'\n";}}	 |  BREAK ';'
 {if(parseDebug){parseDebugOut << "jump_statement <- BREAK ';'\n";}}	 |  RETURN ';'
 {if(parseDebug){parseDebugOut << "jump_statement <- RETURN ';'\n";}}	 |  RETURN expression ';'
 {if(parseDebug){parseDebugOut << "jump_statement <- RETURN expression ';'\n";}}	;

expression
	 :  assignment_expression
 {if(parseDebug)
{parseDebugOut << "expression <- assignment_expression\n";}}
	 |  expression ',' assignment_expression
 {if(parseDebug){parseDebugOut << "expression <- expression ',' assignment_expression\n";}}	;

assignment_expression
	 :  conditional_expression
 {if(parseDebug)
{parseDebugOut << "assignment_expression <- conditional_expression\n";}}
	 |  unary_expression assignment_operator assignment_expression
 {if(parseDebug){parseDebugOut << "assignment_expression <- unary_expression assignment_operator assignment_expression\n";}}	;

assignment_operator
	 :  '='
 {if(parseDebug)
{parseDebugOut << "assignment_operator <- '='\n";}}
	 |  MUL_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- MUL_ASSIGN\n";}}	 |  DIV_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- DIV_ASSIGN\n";}}	 |  MOD_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- MOD_ASSIGN\n";}}	 |  ADD_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- ADD_ASSIGN\n";}}	 |  SUB_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- SUB_ASSIGN\n";}}	 |  LEFT_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- LEFT_ASSIGN\n";}}	 |  RIGHT_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- RIGHT_ASSIGN\n";}}	 |  AND_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- AND_ASSIGN\n";}}	 |  XOR_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- XOR_ASSIGN\n";}}	 |  OR_ASSIGN
 {if(parseDebug){parseDebugOut << "assignment_operator <- OR_ASSIGN\n";}}	;

conditional_expression
	 :  logical_or_expression
 {if(parseDebug)
{parseDebugOut << "conditional_expression <- logical_or_expression\n";}}
	 |  logical_or_expression '?' expression ':' conditional_expression
 {if(parseDebug){parseDebugOut << "conditional_expression <- logical_or_expression '?' expression ':' conditional_expression\n";}}	;

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
 {if(parseDebug){parseDebugOut << "logical_or_expression <- logical_or_expression OR_OP logical_and_expression\n";}}	;

logical_and_expression
	 :  inclusive_or_expression
 {if(parseDebug)
{parseDebugOut << "logical_and_expression <- inclusive_or_expression\n";}}
	 |  logical_and_expression AND_OP inclusive_or_expression
 {if(parseDebug){parseDebugOut << "logical_and_expression <- logical_and_expression AND_OP inclusive_or_expression\n";}}	;

inclusive_or_expression
	 :  exclusive_or_expression
 {if(parseDebug)
{parseDebugOut << "inclusive_or_expression <- exclusive_or_expression\n";}}
	 |  inclusive_or_expression '|' exclusive_or_expression
 {if(parseDebug){parseDebugOut << "inclusive_or_expression <- inclusive_or_expression '|' exclusive_or_expression\n";}}	;

exclusive_or_expression
	 :  and_expression
 {if(parseDebug)
{parseDebugOut << "exclusive_or_expression <- and_expression\n";}}
	 |  exclusive_or_expression '^' and_expression
 {if(parseDebug){parseDebugOut << "exclusive_or_expression <- exclusive_or_expression '^' and_expression\n";}}	;

and_expression
	 :  equality_expression
 {if(parseDebug)
{parseDebugOut << "and_expression <- equality_expression\n";}}
	 |  and_expression '&' equality_expression
 {if(parseDebug){parseDebugOut << "and_expression <- and_expression '&' equality_expression\n";}}	;

equality_expression
	 :  relational_expression
 {if(parseDebug)
{parseDebugOut << "equality_expression <- relational_expression\n";}}
	 |  equality_expression EQ_OP relational_expression
 {if(parseDebug){parseDebugOut << "equality_expression <- equality_expression EQ_OP relational_expression\n";}}	 |  equality_expression NE_OP relational_expression
 {if(parseDebug){parseDebugOut << "equality_expression <- equality_expression NE_OP relational_expression\n";}}	;

relational_expression
	 :  shift_expression
 {if(parseDebug)
{parseDebugOut << "relational_expression <- shift_expression\n";}}
	 |  relational_expression '<' shift_expression
 {if(parseDebug){parseDebugOut << "relational_expression <- relational_expression '<' shift_expression\n";}}	 |  relational_expression '>' shift_expression
 {if(parseDebug){parseDebugOut << "relational_expression <- relational_expression '>' shift_expression\n";}}	 |  relational_expression LE_OP shift_expression
 {if(parseDebug){parseDebugOut << "relational_expression <- relational_expression LE_OP shift_expression\n";}}	 |  relational_expression GE_OP shift_expression
 {if(parseDebug){parseDebugOut << "relational_expression <- relational_expression GE_OP shift_expression\n";}}	;

shift_expression
	 :  additive_expression
 {if(parseDebug)
{parseDebugOut << "shift_expression <- additive_expression\n";}}
	 |  shift_expression LEFT_OP additive_expression
 {if(parseDebug){parseDebugOut << "shift_expression <- shift_expression LEFT_OP additive_expression\n";}}	 |  shift_expression RIGHT_OP additive_expression
 {if(parseDebug){parseDebugOut << "shift_expression <- shift_expression RIGHT_OP additive_expression\n";}}	;

additive_expression
	 :  multiplicative_expression
 {if(parseDebug)
{parseDebugOut << "additive_expression <- multiplicative_expression\n";}}
	 |  additive_expression '+' multiplicative_expression
 {if(parseDebug){parseDebugOut << "additive_expression <- additive_expression '+' multiplicative_expression\n";}}	 |  additive_expression '-' multiplicative_expression
 {if(parseDebug){parseDebugOut << "additive_expression <- additive_expression '-' multiplicative_expression\n";}}	;

multiplicative_expression
	 :  cast_expression
 {if(parseDebug)
{parseDebugOut << "multiplicative_expression <- cast_expression\n";}}
	 |  multiplicative_expression '*' cast_expression
 {if(parseDebug){parseDebugOut << "multiplicative_expression <- multiplicative_expression '*' cast_expression\n";}}	 |  multiplicative_expression '/' cast_expression
 {if(parseDebug){parseDebugOut << "multiplicative_expression <- multiplicative_expression '/' cast_expression\n";}}	 |  multiplicative_expression '%' cast_expression
 {if(parseDebug){parseDebugOut << "multiplicative_expression <- multiplicative_expression '%' cast_expression\n";}}	;

cast_expression
	 :  unary_expression
 {if(parseDebug)
{parseDebugOut << "cast_expression <- unary_expression\n";}}
	 |  '(' type_name ')' cast_expression
 {if(parseDebug){parseDebugOut << "cast_expression <- '(' type_name ')' cast_expression\n";}}	;

unary_expression
	 :  postfix_expression
 {if(parseDebug)
{parseDebugOut << "unary_expression <- postfix_expression\n";}}
	 |  INC_OP unary_expression
 {if(parseDebug){parseDebugOut << "unary_expression <- INC_OP unary_expression\n";}}	 |  DEC_OP unary_expression
 {if(parseDebug){parseDebugOut << "unary_expression <- DEC_OP unary_expression\n";}}	 |  unary_operator cast_expression
 {if(parseDebug){parseDebugOut << "unary_expression <- unary_operator cast_expression\n";}}	 |  SIZEOF unary_expression
 {if(parseDebug){parseDebugOut << "unary_expression <- SIZEOF unary_expression\n";}}	 |  SIZEOF '(' type_name ')'
 {if(parseDebug){parseDebugOut << "unary_expression <- SIZEOF '(' type_name ')'\n";}}	;

unary_operator
	 :  '&'
 {if(parseDebug)
{parseDebugOut << "unary_operator <- '&'\n";}}
	 |  '*'
 {if(parseDebug){parseDebugOut << "unary_operator <- '*'\n";}}	 |  '+'
 {if(parseDebug){parseDebugOut << "unary_operator <- '+'\n";}}	 |  '-'
 {if(parseDebug){parseDebugOut << "unary_operator <- '-'\n";}}	 |  '~'
 {if(parseDebug){parseDebugOut << "unary_operator <- '~'\n";}}	 |  '!'
 {if(parseDebug){parseDebugOut << "unary_operator <- '!'\n";}}	;

postfix_expression
	 :  primary_expression
 {if(parseDebug)
{parseDebugOut << "postfix_expression <- primary_expression\n";}}
	 |  postfix_expression '[' expression ']'
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression '[' expression ']'\n";}}	 |  postfix_expression '(' ')'
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression '(' ')'\n";}}	 |  postfix_expression '(' argument_expression_list ')'
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression '(' argument_expression_list ')'\n";}}	 |  postfix_expression '.' identifier
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression '.' identifier\n";}}	 |  postfix_expression PTR_OP identifier
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression PTR_OP identifier\n";}}	 |  postfix_expression INC_OP
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression INC_OP\n";}}	 |  postfix_expression DEC_OP
 {if(parseDebug){parseDebugOut << "postfix_expression <- postfix_expression DEC_OP\n";}}	;

primary_expression
	 :  identifier
 {if(parseDebug)
{parseDebugOut << "primary_expression <- identifier\n";}}
	 |  constant
 {if(parseDebug){parseDebugOut << "primary_expression <- constant\n";}}	 |  string
 {if(parseDebug){parseDebugOut << "primary_expression <- string\n";}}	 |  '(' expression ')'
 {if(parseDebug){parseDebugOut << "primary_expression <- '(' expression ')'\n";}}	;

argument_expression_list
	 :  assignment_expression
 {if(parseDebug)
{parseDebugOut << "argument_expression_list <- assignment_expression\n";}}
	 |  argument_expression_list ',' assignment_expression
 {if(parseDebug){parseDebugOut << "argument_expression_list <- argument_expression_list ',' assignment_expression\n";}}	;

constant
	 :  INTEGER_CONSTANT
 {if(parseDebug)
{parseDebugOut << "constant <- INTEGER_CONSTANT\n";}}
	 |  CHARACTER_CONSTANT
 {if(parseDebug){parseDebugOut << "constant <- CHARACTER_CONSTANT\n";}}	 |  FLOATING_CONSTANT
 {if(parseDebug){parseDebugOut << "constant <- FLOATING_CONSTANT\n";}}	 |  ENUMERATION_CONSTANT
 {if(parseDebug){parseDebugOut << "constant <- ENUMERATION_CONSTANT\n";}}	;

string
	 :  STRING_LITERAL
 {if(parseDebug)
{parseDebugOut << "string <- STRING_LITERAL\n";}}
	;

identifier 
	 :  IDENTIFIER 
 {if(parseDebug)
{parseDebugOut << "identifier  <- IDENTIFIER\n";}}
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
