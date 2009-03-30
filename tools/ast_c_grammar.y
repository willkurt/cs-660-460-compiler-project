%{
#include "c_grammar.h"
#include "ast_structs.h"
#include <stdio.h>
  /* #include "SymbolTable.hpp" */
extern bool parseDebug;
extern std::ofstream parseDebugOut;
 %}

%union{
  char* sval;
  float dval;
  int ival;
  long lval;
  char cval;
  struct declNode *declval;

  /* auto generated vals */
struct translation_unit_node *translation_unit_val;
struct external_declaration_node *external_declaration_val;
struct function_definition_node *function_definition_val;
struct declaration_node *declaration_val;
struct declaration_list_node *declaration_list_val;
struct declaration_specifiers_node *declaration_specifiers_val;
struct storage_class_specifier_node *storage_class_specifier_val;
struct type_specifier_node *type_specifier_val;
struct type_qualifier_node *type_qualifier_val;
struct struct_or_union_specifier_node *struct_or_union_specifier_val;
struct struct_or_union_node *struct_or_union_val;
struct struct_declaration_list_node *struct_declaration_list_val;
struct init_declarator_list_node *init_declarator_list_val;
struct init_declarator_node *init_declarator_val;
struct struct_declaration_node *struct_declaration_val;
struct specifier_qualifier_list_node *specifier_qualifier_list_val;
struct struct_declarator_list_node *struct_declarator_list_val;
struct struct_declarator_node *struct_declarator_val;
struct enum_specifier_node *enum_specifier_val;
struct enumerator_list_node *enumerator_list_val;
struct enumerator_node *enumerator_val;
struct declarator_node *declarator_val;
struct direct_declarator_node *direct_declarator_val;
struct pointer_node *pointer_val;
struct type_qualifier_list_node *type_qualifier_list_val;
struct parameter_type_list_node *parameter_type_list_val;
struct parameter_list_node *parameter_list_val;
struct parameter_declaration_node *parameter_declaration_val;
struct identifier_list_node *identifier_list_val;
struct initializer_node *initializer_val;
struct initializer_list_node *initializer_list_val;
struct type_name_node *type_name_val;
struct abstract_declarator_node *abstract_declarator_val;
struct direct_abstract_declarator_node *direct_abstract_declarator_val;
struct statement_node *statement_val;
struct labeled_statement_node *labeled_statement_val;
struct expression_statement_node *expression_statement_val;
struct compound_statement_node *compound_statement_val;
struct statement_list_node *statement_list_val;
struct selection_statement_node *selection_statement_val;
struct iteration_statement_node *iteration_statement_val;
struct jump_statement_node *jump_statement_val;
struct expression_node *expression_val;
struct assignment_expression_node *assignment_expression_val;
struct assignment_operator_node *assignment_operator_val;
struct conditional_expression_node *conditional_expression_val;
struct constant_expression_node *constant_expression_val;
struct logical_or_expression_node *logical_or_expression_val;
struct logical_and_expression_node *logical_and_expression_val;
struct inclusive_or_expression_node *inclusive_or_expression_val;
struct exclusive_or_expression_node *exclusive_or_expression_val;
struct and_expression_node *and_expression_val;
struct equality_expression_node *equality_expression_val;
struct relational_expression_node *relational_expression_val;
struct shift_expression_node *shift_expression_val;
struct additive_expression_node *additive_expression_val;
struct multiplicative_expression_node *multiplicative_expression_val;
struct cast_expression_node *cast_expression_val;
struct unary_expression_node *unary_expression_val;
struct unary_operator_node *unary_operator_val;
struct postfix_expression_node *postfix_expression_val;
struct primary_expression_node *primary_expression_val;
struct argument_expression_list_node *argument_expression_list_val;
struct constant_node *constant_val;
struct string_node *string_val;
struct identifier_node *identifier_val;

 }


%token <ival> IDENTIFIER 
%token <ival> INTEGER_CONSTANT FLOATING_CONSTANT CHARACTER_CONSTANT ENUMERATION_CONSTANT 
%token <ival> STRING_LITERAL 
%token <ival> SIZEOF
%token <ival> PTR_OP 
%token <ival> INC_OP DEC_OP 
%token <ival> LEFT_OP RIGHT_OP 
%token <ival> LE_OP GE_OP EQ_OP NE_OP
%token <ival> AND_OP OR_OP 
%token <ival> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN 
%token <ival> LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN 
%token <ival> TYPEDEF_NAME

%token <ival> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <ival> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <ival> STRUCT UNION ENUM ELIPSIS RANGE

%token <ival> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN


 /*autogen types*/


%type <translation_unit_val> translation_unit
%type <external_declaration_val> external_declaration
%type <function_definition_val> function_definition
%type <declaration_val> declaration
%type <declaration_list_val> declaration_list
%type <declaration_specifiers_val> declaration_specifiers
%type <storage_class_specifier_val> storage_class_specifier
%type <type_specifier_val> type_specifier
%type <type_qualifier_val> type_qualifier
%type <struct_or_union_specifier_val> struct_or_union_specifier
%type <struct_or_union_val> struct_or_union
%type <struct_declaration_list_val> struct_declaration_list
%type <init_declarator_list_val> init_declarator_list
%type <init_declarator_val> init_declarator
%type <struct_declaration_val> struct_declaration
%type <specifier_qualifier_list_val> specifier_qualifier_list
%type <struct_declarator_list_val> struct_declarator_list
%type <struct_declarator_val> struct_declarator
%type <enum_specifier_val> enum_specifier
%type <enumerator_list_val> enumerator_list
%type <enumerator_val> enumerator
%type <declarator_val> declarator
%type <direct_declarator_val> direct_declarator
%type <pointer_val> pointer
%type <type_qualifier_list_val> type_qualifier_list
%type <parameter_type_list_val> parameter_type_list
%type <parameter_list_val> parameter_list
%type <parameter_declaration_val> parameter_declaration
%type <identifier_list_val> identifier_list
%type <initializer_val> initializer
%type <initializer_list_val> initializer_list
%type <type_name_val> type_name
%type <abstract_declarator_val> abstract_declarator
%type <direct_abstract_declarator_val> direct_abstract_declarator
%type <statement_val> statement
%type <labeled_statement_val> labeled_statement
%type <expression_statement_val> expression_statement
%type <compound_statement_val> compound_statement
%type <statement_list_val> statement_list
%type <selection_statement_val> selection_statement
%type <iteration_statement_val> iteration_statement
%type <jump_statement_val> jump_statement
%type <expression_val> expression
%type <assignment_expression_val> assignment_expression
%type <assignment_operator_val> assignment_operator
%type <conditional_expression_val> conditional_expression
%type <constant_expression_val> constant_expression
%type <logical_or_expression_val> logical_or_expression
%type <logical_and_expression_val> logical_and_expression
%type <inclusive_or_expression_val> inclusive_or_expression
%type <exclusive_or_expression_val> exclusive_or_expression
%type <and_expression_val> and_expression
%type <equality_expression_val> equality_expression
%type <relational_expression_val> relational_expression
%type <shift_expression_val> shift_expression
%type <additive_expression_val> additive_expression
%type <multiplicative_expression_val> multiplicative_expression
%type <cast_expression_val> cast_expression
%type <unary_expression_val> unary_expression
%type <unary_operator_val> unary_operator
%type <postfix_expression_val> postfix_expression
%type <primary_expression_val> primary_expression
%type <argument_expression_list_val> argument_expression_list
%type <constant_val> constant
%type <string_val> string
%type <identifier_val> identifier




%start translation_unit
%%


translation_unit
    :external_declaration
{
    translation_unit_node anode;
    anode.external_declaration_node_1=$1;
    anode.translation_unit_node_1= 0;
    $$ = &anode;
}
    |translation_unit external_declaration
{
    translation_unit_node anode;
    anode.translation_unit_node_1=$1;
    anode.external_declaration_node_1=$2;
    $$ = &anode;
}
    ;
external_declaration
    :function_definition
{
    external_declaration_node anode;
    anode.function_definition_node_1=$1;
    anode.declaration_node_1= 0;
    $$ = &anode;
}
    |declaration
{
    external_declaration_node anode;
    anode.declaration_node_1=$1;
    anode.function_definition_node_1= 0;
    $$ = &anode;
}
    ;
function_definition
    :declarator compound_statement
{
    function_definition_node anode;
    anode.declarator_node_1=$1;
    anode.compound_statement_node_1=$2;
    anode.declaration_list_node_1= 0;
    anode.declaration_specifiers_node_1= 0;
    $$ = &anode;
}
    |declarator declaration_list compound_statement
{
    function_definition_node anode;
    anode.declarator_node_1=$1;
    anode.declaration_list_node_1=$2;
    anode.compound_statement_node_1=$3;
    anode.declaration_specifiers_node_1= 0;
    $$ = &anode;
}
    |declaration_specifiers declarator compound_statement
{
    function_definition_node anode;
    anode.declaration_specifiers_node_1=$1;
    anode.declarator_node_1=$2;
    anode.compound_statement_node_1=$3;
    anode.declaration_list_node_1= 0;
    $$ = &anode;
}
    |declaration_specifiers declarator declaration_list compound_statement
{
    function_definition_node anode;
    anode.declaration_specifiers_node_1=$1;
    anode.declarator_node_1=$2;
    anode.declaration_list_node_1=$3;
    anode.compound_statement_node_1=$4;
    $$ = &anode;
}
    ;
declaration
    :declaration_specifiers ';'
{
    declaration_node anode;
    anode.char_lit_1="';'";
    anode.declaration_specifiers_node_1=$1;
    anode.init_declarator_list_node_1= 0;
    $$ = &anode;
}
    |declaration_specifiers init_declarator_list ';'
{
    declaration_node anode;
    anode.char_lit_1="';'";
    anode.declaration_specifiers_node_1=$1;
    anode.init_declarator_list_node_1=$2;
    $$ = &anode;
}
    ;
declaration_list
    :declaration
{
    declaration_list_node anode;
    anode.declaration_node_1=$1;
    anode.declaration_list_node_1= 0;
    $$ = &anode;
}
    |declaration_list declaration
{
    declaration_list_node anode;
    anode.declaration_list_node_1=$1;
    anode.declaration_node_1=$2;
    $$ = &anode;
}
    ;
declaration_specifiers
    :storage_class_specifier
{
    declaration_specifiers_node anode;
    anode.storage_class_specifier_node_1=$1;
    anode.declaration_specifiers_node_1= 0;
    anode.type_specifier_node_1= 0;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |storage_class_specifier declaration_specifiers
{
    declaration_specifiers_node anode;
    anode.storage_class_specifier_node_1=$1;
    anode.declaration_specifiers_node_1=$2;
    anode.type_specifier_node_1= 0;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |type_specifier
{
    declaration_specifiers_node anode;
    anode.type_specifier_node_1=$1;
    anode.storage_class_specifier_node_1= 0;
    anode.declaration_specifiers_node_1= 0;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |type_specifier declaration_specifiers
{
    declaration_specifiers_node anode;
    anode.type_specifier_node_1=$1;
    anode.declaration_specifiers_node_1=$2;
    anode.storage_class_specifier_node_1= 0;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |type_qualifier
{
    declaration_specifiers_node anode;
    anode.type_qualifier_node_1=$1;
    anode.storage_class_specifier_node_1= 0;
    anode.declaration_specifiers_node_1= 0;
    anode.type_specifier_node_1= 0;
    $$ = &anode;
}
    |type_qualifier declaration_specifiers
{
    declaration_specifiers_node anode;
    anode.type_qualifier_node_1=$1;
    anode.declaration_specifiers_node_1=$2;
    anode.storage_class_specifier_node_1= 0;
    anode.type_specifier_node_1= 0;
    $$ = &anode;
}
    ;
storage_class_specifier
    :AUTO
{
    storage_class_specifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |REGISTER
{
    storage_class_specifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |STATIC
{
    storage_class_specifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |EXTERN
{
    storage_class_specifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |TYPEDEF
{
    storage_class_specifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    ;
type_specifier
    :VOID
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |CHAR
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |SHORT
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |INT
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |LONG
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |FLOAT
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |DOUBLE
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |SIGNED
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |UNSIGNED
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |struct_or_union_specifier
{
    type_specifier_node anode;
    anode.struct_or_union_specifier_node_1=$1;
    anode.token_1= 0;
    anode.enum_specifier_node_1= 0;
    $$ = &anode;
}
    |enum_specifier
{
    type_specifier_node anode;
    anode.enum_specifier_node_1=$1;
    anode.token_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    |TYPEDEF_NAME
{
    type_specifier_node anode;
    anode.token_1=$1;
    anode.enum_specifier_node_1= 0;
    anode.struct_or_union_specifier_node_1= 0;
    $$ = &anode;
}
    ;
type_qualifier
    :CONST
{
    type_qualifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |VOLATILE
{
    type_qualifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    ;
struct_or_union_specifier
    :struct_or_union identifier '{' struct_declaration_list '}'
{
    struct_or_union_specifier_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.struct_or_union_node_1=$1;
    anode.identifier_node_1=$2;
    anode.struct_declaration_list_node_1=$4;
    $$ = &anode;
}
    |struct_or_union '{' struct_declaration_list '}'
{
    struct_or_union_specifier_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.struct_or_union_node_1=$1;
    anode.struct_declaration_list_node_1=$3;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |struct_or_union identifier
{
    struct_or_union_specifier_node anode;
    anode.struct_or_union_node_1=$1;
    anode.identifier_node_1=$2;
    anode.char_lit_1= "";
    anode.struct_declaration_list_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    ;
struct_or_union
    :STRUCT
{
    struct_or_union_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |UNION
{
    struct_or_union_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    ;
struct_declaration_list
    :struct_declaration
{
    struct_declaration_list_node anode;
    anode.struct_declaration_node_1=$1;
    anode.struct_declaration_list_node_1= 0;
    $$ = &anode;
}
    |struct_declaration_list struct_declaration
{
    struct_declaration_list_node anode;
    anode.struct_declaration_list_node_1=$1;
    anode.struct_declaration_node_1=$2;
    $$ = &anode;
}
    ;
init_declarator_list
    :init_declarator
{
    init_declarator_list_node anode;
    anode.init_declarator_node_1=$1;
    anode.init_declarator_list_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |init_declarator_list ',' init_declarator
{
    init_declarator_list_node anode;
    anode.char_lit_1="','";
    anode.init_declarator_list_node_1=$1;
    anode.init_declarator_node_1=$3;
    $$ = &anode;
}
    ;
init_declarator
    :declarator
{
    init_declarator_node anode;
    anode.declarator_node_1=$1;
    anode.initializer_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |declarator '=' initializer
{
    init_declarator_node anode;
    anode.char_lit_1="'='";
    anode.declarator_node_1=$1;
    anode.initializer_node_1=$3;
    $$ = &anode;
}
    ;
struct_declaration
    :specifier_qualifier_list struct_declarator_list ';'
{
    struct_declaration_node anode;
    anode.char_lit_1="';'";
    anode.specifier_qualifier_list_node_1=$1;
    anode.struct_declarator_list_node_1=$2;
    $$ = &anode;
}
    ;
specifier_qualifier_list
    :type_specifier
{
    specifier_qualifier_list_node anode;
    anode.type_specifier_node_1=$1;
    anode.specifier_qualifier_list_node_1= 0;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |type_specifier specifier_qualifier_list
{
    specifier_qualifier_list_node anode;
    anode.type_specifier_node_1=$1;
    anode.specifier_qualifier_list_node_1=$2;
    anode.type_qualifier_node_1= 0;
    $$ = &anode;
}
    |type_qualifier
{
    specifier_qualifier_list_node anode;
    anode.type_qualifier_node_1=$1;
    anode.specifier_qualifier_list_node_1= 0;
    anode.type_specifier_node_1= 0;
    $$ = &anode;
}
    |type_qualifier specifier_qualifier_list
{
    specifier_qualifier_list_node anode;
    anode.type_qualifier_node_1=$1;
    anode.specifier_qualifier_list_node_1=$2;
    anode.type_specifier_node_1= 0;
    $$ = &anode;
}
    ;
struct_declarator_list
    :struct_declarator
{
    struct_declarator_list_node anode;
    anode.struct_declarator_node_1=$1;
    anode.struct_declarator_list_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |struct_declarator_list ',' struct_declarator
{
    struct_declarator_list_node anode;
    anode.char_lit_1="','";
    anode.struct_declarator_list_node_1=$1;
    anode.struct_declarator_node_1=$3;
    $$ = &anode;
}
    ;
struct_declarator
    :declarator
{
    struct_declarator_node anode;
    anode.declarator_node_1=$1;
    anode.constant_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |':' constant_expression
{
    struct_declarator_node anode;
    anode.char_lit_1="':'";
    anode.constant_expression_node_1=$2;
    anode.declarator_node_1= 0;
    $$ = &anode;
}
    |declarator ':' constant_expression
{
    struct_declarator_node anode;
    anode.char_lit_1="':'";
    anode.declarator_node_1=$1;
    anode.constant_expression_node_1=$3;
    $$ = &anode;
}
    ;
enum_specifier
    :ENUM '{' enumerator_list '}'
{
    enum_specifier_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.token_1=$1;
    anode.enumerator_list_node_1=$3;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |ENUM identifier '{' enumerator_list '}'
{
    enum_specifier_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.token_1=$1;
    anode.identifier_node_1=$2;
    anode.enumerator_list_node_1=$4;
    $$ = &anode;
}
    |ENUM identifier
{
    enum_specifier_node anode;
    anode.token_1=$1;
    anode.identifier_node_1=$2;
    anode.char_lit_1= "";
    anode.enumerator_list_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    ;
enumerator_list
    :enumerator
{
    enumerator_list_node anode;
    anode.enumerator_node_1=$1;
    anode.char_lit_1= "";
    anode.enumerator_list_node_1= 0;
    $$ = &anode;
}
    |enumerator_list ',' enumerator
{
    enumerator_list_node anode;
    anode.char_lit_1="','";
    anode.enumerator_list_node_1=$1;
    anode.enumerator_node_1=$3;
    $$ = &anode;
}
    ;
enumerator
    :identifier
{
    enumerator_node anode;
    anode.identifier_node_1=$1;
    anode.constant_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |identifier '=' constant_expression
{
    enumerator_node anode;
    anode.char_lit_1="'='";
    anode.identifier_node_1=$1;
    anode.constant_expression_node_1=$3;
    $$ = &anode;
}
    ;
declarator
    :direct_declarator
{
    declarator_node anode;
    anode.direct_declarator_node_1=$1;
    anode.pointer_node_1= 0;
    $$ = &anode;
}
    |pointer direct_declarator
{
    declarator_node anode;
    anode.pointer_node_1=$1;
    anode.direct_declarator_node_1=$2;
    $$ = &anode;
}
    ;
direct_declarator
    :identifier
{
    direct_declarator_node anode;
    anode.identifier_node_1=$1;
    anode.parameter_type_list_node_1= 0;
    anode.direct_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_list_node_1= 0;
    anode.declarator_node_1= 0;
    anode.char_lit_1= "";
    anode.char_lit_2= "";
    $$ = &anode;
}
    |'(' declarator ')'
{
    direct_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.declarator_node_1=$2;
    anode.parameter_type_list_node_1= 0;
    anode.identifier_node_1= 0;
    anode.direct_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_list_node_1= 0;
    $$ = &anode;
}
    |direct_declarator '[' ']'
{
    direct_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.direct_declarator_node_1=$1;
    anode.parameter_type_list_node_1= 0;
    anode.declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_list_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |direct_declarator '[' constant_expression ']'
{
    direct_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.direct_declarator_node_1=$1;
    anode.constant_expression_node_1=$3;
    anode.parameter_type_list_node_1= 0;
    anode.declarator_node_1= 0;
    anode.identifier_list_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |direct_declarator '(' ')'
{
    direct_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.direct_declarator_node_1=$1;
    anode.parameter_type_list_node_1= 0;
    anode.declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_list_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |direct_declarator '(' parameter_type_list ')'
{
    direct_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.direct_declarator_node_1=$1;
    anode.parameter_type_list_node_1=$3;
    anode.declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_list_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |direct_declarator '(' identifier_list ')'
{
    direct_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.direct_declarator_node_1=$1;
    anode.identifier_list_node_1=$3;
    anode.parameter_type_list_node_1= 0;
    anode.declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    ;
pointer
    :'*'
{
    pointer_node anode;
    anode.char_lit_1="'*'";
    anode.pointer_node_1= 0;
    anode.type_qualifier_list_node_1= 0;
    $$ = &anode;
}
    |'*' type_qualifier_list
{
    pointer_node anode;
    anode.char_lit_1="'*'";
    anode.type_qualifier_list_node_1=$2;
    anode.pointer_node_1= 0;
    $$ = &anode;
}
    |'*' pointer
{
    pointer_node anode;
    anode.char_lit_1="'*'";
    anode.pointer_node_1=$2;
    anode.type_qualifier_list_node_1= 0;
    $$ = &anode;
}
    |'*' type_qualifier_list pointer
{
    pointer_node anode;
    anode.char_lit_1="'*'";
    anode.type_qualifier_list_node_1=$2;
    anode.pointer_node_1=$3;
    $$ = &anode;
}
    ;
type_qualifier_list
    :type_qualifier
{
    type_qualifier_list_node anode;
    anode.type_qualifier_node_1=$1;
    anode.type_qualifier_list_node_1= 0;
    $$ = &anode;
}
    |type_qualifier_list type_qualifier
{
    type_qualifier_list_node anode;
    anode.type_qualifier_list_node_1=$1;
    anode.type_qualifier_node_1=$2;
    $$ = &anode;
}
    ;
parameter_type_list
    :parameter_list
{
    parameter_type_list_node anode;
    anode.parameter_list_node_1=$1;
    anode.token_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |parameter_list ',' ELIPSIS
{
    parameter_type_list_node anode;
    anode.char_lit_1="','";
    anode.token_1=$3;
    anode.parameter_list_node_1=$1;
    $$ = &anode;
}
    ;
parameter_list
    :parameter_declaration
{
    parameter_list_node anode;
    anode.parameter_declaration_node_1=$1;
    anode.parameter_list_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |parameter_list ',' parameter_declaration
{
    parameter_list_node anode;
    anode.char_lit_1="','";
    anode.parameter_list_node_1=$1;
    anode.parameter_declaration_node_1=$3;
    $$ = &anode;
}
    ;
parameter_declaration
    :declaration_specifiers declarator
{
    parameter_declaration_node anode;
    anode.declaration_specifiers_node_1=$1;
    anode.declarator_node_1=$2;
    anode.abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |declaration_specifiers
{
    parameter_declaration_node anode;
    anode.declaration_specifiers_node_1=$1;
    anode.declarator_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |declaration_specifiers abstract_declarator
{
    parameter_declaration_node anode;
    anode.declaration_specifiers_node_1=$1;
    anode.abstract_declarator_node_1=$2;
    anode.declarator_node_1= 0;
    $$ = &anode;
}
    ;
identifier_list
    :identifier
{
    identifier_list_node anode;
    anode.identifier_node_1=$1;
    anode.char_lit_1= "";
    anode.identifier_list_node_1= 0;
    $$ = &anode;
}
    |identifier_list ',' identifier
{
    identifier_list_node anode;
    anode.char_lit_1="','";
    anode.identifier_list_node_1=$1;
    anode.identifier_node_1=$3;
    $$ = &anode;
}
    ;
initializer
    :assignment_expression
{
    initializer_node anode;
    anode.assignment_expression_node_1=$1;
    anode.initializer_list_node_1= 0;
    anode.char_lit_1= "";
    anode.char_lit_3= "";
    anode.char_lit_2= "";
    $$ = &anode;
}
    |'{' initializer_list '}'
{
    initializer_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.initializer_list_node_1=$2;
    anode.assignment_expression_node_1= 0;
    anode.char_lit_3= "";
    $$ = &anode;
}
    |'{' initializer_list ',' '}'
{
    initializer_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="','";
    anode.char_lit_3="'}'";
    anode.initializer_list_node_1=$2;
    anode.assignment_expression_node_1= 0;
    $$ = &anode;
}
    ;
initializer_list
    :initializer
{
    initializer_list_node anode;
    anode.initializer_node_1=$1;
    anode.initializer_list_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |initializer_list ',' initializer
{
    initializer_list_node anode;
    anode.char_lit_1="','";
    anode.initializer_list_node_1=$1;
    anode.initializer_node_1=$3;
    $$ = &anode;
}
    ;
type_name
    :specifier_qualifier_list
{
    type_name_node anode;
    anode.specifier_qualifier_list_node_1=$1;
    anode.abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |specifier_qualifier_list abstract_declarator
{
    type_name_node anode;
    anode.specifier_qualifier_list_node_1=$1;
    anode.abstract_declarator_node_1=$2;
    $$ = &anode;
}
    ;
abstract_declarator
    :pointer
{
    abstract_declarator_node anode;
    anode.pointer_node_1=$1;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |direct_abstract_declarator
{
    abstract_declarator_node anode;
    anode.direct_abstract_declarator_node_1=$1;
    anode.pointer_node_1= 0;
    $$ = &anode;
}
    |pointer direct_abstract_declarator
{
    abstract_declarator_node anode;
    anode.pointer_node_1=$1;
    anode.direct_abstract_declarator_node_1=$2;
    $$ = &anode;
}
    ;
direct_abstract_declarator
    :'(' abstract_declarator ')'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.abstract_declarator_node_1=$2;
    anode.parameter_type_list_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |'[' ']'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |'[' constant_expression ']'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.constant_expression_node_1=$2;
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |direct_abstract_declarator '[' ']'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.direct_abstract_declarator_node_1=$1;
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    $$ = &anode;
}
    |direct_abstract_declarator '[' constant_expression ']'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.direct_abstract_declarator_node_1=$1;
    anode.constant_expression_node_1=$3;
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |'(' ')'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |'(' parameter_type_list ')'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.parameter_type_list_node_1=$2;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    anode.direct_abstract_declarator_node_1= 0;
    $$ = &anode;
}
    |direct_abstract_declarator '(' ')'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.direct_abstract_declarator_node_1=$1;
    anode.parameter_type_list_node_1= 0;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    $$ = &anode;
}
    |direct_abstract_declarator '(' parameter_type_list ')'
{
    direct_abstract_declarator_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.direct_abstract_declarator_node_1=$1;
    anode.parameter_type_list_node_1=$3;
    anode.abstract_declarator_node_1= 0;
    anode.constant_expression_node_1= 0;
    $$ = &anode;
}
    ;
statement
    :labeled_statement
{
    statement_node anode;
    anode.labeled_statement_node_1=$1;
    anode.expression_statement_node_1= 0;
    anode.compound_statement_node_1= 0;
    anode.jump_statement_node_1= 0;
    anode.selection_statement_node_1= 0;
    anode.iteration_statement_node_1= 0;
    $$ = &anode;
}
    |compound_statement
{
    statement_node anode;
    anode.compound_statement_node_1=$1;
    anode.expression_statement_node_1= 0;
    anode.iteration_statement_node_1= 0;
    anode.jump_statement_node_1= 0;
    anode.selection_statement_node_1= 0;
    anode.labeled_statement_node_1= 0;
    $$ = &anode;
}
    |expression_statement
{
    statement_node anode;
    anode.expression_statement_node_1=$1;
    anode.compound_statement_node_1= 0;
    anode.jump_statement_node_1= 0;
    anode.iteration_statement_node_1= 0;
    anode.labeled_statement_node_1= 0;
    anode.selection_statement_node_1= 0;
    $$ = &anode;
}
    |selection_statement
{
    statement_node anode;
    anode.selection_statement_node_1=$1;
    anode.expression_statement_node_1= 0;
    anode.compound_statement_node_1= 0;
    anode.jump_statement_node_1= 0;
    anode.iteration_statement_node_1= 0;
    anode.labeled_statement_node_1= 0;
    $$ = &anode;
}
    |iteration_statement
{
    statement_node anode;
    anode.iteration_statement_node_1=$1;
    anode.expression_statement_node_1= 0;
    anode.compound_statement_node_1= 0;
    anode.jump_statement_node_1= 0;
    anode.selection_statement_node_1= 0;
    anode.labeled_statement_node_1= 0;
    $$ = &anode;
}
    |jump_statement
{
    statement_node anode;
    anode.jump_statement_node_1=$1;
    anode.expression_statement_node_1= 0;
    anode.compound_statement_node_1= 0;
    anode.iteration_statement_node_1= 0;
    anode.selection_statement_node_1= 0;
    anode.labeled_statement_node_1= 0;
    $$ = &anode;
}
    ;
labeled_statement
    :identifier ':' statement
{
    labeled_statement_node anode;
    anode.char_lit_1="':'";
    anode.identifier_node_1=$1;
    anode.statement_node_1=$3;
    anode.token_1= 0;
    anode.constant_expression_node_1= 0;
    $$ = &anode;
}
    |CASE constant_expression ':' statement
{
    labeled_statement_node anode;
    anode.char_lit_1="':'";
    anode.token_1=$1;
    anode.constant_expression_node_1=$2;
    anode.statement_node_1=$4;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |DEFAULT ':' statement
{
    labeled_statement_node anode;
    anode.char_lit_1="':'";
    anode.token_1=$1;
    anode.statement_node_1=$3;
    anode.constant_expression_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    ;
expression_statement
    :';'
{
    expression_statement_node anode;
    anode.char_lit_1="';'";
    anode.expression_node_1= 0;
    $$ = &anode;
}
    |expression ';'
{
    expression_statement_node anode;
    anode.char_lit_1="';'";
    anode.expression_node_1=$1;
    $$ = &anode;
}
    ;
compound_statement
    :'{' '}'
{
    compound_statement_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.declaration_list_node_1= 0;
    anode.statement_list_node_1= 0;
    $$ = &anode;
}
    |'{' statement_list '}'
{
    compound_statement_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.statement_list_node_1=$2;
    anode.declaration_list_node_1= 0;
    $$ = &anode;
}
    |'{' declaration_list '}'
{
    compound_statement_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.declaration_list_node_1=$2;
    anode.statement_list_node_1= 0;
    $$ = &anode;
}
    |'{' declaration_list statement_list '}'
{
    compound_statement_node anode;
    anode.char_lit_1="'{'";
    anode.char_lit_2="'}'";
    anode.declaration_list_node_1=$2;
    anode.statement_list_node_1=$3;
    $$ = &anode;
}
    ;
statement_list
    :statement
{
    statement_list_node anode;
    anode.statement_node_1=$1;
    anode.statement_list_node_1= 0;
    $$ = &anode;
}
    |statement_list statement
{
    statement_list_node anode;
    anode.statement_list_node_1=$1;
    anode.statement_node_1=$2;
    $$ = &anode;
}
    ;
selection_statement
    :IF '(' expression ')' statement
{
    selection_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.statement_node_1=$5;
    anode.token_2= 0;
    anode.statement_node_2= 0;
    $$ = &anode;
}
    |IF '(' expression ')' statement ELSE statement
{
    selection_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.token_1=$1;
    anode.token_2=$6;
    anode.expression_node_1=$3;
    anode.statement_node_1=$5;
    anode.statement_node_2=$5;
    anode.statement_node_1=$5;
    $$ = &anode;
}
    |SWITCH '(' expression ')' statement
{
    selection_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.statement_node_1=$5;
    anode.token_2= 0;
    anode.statement_node_2= 0;
    $$ = &anode;
}
    ;
iteration_statement
    :WHILE '(' expression ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.statement_node_1=$5;
    anode.char_lit_4= "";
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    anode.char_lit_3= "";
    anode.token_2= 0;
    $$ = &anode;
}
    |DO statement WHILE '(' expression ')' ';'
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.char_lit_3="';'";
    anode.token_1=$1;
    anode.token_2=$3;
    anode.statement_node_1=$2;
    anode.expression_node_1=$5;
    anode.char_lit_4= "";
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    $$ = &anode;
}
    |FOR '(' ';' ';' ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.statement_node_1=$6;
    anode.expression_node_1= 0;
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' ';' ';' expression ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$5;
    anode.statement_node_1=$7;
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' ';' expression ';' ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$4;
    anode.statement_node_1=$7;
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' ';' expression ';' expression ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$4;
    anode.expression_node_2=$4;
    anode.expression_node_1=$4;
    anode.statement_node_1=$8;
    anode.expression_node_3= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' expression ';' ';' ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.statement_node_1=$7;
    anode.expression_node_3= 0;
    anode.expression_node_2= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' expression ';' ';' expression ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.expression_node_2=$3;
    anode.expression_node_1=$3;
    anode.statement_node_1=$8;
    anode.expression_node_3= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' expression ';' expression ';' ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.expression_node_2=$3;
    anode.expression_node_1=$3;
    anode.statement_node_1=$8;
    anode.expression_node_3= 0;
    anode.token_2= 0;
    $$ = &anode;
}
    |FOR '(' expression ';' expression ';' expression ')' statement
{
    iteration_statement_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="';'";
    anode.char_lit_3="';'";
    anode.char_lit_4="')'";
    anode.token_1=$1;
    anode.expression_node_1=$3;
    anode.expression_node_2=$3;
    anode.expression_node_3=$3;
    anode.expression_node_1=$3;
    anode.expression_node_2=$3;
    anode.expression_node_1=$3;
    anode.statement_node_1=$9;
    anode.token_2= 0;
    $$ = &anode;
}
    ;
jump_statement
    :GOTO identifier ';'
{
    jump_statement_node anode;
    anode.char_lit_1="';'";
    anode.token_1=$1;
    anode.identifier_node_1=$2;
    anode.expression_node_1= 0;
    $$ = &anode;
}
    |CONTINUE ';'
{
    jump_statement_node anode;
    anode.char_lit_1="';'";
    anode.token_1=$1;
    anode.expression_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |BREAK ';'
{
    jump_statement_node anode;
    anode.char_lit_1="';'";
    anode.token_1=$1;
    anode.expression_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |RETURN ';'
{
    jump_statement_node anode;
    anode.char_lit_1="';'";
    anode.token_1=$1;
    anode.expression_node_1= 0;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    |RETURN expression ';'
{
    jump_statement_node anode;
    anode.char_lit_1="';'";
    anode.token_1=$1;
    anode.expression_node_1=$2;
    anode.identifier_node_1= 0;
    $$ = &anode;
}
    ;
expression
    :assignment_expression
{
    expression_node anode;
    anode.assignment_expression_node_1=$1;
    anode.expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |expression ',' assignment_expression
{
    expression_node anode;
    anode.char_lit_1="','";
    anode.expression_node_1=$1;
    anode.assignment_expression_node_1=$3;
    $$ = &anode;
}
    ;
assignment_expression
    :conditional_expression
{
    assignment_expression_node anode;
    anode.conditional_expression_node_1=$1;
    anode.assignment_operator_node_1= 0;
    anode.unary_expression_node_1= 0;
    anode.assignment_expression_node_1= 0;
    $$ = &anode;
}
    |unary_expression assignment_operator assignment_expression
{
    assignment_expression_node anode;
    anode.unary_expression_node_1=$1;
    anode.assignment_operator_node_1=$2;
    anode.assignment_expression_node_1=$3;
    anode.conditional_expression_node_1= 0;
    $$ = &anode;
}
    ;
assignment_operator
    :'='
{
    assignment_operator_node anode;
    anode.char_lit_1="'='";
    anode.token_1= 0;
    $$ = &anode;
}
    |MUL_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |DIV_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |MOD_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |ADD_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |SUB_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |LEFT_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |RIGHT_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |AND_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |XOR_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |OR_ASSIGN
{
    assignment_operator_node anode;
    anode.token_1=$1;
    anode.char_lit_1= "";
    $$ = &anode;
}
    ;
conditional_expression
    :logical_or_expression
{
    conditional_expression_node anode;
    anode.logical_or_expression_node_1=$1;
    anode.expression_node_1= 0;
    anode.conditional_expression_node_1= 0;
    anode.char_lit_1= "";
    anode.char_lit_2= "";
    $$ = &anode;
}
    |logical_or_expression '?' expression ':' conditional_expression
{
    conditional_expression_node anode;
    anode.char_lit_1="'?'";
    anode.char_lit_2="':'";
    anode.logical_or_expression_node_1=$1;
    anode.expression_node_1=$3;
    anode.conditional_expression_node_1=$5;
    $$ = &anode;
}
    ;
constant_expression
    :conditional_expression
{
    constant_expression_node anode;
    anode.conditional_expression_node_1=$1;
    $$ = &anode;
}
    ;
logical_or_expression
    :logical_and_expression
{
    logical_or_expression_node anode;
    anode.logical_and_expression_node_1=$1;
    anode.token_1= 0;
    anode.logical_or_expression_node_1= 0;
    $$ = &anode;
}
    |logical_or_expression OR_OP logical_and_expression
{
    logical_or_expression_node anode;
    anode.token_1=$2;
    anode.logical_or_expression_node_1=$1;
    anode.logical_and_expression_node_1=$3;
    $$ = &anode;
}
    ;
logical_and_expression
    :inclusive_or_expression
{
    logical_and_expression_node anode;
    anode.inclusive_or_expression_node_1=$1;
    anode.token_1= 0;
    anode.logical_and_expression_node_1= 0;
    $$ = &anode;
}
    |logical_and_expression AND_OP inclusive_or_expression
{
    logical_and_expression_node anode;
    anode.token_1=$2;
    anode.logical_and_expression_node_1=$1;
    anode.inclusive_or_expression_node_1=$3;
    $$ = &anode;
}
    ;
inclusive_or_expression
    :exclusive_or_expression
{
    inclusive_or_expression_node anode;
    anode.exclusive_or_expression_node_1=$1;
    anode.inclusive_or_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |inclusive_or_expression '|' exclusive_or_expression
{
    inclusive_or_expression_node anode;
    anode.char_lit_1="'|'";
    anode.inclusive_or_expression_node_1=$1;
    anode.exclusive_or_expression_node_1=$3;
    $$ = &anode;
}
    ;
exclusive_or_expression
    :and_expression
{
    exclusive_or_expression_node anode;
    anode.and_expression_node_1=$1;
    anode.char_lit_1= "";
    anode.exclusive_or_expression_node_1= 0;
    $$ = &anode;
}
    |exclusive_or_expression '^' and_expression
{
    exclusive_or_expression_node anode;
    anode.char_lit_1="'^'";
    anode.exclusive_or_expression_node_1=$1;
    anode.and_expression_node_1=$3;
    $$ = &anode;
}
    ;
and_expression
    :equality_expression
{
    and_expression_node anode;
    anode.equality_expression_node_1=$1;
    anode.and_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |and_expression '&' equality_expression
{
    and_expression_node anode;
    anode.char_lit_1="'&'";
    anode.and_expression_node_1=$1;
    anode.equality_expression_node_1=$3;
    $$ = &anode;
}
    ;
equality_expression
    :relational_expression
{
    equality_expression_node anode;
    anode.relational_expression_node_1=$1;
    anode.token_1= 0;
    anode.equality_expression_node_1= 0;
    $$ = &anode;
}
    |equality_expression EQ_OP relational_expression
{
    equality_expression_node anode;
    anode.token_1=$2;
    anode.equality_expression_node_1=$1;
    anode.relational_expression_node_1=$3;
    $$ = &anode;
}
    |equality_expression NE_OP relational_expression
{
    equality_expression_node anode;
    anode.token_1=$2;
    anode.equality_expression_node_1=$1;
    anode.relational_expression_node_1=$3;
    $$ = &anode;
}
    ;
relational_expression
    :shift_expression
{
    relational_expression_node anode;
    anode.shift_expression_node_1=$1;
    anode.token_1= 0;
    anode.relational_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |relational_expression '<' shift_expression
{
    relational_expression_node anode;
    anode.char_lit_1="'<'";
    anode.relational_expression_node_1=$1;
    anode.shift_expression_node_1=$3;
    anode.token_1= 0;
    $$ = &anode;
}
    |relational_expression '>' shift_expression
{
    relational_expression_node anode;
    anode.char_lit_1="'>'";
    anode.relational_expression_node_1=$1;
    anode.shift_expression_node_1=$3;
    anode.token_1= 0;
    $$ = &anode;
}
    |relational_expression LE_OP shift_expression
{
    relational_expression_node anode;
    anode.token_1=$2;
    anode.relational_expression_node_1=$1;
    anode.shift_expression_node_1=$3;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |relational_expression GE_OP shift_expression
{
    relational_expression_node anode;
    anode.token_1=$2;
    anode.relational_expression_node_1=$1;
    anode.shift_expression_node_1=$3;
    anode.char_lit_1= "";
    $$ = &anode;
}
    ;
shift_expression
    :additive_expression
{
    shift_expression_node anode;
    anode.additive_expression_node_1=$1;
    anode.token_1= 0;
    anode.shift_expression_node_1= 0;
    $$ = &anode;
}
    |shift_expression LEFT_OP additive_expression
{
    shift_expression_node anode;
    anode.token_1=$2;
    anode.shift_expression_node_1=$1;
    anode.additive_expression_node_1=$3;
    $$ = &anode;
}
    |shift_expression RIGHT_OP additive_expression
{
    shift_expression_node anode;
    anode.token_1=$2;
    anode.shift_expression_node_1=$1;
    anode.additive_expression_node_1=$3;
    $$ = &anode;
}
    ;
additive_expression
    :multiplicative_expression
{
    additive_expression_node anode;
    anode.multiplicative_expression_node_1=$1;
    anode.additive_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |additive_expression '+' multiplicative_expression
{
    additive_expression_node anode;
    anode.char_lit_1="'+'";
    anode.additive_expression_node_1=$1;
    anode.multiplicative_expression_node_1=$3;
    $$ = &anode;
}
    |additive_expression '-' multiplicative_expression
{
    additive_expression_node anode;
    anode.char_lit_1="'-'";
    anode.additive_expression_node_1=$1;
    anode.multiplicative_expression_node_1=$3;
    $$ = &anode;
}
    ;
multiplicative_expression
    :cast_expression
{
    multiplicative_expression_node anode;
    anode.cast_expression_node_1=$1;
    anode.multiplicative_expression_node_1= 0;
    anode.char_lit_1= "";
    $$ = &anode;
}
    |multiplicative_expression '*' cast_expression
{
    multiplicative_expression_node anode;
    anode.char_lit_1="'*'";
    anode.multiplicative_expression_node_1=$1;
    anode.cast_expression_node_1=$3;
    $$ = &anode;
}
    |multiplicative_expression '/' cast_expression
{
    multiplicative_expression_node anode;
    anode.char_lit_1="'/'";
    anode.multiplicative_expression_node_1=$1;
    anode.cast_expression_node_1=$3;
    $$ = &anode;
}
    |multiplicative_expression '%' cast_expression
{
    multiplicative_expression_node anode;
    anode.char_lit_1="'%'";
    anode.multiplicative_expression_node_1=$1;
    anode.cast_expression_node_1=$3;
    $$ = &anode;
}
    ;
cast_expression
    :unary_expression
{
    cast_expression_node anode;
    anode.unary_expression_node_1=$1;
    anode.char_lit_2= "";
    anode.char_lit_1= "";
    anode.type_name_node_1= 0;
    anode.cast_expression_node_1= 0;
    $$ = &anode;
}
    |'(' type_name ')' cast_expression
{
    cast_expression_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.type_name_node_1=$2;
    anode.cast_expression_node_1=$4;
    anode.unary_expression_node_1= 0;
    $$ = &anode;
}
    ;
unary_expression
    :postfix_expression
{
    unary_expression_node anode;
    anode.postfix_expression_node_1=$1;
    anode.type_name_node_1= 0;
    anode.token_1= 0;
    anode.unary_operator_node_1= 0;
    anode.cast_expression_node_1= 0;
    anode.char_lit_1= "";
    anode.unary_expression_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    |INC_OP unary_expression
{
    unary_expression_node anode;
    anode.token_1=$1;
    anode.unary_expression_node_1=$2;
    anode.postfix_expression_node_1= 0;
    anode.type_name_node_1= 0;
    anode.unary_operator_node_1= 0;
    anode.char_lit_2= "";
    anode.char_lit_1= "";
    anode.cast_expression_node_1= 0;
    $$ = &anode;
}
    |DEC_OP unary_expression
{
    unary_expression_node anode;
    anode.token_1=$1;
    anode.unary_expression_node_1=$2;
    anode.postfix_expression_node_1= 0;
    anode.type_name_node_1= 0;
    anode.unary_operator_node_1= 0;
    anode.char_lit_2= "";
    anode.char_lit_1= "";
    anode.cast_expression_node_1= 0;
    $$ = &anode;
}
    |unary_operator cast_expression
{
    unary_expression_node anode;
    anode.unary_operator_node_1=$1;
    anode.cast_expression_node_1=$2;
    anode.postfix_expression_node_1= 0;
    anode.type_name_node_1= 0;
    anode.token_1= 0;
    anode.char_lit_1= "";
    anode.unary_expression_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    |SIZEOF unary_expression
{
    unary_expression_node anode;
    anode.token_1=$1;
    anode.unary_expression_node_1=$2;
    anode.postfix_expression_node_1= 0;
    anode.type_name_node_1= 0;
    anode.unary_operator_node_1= 0;
    anode.char_lit_2= "";
    anode.char_lit_1= "";
    anode.cast_expression_node_1= 0;
    $$ = &anode;
}
    |SIZEOF '(' type_name ')'
{
    unary_expression_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.token_1=$1;
    anode.type_name_node_1=$3;
    anode.postfix_expression_node_1= 0;
    anode.unary_operator_node_1= 0;
    anode.unary_expression_node_1= 0;
    anode.cast_expression_node_1= 0;
    $$ = &anode;
}
    ;
unary_operator
    :'&'
{
    unary_operator_node anode;
    anode.char_lit_1="'&'";
    $$ = &anode;
}
    |'*'
{
    unary_operator_node anode;
    anode.char_lit_1="'*'";
    $$ = &anode;
}
    |'+'
{
    unary_operator_node anode;
    anode.char_lit_1="'+'";
    $$ = &anode;
}
    |'-'
{
    unary_operator_node anode;
    anode.char_lit_1="'-'";
    $$ = &anode;
}
    |'~'
{
    unary_operator_node anode;
    anode.char_lit_1="'~'";
    $$ = &anode;
}
    |'!'
{
    unary_operator_node anode;
    anode.char_lit_1="'!'";
    $$ = &anode;
}
    ;
postfix_expression
    :primary_expression
{
    postfix_expression_node anode;
    anode.primary_expression_node_1=$1;
    anode.postfix_expression_node_1= 0;
    anode.expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.token_1= 0;
    anode.char_lit_1= "";
    anode.identifier_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    |postfix_expression '[' expression ']'
{
    postfix_expression_node anode;
    anode.char_lit_1="'['";
    anode.char_lit_2="']'";
    anode.postfix_expression_node_1=$1;
    anode.expression_node_1=$3;
    anode.token_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.identifier_node_1= 0;
    anode.primary_expression_node_1= 0;
    $$ = &anode;
}
    |postfix_expression '(' ')'
{
    postfix_expression_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.postfix_expression_node_1=$1;
    anode.token_1= 0;
    anode.expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.identifier_node_1= 0;
    anode.primary_expression_node_1= 0;
    $$ = &anode;
}
    |postfix_expression '(' argument_expression_list ')'
{
    postfix_expression_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.postfix_expression_node_1=$1;
    anode.argument_expression_list_node_1=$3;
    anode.token_1= 0;
    anode.expression_node_1= 0;
    anode.identifier_node_1= 0;
    anode.primary_expression_node_1= 0;
    $$ = &anode;
}
    |postfix_expression '.' identifier
{
    postfix_expression_node anode;
    anode.char_lit_1="'.'";
    anode.postfix_expression_node_1=$1;
    anode.identifier_node_1=$3;
    anode.token_1= 0;
    anode.expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.char_lit_2= "";
    anode.primary_expression_node_1= 0;
    $$ = &anode;
}
    |postfix_expression PTR_OP identifier
{
    postfix_expression_node anode;
    anode.token_1=$2;
    anode.postfix_expression_node_1=$1;
    anode.identifier_node_1=$3;
    anode.expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.char_lit_1= "";
    anode.char_lit_2= "";
    anode.primary_expression_node_1= 0;
    $$ = &anode;
}
    |postfix_expression INC_OP
{
    postfix_expression_node anode;
    anode.token_1=$2;
    anode.postfix_expression_node_1=$1;
    anode.primary_expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.expression_node_1= 0;
    anode.char_lit_1= "";
    anode.identifier_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    |postfix_expression DEC_OP
{
    postfix_expression_node anode;
    anode.token_1=$2;
    anode.postfix_expression_node_1=$1;
    anode.primary_expression_node_1= 0;
    anode.argument_expression_list_node_1= 0;
    anode.expression_node_1= 0;
    anode.char_lit_1= "";
    anode.identifier_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    ;
primary_expression
    :identifier
{
    primary_expression_node anode;
    anode.identifier_node_1=$1;
    anode.expression_node_1= 0;
    anode.char_lit_1= "";
    anode.char_lit_2= "";
    anode.constant_node_1= 0;
    anode.string_node_1= 0;
    $$ = &anode;
}
    |constant
{
    primary_expression_node anode;
    anode.constant_node_1=$1;
    anode.expression_node_1= 0;
    anode.char_lit_2= "";
    anode.char_lit_1= "";
    anode.identifier_node_1= 0;
    anode.string_node_1= 0;
    $$ = &anode;
}
    |string
{
    primary_expression_node anode;
    anode.string_node_1=$1;
    anode.expression_node_1= 0;
    anode.char_lit_1= "";
    anode.constant_node_1= 0;
    anode.identifier_node_1= 0;
    anode.char_lit_2= "";
    $$ = &anode;
}
    |'(' expression ')'
{
    primary_expression_node anode;
    anode.char_lit_1="'('";
    anode.char_lit_2="')'";
    anode.expression_node_1=$2;
    anode.constant_node_1= 0;
    anode.identifier_node_1= 0;
    anode.string_node_1= 0;
    $$ = &anode;
}
    ;
argument_expression_list
    :assignment_expression
{
    argument_expression_list_node anode;
    anode.assignment_expression_node_1=$1;
    anode.char_lit_1= "";
    anode.argument_expression_list_node_1= 0;
    $$ = &anode;
}
    |argument_expression_list ',' assignment_expression
{
    argument_expression_list_node anode;
    anode.char_lit_1="','";
    anode.argument_expression_list_node_1=$1;
    anode.assignment_expression_node_1=$3;
    $$ = &anode;
}
    ;
constant
    :INTEGER_CONSTANT
{
    constant_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |CHARACTER_CONSTANT
{
    constant_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |FLOATING_CONSTANT
{
    constant_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    |ENUMERATION_CONSTANT
{
    constant_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    ;
string
    :STRING_LITERAL
{
    string_node anode;
    anode.token_1=$1;
    $$ = &anode;
}
    ;
identifier
    :IDENTIFIER
{
    identifier_node anode;
    anode.token_1=$1;
    $$ = &anode;
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
