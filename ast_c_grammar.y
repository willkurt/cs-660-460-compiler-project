%{
#include "c_grammar.h"
#include "ast_structs.h"
#include <stdio.h>
#include <iostream>
  /* #include "SymbolTable.hpp" */
struct ast_root ast;

extern SymbolTable st;
extern bool parseDebug;
extern std::ofstream parseDebugOut;
extern int lineCount;
/*for declaration or not*/
extern bool declMode;

extern bool undeclVar;
extern bool redeclVar;

/* this is used for generating 3ac */
 int currentTemp = 0;
 int currentLabel = 0;

 /*wrote this one after the ones below it
   explain why this isn't used in those
 */
 std::string intToStr(int x)
 {
   std::stringstream ss;
   ss<<x;
   return ss.str();
 }

 std::string getCurrentTemp()
   {
     std::stringstream ss;
     ss<<"T"<<currentTemp;
     return ss.str();
   }

 std::string getLastTemp()
   {
     std::stringstream ss;
     ss<<"T"<<(currentTemp-1);
     return ss.str();
   }

 std::string getNextTemp()
   {
     std::stringstream ss;
     ss<<"T"<<(currentTemp+1);
     return ss.str();
   }

std::string getCurrentLabel()
   {
     std::stringstream ss;
     ss<<"L"<<currentLabel;
     return ss.str();
   }

 std::string getLastLabel()
   {
     std::stringstream ss;
     ss<<"L"<<(currentLabel-1);
     return ss.str();
   }

 std::string getNextLabel()
   {
     std::stringstream ss;
     ss<<"L"<<(currentLabel+1);
     return ss.str();
   }

std::string getTypeFromSpecInt(int specs)
  {

    //int is a sensible default
    std::string type_string = "int";

    //right now, we just use the last as the 
    //actual in the event to 2 values being assigned
    if(specs & xVOID)
      {
	type_string = "void";
      }
    if(specs & xCHAR)
      {
	type_string = "char";
      }
    if(specs & xSHORT)
      {
	 type_string = "short";
      }
    if(specs & xINT)
      {
	 type_string = "int";
      }
    if(specs & xLONG)
      {
	 type_string = "long";
      }
    if(specs & xFLOAT)
      {
	type_string = "float";
      }
    if(specs & xDOUBLE)
      {
	type_string = "double";
      }
    
    
    return type_string;
    
  
  }

/* for getting the integer value of a constant in a constant expression 
   used in declaring arrays
 */
 int getConstantExpressionInt(constant_expression_node *aNode)
 {
   /*this is a moment were awesome granularity can be a pain */
   
   conditional_expression_node *condexp = (*aNode).conditional_expression_node_1;
   logical_or_expression_node *logicorexp = (*condexp).logical_or_expression_node_1;
   logical_and_expression_node *logicandexp = (*logicorexp).logical_and_expression_node_1;
   inclusive_or_expression_node *incorexp = (*logicandexp).inclusive_or_expression_node_1;
   exclusive_or_expression_node *excorexp = (*incorexp).exclusive_or_expression_node_1;
   and_expression_node *andexp = (*excorexp).and_expression_node_1;
   equality_expression_node *equalexp = (*andexp).equality_expression_node_1;
   relational_expression_node *relexp = (*equalexp).relational_expression_node_1;
   shift_expression_node *shiftexp = (*relexp).shift_expression_node_1;
   additive_expression_node *addexp = (*shiftexp).additive_expression_node_1;
   multiplicative_expression_node *mulexp = (*addexp).multiplicative_expression_node_1;
   cast_expression_node *castexp = (*mulexp).cast_expression_node_1;
   unary_expression_node *unaryexp = (*castexp).unary_expression_node_1;
   postfix_expression_node *postexp = (*unaryexp).postfix_expression_node_1;
   primary_expression_node *primeexp = (*postexp).primary_expression_node_1;
   constant_node *constnode = (*primeexp).constant_node_1;
   return (*constnode).int_token_1;
   
 }

/* this is going to be refactored away */
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


extern bool parseDebug;
extern std::ofstream parseDebugOut;
void print_ast_root(ast_root *ptr);
void print_translation_unit_node(translation_unit_node *ptr, std::string indent);
void print_external_declaration_node(external_declaration_node *ptr, std::string indent);
void print_function_definition_node(function_definition_node *ptr, std::string indent);
void print_declaration_node(declaration_node *ptr, std::string indent);
void print_declaration_list_node(declaration_list_node *ptr, std::string indent);
void print_declaration_specifiers_node(declaration_specifiers_node *ptr, std::string indent);
void print_storage_class_specifier_node(storage_class_specifier_node *ptr, std::string indent);
void print_type_specifier_node(type_specifier_node *ptr, std::string indent);
void print_type_qualifier_node(type_qualifier_node *ptr, std::string indent);
void print_struct_or_union_specifier_node(struct_or_union_specifier_node *ptr, std::string indent);
void print_struct_or_union_node(struct_or_union_node *ptr, std::string indent);
void print_struct_declaration_list_node(struct_declaration_list_node *ptr, std::string indent);
void print_init_declarator_list_node(init_declarator_list_node *ptr, std::string indent);
void print_init_declarator_node(init_declarator_node *ptr, std::string indent);
void print_struct_declaration_node(struct_declaration_node *ptr, std::string indent);
void print_specifier_qualifier_list_node(specifier_qualifier_list_node *ptr, std::string indent);
void print_struct_declarator_list_node(struct_declarator_list_node *ptr, std::string indent);
void print_struct_declarator_node(struct_declarator_node *ptr, std::string indent);
void print_enum_specifier_node(enum_specifier_node *ptr, std::string indent);
void print_enumerator_list_node(enumerator_list_node *ptr, std::string indent);
void print_enumerator_node(enumerator_node *ptr, std::string indent);
void print_declarator_node(declarator_node *ptr, std::string indent);
void print_direct_declarator_node(direct_declarator_node *ptr, std::string indent);
void print_pointer_node(pointer_node *ptr, std::string indent);
void print_type_qualifier_list_node(type_qualifier_list_node *ptr, std::string indent);
void print_parameter_type_list_node(parameter_type_list_node *ptr, std::string indent);
void print_parameter_list_node(parameter_list_node *ptr, std::string indent);
void print_parameter_declaration_node(parameter_declaration_node *ptr, std::string indent);
void print_identifier_list_node(identifier_list_node *ptr, std::string indent);
void print_initializer_node(initializer_node *ptr, std::string indent);
void print_initializer_list_node(initializer_list_node *ptr, std::string indent);
void print_type_name_node(type_name_node *ptr, std::string indent);
void print_abstract_declarator_node(abstract_declarator_node *ptr, std::string indent);
void print_direct_abstract_declarator_node(direct_abstract_declarator_node *ptr, std::string indent);
void print_statement_node(statement_node *ptr, std::string indent);
void print_labeled_statement_node(labeled_statement_node *ptr, std::string indent);
void print_expression_statement_node(expression_statement_node *ptr, std::string indent);
void print_compound_statement_node(compound_statement_node *ptr, std::string indent);
void print_statement_list_node(statement_list_node *ptr, std::string indent);
void print_selection_statement_node(selection_statement_node *ptr, std::string indent);
void print_iteration_statement_node(iteration_statement_node *ptr, std::string indent);
void print_jump_statement_node(jump_statement_node *ptr, std::string indent);
void print_expression_node(expression_node *ptr, std::string indent);
void print_assignment_expression_node(assignment_expression_node *ptr, std::string indent);
void print_assignment_operator_node(assignment_operator_node *ptr, std::string indent);
void print_conditional_expression_node(conditional_expression_node *ptr, std::string indent);
void print_constant_expression_node(constant_expression_node *ptr, std::string indent);
void print_logical_or_expression_node(logical_or_expression_node *ptr, std::string indent);
void print_logical_and_expression_node(logical_and_expression_node *ptr, std::string indent);
void print_inclusive_or_expression_node(inclusive_or_expression_node *ptr, std::string indent);
void print_exclusive_or_expression_node(exclusive_or_expression_node *ptr, std::string indent);
void print_and_expression_node(and_expression_node *ptr, std::string indent);
void print_equality_expression_node(equality_expression_node *ptr, std::string indent);
void print_relational_expression_node(relational_expression_node *ptr, std::string indent);
void print_shift_expression_node(shift_expression_node *ptr, std::string indent);
void print_additive_expression_node(additive_expression_node *ptr, std::string indent);
void print_multiplicative_expression_node(multiplicative_expression_node *ptr, std::string indent);
void print_cast_expression_node(cast_expression_node *ptr, std::string indent);
void print_unary_expression_node(unary_expression_node *ptr, std::string indent);
void print_unary_operator_node(unary_operator_node *ptr, std::string indent);
void print_postfix_expression_node(postfix_expression_node *ptr, std::string indent);
void print_primary_expression_node(primary_expression_node *ptr, std::string indent);
void print_argument_expression_list_node(argument_expression_list_node *ptr, std::string indent);
void print_constant_node(constant_node *ptr, std::string indent);
void print_string_node(string_node *ptr, std::string indent);
void print_identifier_node(identifier_node *ptr, std::string indent);

std::string ast_3ac(ast_root *ptr);
std::string translation_unit_node_3ac(translation_unit_node *ptr);
std::string external_declaration_node_3ac(external_declaration_node *ptr);
std::string function_definition_node_3ac(function_definition_node *ptr);
std::string declaration_node_3ac(declaration_node *ptr);
std::string declaration_list_node_3ac(declaration_list_node *ptr);
std::string declaration_specifiers_node_3ac(declaration_specifiers_node *ptr);
std::string storage_class_specifier_node_3ac(storage_class_specifier_node *ptr);
std::string type_specifier_node_3ac(type_specifier_node *ptr);
std::string type_qualifier_node_3ac(type_qualifier_node *ptr);
std::string struct_or_union_specifier_node_3ac(struct_or_union_specifier_node *ptr);
std::string struct_or_union_node_3ac(struct_or_union_node *ptr);
std::string struct_declaration_list_node_3ac(struct_declaration_list_node *ptr);
std::string init_declarator_list_node_3ac(init_declarator_list_node *ptr);
std::string init_declarator_node_3ac(init_declarator_node *ptr);
std::string struct_declaration_node_3ac(struct_declaration_node *ptr);
std::string specifier_qualifier_list_node_3ac(specifier_qualifier_list_node *ptr);
std::string struct_declarator_list_node_3ac(struct_declarator_list_node *ptr);
std::string struct_declarator_node_3ac(struct_declarator_node *ptr);
std::string enum_specifier_node_3ac(enum_specifier_node *ptr);
std::string enumerator_list_node_3ac(enumerator_list_node *ptr);
std::string enumerator_node_3ac(enumerator_node *ptr);
std::string declarator_node_3ac(declarator_node *ptr);
std::string direct_declarator_node_3ac(direct_declarator_node *ptr);
std::string pointer_node_3ac(pointer_node *ptr);
std::string type_qualifier_list_node_3ac(type_qualifier_list_node *ptr);
std::string parameter_type_list_node_3ac(parameter_type_list_node *ptr);
std::string parameter_list_node_3ac(parameter_list_node *ptr);
std::string parameter_declaration_node_3ac(parameter_declaration_node *ptr);
std::string identifier_list_node_3ac(identifier_list_node *ptr);
std::string initializer_node_3ac(initializer_node *ptr);
std::string initializer_list_node_3ac(initializer_list_node *ptr);
std::string type_name_node_3ac(type_name_node *ptr);
std::string abstract_declarator_node_3ac(abstract_declarator_node *ptr);
std::string direct_abstract_declarator_node_3ac(direct_abstract_declarator_node *ptr);
std::string statement_node_3ac(statement_node *ptr);
std::string labeled_statement_node_3ac(labeled_statement_node *ptr);
std::string expression_statement_node_3ac(expression_statement_node *ptr);
std::string compound_statement_node_3ac(compound_statement_node *ptr);
std::string statement_list_node_3ac(statement_list_node *ptr);
std::string selection_statement_node_3ac(selection_statement_node *ptr);
std::string iteration_statement_node_3ac(iteration_statement_node *ptr);
std::string jump_statement_node_3ac(jump_statement_node *ptr);
std::string expression_node_3ac(expression_node *ptr);
std::string assignment_expression_node_3ac(assignment_expression_node *ptr);
std::string assignment_operator_node_3ac(assignment_operator_node *ptr);
std::string conditional_expression_node_3ac(conditional_expression_node *ptr);
std::string constant_expression_node_3ac(constant_expression_node *ptr);
std::string logical_or_expression_node_3ac(logical_or_expression_node *ptr);
std::string logical_and_expression_node_3ac(logical_and_expression_node *ptr);
std::string inclusive_or_expression_node_3ac(inclusive_or_expression_node *ptr);
std::string exclusive_or_expression_node_3ac(exclusive_or_expression_node *ptr);
std::string and_expression_node_3ac(and_expression_node *ptr);
std::string equality_expression_node_3ac(equality_expression_node *ptr);
std::string relational_expression_node_3ac(relational_expression_node *ptr);
std::string shift_expression_node_3ac(shift_expression_node *ptr);
std::string additive_expression_node_3ac(additive_expression_node *ptr);
std::string multiplicative_expression_node_3ac(multiplicative_expression_node *ptr);
std::string cast_expression_node_3ac(cast_expression_node *ptr);
std::string unary_expression_node_3ac(unary_expression_node *ptr);
std::string unary_operator_node_3ac(unary_operator_node *ptr);
std::string postfix_expression_node_3ac(postfix_expression_node *ptr);
std::string primary_expression_node_3ac(primary_expression_node *ptr);
std::string argument_expression_list_node_3ac(argument_expression_list_node *ptr);
std::string constant_node_3ac(constant_node *ptr);
std::string string_node_3ac(string_node *ptr);
std::string identifier_node_3ac(identifier_node *ptr);



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


%token <sval> IDENTIFIER 
%token <ival> INTEGER_CONSTANT 
%token <dval> FLOATING_CONSTANT 
%token <cval> CHARACTER_CONSTANT 
%token <sval> ENUMERATION_CONSTANT 
%token <sval> STRING_LITERAL 
%token <sval> SIZEOF
%token <sval> PTR_OP 
%token <sval> INC_OP DEC_OP 
%token <sval> LEFT_OP RIGHT_OP 
%token <sval> LE_OP GE_OP EQ_OP NE_OP
%token <sval> AND_OP OR_OP 
%token <sval> MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN 
%token <sval> LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN 
%token <sval> TYPEDEF_NAME
%token <sval> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <sval> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <sval> STRUCT UNION ENUM ELIPSIS RANGE

%token <sval> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN ERROR


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
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).external_declaration_node_1=$1;
    (*anode).translation_unit_node_1= 0;
    $$ = anode;
    ast.root = anode;

}
    |translation_unit external_declaration
{
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).translation_unit_node_1=$1;
    (*anode).external_declaration_node_1=$2;
    $$ = anode;
    ast.root = anode;
}
    ;
external_declaration
:function_definition{st.pop();}
{
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).function_definition_node_1=$1;
    (*anode).declaration_node_1= 0;
    $$ = anode;
}
    |declaration
{
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).declaration_node_1=$1;
    (*anode).function_definition_node_1= 0;
    $$ = anode;
}
    ;
function_definition
:declarator {st.push();} compound_statement {st.pop();}
{
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declarator_node_1=$1;
    (*anode).compound_statement_node_1=$3;
    (*anode).declaration_list_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    $$ = anode;
}
|declarator declaration_list {st.push();} compound_statement{st.pop();}
{
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declarator_node_1=$1;
    (*anode).declaration_list_node_1=$2;
    (*anode).compound_statement_node_1=$4;
    (*anode).declaration_specifiers_node_1= 0;
    $$ = anode;
}
|declaration_specifiers declarator {st.push();} compound_statement {st.pop();}
{
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).declarator_node_1=$2;
    (*anode).compound_statement_node_1=$4;
    (*anode).declaration_list_node_1= 0;
    $$ = anode;
}
|declaration_specifiers declarator declaration_list{st.push();} compound_statement {st.pop();}
{
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).declarator_node_1=$2;
    (*anode).declaration_list_node_1=$3;
    (*anode).compound_statement_node_1=$5;
    $$ = anode;
}
    ;
declaration
:declaration_specifiers ';'{declMode=false;}
{
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).init_declarator_list_node_1= 0;
    $$ = anode;
}
|declaration_specifiers init_declarator_list ';'{declMode = false;}
     //st code
    {
      //we'll be using this to store most of the info about
      //the object
      unsigned int new_specs = 0;
      //we'll need to get the info from the declaration specifiers
      
      //this is just to know whether there is another spec node
      bool anotherSpecifier = true;
      declaration_specifiers_node * currentSpecNode = $1;
      while(anotherSpecifier)
	{
	  if((*currentSpecNode).storage_class_specifier_node_1 != 0)
	    {
	      
	      std::string value = (*(*currentSpecNode).storage_class_specifier_node_1).token_1;
	      if(value =="auto")
		{
		  new_specs |= xAUTO;
		}
	      else if(value == "register")
		{
		  new_specs |= xREGISTER;
		}
	      else if(value == "static")
		{
		  new_specs |= xSTATIC;
		}
	      else if(value == "extern")
		{
		  new_specs |= xEXTERN;
		}
	      else if(value == "typedef")
		{
		  new_specs |= xTYPEDEF;
		}
	    }
	  if((*currentSpecNode).type_specifier_node_1 != 0)
	    {

	      std::string value = (*(*currentSpecNode).type_specifier_node_1).token_1;

	      if(value == "void")
		{
		  new_specs |= xVOID;
		}
	      else if(value == "char")
		{
		  new_specs |= xCHAR;
		}
	      else if(value == "short")
		{
		  new_specs |= xSHORT;
		}
	      else if(value == "int")
		{
		  new_specs |= xINT;
		}
	      else if(value == "long")
		{
		  new_specs |= xLONG;
		}
	      else if(value == "float")
		{
		  new_specs |= xFLOAT;
		}
	      else if(value == "double")
		{
		  new_specs |= xDOUBLE;
		}
	      else if(value == "signed")
		{
		  new_specs  |= xSIGNED;
		}
	      else if(value == "unsigned")
		{
		  new_specs |= xUNSIGNED; 
		}
	      else if(value == "struct")
		{
		  new_specs |= xSTRUCT;
		}
	      else if(value == "union" )
		{
		  new_specs |= xUNION;
		}
	      else if(value ==  "enum")
		{
		  new_specs  |= xENUM;
		}
	      else if(value == "typedef_name")
		{
		  new_specs |=  xTYPEDEF_NAME;
		}
	    }
    
	      
	  if((*currentSpecNode).type_qualifier_node_1 != 0)
	    {

	      std::string value = (*(*currentSpecNode).type_qualifier_node_1).token_1;
	      if(value=="const")
		{
		  new_specs |= xCONST;
		}
	      else if(value == "volatile")
		{
		  new_specs |= xVOLATILE;
		}
	      
	      
	    }
	  
	  if((*currentSpecNode).declaration_specifiers_node_1 != 0)
	    {
	      currentSpecNode = (*currentSpecNode).declaration_specifiers_node_1;
	    }
	  else
	    {
	      anotherSpecifier = false;
	    }
	}

      /*
	at this point new_specifier should have all
	of the info needed, now we can add this
	to every value declared
      */
      bool anotherDeclarator = true;
      init_declarator_list_node* currentDeclList = $2;
      while(anotherDeclarator)
	{
	  /*
	    lots of thinking has to happen here
	    function, array pointer etc are all determined at
	    this stage
	   */
	  unsigned int this_spec = new_specs;
	  init_declarator_node *int_decl = (*currentDeclList).init_declarator_node_1;
	  declarator_node *decl_node = (*int_decl).declarator_node_1;
	  
	  //take care of pointer
	  if((*decl_node).pointer_node_1 != 0)
	    {
	      this_spec |= xPOINTER;
	    }

	  //almost ready to actually touch the symbol table
	  direct_declarator_node *dd = (*decl_node).direct_declarator_node_1;
	  
	  //follow the direct declarators until we find an identifier
	  while( (*dd).identifier_node_1 == 0 &&( (*dd).declarator_node_1 == 0))
	    {
	      /* arrays
		 don't forget to deal with constant expressions
		 either here or elsewhere
		 also array dimensions etc...
	      */
	      if((*dd).char_lit_1 == "'['")
		{
		  this_spec |= xARRAY;
		}
	      

	      /*functions same thing, 
		theire may be a lot we want to deal with here
		
	       */
	      if((*dd).char_lit_1 == "'('")
		{
		  this_spec |= xFUNCTION;
		}



	      //change to end loops
	      dd = (*dd).direct_declarator_node_1;
	    }

	  
	  /*
	    unless we have to, I don't intend on dealing with '('declaration')'
	    or unless I really understand what it means ;)
	   */
	  if((*dd).declarator_node_1 != 0)
	    {
	      std::cout<<"OMG RIGHT NOW WE DON'T DEAL WITH THIS!"<<std::endl;
	    }


	  /*
	    finally we get to indentifiers!!
	    don't forget '(' declarator ')' will probably cause
	    a seg fault
	   */

	  identifier_node * id_node = (*dd).identifier_node_1;

	  
	  //now I never have to look it up, or rebuild the symboltable!
	  (*id_node).specs = this_spec;
	  
	 	  
	  //I forget if I should just be seaching top or all....
	  SymbolContent *sc = st.searchAll((*id_node).token_1);
	  (*sc).specs = this_spec;
	  (*sc).ac_node = (*id_node).ac_node;
	  //statement to decide whehter or not there are more nodes in the list
	  if((*currentDeclList).init_declarator_list_node_1 != 0)
	    {
	      currentDeclList = (*currentDeclList).init_declarator_list_node_1;
	    }
	  else
	    {
	      anotherDeclarator = false;
	    }
	}

    }
      
    
{
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).init_declarator_list_node_1=$2;
    $$ = anode;
}
    ;
declaration_list
:{declMode=true;}declaration
{
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_node_1=$2;
    (*anode).declaration_list_node_1= 0;
    $$ = anode;
}
|declaration_list{declMode=true;} declaration
{
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_list_node_1=$1;
    (*anode).declaration_node_1=$3;
    $$ = anode;
}
    ;
declaration_specifiers
:storage_class_specifier {declMode = true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=$1;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
|storage_class_specifier declaration_specifiers {declMode = true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=$1;
    (*anode).declaration_specifiers_node_1=$2;
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
|type_specifier {declMode = true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=$1;
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
|type_specifier declaration_specifiers {declMode = true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=$1;
    (*anode).declaration_specifiers_node_1=$2;
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
|type_qualifier {declMode=true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=$1;
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    $$ = anode;
}
|type_qualifier declaration_specifiers {declMode=true;}
{
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=$1;
    (*anode).declaration_specifiers_node_1=$2;
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    $$ = anode;
}
    ;
storage_class_specifier 
    :AUTO {declMode = true;}
{
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |REGISTER {declMode = true;}
{
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |STATIC {declMode = true;}
{
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |EXTERN {declMode = true;}
{
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |TYPEDEF {declMode = true;}
{
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    ;
type_specifier
    :VOID {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |CHAR {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |SHORT {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
|INT {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |LONG {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |FLOAT {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |DOUBLE {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |SIGNED {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |UNSIGNED {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |struct_or_union_specifier {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).struct_or_union_specifier_node_1=$1;
    (*anode).token_1= 0;
    (*anode).enum_specifier_node_1= 0;
    $$ = anode;
}
    |enum_specifier {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).enum_specifier_node_1=$1;
    (*anode).token_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    |TYPEDEF_NAME {declMode = true;}
{
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=$1;
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    $$ = anode;
}
    ;
type_qualifier
    :CONST {declMode = true;}
{
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |VOLATILE {declMode = true;}
{
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    ;
struct_or_union_specifier
    :struct_or_union identifier '{' struct_declaration_list '}'
{
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).struct_or_union_node_1=$1;
    (*anode).identifier_node_1=$2;
    (*anode).struct_declaration_list_node_1=$4;
    $$ = anode;
}
    |struct_or_union '{' struct_declaration_list '}'
{
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).struct_or_union_node_1=$1;
    (*anode).struct_declaration_list_node_1=$3;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |struct_or_union identifier
{
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).struct_or_union_node_1=$1;
    (*anode).identifier_node_1=$2;
    (*anode).char_lit_1= "";
    (*anode).struct_declaration_list_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    ;
struct_or_union
    :STRUCT {declMode = true;}
{
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    |UNION {declMode = true;}
{
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    ;
struct_declaration_list
    :struct_declaration
{
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_node_1=$1;
    (*anode).struct_declaration_list_node_1= 0;
    $$ = anode;
}
    |struct_declaration_list struct_declaration
{
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_list_node_1=$1;
    (*anode).struct_declaration_node_1=$2;
    $$ = anode;
}
    ;
init_declarator_list
:init_declarator
{
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).init_declarator_node_1=$1;
    (*anode).init_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
|init_declarator_list ',' init_declarator 
{
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).init_declarator_list_node_1=$1;
    (*anode).init_declarator_node_1=$3;
    $$ = anode;
}
    ;
init_declarator
    :declarator
    {
      init_declarator_node *anode;
      anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
     (*anode).declarator_node_1=$1;
     (*anode).initializer_node_1= 0;
     (*anode).char_lit_1= "";
     $$ = anode;
    }
|declarator '='{declMode = false;} initializer
{
  init_declarator_node *anode;
  anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
  (*anode).char_lit_1="'='";
  (*anode).declarator_node_1=$1;
  (*anode).initializer_node_1=$4;
  $$ = anode;
}
;
struct_declaration
    :specifier_qualifier_list struct_declarator_list ';'
{
     struct_declaration_node *anode;
anode = (struct_declaration_node*) malloc(sizeof(struct_declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).specifier_qualifier_list_node_1=$1;
    (*anode).struct_declarator_list_node_1=$2;
    $$ = anode;
}
    ;
specifier_qualifier_list
    :type_specifier
{
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=$1;
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
    |type_specifier specifier_qualifier_list
{
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=$1;
    (*anode).specifier_qualifier_list_node_1=$2;
    (*anode).type_qualifier_node_1= 0;
    $$ = anode;
}
    |type_qualifier
{
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=$1;
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    $$ = anode;
}
    |type_qualifier specifier_qualifier_list
{
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=$1;
    (*anode).specifier_qualifier_list_node_1=$2;
    (*anode).type_specifier_node_1= 0;
    $$ = anode;
}
    ;
struct_declarator_list
    :struct_declarator
{
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).struct_declarator_node_1=$1;
    (*anode).struct_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |struct_declarator_list ',' struct_declarator
{
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).struct_declarator_list_node_1=$1;
    (*anode).struct_declarator_node_1=$3;
    $$ = anode;
}
    ;
struct_declarator
    :declarator
{
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).declarator_node_1=$1;
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |':' constant_expression
{
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).constant_expression_node_1=$2;
    (*anode).declarator_node_1= 0;
    $$ = anode;
}
    |declarator ':' constant_expression
{
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).declarator_node_1=$1;
    (*anode).constant_expression_node_1=$3;
    $$ = anode;
}
    ;
enum_specifier
    :ENUM '{' enumerator_list '}'
{
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).token_1=$1;
    (*anode).enumerator_list_node_1=$3;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |ENUM identifier '{' enumerator_list '}'
{
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).token_1=$1;
    (*anode).identifier_node_1=$2;
    (*anode).enumerator_list_node_1=$4;
    $$ = anode;
}
    |ENUM identifier
{
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).token_1=$1;
    (*anode).identifier_node_1=$2;
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    ;
enumerator_list
    :enumerator
{
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).enumerator_node_1=$1;
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    $$ = anode;
}
    |enumerator_list ',' enumerator
{
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).char_lit_1="','";
    (*anode).enumerator_list_node_1=$1;
    (*anode).enumerator_node_1=$3;
    $$ = anode;
}
    ;
enumerator
    :identifier
{
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).identifier_node_1=$1;
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |identifier '=' constant_expression
{
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).char_lit_1="'='";
    (*anode).identifier_node_1=$1;
    (*anode).constant_expression_node_1=$3;
    $$ = anode;
}
    ;
declarator
    :direct_declarator
{
     declarator_node *anode;
     anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).direct_declarator_node_1=$1;
    (*anode).pointer_node_1= 0;
    $$ = anode;
    
    if((*$1).constant_expression_node_1 != 0)
      {
	direct_declarator_node *dd = $1;
	array_const_node *ac;
	ac = (array_const_node*) malloc(sizeof(array_const_node));
	(*ac).value = getConstantExpressionInt((*$1).constant_expression_node_1);
	(*ac).next = 0;
	array_const_node *acLast = ac;
	dd = (*dd).direct_declarator_node_1;
	while((*dd).constant_expression_node_1 != 0)
	  {
	    ac = (array_const_node*) malloc(sizeof(array_const_node));
	    (*ac).value = getConstantExpressionInt((*dd).constant_expression_node_1);
	    (*ac).next = acLast;
	    acLast = ac;
	    dd = (*dd).direct_declarator_node_1;
	  }
	identifier_node *inode = (*dd).identifier_node_1;
	(*inode).ac_node = acLast;
      }
}
    |pointer direct_declarator
{
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).pointer_node_1=$1;
    (*anode).direct_declarator_node_1=$2;
    $$ = anode;
}
    ;
direct_declarator
    :identifier
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).identifier_node_1=$1;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).direct_declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      (*anode).declarator_node_1= 0;
      (*anode).char_lit_1= "";
      (*anode).char_lit_2= "";
      $$ = anode;
    }
    |'(' declarator ')'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'('";
      (*anode).char_lit_2="')'";
      (*anode).declarator_node_1=$2;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).identifier_node_1= 0;
      (*anode).direct_declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      $$ = anode;
    }
    |direct_declarator '[' ']'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'['";
      (*anode).char_lit_2="']'";
      (*anode).direct_declarator_node_1=$1;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      (*anode).identifier_node_1= 0;
      $$ = anode;
    }
    |direct_declarator '[' constant_expression ']'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'['";
      (*anode).char_lit_2="']'";
      (*anode).direct_declarator_node_1=$1;
      (*anode).constant_expression_node_1=$3;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).declarator_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      (*anode).identifier_node_1= 0;
      $$ = anode;
    }
    |direct_declarator '('{st.push();} ')'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'('";
      (*anode).char_lit_2="')'";
      (*anode).direct_declarator_node_1=$1;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      (*anode).identifier_node_1= 0;
      $$ = anode;
    }
    |direct_declarator '(' {st.push();}parameter_type_list ')'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'('";
      (*anode).char_lit_2="')'";
      (*anode).direct_declarator_node_1=$1;
      (*anode).parameter_type_list_node_1=$4;
      (*anode).declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_list_node_1= 0;
      (*anode).identifier_node_1= 0;
      $$ = anode;
    }
    |direct_declarator '('{st.push();} identifier_list ')'
    {
      direct_declarator_node *anode;
      anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
      (*anode).char_lit_1="'('";
      (*anode).char_lit_2="')'";
      (*anode).direct_declarator_node_1=$1;
      (*anode).identifier_list_node_1=$4;
      (*anode).parameter_type_list_node_1= 0;
      (*anode).declarator_node_1= 0;
      (*anode).constant_expression_node_1= 0;
      (*anode).identifier_node_1= 0;
      $$ = anode;
    }
    ;
pointer
    :'*'
{
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1= 0;
    (*anode).type_qualifier_list_node_1= 0;
    $$ = anode;
}
    |'*' type_qualifier_list
{
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=$2;
    (*anode).pointer_node_1= 0;
    $$ = anode;
}
    |'*' pointer
{
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1=$2;
    (*anode).type_qualifier_list_node_1= 0;
    $$ = anode;
}
    |'*' type_qualifier_list pointer
{
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=$2;
    (*anode).pointer_node_1=$3;
    $$ = anode;
}
    ;
type_qualifier_list
    :type_qualifier
{
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_node_1=$1;
    (*anode).type_qualifier_list_node_1= 0;
    $$ = anode;
}
    |type_qualifier_list type_qualifier
{
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_list_node_1=$1;
    (*anode).type_qualifier_node_1=$2;
    $$ = anode;
}
    ;
parameter_type_list
:parameter_list{declMode=false;}
{
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).parameter_list_node_1=$1;
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
|parameter_list ',' ELIPSIS {declMode=false;}
{
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).char_lit_1="','";
    (*anode).token_1=$3;
    (*anode).parameter_list_node_1=$1;
    $$ = anode;
}
    ;
parameter_list
    :parameter_declaration
{
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).parameter_declaration_node_1=$1;
    (*anode).parameter_list_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |parameter_list ',' parameter_declaration
{
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).char_lit_1="','";
    (*anode).parameter_list_node_1=$1;
    (*anode).parameter_declaration_node_1=$3;
    $$ = anode;
}
    ;
parameter_declaration
    :declaration_specifiers declarator
{
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).declarator_node_1=$2;
    (*anode).abstract_declarator_node_1= 0;
    $$ = anode;
}
    |declaration_specifiers
{
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).declarator_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    $$ = anode;
}
    |declaration_specifiers abstract_declarator
{
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=$1;
    (*anode).abstract_declarator_node_1=$2;
    (*anode).declarator_node_1= 0;
    $$ = anode;
}
    ;
identifier_list
    :identifier
{
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).identifier_node_1=$1;
    (*anode).char_lit_1= "";
    (*anode).identifier_list_node_1= 0;
    $$ = anode;
}
    |identifier_list ',' identifier
{
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).char_lit_1="','";
    (*anode).identifier_list_node_1=$1;
    (*anode).identifier_node_1=$3;
    $$ = anode;
}
    ;
initializer
    :assignment_expression
{
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).assignment_expression_node_1=$1;
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_3= "";
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |'{' initializer_list '}'
{
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).initializer_list_node_1=$2;
    (*anode).assignment_expression_node_1= 0;
    (*anode).char_lit_3= "";
    $$ = anode;
}
    |'{' initializer_list ',' '}'
{
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="','";
    (*anode).char_lit_3="'}'";
    (*anode).initializer_list_node_1=$2;
    (*anode).assignment_expression_node_1= 0;
    $$ = anode;
}
    ;
initializer_list
    :initializer
{
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).initializer_node_1=$1;
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |initializer_list ',' initializer
{
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).char_lit_1="','";
    (*anode).initializer_list_node_1=$1;
    (*anode).initializer_node_1=$3;
    $$ = anode;
}
    ;
type_name
    :specifier_qualifier_list
{
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=$1;
    (*anode).abstract_declarator_node_1= 0;
    $$ = anode;
}
    |specifier_qualifier_list abstract_declarator
{
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=$1;
    (*anode).abstract_declarator_node_1=$2;
    $$ = anode;
}
    ;
abstract_declarator
    :pointer
{
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=$1;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |direct_abstract_declarator
{
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).direct_abstract_declarator_node_1=$1;
    (*anode).pointer_node_1= 0;
    $$ = anode;
}
    |pointer direct_abstract_declarator
{
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=$1;
    (*anode).direct_abstract_declarator_node_1=$2;
    $$ = anode;
}
    ;
direct_abstract_declarator
    :'(' abstract_declarator ')'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).abstract_declarator_node_1=$2;
    (*anode).parameter_type_list_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |'[' ']'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |'[' constant_expression ']'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).constant_expression_node_1=$2;
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |direct_abstract_declarator '[' ']'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_abstract_declarator_node_1=$1;
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    $$ = anode;
}
    |direct_abstract_declarator '[' constant_expression ']'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_abstract_declarator_node_1=$1;
    (*anode).constant_expression_node_1=$3;
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    $$ = anode;
}
    |'(' ')'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |'(' parameter_type_list ')'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).parameter_type_list_node_1=$2;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    $$ = anode;
}
    |direct_abstract_declarator '(' ')'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_abstract_declarator_node_1=$1;
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    $$ = anode;
}
    |direct_abstract_declarator '(' parameter_type_list ')'
{
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_abstract_declarator_node_1=$1;
    (*anode).parameter_type_list_node_1=$3;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    $$ = anode;
}
    ;
statement
    :labeled_statement
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).labeled_statement_node_1=$1;
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    $$ = anode;
}
|{st.push();}compound_statement{st.pop();}
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).compound_statement_node_1=$2;
    (*anode).expression_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    $$ = anode;
}
    |expression_statement
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).expression_statement_node_1=$1;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    $$ = anode;
}
    |selection_statement
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).selection_statement_node_1=$1;
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    $$ = anode;
}
    |iteration_statement
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).iteration_statement_node_1=$1;
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    $$ = anode;
}
    |jump_statement
{
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).jump_statement_node_1=$1;
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    $$ = anode;
}
    ;
labeled_statement
    :identifier ':' statement
{
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).identifier_node_1=$1;
    (*anode).statement_node_1=$3;
    (*anode).token_1= 0;
    (*anode).constant_expression_node_1= 0;
    $$ = anode;
}
    |CASE constant_expression ':' statement
{
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).token_1=$1;
    (*anode).constant_expression_node_1=$2;
    (*anode).statement_node_1=$4;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |DEFAULT ':' statement
{
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).token_1=$1;
    (*anode).statement_node_1=$3;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    ;
expression_statement
:';'{declMode = false;}
{
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1= 0;
    $$ = anode;
}
|expression ';'{declMode = false;}
{
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1=$1;
    $$ = anode;
}
    ;
compound_statement
:'{' '}'
{
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1= 0;
    (*anode).statement_list_node_1= 0;
    $$ = anode;
}
    |'{' statement_list '}'
{
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).statement_list_node_1=$2;
    (*anode).declaration_list_node_1= 0;
    $$ = anode;
}
    |'{' declaration_list '}'
{
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1=$2;
    (*anode).statement_list_node_1= 0;
    $$ = anode;
}
    |'{' declaration_list statement_list '}'
{
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1=$2;
    (*anode).statement_list_node_1=$3;
    $$ = anode;
}
    ;
statement_list
    :statement
{
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_node_1=$1;
    (*anode).statement_list_node_1= 0;
    $$ = anode;
}
    |statement_list statement
{
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_list_node_1=$1;
    (*anode).statement_node_1=$2;
    $$ = anode;
}
    ;
selection_statement
    :IF '(' expression ')' statement
{
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$5;
    (*anode).token_2= 0;
    (*anode).statement_node_2= 0;
    $$ = anode;
}
    |IF '(' expression ')' statement ELSE statement
{
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=$1;
    (*anode).token_2=$6;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$5;
    (*anode).statement_node_2=$7;
    $$ = anode;
}
    |SWITCH '(' expression ')' statement
{
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$5;
    (*anode).token_2= 0;
    (*anode).statement_node_2= 0;
    $$ = anode;
}
    ;
iteration_statement
    :WHILE '(' expression ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$5;
    (*anode).char_lit_4= "";
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).char_lit_3= "";
    (*anode).token_2= 0;
    $$ = anode;
}
    |DO statement WHILE '(' expression ')' ';'
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).char_lit_3="';'";
    (*anode).token_1=$1;
    (*anode).token_2=$3;
    (*anode).statement_node_1=$2;
    (*anode).expression_node_1=$5;
    (*anode).char_lit_4= "";
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    $$ = anode;
}
    |FOR '(' ';' ';' ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).statement_node_1=$6;
    (*anode).expression_node_1= 0;
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' ';' ';' expression ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$5;
    (*anode).statement_node_1=$7;
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' ';' expression ';' ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$4;
    (*anode).statement_node_1=$7;
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' ';' expression ';' expression ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$4;
    (*anode).expression_node_2=$6;
    (*anode).statement_node_1=$8;
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' expression ';' ';' ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$7;
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' expression ';' ';' expression ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).expression_node_2=$3;
    (*anode).expression_node_1=$3;
    (*anode).statement_node_1=$8;
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' expression ';' expression ';' ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).expression_node_2=$5;
    (*anode).statement_node_1=$8;
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    $$ = anode;
}
    |FOR '(' expression ';' expression ';' expression ')' statement
{
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).expression_node_2=$5;
    (*anode).expression_node_3=$7;
    (*anode).statement_node_1=$9;
    (*anode).token_2= 0;
    $$ = anode;
}
    ;
jump_statement
    :GOTO identifier ';'
{
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=$1;
    (*anode).identifier_node_1=$2;
    (*anode).expression_node_1= 0;
    $$ = anode;
}
    |CONTINUE ';'
{
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |BREAK ';'
{
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |RETURN ';'
{
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    |RETURN expression ';'
{
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=$1;
    (*anode).expression_node_1=$2;
    (*anode).identifier_node_1= 0;
    $$ = anode;
}
    ;
expression
    :assignment_expression
{
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).assignment_expression_node_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |expression ',' assignment_expression
{
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).char_lit_1="','";
    (*anode).expression_node_1=$1;
    (*anode).assignment_expression_node_1=$3;
    $$ = anode;
}
    ;
assignment_expression
    :conditional_expression
{
     assignment_expression_node *anode;
anode = (assignment_expression_node*) malloc(sizeof(assignment_expression_node));
    (*anode).conditional_expression_node_1=$1;
    (*anode).assignment_operator_node_1= 0;
    (*anode).unary_expression_node_1= 0;
    (*anode).assignment_expression_node_1= 0;
    $$ = anode;
}
    |unary_expression assignment_operator assignment_expression
{
     assignment_expression_node *anode;
anode = (assignment_expression_node*) malloc(sizeof(assignment_expression_node));
    (*anode).unary_expression_node_1=$1;
    (*anode).assignment_operator_node_1=$2;
    (*anode).assignment_expression_node_1=$3;
    (*anode).conditional_expression_node_1= 0;
    $$ = anode;
}
    ;
assignment_operator
    :'='
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).char_lit_1="'='";
    (*anode).token_1= 0;
    $$ = anode;
}
    |MUL_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |DIV_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |MOD_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |ADD_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |SUB_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |LEFT_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |RIGHT_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |AND_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |XOR_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |OR_ASSIGN
{
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=$1;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    ;
conditional_expression
    :logical_or_expression
{
     conditional_expression_node *anode;
anode = (conditional_expression_node*) malloc(sizeof(conditional_expression_node));
    (*anode).logical_or_expression_node_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).conditional_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |logical_or_expression '?' expression ':' conditional_expression
{
     conditional_expression_node *anode;
anode = (conditional_expression_node*) malloc(sizeof(conditional_expression_node));
    (*anode).char_lit_1="'?'";
    (*anode).char_lit_2="':'";
    (*anode).logical_or_expression_node_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).conditional_expression_node_1=$5;
    $$ = anode;
}
    ;
constant_expression
    :conditional_expression
{
     constant_expression_node *anode;
anode = (constant_expression_node*) malloc(sizeof(constant_expression_node));
    (*anode).conditional_expression_node_1=$1;
    $$ = anode;
}
    ;
logical_or_expression
    :logical_and_expression
{
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).logical_and_expression_node_1=$1;
    (*anode).token_1= 0;
    (*anode).logical_or_expression_node_1= 0;
    $$ = anode;
}
    |logical_or_expression OR_OP logical_and_expression
{
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).token_1=$2;
    (*anode).logical_or_expression_node_1=$1;
    (*anode).logical_and_expression_node_1=$3;
    $$ = anode;
}
    ;
logical_and_expression
    :inclusive_or_expression
{
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).inclusive_or_expression_node_1=$1;
    (*anode).token_1= 0;
    (*anode).logical_and_expression_node_1= 0;
    $$ = anode;
}
    |logical_and_expression AND_OP inclusive_or_expression
{
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).token_1=$2;
    (*anode).logical_and_expression_node_1=$1;
    (*anode).inclusive_or_expression_node_1=$3;
    $$ = anode;
}
    ;
inclusive_or_expression
    :exclusive_or_expression
{
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).exclusive_or_expression_node_1=$1;
    (*anode).inclusive_or_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |inclusive_or_expression '|' exclusive_or_expression
{
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).char_lit_1="'|'";
    (*anode).inclusive_or_expression_node_1=$1;
    (*anode).exclusive_or_expression_node_1=$3;
    $$ = anode;
}
    ;
exclusive_or_expression
    :and_expression
{
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).and_expression_node_1=$1;
    (*anode).char_lit_1= "";
    (*anode).exclusive_or_expression_node_1= 0;
    $$ = anode;
}
    |exclusive_or_expression '^' and_expression
{
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).char_lit_1="'^'";
    (*anode).exclusive_or_expression_node_1=$1;
    (*anode).and_expression_node_1=$3;
    $$ = anode;
}
    ;
and_expression
    :equality_expression
{
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).equality_expression_node_1=$1;
    (*anode).and_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |and_expression '&' equality_expression
{
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).char_lit_1="'&'";
    (*anode).and_expression_node_1=$1;
    (*anode).equality_expression_node_1=$3;
    $$ = anode;
}
    ;
equality_expression
    :relational_expression
{
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).relational_expression_node_1=$1;
    (*anode).token_1= 0;
    (*anode).equality_expression_node_1= 0;
    $$ = anode;
}
    |equality_expression EQ_OP relational_expression
{
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=$2;
    (*anode).equality_expression_node_1=$1;
    (*anode).relational_expression_node_1=$3;
    $$ = anode;
}
    |equality_expression NE_OP relational_expression
{
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=$2;
    (*anode).equality_expression_node_1=$1;
    (*anode).relational_expression_node_1=$3;
    $$ = anode;
}
    ;
relational_expression
    :shift_expression
{
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).shift_expression_node_1=$1;
    (*anode).token_1= 0;
    (*anode).relational_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |relational_expression '<' shift_expression
{
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).char_lit_1="'<'";
    (*anode).relational_expression_node_1=$1;
    (*anode).shift_expression_node_1=$3;
    (*anode).token_1= 0;
    $$ = anode;
}
    |relational_expression '>' shift_expression
{
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).char_lit_1="'>'";
    (*anode).relational_expression_node_1=$1;
    (*anode).shift_expression_node_1=$3;
    (*anode).token_1= 0;
    $$ = anode;
}
    |relational_expression LE_OP shift_expression
{
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).token_1=$2;
    (*anode).relational_expression_node_1=$1;
    (*anode).shift_expression_node_1=$3;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |relational_expression GE_OP shift_expression
{
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).token_1=$2;
    (*anode).relational_expression_node_1=$1;
    (*anode).shift_expression_node_1=$3;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    ;
shift_expression
    :additive_expression
{
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).additive_expression_node_1=$1;
    (*anode).token_1= 0;
    (*anode).shift_expression_node_1= 0;
    $$ = anode;
}
    |shift_expression LEFT_OP additive_expression
{
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=$2;
    (*anode).shift_expression_node_1=$1;
    (*anode).additive_expression_node_1=$3;
    $$ = anode;
}
    |shift_expression RIGHT_OP additive_expression
{
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=$2;
    (*anode).shift_expression_node_1=$1;
    (*anode).additive_expression_node_1=$3;
    $$ = anode;
}
    ;
additive_expression
    :multiplicative_expression
{
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).multiplicative_expression_node_1=$1;
    (*anode).additive_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |additive_expression '+' multiplicative_expression
{
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'+'";
    (*anode).additive_expression_node_1=$1;
    (*anode).multiplicative_expression_node_1=$3;
    $$ = anode;
}
    |additive_expression '-' multiplicative_expression
{
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'-'";
    (*anode).additive_expression_node_1=$1;
    (*anode).multiplicative_expression_node_1=$3;
    $$ = anode;
}
    ;
multiplicative_expression
    :cast_expression
{
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).cast_expression_node_1=$1;
    (*anode).multiplicative_expression_node_1= 0;
    (*anode).char_lit_1= "";
    $$ = anode;
}
    |multiplicative_expression '*' cast_expression
{
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'*'";
    (*anode).multiplicative_expression_node_1=$1;
    (*anode).cast_expression_node_1=$3;
    $$ = anode;
}
    |multiplicative_expression '/' cast_expression
{
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'/'";
    (*anode).multiplicative_expression_node_1=$1;
    (*anode).cast_expression_node_1=$3;
    $$ = anode;
}
    |multiplicative_expression '%' cast_expression
{
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'%'";
    (*anode).multiplicative_expression_node_1=$1;
    (*anode).cast_expression_node_1=$3;
    $$ = anode;
}
    ;
cast_expression
    :unary_expression
{
     cast_expression_node *anode;
anode = (cast_expression_node*) malloc(sizeof(cast_expression_node));
    (*anode).unary_expression_node_1=$1;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).type_name_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    $$ = anode;
}
    |'(' type_name ')' cast_expression
{
     cast_expression_node *anode;
anode = (cast_expression_node*) malloc(sizeof(cast_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).type_name_node_1=$2;
    (*anode).cast_expression_node_1=$4;
    (*anode).unary_expression_node_1= 0;
    $$ = anode;
}
    ;
unary_expression
    :postfix_expression
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).postfix_expression_node_1=$1;
    (*anode).type_name_node_1= 0;
    (*anode).token_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).unary_expression_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |INC_OP unary_expression
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=$1;
    (*anode).unary_expression_node_1=$2;
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    $$ = anode;
}
    |DEC_OP unary_expression
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=$1;
    (*anode).unary_expression_node_1=$2;
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    $$ = anode;
}
    |unary_operator cast_expression
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).unary_operator_node_1=$1;
    (*anode).cast_expression_node_1=$2;
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (*anode).unary_expression_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |SIZEOF unary_expression
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=$1;
    (*anode).unary_expression_node_1=$2;
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    $$ = anode;
}
    |SIZEOF '(' type_name ')'
{
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=$1;
    (*anode).type_name_node_1=$3;
    (*anode).postfix_expression_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).unary_expression_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    $$ = anode;
}
    ;
unary_operator
    :'&'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'&'";
    $$ = anode;
}
    |'*'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'*'";
    $$ = anode;
}
    |'+'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'+'";
    $$ = anode;
}
    |'-'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'-'";
    $$ = anode;
}
    |'~'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'~'";
    $$ = anode;
}
    |'!'
{
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'!'";
    $$ = anode;
}
    ;
postfix_expression
    :primary_expression
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).primary_expression_node_1=$1;
    (*anode).postfix_expression_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |postfix_expression '[' expression ']'
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).postfix_expression_node_1=$1;
    (*anode).expression_node_1=$3;
    (*anode).token_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).primary_expression_node_1= 0;
    $$ = anode;
}
    |postfix_expression '(' ')'
{
  /*I dont' know why this doesn't work right, but do note the hack to 
    get the identifier node correct*/
     postfix_expression_node *anode;
     anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).postfix_expression_node_1 = 0; //was $1
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).identifier_node_1= (*(*$1).primary_expression_node_1).identifier_node_1;
    (*anode).primary_expression_node_1= 0;
    $$ = anode;
}
    |postfix_expression '(' argument_expression_list ')'
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).postfix_expression_node_1=0;
    (*anode).argument_expression_list_node_1=$3;
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= (*(*$1).primary_expression_node_1).identifier_node_1;
    (*anode).primary_expression_node_1= 0;
    $$ = anode;
}
    |postfix_expression '.' identifier
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'.'";
    (*anode).postfix_expression_node_1=$1;
    (*anode).identifier_node_1=$3;
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).primary_expression_node_1= 0;
    $$ = anode;
}
    |postfix_expression PTR_OP identifier
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=$2;
    (*anode).postfix_expression_node_1=$1;
    (*anode).identifier_node_1=$3;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (*anode).primary_expression_node_1= 0;
    $$ = anode;
}
    |postfix_expression INC_OP
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=$2;
    (*anode).postfix_expression_node_1=$1;
    (*anode).primary_expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |postfix_expression DEC_OP
{
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=$2;
    (*anode).postfix_expression_node_1=$1;
    (*anode).primary_expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    ;
primary_expression
    :identifier
{
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).identifier_node_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (*anode).constant_node_1= 0;
    (*anode).string_node_1= 0;
    $$ = anode;
}
    |constant
{
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).constant_node_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).string_node_1= 0;
    $$ = anode;
}
    |string
{
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).string_node_1=$1;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).constant_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    $$ = anode;
}
    |'(' expression ')'
{
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).expression_node_1=$2;
    (*anode).constant_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).string_node_1= 0;
    $$ = anode;
}
    ;
argument_expression_list
    :assignment_expression
{
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).assignment_expression_node_1=$1;
    (*anode).char_lit_1= "";
    (*anode).argument_expression_list_node_1= 0;
    $$ = anode;
}
    |argument_expression_list ',' assignment_expression
{
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).char_lit_1="','";
    (*anode).argument_expression_list_node_1=$1;
    (*anode).assignment_expression_node_1=$3;
    $$ = anode;
}
    ;
constant
    :INTEGER_CONSTANT
{
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).int_token_1=$1;
 
    (*anode).token_1 = "";
    (*anode).char_token_1 = 0;
    (*anode).dec_token_1 = 0; //just so we can know this is an int
    $$ = anode;
}
    |CHARACTER_CONSTANT
{
     constant_node *anode;
     anode = (constant_node*) malloc(sizeof(constant_node));
     (*anode).char_token_1 = $1;
     (*anode).token_1 = "";
     (*anode).int_token_1 = 0;
     (*anode).dec_token_1 = 0;
     $$ = anode;
}
    |FLOATING_CONSTANT
{
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).dec_token_1=$1;
    (*anode).token_1 = 0;
    (*anode).int_token_1 = 0;
    (*anode).char_token_1 = 0;
    $$ = anode;
}
    |ENUMERATION_CONSTANT
{
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).token_1=$1;
    (*anode).int_token_1 = 0;
    (*anode).dec_token_1 = 0;
    $$ = anode;
}
    ;
string
    :STRING_LITERAL
{
     string_node *anode;
anode = (string_node*) malloc(sizeof(string_node));
    (*anode).token_1=$1;
    $$ = anode;
}
    ;
identifier
    :IDENTIFIER
{
  identifier_node *anode;
  anode = (identifier_node*) malloc(sizeof(identifier_node));
  (*anode).token_1=$1;
  if(declMode)
       {
	 //I should be able to get this
	 SymbolContent *sc = st.searchAll($1);
	 if (sc != 0)
	   {
	     (*anode).lineno = (*sc).lineno;
	   }
	 (*anode).specs = 0;
	 (*anode).ac_node = 0;
       }
  else
    {
	 
      //get stuff symbol table and put in here
      //for future use!
      SymbolContent *sc = st.searchAll($1);
      if (sc != 0)
	{
	  (*anode).specs = (*sc).specs;
	  (*anode).ac_node = (*sc).ac_node;
	  (*anode).lineno = (*sc).lineno;
	}
	 
    }
  $$ = anode;
}
    ;


%%

#include <stdio.h>

extern char yytext[];
extern int column;

void print_ast_root(ast_root *ptr)
{
  print_translation_unit_node((*ptr).root," ");
}

void print_translation_unit_node(translation_unit_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");translation_unit_node aNode = *ptr;
std::cout <<spacing<<"(translation_unit_node\n";
   if(aNode.external_declaration_node_1 != 0)
    { print_external_declaration_node (aNode.external_declaration_node_1,spacing);}
   if(aNode.translation_unit_node_1 != 0)
    { print_translation_unit_node (aNode.translation_unit_node_1,spacing);}
std::cout<<")";
}
void print_external_declaration_node(external_declaration_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");external_declaration_node aNode = *ptr;
std::cout <<spacing<<"(external_declaration_node\n";
   if(aNode.declaration_node_1 != 0)
    { print_declaration_node (aNode.declaration_node_1,spacing);}
   if(aNode.function_definition_node_1 != 0)
    { print_function_definition_node (aNode.function_definition_node_1,spacing);}
std::cout<<")";
}
void print_function_definition_node(function_definition_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");function_definition_node aNode = *ptr;
std::cout <<spacing<<"(function_definition_node\n";
   if(aNode.declarator_node_1 != 0)
    { print_declarator_node (aNode.declarator_node_1,spacing);}
   if(aNode.declaration_list_node_1 != 0)
    { print_declaration_list_node (aNode.declaration_list_node_1,spacing);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { print_declaration_specifiers_node (aNode.declaration_specifiers_node_1,spacing);}
   if(aNode.compound_statement_node_1 != 0)
    { print_compound_statement_node (aNode.compound_statement_node_1,spacing);}
std::cout<<")";
}
void print_declaration_node(declaration_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");declaration_node aNode = *ptr;
std::cout <<spacing<<"(declaration_node\n";
   if(aNode.init_declarator_list_node_1 != 0)
    { print_init_declarator_list_node (aNode.init_declarator_list_node_1,spacing);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { print_declaration_specifiers_node (aNode.declaration_specifiers_node_1,spacing);}
std::cout<<")";
}
void print_declaration_list_node(declaration_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");declaration_list_node aNode = *ptr;
std::cout <<spacing<<"(declaration_list_node\n";
   if(aNode.declaration_node_1 != 0)
    { print_declaration_node (aNode.declaration_node_1,spacing);}
   if(aNode.declaration_list_node_1 != 0)
    { print_declaration_list_node (aNode.declaration_list_node_1,spacing);}
std::cout<<")";
}
void print_declaration_specifiers_node(declaration_specifiers_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");declaration_specifiers_node aNode = *ptr;
std::cout <<spacing<<"(declaration_specifiers_node\n";
   if(aNode.storage_class_specifier_node_1 != 0)
    { print_storage_class_specifier_node (aNode.storage_class_specifier_node_1,spacing);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { print_declaration_specifiers_node (aNode.declaration_specifiers_node_1,spacing);}
   if(aNode.type_specifier_node_1 != 0)
    { print_type_specifier_node (aNode.type_specifier_node_1,spacing);}
   if(aNode.type_qualifier_node_1 != 0)
    { print_type_qualifier_node (aNode.type_qualifier_node_1,spacing);}
std::cout<<")";
}
void print_storage_class_specifier_node(storage_class_specifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");storage_class_specifier_node aNode = *ptr;
std::cout <<spacing<<"(storage_class_specifier_node\n";
std::cout<<")";
}
void print_type_specifier_node(type_specifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");type_specifier_node aNode = *ptr;
std::cout <<spacing<<"(type_specifier_node\n";
   if(aNode.enum_specifier_node_1 != 0)
    { print_enum_specifier_node (aNode.enum_specifier_node_1,spacing);}
   if(aNode.struct_or_union_specifier_node_1 != 0)
    { print_struct_or_union_specifier_node (aNode.struct_or_union_specifier_node_1,spacing);}
std::cout<<")";
}
void print_type_qualifier_node(type_qualifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");type_qualifier_node aNode = *ptr;
std::cout <<spacing<<"(type_qualifier_node\n";
std::cout<<")";
}
void print_struct_or_union_specifier_node(struct_or_union_specifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_or_union_specifier_node aNode = *ptr;
std::cout <<spacing<<"(struct_or_union_specifier_node\n";
   if(aNode.struct_declaration_list_node_1 != 0)
    { print_struct_declaration_list_node (aNode.struct_declaration_list_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
   if(aNode.struct_or_union_node_1 != 0)
    { print_struct_or_union_node (aNode.struct_or_union_node_1,spacing);}
std::cout<<")";
}
void print_struct_or_union_node(struct_or_union_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_or_union_node aNode = *ptr;
std::cout <<spacing<<"(struct_or_union_node\n";
std::cout<<")";
}
void print_struct_declaration_list_node(struct_declaration_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_declaration_list_node aNode = *ptr;
std::cout <<spacing<<"(struct_declaration_list_node\n";
   if(aNode.struct_declaration_node_1 != 0)
    { print_struct_declaration_node (aNode.struct_declaration_node_1,spacing);}
   if(aNode.struct_declaration_list_node_1 != 0)
    { print_struct_declaration_list_node (aNode.struct_declaration_list_node_1,spacing);}
std::cout<<")";
}
void print_init_declarator_list_node(init_declarator_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");init_declarator_list_node aNode = *ptr;
std::cout <<spacing<<"(init_declarator_list_node\n";
   if(aNode.init_declarator_node_1 != 0)
    { print_init_declarator_node (aNode.init_declarator_node_1,spacing);}
   if(aNode.init_declarator_list_node_1 != 0)
    { print_init_declarator_list_node (aNode.init_declarator_list_node_1,spacing);}
std::cout<<")";
}
void print_init_declarator_node(init_declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");init_declarator_node aNode = *ptr;
std::cout <<spacing<<"(init_declarator_node\n";
   if(aNode.declarator_node_1 != 0)
    { print_declarator_node (aNode.declarator_node_1,spacing);}
   if(aNode.initializer_node_1 != 0)
    { print_initializer_node (aNode.initializer_node_1,spacing);}
std::cout<<")";
}
void print_struct_declaration_node(struct_declaration_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_declaration_node aNode = *ptr;
std::cout <<spacing<<"(struct_declaration_node\n";
   if(aNode.specifier_qualifier_list_node_1 != 0)
    { print_specifier_qualifier_list_node (aNode.specifier_qualifier_list_node_1,spacing);}
   if(aNode.struct_declarator_list_node_1 != 0)
    { print_struct_declarator_list_node (aNode.struct_declarator_list_node_1,spacing);}
std::cout<<")";
}
void print_specifier_qualifier_list_node(specifier_qualifier_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");specifier_qualifier_list_node aNode = *ptr;
std::cout <<spacing<<"(specifier_qualifier_list_node\n";
   if(aNode.specifier_qualifier_list_node_1 != 0)
    { print_specifier_qualifier_list_node (aNode.specifier_qualifier_list_node_1,spacing);}
   if(aNode.type_specifier_node_1 != 0)
    { print_type_specifier_node (aNode.type_specifier_node_1,spacing);}
   if(aNode.type_qualifier_node_1 != 0)
    { print_type_qualifier_node (aNode.type_qualifier_node_1,spacing);}
std::cout<<")";
}
void print_struct_declarator_list_node(struct_declarator_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_declarator_list_node aNode = *ptr;
std::cout <<spacing<<"(struct_declarator_list_node\n";
   if(aNode.struct_declarator_list_node_1 != 0)
    { print_struct_declarator_list_node (aNode.struct_declarator_list_node_1,spacing);}
   if(aNode.struct_declarator_node_1 != 0)
    { print_struct_declarator_node (aNode.struct_declarator_node_1,spacing);}
std::cout<<")";
}
void print_struct_declarator_node(struct_declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");struct_declarator_node aNode = *ptr;
std::cout <<spacing<<"(struct_declarator_node\n";
   if(aNode.declarator_node_1 != 0)
    { print_declarator_node (aNode.declarator_node_1,spacing);}
   if(aNode.constant_expression_node_1 != 0)
    { print_constant_expression_node (aNode.constant_expression_node_1,spacing);}
std::cout<<")";
}
void print_enum_specifier_node(enum_specifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");enum_specifier_node aNode = *ptr;
std::cout <<spacing<<"(enum_specifier_node\n";
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
   if(aNode.enumerator_list_node_1 != 0)
    { print_enumerator_list_node (aNode.enumerator_list_node_1,spacing);}
std::cout<<")";
}
void print_enumerator_list_node(enumerator_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");enumerator_list_node aNode = *ptr;
std::cout <<spacing<<"(enumerator_list_node\n";
   if(aNode.enumerator_node_1 != 0)
    { print_enumerator_node (aNode.enumerator_node_1,spacing);}
   if(aNode.enumerator_list_node_1 != 0)
    { print_enumerator_list_node (aNode.enumerator_list_node_1,spacing);}
std::cout<<")";
}
void print_enumerator_node(enumerator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");enumerator_node aNode = *ptr;
std::cout <<spacing<<"(enumerator_node\n";
   if(aNode.constant_expression_node_1 != 0)
    { print_constant_expression_node (aNode.constant_expression_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
std::cout<<")";
}
void print_declarator_node(declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");declarator_node aNode = *ptr;
std::cout <<spacing<<"(declarator_node\n";
   if(aNode.direct_declarator_node_1 != 0)
    { print_direct_declarator_node (aNode.direct_declarator_node_1,spacing);}
   if(aNode.pointer_node_1 != 0)
    { print_pointer_node (aNode.pointer_node_1,spacing);}
std::cout<<")";
}
void print_direct_declarator_node(direct_declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");direct_declarator_node aNode = *ptr;
std::cout <<spacing<<"(direct_declarator_node\n";
   if(aNode.parameter_type_list_node_1 != 0)
    { print_parameter_type_list_node (aNode.parameter_type_list_node_1,spacing);}
   if(aNode.direct_declarator_node_1 != 0)
    { print_direct_declarator_node (aNode.direct_declarator_node_1,spacing);}
   if(aNode.constant_expression_node_1 != 0)
    { print_constant_expression_node (aNode.constant_expression_node_1,spacing);}
   if(aNode.identifier_list_node_1 != 0)
    { print_identifier_list_node (aNode.identifier_list_node_1,spacing);}
   if(aNode.declarator_node_1 != 0)
    { print_declarator_node (aNode.declarator_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
std::cout<<")";
}
void print_pointer_node(pointer_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");pointer_node aNode = *ptr;
std::cout <<spacing<<"(pointer_node\n";
   if(aNode.pointer_node_1 != 0)
    { print_pointer_node (aNode.pointer_node_1,spacing);}
   if(aNode.type_qualifier_list_node_1 != 0)
    { print_type_qualifier_list_node (aNode.type_qualifier_list_node_1,spacing);}
std::cout<<")";
}
void print_type_qualifier_list_node(type_qualifier_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");type_qualifier_list_node aNode = *ptr;
std::cout <<spacing<<"(type_qualifier_list_node\n";
   if(aNode.type_qualifier_node_1 != 0)
    { print_type_qualifier_node (aNode.type_qualifier_node_1,spacing);}
   if(aNode.type_qualifier_list_node_1 != 0)
    { print_type_qualifier_list_node (aNode.type_qualifier_list_node_1,spacing);}
std::cout<<")";
}
void print_parameter_type_list_node(parameter_type_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");parameter_type_list_node aNode = *ptr;
std::cout <<spacing<<"(parameter_type_list_node\n";
   if(aNode.parameter_list_node_1 != 0)
    { print_parameter_list_node (aNode.parameter_list_node_1,spacing);}
std::cout<<")";
}
void print_parameter_list_node(parameter_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");parameter_list_node aNode = *ptr;
std::cout <<spacing<<"(parameter_list_node\n";
   if(aNode.parameter_list_node_1 != 0)
    { print_parameter_list_node (aNode.parameter_list_node_1,spacing);}
   if(aNode.parameter_declaration_node_1 != 0)
    { print_parameter_declaration_node (aNode.parameter_declaration_node_1,spacing);}
std::cout<<")";
}
void print_parameter_declaration_node(parameter_declaration_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");parameter_declaration_node aNode = *ptr;
std::cout <<spacing<<"(parameter_declaration_node\n";
   if(aNode.declarator_node_1 != 0)
    { print_declarator_node (aNode.declarator_node_1,spacing);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { print_declaration_specifiers_node (aNode.declaration_specifiers_node_1,spacing);}
   if(aNode.abstract_declarator_node_1 != 0)
    { print_abstract_declarator_node (aNode.abstract_declarator_node_1,spacing);}
std::cout<<")";
}
void print_identifier_list_node(identifier_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");identifier_list_node aNode = *ptr;
std::cout <<spacing<<"(identifier_list_node\n";
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
   if(aNode.identifier_list_node_1 != 0)
    { print_identifier_list_node (aNode.identifier_list_node_1,spacing);}
std::cout<<")";
}
void print_initializer_node(initializer_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");initializer_node aNode = *ptr;
std::cout <<spacing<<"(initializer_node\n";
   if(aNode.initializer_list_node_1 != 0)
    { print_initializer_list_node (aNode.initializer_list_node_1,spacing);}
   if(aNode.assignment_expression_node_1 != 0)
    { print_assignment_expression_node (aNode.assignment_expression_node_1,spacing);}
std::cout<<")";
}
void print_initializer_list_node(initializer_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");initializer_list_node aNode = *ptr;
std::cout <<spacing<<"(initializer_list_node\n";
   if(aNode.initializer_node_1 != 0)
    { print_initializer_node (aNode.initializer_node_1,spacing);}
   if(aNode.initializer_list_node_1 != 0)
    { print_initializer_list_node (aNode.initializer_list_node_1,spacing);}
std::cout<<")";
}
void print_type_name_node(type_name_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");type_name_node aNode = *ptr;
std::cout <<spacing<<"(type_name_node\n";
   if(aNode.specifier_qualifier_list_node_1 != 0)
    { print_specifier_qualifier_list_node (aNode.specifier_qualifier_list_node_1,spacing);}
   if(aNode.abstract_declarator_node_1 != 0)
    { print_abstract_declarator_node (aNode.abstract_declarator_node_1,spacing);}
std::cout<<")";
}
void print_abstract_declarator_node(abstract_declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");abstract_declarator_node aNode = *ptr;
std::cout <<spacing<<"(abstract_declarator_node\n";
   if(aNode.direct_abstract_declarator_node_1 != 0)
    { print_direct_abstract_declarator_node (aNode.direct_abstract_declarator_node_1,spacing);}
   if(aNode.pointer_node_1 != 0)
    { print_pointer_node (aNode.pointer_node_1,spacing);}
std::cout<<")";
}
void print_direct_abstract_declarator_node(direct_abstract_declarator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");direct_abstract_declarator_node aNode = *ptr;
std::cout <<spacing<<"(direct_abstract_declarator_node\n";
   if(aNode.parameter_type_list_node_1 != 0)
    { print_parameter_type_list_node (aNode.parameter_type_list_node_1,spacing);}
   if(aNode.abstract_declarator_node_1 != 0)
    { print_abstract_declarator_node (aNode.abstract_declarator_node_1,spacing);}
   if(aNode.constant_expression_node_1 != 0)
    { print_constant_expression_node (aNode.constant_expression_node_1,spacing);}
   if(aNode.direct_abstract_declarator_node_1 != 0)
    { print_direct_abstract_declarator_node (aNode.direct_abstract_declarator_node_1,spacing);}
std::cout<<")";
}
void print_statement_node(statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");statement_node aNode = *ptr;
std::cout <<spacing<<"(statement_node\n";
   if(aNode.expression_statement_node_1 != 0)
    { print_expression_statement_node (aNode.expression_statement_node_1,spacing);}
   if(aNode.jump_statement_node_1 != 0)
    { print_jump_statement_node (aNode.jump_statement_node_1,spacing);}
   if(aNode.labeled_statement_node_1 != 0)
    { print_labeled_statement_node (aNode.labeled_statement_node_1,spacing);}
   if(aNode.compound_statement_node_1 != 0)
    { print_compound_statement_node (aNode.compound_statement_node_1,spacing);}
   if(aNode.iteration_statement_node_1 != 0)
    { print_iteration_statement_node (aNode.iteration_statement_node_1,spacing);}
   if(aNode.selection_statement_node_1 != 0)
    { print_selection_statement_node (aNode.selection_statement_node_1,spacing);}
std::cout<<")";
}
void print_labeled_statement_node(labeled_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");labeled_statement_node aNode = *ptr;
std::cout <<spacing<<"(labeled_statement_node\n";
   if(aNode.constant_expression_node_1 != 0)
    { print_constant_expression_node (aNode.constant_expression_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
   if(aNode.statement_node_1 != 0)
    { print_statement_node (aNode.statement_node_1,spacing);}
std::cout<<")";
}
void print_expression_statement_node(expression_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");expression_statement_node aNode = *ptr;
std::cout <<spacing<<"(expression_statement_node\n";
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
std::cout<<")";
}
void print_compound_statement_node(compound_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");compound_statement_node aNode = *ptr;
std::cout <<spacing<<"(compound_statement_node\n";
   if(aNode.statement_list_node_1 != 0)
    { print_statement_list_node (aNode.statement_list_node_1,spacing);}
   if(aNode.declaration_list_node_1 != 0)
    { print_declaration_list_node (aNode.declaration_list_node_1,spacing);}
std::cout<<")";
}
void print_statement_list_node(statement_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");statement_list_node aNode = *ptr;
std::cout <<spacing<<"(statement_list_node\n";
   if(aNode.statement_list_node_1 != 0)
    { print_statement_list_node (aNode.statement_list_node_1,spacing);}
   if(aNode.statement_node_1 != 0)
    { print_statement_node (aNode.statement_node_1,spacing);}
std::cout<<")";
}
void print_selection_statement_node(selection_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");selection_statement_node aNode = *ptr;
std::cout <<spacing<<"(selection_statement_node\n";
   if(aNode.statement_node_2 != 0)
    { print_statement_node (aNode.statement_node_2,spacing);}
   if(aNode.statement_node_1 != 0)
    { print_statement_node (aNode.statement_node_1,spacing);}
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
std::cout<<")";
}
void print_iteration_statement_node(iteration_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");iteration_statement_node aNode = *ptr;
std::cout <<spacing<<"(iteration_statement_node\n";
   if(aNode.expression_node_2 != 0)
    { print_expression_node (aNode.expression_node_2,spacing);}
   if(aNode.statement_node_1 != 0)
    { print_statement_node (aNode.statement_node_1,spacing);}
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.expression_node_3 != 0)
    { print_expression_node (aNode.expression_node_3,spacing);}
std::cout<<")";
}
void print_jump_statement_node(jump_statement_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");jump_statement_node aNode = *ptr;
std::cout <<spacing<<"(jump_statement_node\n";
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
std::cout<<")";
}
void print_expression_node(expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");expression_node aNode = *ptr;
std::cout <<spacing<<"(expression_node\n";
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.assignment_expression_node_1 != 0)
    { print_assignment_expression_node (aNode.assignment_expression_node_1,spacing);}
std::cout<<")";
}
void print_assignment_expression_node(assignment_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");assignment_expression_node aNode = *ptr;
std::cout <<spacing<<"(assignment_expression_node\n";
   if(aNode.conditional_expression_node_1 != 0)
    { print_conditional_expression_node (aNode.conditional_expression_node_1,spacing);}
   if(aNode.assignment_operator_node_1 != 0)
    { print_assignment_operator_node (aNode.assignment_operator_node_1,spacing);}
   if(aNode.unary_expression_node_1 != 0)
    { print_unary_expression_node (aNode.unary_expression_node_1,spacing);}
   if(aNode.assignment_expression_node_1 != 0)
    { print_assignment_expression_node (aNode.assignment_expression_node_1,spacing);}
std::cout<<")";
}
void print_assignment_operator_node(assignment_operator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");assignment_operator_node aNode = *ptr;
std::cout <<spacing<<"(assignment_operator_node\n";
std::cout<<")";
}
void print_conditional_expression_node(conditional_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");conditional_expression_node aNode = *ptr;
std::cout <<spacing<<"(conditional_expression_node\n";
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.conditional_expression_node_1 != 0)
    { print_conditional_expression_node (aNode.conditional_expression_node_1,spacing);}
   if(aNode.logical_or_expression_node_1 != 0)
    { print_logical_or_expression_node (aNode.logical_or_expression_node_1,spacing);}
std::cout<<")";
}
void print_constant_expression_node(constant_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");constant_expression_node aNode = *ptr;
std::cout <<spacing<<"(constant_expression_node\n";
   if(aNode.conditional_expression_node_1 != 0)
    { print_conditional_expression_node (aNode.conditional_expression_node_1,spacing);}
std::cout<<")";
}
void print_logical_or_expression_node(logical_or_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");logical_or_expression_node aNode = *ptr;
std::cout <<spacing<<"(logical_or_expression_node\n";
   if(aNode.logical_or_expression_node_1 != 0)
    { print_logical_or_expression_node (aNode.logical_or_expression_node_1,spacing);}
   if(aNode.logical_and_expression_node_1 != 0)
    { print_logical_and_expression_node (aNode.logical_and_expression_node_1,spacing);}
std::cout<<")";
}
void print_logical_and_expression_node(logical_and_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");logical_and_expression_node aNode = *ptr;
std::cout <<spacing<<"(logical_and_expression_node\n";
   if(aNode.inclusive_or_expression_node_1 != 0)
    { print_inclusive_or_expression_node (aNode.inclusive_or_expression_node_1,spacing);}
   if(aNode.logical_and_expression_node_1 != 0)
    { print_logical_and_expression_node (aNode.logical_and_expression_node_1,spacing);}
std::cout<<")";
}
void print_inclusive_or_expression_node(inclusive_or_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");inclusive_or_expression_node aNode = *ptr;
std::cout <<spacing<<"(inclusive_or_expression_node\n";
   if(aNode.inclusive_or_expression_node_1 != 0)
    { print_inclusive_or_expression_node (aNode.inclusive_or_expression_node_1,spacing);}
   if(aNode.exclusive_or_expression_node_1 != 0)
    { print_exclusive_or_expression_node (aNode.exclusive_or_expression_node_1,spacing);}
std::cout<<")";
}
void print_exclusive_or_expression_node(exclusive_or_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");exclusive_or_expression_node aNode = *ptr;
std::cout <<spacing<<"(exclusive_or_expression_node\n";
   if(aNode.and_expression_node_1 != 0)
    { print_and_expression_node (aNode.and_expression_node_1,spacing);}
   if(aNode.exclusive_or_expression_node_1 != 0)
    { print_exclusive_or_expression_node (aNode.exclusive_or_expression_node_1,spacing);}
std::cout<<")";
}
void print_and_expression_node(and_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");and_expression_node aNode = *ptr;
std::cout <<spacing<<"(and_expression_node\n";
   if(aNode.equality_expression_node_1 != 0)
    { print_equality_expression_node (aNode.equality_expression_node_1,spacing);}
   if(aNode.and_expression_node_1 != 0)
    { print_and_expression_node (aNode.and_expression_node_1,spacing);}
std::cout<<")";
}
void print_equality_expression_node(equality_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");equality_expression_node aNode = *ptr;
std::cout <<spacing<<"(equality_expression_node\n";
   if(aNode.equality_expression_node_1 != 0)
    { print_equality_expression_node (aNode.equality_expression_node_1,spacing);}
   if(aNode.relational_expression_node_1 != 0)
    { print_relational_expression_node (aNode.relational_expression_node_1,spacing);}
std::cout<<")";
}
void print_relational_expression_node(relational_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");relational_expression_node aNode = *ptr;
std::cout <<spacing<<"(relational_expression_node\n";
   if(aNode.relational_expression_node_1 != 0)
    { print_relational_expression_node (aNode.relational_expression_node_1,spacing);}
   if(aNode.shift_expression_node_1 != 0)
    { print_shift_expression_node (aNode.shift_expression_node_1,spacing);}
std::cout<<")";
}
void print_shift_expression_node(shift_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");shift_expression_node aNode = *ptr;
std::cout <<spacing<<"(shift_expression_node\n";
   if(aNode.additive_expression_node_1 != 0)
    { print_additive_expression_node (aNode.additive_expression_node_1,spacing);}
   if(aNode.shift_expression_node_1 != 0)
    { print_shift_expression_node (aNode.shift_expression_node_1,spacing);}
std::cout<<")";
}
void print_additive_expression_node(additive_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");additive_expression_node aNode = *ptr;
std::cout <<spacing<<"(additive_expression_node\n";
   if(aNode.multiplicative_expression_node_1 != 0)
    { print_multiplicative_expression_node (aNode.multiplicative_expression_node_1,spacing);}
   if(aNode.additive_expression_node_1 != 0)
    { print_additive_expression_node (aNode.additive_expression_node_1,spacing);}
std::cout<<")";
}
void print_multiplicative_expression_node(multiplicative_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");multiplicative_expression_node aNode = *ptr;
std::cout <<spacing<<"(multiplicative_expression_node\n";
   if(aNode.multiplicative_expression_node_1 != 0)
    { print_multiplicative_expression_node (aNode.multiplicative_expression_node_1,spacing);}
   if(aNode.cast_expression_node_1 != 0)
    { print_cast_expression_node (aNode.cast_expression_node_1,spacing);}
std::cout<<")";
}
void print_cast_expression_node(cast_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");cast_expression_node aNode = *ptr;
std::cout <<spacing<<"(cast_expression_node\n";
   if(aNode.cast_expression_node_1 != 0)
    { print_cast_expression_node (aNode.cast_expression_node_1,spacing);}
   if(aNode.type_name_node_1 != 0)
    { print_type_name_node (aNode.type_name_node_1,spacing);}
   if(aNode.unary_expression_node_1 != 0)
    { print_unary_expression_node (aNode.unary_expression_node_1,spacing);}
std::cout<<")";
}
void print_unary_expression_node(unary_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");unary_expression_node aNode = *ptr;
std::cout <<spacing<<"(unary_expression_node\n";
   if(aNode.postfix_expression_node_1 != 0)
    { print_postfix_expression_node (aNode.postfix_expression_node_1,spacing);}
   if(aNode.type_name_node_1 != 0)
    { print_type_name_node (aNode.type_name_node_1,spacing);}
   if(aNode.unary_operator_node_1 != 0)
    { print_unary_operator_node (aNode.unary_operator_node_1,spacing);}
   if(aNode.unary_expression_node_1 != 0)
    { print_unary_expression_node (aNode.unary_expression_node_1,spacing);}
   if(aNode.cast_expression_node_1 != 0)
    { print_cast_expression_node (aNode.cast_expression_node_1,spacing);}
std::cout<<")";
}
void print_unary_operator_node(unary_operator_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");unary_operator_node aNode = *ptr;
std::cout <<spacing<<"(unary_operator_node\n";
std::cout<<")";
}
void print_postfix_expression_node(postfix_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");postfix_expression_node aNode = *ptr;
std::cout <<spacing<<"(postfix_expression_node\n";
   if(aNode.postfix_expression_node_1 != 0)
    { print_postfix_expression_node (aNode.postfix_expression_node_1,spacing);}
   if(aNode.primary_expression_node_1 != 0)
    { print_primary_expression_node (aNode.primary_expression_node_1,spacing);}
   if(aNode.argument_expression_list_node_1 != 0)
    { print_argument_expression_list_node (aNode.argument_expression_list_node_1,spacing);}
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
std::cout<<")";
}
void print_primary_expression_node(primary_expression_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");primary_expression_node aNode = *ptr;
std::cout <<spacing<<"(primary_expression_node\n";
   if(aNode.constant_node_1 != 0)
    { print_constant_node (aNode.constant_node_1,spacing);}
   if(aNode.expression_node_1 != 0)
    { print_expression_node (aNode.expression_node_1,spacing);}
   if(aNode.string_node_1 != 0)
    { print_string_node (aNode.string_node_1,spacing);}
   if(aNode.identifier_node_1 != 0)
    { print_identifier_node (aNode.identifier_node_1,spacing);}
std::cout<<")";
}
void print_argument_expression_list_node(argument_expression_list_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");argument_expression_list_node aNode = *ptr;
std::cout <<spacing<<"(argument_expression_list_node\n";
   if(aNode.assignment_expression_node_1 != 0)
    { print_assignment_expression_node (aNode.assignment_expression_node_1,spacing);}
   if(aNode.argument_expression_list_node_1 != 0)
    { print_argument_expression_list_node (aNode.argument_expression_list_node_1,spacing);}
std::cout<<")";
}
void print_constant_node(constant_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");constant_node aNode = *ptr;
std::cout <<spacing<<"(constant_node\n";
std::cout<<")";
}
void print_string_node(string_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");string_node aNode = *ptr;
std::cout <<spacing<<"(string_node\n";
std::cout<<")";
}
void print_identifier_node(identifier_node *ptr, std::string indent)
{
    std::string spacing = indent.append("    ");identifier_node aNode = *ptr;
std::cout <<spacing<<"(identifier_node\n";
std::cout<<")";
}



std::string ast_3ac(ast_root *ptr)
{
  std::string rstring = translation_unit_node_3ac((*ptr).root);
  return rstring;
}

std::string translation_unit_node_3ac(translation_unit_node *ptr)
{
    translation_unit_node aNode = *ptr;
std::string rstring = "";  


   if(aNode.translation_unit_node_1 != 0)
     {
      rstring +=translation_unit_node_3ac(aNode.translation_unit_node_1);
      rstring +=external_declaration_node_3ac(aNode.external_declaration_node_1);
     }
   else
     {
       rstring +=external_declaration_node_3ac(aNode.external_declaration_node_1);
     }
return rstring;
}
std::string external_declaration_node_3ac(external_declaration_node *ptr)
{
    external_declaration_node aNode = *ptr;
    std::string rstring = "";   if(aNode.declaration_node_1 != 0)
    { rstring +=declaration_node_3ac(aNode.declaration_node_1);}
   if(aNode.function_definition_node_1 != 0)
    { rstring +=function_definition_node_3ac(aNode.function_definition_node_1);}

return rstring;
}
std::string function_definition_node_3ac(function_definition_node *ptr)
{
    function_definition_node aNode = *ptr;
    std::string rstring = "";   
    if(aNode.declaration_list_node_1 != 0)
      {
      rstring +=declaration_list_node_3ac(aNode.declaration_list_node_1);}
    if(aNode.declarator_node_1 != 0)
      { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
    if(aNode.declaration_specifiers_node_1 != 0)
      { rstring +=declaration_specifiers_node_3ac(aNode.declaration_specifiers_node_1);}
    if(aNode.compound_statement_node_1 != 0)
      { rstring +=compound_statement_node_3ac(aNode.compound_statement_node_1);}
    
    rstring+="end function";
    return rstring;
}
std::string declaration_node_3ac(declaration_node *ptr)
{
    declaration_node aNode = *ptr;
std::string rstring = "";   if(aNode.init_declarator_list_node_1 != 0)
    { rstring +=init_declarator_list_node_3ac(aNode.init_declarator_list_node_1);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { rstring +=declaration_specifiers_node_3ac(aNode.declaration_specifiers_node_1);}

return rstring;
}
std::string declaration_list_node_3ac(declaration_list_node *ptr)
{
    declaration_list_node aNode = *ptr;
    std::string rstring = "";   
    if(aNode.declaration_list_node_1 != 0)
    { rstring +=declaration_list_node_3ac(aNode.declaration_list_node_1);}
    if(aNode.declaration_node_1 != 0)
    { rstring +=declaration_node_3ac(aNode.declaration_node_1);}


return rstring;
}
std::string declaration_specifiers_node_3ac(declaration_specifiers_node *ptr)
{
    declaration_specifiers_node aNode = *ptr;
std::string rstring = "";   if(aNode.storage_class_specifier_node_1 != 0)
    { rstring +=storage_class_specifier_node_3ac(aNode.storage_class_specifier_node_1);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { rstring +=declaration_specifiers_node_3ac(aNode.declaration_specifiers_node_1);}
   if(aNode.type_specifier_node_1 != 0)
    { rstring +=type_specifier_node_3ac(aNode.type_specifier_node_1);}
   if(aNode.type_qualifier_node_1 != 0)
    { rstring +=type_qualifier_node_3ac(aNode.type_qualifier_node_1);}

return rstring;
}
std::string storage_class_specifier_node_3ac(storage_class_specifier_node *ptr)
{
    storage_class_specifier_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string type_specifier_node_3ac(type_specifier_node *ptr)
{
    type_specifier_node aNode = *ptr;
std::string rstring = "";   if(aNode.enum_specifier_node_1 != 0)
    { rstring +=enum_specifier_node_3ac(aNode.enum_specifier_node_1);}
   if(aNode.struct_or_union_specifier_node_1 != 0)
    { rstring +=struct_or_union_specifier_node_3ac(aNode.struct_or_union_specifier_node_1);}

return rstring;
}
std::string type_qualifier_node_3ac(type_qualifier_node *ptr)
{
    type_qualifier_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string struct_or_union_specifier_node_3ac(struct_or_union_specifier_node *ptr)
{
    struct_or_union_specifier_node aNode = *ptr;
std::string rstring = "";   if(aNode.struct_declaration_list_node_1 != 0)
    { rstring +=struct_declaration_list_node_3ac(aNode.struct_declaration_list_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}
   if(aNode.struct_or_union_node_1 != 0)
    { rstring +=struct_or_union_node_3ac(aNode.struct_or_union_node_1);}

return rstring;
}
std::string struct_or_union_node_3ac(struct_or_union_node *ptr)
{
    struct_or_union_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string struct_declaration_list_node_3ac(struct_declaration_list_node *ptr)
{
    struct_declaration_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.struct_declaration_node_1 != 0)
    { rstring +=struct_declaration_node_3ac(aNode.struct_declaration_node_1);}
   if(aNode.struct_declaration_list_node_1 != 0)
    { rstring +=struct_declaration_list_node_3ac(aNode.struct_declaration_list_node_1);}

return rstring;
}
std::string init_declarator_list_node_3ac(init_declarator_list_node *ptr)
{
    init_declarator_list_node aNode = *ptr;
std::string rstring = "";   
if(aNode.init_declarator_node_1 != 0)
    { rstring +=init_declarator_node_3ac(aNode.init_declarator_node_1);}
if(aNode.init_declarator_list_node_1 != 0)
    { rstring +=init_declarator_list_node_3ac(aNode.init_declarator_list_node_1);}

return rstring;
}

std::string init_declarator_node_3ac(init_declarator_node *ptr)
{
    init_declarator_node aNode = *ptr;
    std::string rstring = "";   
    if(aNode.declarator_node_1 != 0 && aNode.initializer_node_1 == 0)
    { 
      rstring +=declarator_node_3ac(aNode.declarator_node_1);
    }
    if(aNode.initializer_node_1 != 0)
    { 
      rstring +=declarator_node_3ac(aNode.declarator_node_1)+"\n";
      /*assuming that this must have an identifier.. double check later if errors*/
      direct_declarator_node ddnode  = *(*aNode.declarator_node_1).direct_declarator_node_1;
      std::string id = identifier_node_3ac(ddnode.identifier_node_1);

      rstring +=initializer_node_3ac(aNode.initializer_node_1);
      rstring += id+" := "+getLastTemp()+"\n";
    }

return rstring;
}
std::string struct_declaration_node_3ac(struct_declaration_node *ptr)
{
    struct_declaration_node aNode = *ptr;
std::string rstring = "";   if(aNode.specifier_qualifier_list_node_1 != 0)
    { rstring +=specifier_qualifier_list_node_3ac(aNode.specifier_qualifier_list_node_1);}
   if(aNode.struct_declarator_list_node_1 != 0)
    { rstring +=struct_declarator_list_node_3ac(aNode.struct_declarator_list_node_1);}

return rstring;
}
std::string specifier_qualifier_list_node_3ac(specifier_qualifier_list_node *ptr)
{
    specifier_qualifier_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.specifier_qualifier_list_node_1 != 0)
    { rstring +=specifier_qualifier_list_node_3ac(aNode.specifier_qualifier_list_node_1);}
   if(aNode.type_specifier_node_1 != 0)
    { rstring +=type_specifier_node_3ac(aNode.type_specifier_node_1);}
   if(aNode.type_qualifier_node_1 != 0)
    { rstring +=type_qualifier_node_3ac(aNode.type_qualifier_node_1);}

return rstring;
}
std::string struct_declarator_list_node_3ac(struct_declarator_list_node *ptr)
{
    struct_declarator_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.struct_declarator_list_node_1 != 0)
    { rstring +=struct_declarator_list_node_3ac(aNode.struct_declarator_list_node_1);}
   if(aNode.struct_declarator_node_1 != 0)
    { rstring +=struct_declarator_node_3ac(aNode.struct_declarator_node_1);}

return rstring;
}
std::string struct_declarator_node_3ac(struct_declarator_node *ptr)
{
    struct_declarator_node aNode = *ptr;
std::string rstring = "";   if(aNode.declarator_node_1 != 0)
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
   if(aNode.constant_expression_node_1 != 0)
    { rstring +=constant_expression_node_3ac(aNode.constant_expression_node_1);}

return rstring;
}
std::string enum_specifier_node_3ac(enum_specifier_node *ptr)
{
    enum_specifier_node aNode = *ptr;
std::string rstring = "";   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}
   if(aNode.enumerator_list_node_1 != 0)
    { rstring +=enumerator_list_node_3ac(aNode.enumerator_list_node_1);}

return rstring;
}
std::string enumerator_list_node_3ac(enumerator_list_node *ptr)
{
    enumerator_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.enumerator_node_1 != 0)
    { rstring +=enumerator_node_3ac(aNode.enumerator_node_1);}
   if(aNode.enumerator_list_node_1 != 0)
    { rstring +=enumerator_list_node_3ac(aNode.enumerator_list_node_1);}

return rstring;
}
std::string enumerator_node_3ac(enumerator_node *ptr)
{
    enumerator_node aNode = *ptr;
std::string rstring = "";   if(aNode.constant_expression_node_1 != 0)
    { rstring +=constant_expression_node_3ac(aNode.constant_expression_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}

return rstring;
}
std::string declarator_node_3ac(declarator_node *ptr)
{
    declarator_node aNode = *ptr;
std::string rstring = "";   if(aNode.direct_declarator_node_1 != 0)
    { rstring +=direct_declarator_node_3ac(aNode.direct_declarator_node_1);}
   if(aNode.pointer_node_1 != 0)
    { rstring +=pointer_node_3ac(aNode.pointer_node_1);}

return rstring;
}
std::string direct_declarator_node_3ac(direct_declarator_node *ptr)
{
    direct_declarator_node aNode = *ptr;
    std::string rstring = "";
    /* standard declarations */
    if(aNode.identifier_node_1 != 0)
      {
	rstring += "declare "+identifier_node_3ac(aNode.identifier_node_1)+" | "+getTypeFromSpecInt((*aNode.identifier_node_1).specs)+"_size\n";
      }
    /* function definitions */
    else if (aNode.char_lit_1 == "'('")
      {
	/* this declarator node should always have an identifier node*/
	std::string funcId = identifier_node_3ac((*aNode.direct_declarator_node_1).identifier_node_1);
	rstring += "function "+funcId+" "+getTypeFromSpecInt((*(*aNode.direct_declarator_node_1).identifier_node_1).specs)+"_size\n";
	if(aNode.identifier_list_node_1 != 0)
	  {
	   rstring+= identifier_list_node_3ac(aNode.identifier_list_node_1);
	  }
	else if(aNode.parameter_type_list_node_1 != 0)
	  {
	    rstring += parameter_type_list_node_3ac(aNode.parameter_type_list_node_1);
	  }
      }
    /* array declarations:
       we're assuming all arrays we deal with are of a type declard with a constant
    */
    else if (aNode.constant_expression_node_1 != 0)
      {
	direct_declarator_node *current = &aNode;
	int space = 1;
	while((*current).identifier_node_1 == 0)
	  {
	    int dimensionSize = getConstantExpressionInt((*current).constant_expression_node_1);
	    space = space*dimensionSize;
	    current = (*current).direct_declarator_node_1;
	  }

	std::string id = identifier_node_3ac((*current).identifier_node_1);
	rstring += "declare "+id+" | "+getTypeFromSpecInt((*(*current).identifier_node_1).specs)+"_size * "+intToStr(space)+"\n";
      }

    return rstring;
}
std::string pointer_node_3ac(pointer_node *ptr)
{
    pointer_node aNode = *ptr;
std::string rstring = "";   if(aNode.pointer_node_1 != 0)
    { rstring +=pointer_node_3ac(aNode.pointer_node_1);}
   if(aNode.type_qualifier_list_node_1 != 0)
    { rstring +=type_qualifier_list_node_3ac(aNode.type_qualifier_list_node_1);}

return rstring;
}
std::string type_qualifier_list_node_3ac(type_qualifier_list_node *ptr)
{
    type_qualifier_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.type_qualifier_node_1 != 0)
    { rstring +=type_qualifier_node_3ac(aNode.type_qualifier_node_1);}
   if(aNode.type_qualifier_list_node_1 != 0)
    { rstring +=type_qualifier_list_node_3ac(aNode.type_qualifier_list_node_1);}

return rstring;
}
std::string parameter_type_list_node_3ac(parameter_type_list_node *ptr)
{
    parameter_type_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.parameter_list_node_1 != 0)
    { rstring +=parameter_list_node_3ac(aNode.parameter_list_node_1);}

return rstring;
}
std::string parameter_list_node_3ac(parameter_list_node *ptr)
{
    parameter_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.parameter_list_node_1 != 0)
    { rstring +=parameter_list_node_3ac(aNode.parameter_list_node_1);}
   if(aNode.parameter_declaration_node_1 != 0)
    { rstring +=parameter_declaration_node_3ac(aNode.parameter_declaration_node_1);}

return rstring;
}
std::string parameter_declaration_node_3ac(parameter_declaration_node *ptr)
{
    parameter_declaration_node aNode = *ptr;
std::string rstring = "";   if(aNode.declarator_node_1 != 0)
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
   if(aNode.declaration_specifiers_node_1 != 0)
    { rstring +=declaration_specifiers_node_3ac(aNode.declaration_specifiers_node_1);}
   if(aNode.abstract_declarator_node_1 != 0)
    { rstring +=abstract_declarator_node_3ac(aNode.abstract_declarator_node_1);}

return rstring;
}
std::string identifier_list_node_3ac(identifier_list_node *ptr)
{
    identifier_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}
   if(aNode.identifier_list_node_1 != 0)
    { rstring +=identifier_list_node_3ac(aNode.identifier_list_node_1);}

return rstring;
}
std::string initializer_node_3ac(initializer_node *ptr)
{
    initializer_node aNode = *ptr;
std::string rstring = "";   if(aNode.initializer_list_node_1 != 0)
    { rstring +=initializer_list_node_3ac(aNode.initializer_list_node_1);}
   if(aNode.assignment_expression_node_1 != 0)
    { rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);}

return rstring;
}
std::string initializer_list_node_3ac(initializer_list_node *ptr)
{
    initializer_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.initializer_node_1 != 0)
    { rstring +=initializer_node_3ac(aNode.initializer_node_1);}
   if(aNode.initializer_list_node_1 != 0)
    { rstring +=initializer_list_node_3ac(aNode.initializer_list_node_1);}

return rstring;
}
std::string type_name_node_3ac(type_name_node *ptr)
{
    type_name_node aNode = *ptr;
std::string rstring = "";   if(aNode.specifier_qualifier_list_node_1 != 0)
    { rstring +=specifier_qualifier_list_node_3ac(aNode.specifier_qualifier_list_node_1);}
   if(aNode.abstract_declarator_node_1 != 0)
    { rstring +=abstract_declarator_node_3ac(aNode.abstract_declarator_node_1);}

return rstring;
}
std::string abstract_declarator_node_3ac(abstract_declarator_node *ptr)
{
    abstract_declarator_node aNode = *ptr;
std::string rstring = "";   if(aNode.direct_abstract_declarator_node_1 != 0)
    { rstring +=direct_abstract_declarator_node_3ac(aNode.direct_abstract_declarator_node_1);}
   if(aNode.pointer_node_1 != 0)
    { rstring +=pointer_node_3ac(aNode.pointer_node_1);}

return rstring;
}
std::string direct_abstract_declarator_node_3ac(direct_abstract_declarator_node *ptr)
{
    direct_abstract_declarator_node aNode = *ptr;
std::string rstring = "";   if(aNode.parameter_type_list_node_1 != 0)
    { rstring +=parameter_type_list_node_3ac(aNode.parameter_type_list_node_1);}
   if(aNode.abstract_declarator_node_1 != 0)
    { rstring +=abstract_declarator_node_3ac(aNode.abstract_declarator_node_1);}
   if(aNode.constant_expression_node_1 != 0)
    { rstring +=constant_expression_node_3ac(aNode.constant_expression_node_1);}
   if(aNode.direct_abstract_declarator_node_1 != 0)
    { rstring +=direct_abstract_declarator_node_3ac(aNode.direct_abstract_declarator_node_1);}

return rstring;
}
std::string statement_node_3ac(statement_node *ptr)
{
    statement_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_statement_node_1 != 0)
    { rstring +=expression_statement_node_3ac(aNode.expression_statement_node_1);}
   if(aNode.jump_statement_node_1 != 0)
    { rstring +=jump_statement_node_3ac(aNode.jump_statement_node_1);}
   if(aNode.labeled_statement_node_1 != 0)
    { rstring +=labeled_statement_node_3ac(aNode.labeled_statement_node_1);}
   if(aNode.compound_statement_node_1 != 0)
    { rstring +=compound_statement_node_3ac(aNode.compound_statement_node_1);}
   if(aNode.iteration_statement_node_1 != 0)
    { rstring +=iteration_statement_node_3ac(aNode.iteration_statement_node_1);}
   if(aNode.selection_statement_node_1 != 0)
    { rstring +=selection_statement_node_3ac(aNode.selection_statement_node_1);}

return rstring;
}
std::string labeled_statement_node_3ac(labeled_statement_node *ptr)
{
    labeled_statement_node aNode = *ptr;
std::string rstring = "";   if(aNode.constant_expression_node_1 != 0)
    { rstring +=constant_expression_node_3ac(aNode.constant_expression_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}
   if(aNode.statement_node_1 != 0)
    { rstring +=statement_node_3ac(aNode.statement_node_1);}

return rstring;
}
std::string expression_statement_node_3ac(expression_statement_node *ptr)
{
    expression_statement_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}

return rstring;
}
std::string compound_statement_node_3ac(compound_statement_node *ptr)
{
    compound_statement_node aNode = *ptr;
    std::string rstring = "";   
    if(aNode.statement_list_node_1 != 0 && aNode.declaration_list_node_1 != 0)
      {
	rstring += declaration_list_node_3ac(aNode.declaration_list_node_1);
	rstring += statement_list_node_3ac(aNode.statement_list_node_1);
      }
    else if(aNode.statement_list_node_1 != 0)
      { rstring +=statement_list_node_3ac(aNode.statement_list_node_1);}
    else if(aNode.declaration_list_node_1 != 0)
      { rstring +=declaration_list_node_3ac(aNode.declaration_list_node_1);}

    return rstring;
}
std::string statement_list_node_3ac(statement_list_node *ptr)
{
    statement_list_node aNode = *ptr;
std::string rstring = "";   if(aNode.statement_list_node_1 != 0)
    { rstring +=statement_list_node_3ac(aNode.statement_list_node_1);}
   if(aNode.statement_node_1 != 0)
    { rstring +=statement_node_3ac(aNode.statement_node_1);}

return rstring;
}
std::string selection_statement_node_3ac(selection_statement_node *ptr)
{
    selection_statement_node aNode = *ptr;
    std::string rstring = "";
    std::string elseLabel = getCurrentLabel();
    currentLabel++;
    std::string endLabel = getCurrentLabel();
    currentLabel++;
    rstring += "\ncondition start\n";
    rstring += expression_node_3ac(aNode.expression_node_1);
    rstring += "\ncondition end\n";
    rstring += "ifFalse "+getLastTemp()+" goto "+elseLabel+"\n";
    rstring += statement_node_3ac(aNode.statement_node_1);
    rstring += "goto "+endLabel+"\n";
    rstring += elseLabel+": \n";
    if(aNode.statement_node_2 != 0)
      {
	rstring+=statement_node_3ac(aNode.statement_node_1);
      }
    rstring += "goto "+endLabel+"\n";
    rstring += endLabel+": \n";

return rstring;
}
std::string iteration_statement_node_3ac(iteration_statement_node *ptr)
{
    iteration_statement_node aNode = *ptr;
    std::string rstring = "";  
    /*while loop*/
    std::string loopType = aNode.token_1;
    if(loopType == "while")
      {
	std::string startLabel = getCurrentLabel();
	currentLabel++;
	std::string endLabel = getCurrentLabel();
	currentLabel++;
	rstring += startLabel+":\n";
	rstring += expression_node_3ac(aNode.expression_node_1);
	rstring += "ifFalse "+getLastTemp()+" goto "+endLabel+"\n";
	rstring += statement_node_3ac(aNode.statement_node_1);
	rstring += "goto "+startLabel+"\n";
	rstring += endLabel+":\n";
	
      }
    else if (loopType == "do")
      {
	std::string startLabel = getCurrentLabel();
	currentLabel++;
	std::string endLabel = getCurrentLabel();
	currentLabel++;
	rstring += startLabel+":\n";
	rstring += statement_node_3ac(aNode.statement_node_1);
	rstring += expression_node_3ac(aNode.expression_node_1);
	rstring += "ifFalse "+getLastTemp()+" goto "+endLabel+"\n";
	rstring += " goto "+startLabel+"\n";
	rstring += endLabel+":\n";
	
      }
    /*
      for this project the only type of for loop i'm worried about
      is the standard for loop, none of the many other
      legal variants
     */
    else if (loopType == "for")
      {
	std::string startLabel = getCurrentLabel();
	currentLabel++;
	std::string endLabel = getCurrentLabel();
	currentLabel++;
	/*initializiation*/
	rstring += expression_node_3ac(aNode.expression_node_1);
	rstring += startLabel+":\n";
	/*loop statement*/
	rstring += expression_node_3ac(aNode.expression_node_2);
	rstring += "ifFalse "+getLastTemp()+" goto "+endLabel+"\n";
	/*statement*/
	rstring += statement_node_3ac(aNode.statement_node_1);
	/*update*/
	rstring += expression_node_3ac(aNode.expression_node_3);
	rstring += " goto "+startLabel+"\n";
	rstring += endLabel+":\n";
      }
    return rstring;
}
std::string jump_statement_node_3ac(jump_statement_node *ptr)
{
    jump_statement_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}

return rstring;
}
std::string expression_node_3ac(expression_node *ptr)
{
    expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.assignment_expression_node_1 != 0)
    { rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);}

return rstring;
}

std::string assignment_expression_node_3ac(assignment_expression_node *ptr)
{
    assignment_expression_node aNode = *ptr;
std::string rstring = "";   
 if(aNode.conditional_expression_node_1 != 0)
    { rstring +=conditional_expression_node_3ac(aNode.conditional_expression_node_1);}
 else
   {
     std::string op;
     if((*aNode.assignment_operator_node_1).token_1 == 0)
       {
	 op = "=";
       }
     else
       {
		 op = "do later!";
       }
     /*first if is for arrays*/
     if((*aNode.unary_expression_node_1).postfix_expression_node_1 != 0 &&
	(*(*aNode.unary_expression_node_1).postfix_expression_node_1).expression_node_1 != 0)
       {
	 rstring += assignment_expression_node_3ac(aNode.assignment_expression_node_1);
	 std::string assmnt = getLastTemp(); 
	 rstring += unary_expression_node_3ac(aNode.unary_expression_node_1)+"\n";
	 rstring+=getLastTemp()+" "+op+" "+assmnt+"\n";
       }
     else
       {
	 rstring += assignment_expression_node_3ac(aNode.assignment_expression_node_1);
	 rstring += unary_expression_node_3ac(aNode.unary_expression_node_1)+" "+op+" "+getLastTemp()+"\n";
       }   
   }

return rstring;
}
std::string assignment_operator_node_3ac(assignment_operator_node *ptr)
{
    assignment_operator_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string conditional_expression_node_3ac(conditional_expression_node *ptr)
{
    conditional_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.conditional_expression_node_1 != 0)
    { rstring +=conditional_expression_node_3ac(aNode.conditional_expression_node_1);}
   if(aNode.logical_or_expression_node_1 != 0)
    { rstring +=logical_or_expression_node_3ac(aNode.logical_or_expression_node_1);}

return rstring;
}
std::string constant_expression_node_3ac(constant_expression_node *ptr)
{
    constant_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.conditional_expression_node_1 != 0)
    { rstring +=conditional_expression_node_3ac(aNode.conditional_expression_node_1);}

return rstring;
}
std::string logical_or_expression_node_3ac(logical_or_expression_node *ptr)
{
  logical_or_expression_node aNode = *ptr;
  std::string rstring = "";   
  if(aNode.logical_or_expression_node_1 == 0)
    { rstring +=logical_and_expression_node_3ac(aNode.logical_and_expression_node_1);}
  else
    { 
      std::string exp2 = getCurrentTemp();
      rstring +=logical_and_expression_node_3ac(aNode.logical_and_expression_node_1);
      std::string exp1 = getCurrentTemp();
      rstring += logical_or_expression_node_3ac(aNode.logical_or_expression_node_1);
      rstring += getCurrentTemp()+" := "+exp1+" OR "+exp2+"\n";
      currentTemp++;

    }
  
  return rstring;
}
std::string logical_and_expression_node_3ac(logical_and_expression_node *ptr)
{
  logical_and_expression_node aNode = *ptr;
  std::string rstring = "";   
  if(aNode.logical_and_expression_node_1 == 0)
    { rstring +=inclusive_or_expression_node_3ac(aNode.inclusive_or_expression_node_1);}
  else
    { 
      std::string exp2 = getCurrentTemp();
      rstring +=inclusive_or_expression_node_3ac(aNode.inclusive_or_expression_node_1);
      std::string exp1 = getCurrentTemp();
      rstring += logical_and_expression_node_3ac(aNode.logical_and_expression_node_1);
      rstring += getCurrentTemp()+" := "+exp1+" AND "+exp2+"\n";
      currentTemp++;
    }
  
  return rstring;
}
std::string inclusive_or_expression_node_3ac(inclusive_or_expression_node *ptr)
{
    inclusive_or_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.inclusive_or_expression_node_1 != 0)
    { rstring +=inclusive_or_expression_node_3ac(aNode.inclusive_or_expression_node_1);}
   if(aNode.exclusive_or_expression_node_1 != 0)
    { rstring +=exclusive_or_expression_node_3ac(aNode.exclusive_or_expression_node_1);}

return rstring;
}
std::string exclusive_or_expression_node_3ac(exclusive_or_expression_node *ptr)
{
    exclusive_or_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.and_expression_node_1 != 0)
    { rstring +=and_expression_node_3ac(aNode.and_expression_node_1);}
   if(aNode.exclusive_or_expression_node_1 != 0)
    { rstring +=exclusive_or_expression_node_3ac(aNode.exclusive_or_expression_node_1);}

return rstring;
}
std::string and_expression_node_3ac(and_expression_node *ptr)
{
  and_expression_node aNode = *ptr;
  std::string rstring = "";   
  if(aNode.equality_expression_node_1 != 0)
    { rstring +=equality_expression_node_3ac(aNode.equality_expression_node_1);}
  if(aNode.and_expression_node_1 != 0)
    { rstring +=and_expression_node_3ac(aNode.and_expression_node_1);}

return rstring;
}
std::string equality_expression_node_3ac(equality_expression_node *ptr)
{
  equality_expression_node aNode = *ptr;
  std::string rstring = "";   
  if(aNode.equality_expression_node_1 == 0)
    { rstring +=relational_expression_node_3ac(aNode.relational_expression_node_1);} 
  else
    {
      std::string trueLabel = getCurrentLabel();
      currentLabel++;
      std::string falseLabel = getCurrentLabel();
      currentLabel++;
      std::string endLabel = getCurrentLabel();
      currentLabel++;
      std::string exp2 = getCurrentTemp();
      rstring+= relational_expression_node_3ac(aNode.relational_expression_node_1);
      std::string exp1 = getCurrentTemp();
      rstring+= equality_expression_node_3ac(aNode.equality_expression_node_1);
      rstring+="if "+exp1+" "+aNode.token_1+" "+exp2+" goto "+trueLabel+"\n";
      rstring+="goto "+falseLabel+"\n";
      rstring+=trueLabel+":\n "+getCurrentTemp()+" := 1\n";
      rstring+="goto "+endLabel+"\n";
      rstring+=falseLabel+":\n "+getCurrentTemp()+" := 0\n";
      rstring+="goto "+endLabel+"\n";
      rstring+=endLabel+":\n";
      currentTemp++;
      
    }
  
  
  return rstring;
}
std::string relational_expression_node_3ac(relational_expression_node *ptr)
{

    relational_expression_node aNode = *ptr;
    std::string rstring = "";   
     if(aNode.relational_expression_node_1 == 0)
       { 
	 rstring +=shift_expression_node_3ac(aNode.shift_expression_node_1);} 
     else
       {
	 std::string relop;
	 if(aNode.token_1 == 0)
	   {
	     relop = aNode.char_lit_1[1];
	   }
	 else
	   {
	     relop = aNode.token_1;
	   }
	 std::string trueLabel = getCurrentLabel();
	 currentLabel++;
	 std::string falseLabel = getCurrentLabel();
	 currentLabel++;
	 std::string endLabel = getCurrentLabel();
	 currentLabel++;
	 std::string exp2 = getCurrentTemp();
	 rstring+= shift_expression_node_3ac(aNode.shift_expression_node_1);
	 std::string exp1 = getCurrentTemp();
	 rstring+= relational_expression_node_3ac(aNode.relational_expression_node_1);
	 rstring+="if "+exp1+" "+relop+" "+exp2+" goto "+trueLabel+"\n";
	 rstring+="goto "+falseLabel+"\n";
	 rstring+= trueLabel+":\n"+getCurrentTemp()+" := 1\n";
	 rstring+="goto "+endLabel+"\n";
	 rstring+=falseLabel+":\n"+getCurrentTemp()+" := 0\n";
	 rstring+="goto "+endLabel+"\n";
	 rstring+=endLabel+":\n";
	 currentTemp++;
      
    }
  
  
  return rstring;
}
std::string shift_expression_node_3ac(shift_expression_node *ptr)
{
    shift_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.additive_expression_node_1 != 0)
    { rstring +=additive_expression_node_3ac(aNode.additive_expression_node_1);}
   if(aNode.shift_expression_node_1 != 0)
    { rstring +=shift_expression_node_3ac(aNode.shift_expression_node_1);}

return rstring;
}
std::string additive_expression_node_3ac(additive_expression_node *ptr)
{
    additive_expression_node aNode = *ptr;
    std::string rstring = "";   
 
    if( aNode.additive_expression_node_1 == 0)
      {
	rstring += multiplicative_expression_node_3ac(aNode.multiplicative_expression_node_1);
      }
/*case where we have an additive node */
 else
   {
     rstring+=multiplicative_expression_node_3ac(aNode.multiplicative_expression_node_1);
     std::string endmulti = getLastTemp();
     rstring+=additive_expression_node_3ac(aNode.additive_expression_node_1);
     rstring += getCurrentTemp()+" := "+getLastTemp()+" "+aNode.char_lit_1[1]+" "+endmulti+"\n";
     currentTemp++;
   }
 return rstring;
}
std::string multiplicative_expression_node_3ac(multiplicative_expression_node *ptr)
{

    multiplicative_expression_node aNode = *ptr;
    multiplicative_expression_node *next = aNode.multiplicative_expression_node_1;
    std::string rstring = "";   
  if(aNode.cast_expression_node_1 != 0 && next == 0)
    {
      rstring += cast_expression_node_3ac(aNode.cast_expression_node_1); 
    }
  else if(next != 0) 
    {
      rstring += multiplicative_expression_node_3ac(next);
      std::string multitemp = getLastTemp();
      rstring += cast_expression_node_3ac(aNode.cast_expression_node_1);
	rstring += getCurrentTemp()+" := "+multitemp+" "+aNode.char_lit_1[1]+" "+getLastTemp()+"\n"; 
      currentTemp++;
    }
  /* there should be not else */
 
return rstring;
}
std::string cast_expression_node_3ac(cast_expression_node *ptr)
{
    cast_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.cast_expression_node_1 != 0)
    { rstring +=cast_expression_node_3ac(aNode.cast_expression_node_1);}
   if(aNode.type_name_node_1 != 0)
    { rstring +=type_name_node_3ac(aNode.type_name_node_1);}
   if(aNode.unary_expression_node_1 != 0)
     { 
       /*first if is for arrays*/
       if((*aNode.unary_expression_node_1).postfix_expression_node_1 != 0 &&
	  (*(*aNode.unary_expression_node_1).postfix_expression_node_1).expression_node_1 != 0)
	 {
	   rstring += unary_expression_node_3ac(aNode.unary_expression_node_1)+"\n";
	 }
       /*second if for function calls */
       else if((*aNode.unary_expression_node_1).postfix_expression_node_1 != 0 &&
	  (*(*aNode.unary_expression_node_1).postfix_expression_node_1).char_lit_1 == "'('")
	 {
	   rstring += unary_expression_node_3ac(aNode.unary_expression_node_1)+"\n";
	 }
       else
	 {
	   rstring += getCurrentTemp()+" := "+unary_expression_node_3ac(aNode.unary_expression_node_1)+"\n";
	   currentTemp++;
	 }
     }

return rstring;
}
std::string unary_expression_node_3ac(unary_expression_node *ptr)
{
    unary_expression_node aNode = *ptr;
std::string rstring = "";  
 if(aNode.postfix_expression_node_1 != 0)
   { 
     rstring += postfix_expression_node_3ac(aNode.postfix_expression_node_1);
   }
 if(aNode.unary_expression_node_1 != 0)
   { 
     std::string op;
     std::string token_1 = aNode.token_1;
     if(token_1=="++")
       {
	 op = "+";
       }
     else
       {
	 op = "-";
       }
      
     std::string id = unary_expression_node_3ac(aNode.unary_expression_node_1);
     rstring+=id+" "+op+" 1\n";
     rstring+=id+" := "+id+" "+op+" "+" 1";
      
     
   }
 if(aNode.cast_expression_node_1 != 0)
   { rstring +=cast_expression_node_3ac(aNode.cast_expression_node_1);}
 
return rstring;
}
std::string unary_operator_node_3ac(unary_operator_node *ptr)
{
    unary_operator_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string postfix_expression_node_3ac(postfix_expression_node *ptr)
{
  postfix_expression_node aNode = *ptr;
  std::string rstring = "";
  if(aNode.primary_expression_node_1 != 0)
      {
	rstring+=primary_expression_node_3ac(aNode.primary_expression_node_1);
      }
  else if(aNode.postfix_expression_node_1 != 0 && aNode.token_1 != "" && aNode.expression_node_1 == 0)
    {
      /*
	this may be making some wrong assumptions about what we cand do
	with post fix ops, it only 
	allows x++, not x++++ or x[expresion]++ etc.
      */
      std::string op_token = aNode.token_1;
      std::string op;
      std::string id = postfix_expression_node_3ac(aNode.postfix_expression_node_1);
      if(op_token == "++")
	{
	    op = "+";
	}
	else
	  {
	    op = "-";
	  }
      /*
	not sure if this 100% the correct way to do uninary operator
	... need to refresh on asm, but it's easy enough to fix ;)
       */
      rstring+=id+"\n";
      rstring+=id+" := "+id+" "+op+" "+" 1";
    }

  /*arrays
    for 
    a[x][y]
    a[i][j] 
    is
    a offset (i*y+j)*type_size

    for
    b[x][y][z]
    b[i][j][k]
    is
    b offset (i*y*z+j*z+k)*type_size

    also not that all sorts of error checking can happen here.

   */
  else if(aNode.expression_node_1 != 0)
    {
      identifier_node *id;
      

      //get that identifer node
      postfix_expression_node *iter = &aNode;
      int dimensions = 0;
      while((*iter).primary_expression_node_1 == 0)
	{
	  dimensions++;
	  iter = (*iter).postfix_expression_node_1;
	}
      id = (*(*iter).primary_expression_node_1).identifier_node_1;
      array_const_node *this_ac = (*id).ac_node;
      postfix_expression_node *current = &aNode;
      std::string lastSum = "0";
      while(dimensions > 0)
	{
      	  rstring+=expression_node_3ac((*current).expression_node_1);
	  int skip = dimensions;
	  int multiplier = 1;
	  array_const_node *loop_ac = this_ac;
	  while(loop_ac != 0)
	    {
	      if(skip<=0)
		{
		  multiplier *= (*loop_ac).value;
		}
	      skip--;
	      loop_ac = (*loop_ac).next;
	      
	    }
	  rstring += getCurrentTemp()+" := "+intToStr(multiplier)+" * "+getLastTemp()+"\n";
	  currentTemp++;
	  
	  rstring += getCurrentTemp()+" := "+lastSum+" + "+getLastTemp()+"\n";
	  currentTemp++;
	  lastSum = getLastTemp();
	  
	  current = (*current).postfix_expression_node_1;
	  dimensions--;
	}
      rstring+=getCurrentTemp()+" := "+lastSum+" * "+getTypeFromSpecInt((*id).specs)+"_type\n";
      currentTemp++;
      
      rstring+=getCurrentTemp()+" := "+identifier_node_3ac(id)+" offset "+getLastTemp()+"\n";
      currentTemp++;
     
    }

  /* function calls */
  else if(aNode.char_lit_1 == "'('")
    {
      if(aNode.argument_expression_list_node_1 != 0)
	{
	  rstring += argument_expression_list_node_3ac(aNode.argument_expression_list_node_1);
	}
      rstring += "funcall "+identifier_node_3ac(aNode.identifier_node_1);
    }
 
  
return rstring;
}
std::string primary_expression_node_3ac(primary_expression_node *ptr)
{
    primary_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.constant_node_1 != 0)
    { rstring +=constant_node_3ac(aNode.constant_node_1);}
   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.string_node_1 != 0)
    { rstring +=string_node_3ac(aNode.string_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}

return rstring;
}
std::string argument_expression_list_node_3ac(argument_expression_list_node *ptr)
{
    argument_expression_list_node aNode = *ptr;
    std::string rstring = "";   
    if(aNode.argument_expression_list_node_1 != 0)
      { 
	rstring +=argument_expression_list_node_3ac(aNode.argument_expression_list_node_1);
	rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);
	rstring += "param = "+getLastTemp()+"\n";
      }
    else
      {
	rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);
	rstring += "param = "+getLastTemp()+"\n";
      }

return rstring;
}
std::string constant_node_3ac(constant_node *ptr)
{
    constant_node aNode = *ptr;
    std::string rstring = "";
  if(aNode.token_1 != "")
    {
      rstring += aNode.token_1;
    }
  else if(aNode.int_token_1 != 0)
    {
      std::stringstream ss;
      ss<<aNode.int_token_1;
      rstring += ss.str();
    }
return rstring;
}
std::string string_node_3ac(string_node *ptr)
{
    string_node aNode = *ptr;
std::string rstring = "";
return rstring;
}
std::string identifier_node_3ac(identifier_node *ptr)
{
  /*
    identifiers are all unique as they are a combination
    of their original identifier and the line number they
    are declared on, allows me to do a cheap way of handling 
    declarations. The only downside is that I can't handle 
    recursive functions... oh well :)
   */
  std::string rstring = "";
  identifier_node aNode = *ptr;
  rstring += aNode.token_1+intToStr(aNode.lineno);
  return rstring;
}


/*
yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
*/
