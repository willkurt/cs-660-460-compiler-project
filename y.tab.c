/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     INTEGER_CONSTANT = 259,
     FLOATING_CONSTANT = 260,
     CHARACTER_CONSTANT = 261,
     ENUMERATION_CONSTANT = 262,
     STRING_LITERAL = 263,
     SIZEOF = 264,
     PTR_OP = 265,
     INC_OP = 266,
     DEC_OP = 267,
     LEFT_OP = 268,
     RIGHT_OP = 269,
     LE_OP = 270,
     GE_OP = 271,
     EQ_OP = 272,
     NE_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     MUL_ASSIGN = 276,
     DIV_ASSIGN = 277,
     MOD_ASSIGN = 278,
     ADD_ASSIGN = 279,
     SUB_ASSIGN = 280,
     LEFT_ASSIGN = 281,
     RIGHT_ASSIGN = 282,
     AND_ASSIGN = 283,
     XOR_ASSIGN = 284,
     OR_ASSIGN = 285,
     TYPEDEF_NAME = 286,
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     CHAR = 292,
     SHORT = 293,
     INT = 294,
     LONG = 295,
     SIGNED = 296,
     UNSIGNED = 297,
     FLOAT = 298,
     DOUBLE = 299,
     CONST = 300,
     VOLATILE = 301,
     VOID = 302,
     STRUCT = 303,
     UNION = 304,
     ENUM = 305,
     ELIPSIS = 306,
     RANGE = 307,
     CASE = 308,
     DEFAULT = 309,
     IF = 310,
     ELSE = 311,
     SWITCH = 312,
     WHILE = 313,
     DO = 314,
     FOR = 315,
     GOTO = 316,
     CONTINUE = 317,
     BREAK = 318,
     RETURN = 319,
     ERROR = 320
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_CONSTANT 259
#define FLOATING_CONSTANT 260
#define CHARACTER_CONSTANT 261
#define ENUMERATION_CONSTANT 262
#define STRING_LITERAL 263
#define SIZEOF 264
#define PTR_OP 265
#define INC_OP 266
#define DEC_OP 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPEDEF_NAME 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define CHAR 292
#define SHORT 293
#define INT 294
#define LONG 295
#define SIGNED 296
#define UNSIGNED 297
#define FLOAT 298
#define DOUBLE 299
#define CONST 300
#define VOLATILE 301
#define VOID 302
#define STRUCT 303
#define UNION 304
#define ENUM 305
#define ELIPSIS 306
#define RANGE 307
#define CASE 308
#define DEFAULT 309
#define IF 310
#define ELSE 311
#define SWITCH 312
#define WHILE 313
#define DO 314
#define FOR 315
#define GOTO 316
#define CONTINUE 317
#define BREAK 318
#define RETURN 319
#define ERROR 320




/* Copy the first part of user declarations.  */
#line 1 "ast_c_grammar.y"

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



 

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 244 "ast_c_grammar.y"
{
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
/* Line 187 of yacc.c.  */
#line 547 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 560 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNRULES -- Number of states.  */
#define YYNSTATES  429

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    86,    80,     2,
      72,    73,    76,    83,    69,    84,    89,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    66,
      81,    70,    82,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    78,    68,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    15,    16,
      21,    22,    23,    29,    30,    31,    37,    38,    39,    46,
      47,    51,    52,    53,    59,    60,    63,    64,    68,    69,
      72,    73,    77,    78,    81,    82,    86,    87,    90,    91,
      95,    96,    99,   100,   103,   104,   107,   108,   111,   112,
     115,   116,   119,   120,   123,   124,   127,   128,   131,   132,
     135,   136,   139,   140,   143,   144,   147,   148,   151,   152,
     155,   156,   159,   160,   163,   164,   167,   168,   171,   177,
     182,   185,   186,   189,   190,   193,   195,   198,   200,   204,
     206,   207,   212,   216,   218,   221,   223,   226,   228,   232,
     234,   237,   241,   246,   252,   255,   257,   261,   263,   267,
     269,   272,   274,   278,   282,   287,   288,   293,   294,   300,
     301,   307,   309,   312,   315,   319,   321,   324,   325,   328,
     329,   334,   336,   340,   343,   345,   348,   350,   354,   356,
     360,   365,   367,   371,   373,   376,   378,   380,   383,   387,
     390,   394,   398,   403,   406,   410,   414,   419,   421,   422,
     423,   427,   429,   431,   433,   435,   439,   444,   448,   449,
     452,   453,   457,   460,   464,   468,   473,   475,   478,   484,
     492,   498,   504,   512,   519,   527,   535,   544,   552,   561,
     570,   580,   584,   587,   590,   593,   597,   599,   603,   605,
     609,   611,   613,   615,   617,   619,   621,   623,   625,   627,
     629,   631,   633,   639,   641,   643,   647,   649,   653,   655,
     659,   661,   665,   667,   671,   673,   677,   681,   683,   687,
     691,   695,   699,   701,   705,   709,   711,   715,   719,   721,
     725,   729,   733,   735,   740,   742,   745,   748,   751,   754,
     759,   761,   763,   765,   767,   769,   771,   773,   778,   782,
     787,   791,   795,   798,   801,   803,   805,   807,   811,   813,
     817,   819,   821,   823,   825,   827
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    -1,    94,
      93,    -1,   103,    -1,    -1,    -1,   154,    95,   179,    96,
      -1,    -1,    -1,   154,   107,    97,   179,    98,    -1,    -1,
      -1,   110,   154,    99,   179,   100,    -1,    -1,    -1,   110,
     154,   107,   101,   179,   102,    -1,    -1,   110,    66,   104,
      -1,    -1,    -1,   110,   144,    66,   105,   106,    -1,    -1,
     108,   103,    -1,    -1,   107,   109,   103,    -1,    -1,   117,
     111,    -1,    -1,   117,   110,   112,    -1,    -1,   123,   113,
      -1,    -1,   123,   110,   114,    -1,    -1,   136,   115,    -1,
      -1,   136,   110,   116,    -1,    -1,    35,   118,    -1,    -1,
      36,   119,    -1,    -1,    34,   120,    -1,    -1,    33,   121,
      -1,    -1,    32,   122,    -1,    -1,    47,   124,    -1,    -1,
      37,   125,    -1,    -1,    38,   126,    -1,    -1,    39,   127,
      -1,    -1,    40,   128,    -1,    -1,    43,   129,    -1,    -1,
      44,   130,    -1,    -1,    41,   131,    -1,    -1,    42,   132,
      -1,    -1,   139,   133,    -1,    -1,   151,   134,    -1,    -1,
      31,   135,    -1,    -1,    45,   137,    -1,    -1,    46,   138,
      -1,   140,   207,    67,   143,    68,    -1,   140,    67,   143,
      68,    -1,   140,   207,    -1,    -1,    48,   141,    -1,    -1,
      49,   142,    -1,   147,    -1,   143,   147,    -1,   145,    -1,
     144,    69,   145,    -1,   154,    -1,    -1,   154,    70,   146,
     167,    -1,   148,   149,    66,    -1,   123,    -1,   123,   148,
      -1,   136,    -1,   136,   148,    -1,   150,    -1,   149,    69,
     150,    -1,   154,    -1,    71,   188,    -1,   154,    71,   188,
      -1,    50,    67,   152,    68,    -1,    50,   207,    67,   152,
      68,    -1,    50,   207,    -1,   153,    -1,   152,    69,   153,
      -1,   207,    -1,   207,    70,   188,    -1,   155,    -1,   159,
     155,    -1,   207,    -1,    72,   154,    73,    -1,   155,    74,
      75,    -1,   155,    74,   188,    75,    -1,    -1,   155,    72,
     156,    73,    -1,    -1,   155,    72,   157,   161,    73,    -1,
      -1,   155,    72,   158,   166,    73,    -1,    76,    -1,    76,
     160,    -1,    76,   159,    -1,    76,   160,   159,    -1,   136,
      -1,   160,   136,    -1,    -1,   164,   162,    -1,    -1,   164,
      69,    51,   163,    -1,   165,    -1,   164,    69,   165,    -1,
     110,   154,    -1,   110,    -1,   110,   170,    -1,   207,    -1,
     166,    69,   207,    -1,   185,    -1,    67,   168,    68,    -1,
      67,   168,    69,    68,    -1,   167,    -1,   168,    69,   167,
      -1,   148,    -1,   148,   170,    -1,   159,    -1,   171,    -1,
     159,   171,    -1,    72,   170,    73,    -1,    74,    75,    -1,
      74,   188,    75,    -1,   171,    74,    75,    -1,   171,    74,
     188,    75,    -1,    72,    73,    -1,    72,   161,    73,    -1,
     171,    72,    73,    -1,   171,    72,   161,    73,    -1,   175,
      -1,    -1,    -1,   173,   179,   174,    -1,   176,    -1,   181,
      -1,   182,    -1,   183,    -1,   207,    71,   172,    -1,    53,
     188,    71,   172,    -1,    54,    71,   172,    -1,    -1,    66,
     177,    -1,    -1,   184,    66,   178,    -1,    67,    68,    -1,
      67,   180,    68,    -1,    67,   107,    68,    -1,    67,   107,
     180,    68,    -1,   172,    -1,   180,   172,    -1,    55,    72,
     184,    73,   172,    -1,    55,    72,   184,    73,   172,    56,
     172,    -1,    57,    72,   184,    73,   172,    -1,    58,    72,
     184,    73,   172,    -1,    59,   172,    58,    72,   184,    73,
      66,    -1,    60,    72,    66,    66,    73,   172,    -1,    60,
      72,    66,    66,   184,    73,   172,    -1,    60,    72,    66,
     184,    66,    73,   172,    -1,    60,    72,    66,   184,    66,
     184,    73,   172,    -1,    60,    72,   184,    66,    66,    73,
     172,    -1,    60,    72,   184,    66,    66,   184,    73,   172,
      -1,    60,    72,   184,    66,   184,    66,    73,   172,    -1,
      60,    72,   184,    66,   184,    66,   184,    73,   172,    -1,
      61,   207,    66,    -1,    62,    66,    -1,    63,    66,    -1,
      64,    66,    -1,    64,   184,    66,    -1,   185,    -1,   184,
      69,   185,    -1,   187,    -1,   200,   186,   185,    -1,    70,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,   189,    -1,   189,    77,   184,    71,   187,    -1,   187,
      -1,   190,    -1,   189,    20,   190,    -1,   191,    -1,   190,
      19,   191,    -1,   192,    -1,   191,    78,   192,    -1,   193,
      -1,   192,    79,   193,    -1,   194,    -1,   193,    80,   194,
      -1,   195,    -1,   194,    17,   195,    -1,   194,    18,   195,
      -1,   196,    -1,   195,    81,   196,    -1,   195,    82,   196,
      -1,   195,    15,   196,    -1,   195,    16,   196,    -1,   197,
      -1,   196,    13,   197,    -1,   196,    14,   197,    -1,   198,
      -1,   197,    83,   198,    -1,   197,    84,   198,    -1,   199,
      -1,   198,    76,   199,    -1,   198,    85,   199,    -1,   198,
      86,   199,    -1,   200,    -1,    72,   169,    73,   199,    -1,
     202,    -1,    11,   200,    -1,    12,   200,    -1,   201,   199,
      -1,     9,   200,    -1,     9,    72,   169,    73,    -1,    80,
      -1,    76,    -1,    83,    -1,    84,    -1,    87,    -1,    88,
      -1,   203,    -1,   202,    74,   184,    75,    -1,   202,    72,
      73,    -1,   202,    72,   204,    73,    -1,   202,    89,   207,
      -1,   202,    10,   207,    -1,   202,    11,    -1,   202,    12,
      -1,   207,    -1,   205,    -1,   206,    -1,    72,   184,    73,
      -1,   185,    -1,   204,    69,   185,    -1,     4,    -1,     6,
      -1,     5,    -1,     7,    -1,     8,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   422,   422,   432,   443,   443,   451,   461,   461,   461,
     471,   471,   471,   481,   481,   481,   491,   491,   491,   503,
     503,   512,   514,   512,   738,   738,   746,   746,   756,   756,
     766,   766,   776,   776,   786,   786,   796,   796,   806,   806,
     818,   818,   825,   825,   832,   832,   839,   839,   846,   846,
     855,   855,   864,   864,   873,   873,   882,   882,   891,   891,
     900,   900,   909,   909,   918,   918,   927,   927,   936,   936,
     945,   945,   954,   954,   965,   965,   972,   972,   981,   992,
    1003,  1016,  1016,  1023,  1023,  1032,  1040,  1050,  1059,  1070,
    1079,  1079,  1090,  1101,  1110,  1119,  1128,  1139,  1148,  1159,
    1168,  1177,  1188,  1199,  1210,  1223,  1232,  1243,  1252,  1263,
    1271,  1281,  1295,  1309,  1323,  1337,  1337,  1351,  1351,  1365,
    1365,  1381,  1390,  1399,  1408,  1419,  1427,  1437,  1437,  1446,
    1446,  1457,  1466,  1477,  1486,  1495,  1506,  1515,  1526,  1537,
    1548,  1561,  1570,  1581,  1589,  1599,  1607,  1615,  1625,  1637,
    1649,  1661,  1673,  1685,  1697,  1709,  1721,  1735,  1747,  1747,
    1747,  1759,  1771,  1783,  1795,  1809,  1820,  1831,  1844,  1844,
    1852,  1852,  1862,  1872,  1882,  1892,  1904,  1912,  1922,  1935,
    1948,  1963,  1979,  1995,  2011,  2027,  2043,  2059,  2075,  2092,
    2108,  2126,  2136,  2146,  2156,  2166,  2178,  2187,  2198,  2208,
    2220,  2228,  2236,  2244,  2252,  2260,  2268,  2276,  2284,  2292,
    2300,  2310,  2321,  2334,  2343,  2352,  2363,  2372,  2383,  2392,
    2403,  2412,  2423,  2432,  2443,  2452,  2461,  2472,  2482,  2492,
    2502,  2512,  2524,  2533,  2542,  2553,  2562,  2571,  2582,  2591,
    2600,  2609,  2620,  2631,  2644,  2658,  2672,  2686,  2700,  2714,
    2730,  2737,  2744,  2751,  2758,  2765,  2774,  2788,  2802,  2816,
    2830,  2844,  2858,  2872,  2888,  2900,  2912,  2924,  2938,  2947,
    2958,  2969,  2979,  2989,  3000,  3009
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "ENUMERATION_CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELIPSIS",
  "RANGE", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "ERROR", "';'", "'{'", "'}'",
  "','", "'='", "':'", "'('", "')'", "'['", "']'", "'*'", "'?'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "'~'", "'!'",
  "'.'", "$accept", "translation_unit", "external_declaration", "@1",
  "function_definition", "@2", "@3", "@4", "@5", "@6", "@7", "@8", "@9",
  "declaration", "@10", "@11", "@12", "declaration_list", "@13", "@14",
  "declaration_specifiers", "@15", "@16", "@17", "@18", "@19", "@20",
  "storage_class_specifier", "@21", "@22", "@23", "@24", "@25",
  "type_specifier", "@26", "@27", "@28", "@29", "@30", "@31", "@32", "@33",
  "@34", "@35", "@36", "@37", "type_qualifier", "@38", "@39",
  "struct_or_union_specifier", "struct_or_union", "@40", "@41",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "@42", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "@43", "@44", "@45", "pointer", "type_qualifier_list",
  "parameter_type_list", "@46", "@47", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@48", "@49",
  "labeled_statement", "expression_statement", "@50", "@51",
  "compound_statement", "statement_list", "selection_statement",
  "iteration_statement", "jump_statement", "expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "constant_expression", "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", "string",
  "identifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    59,   123,   125,    44,
      61,    58,    40,    41,    91,    93,    42,    63,   124,    94,
      38,    60,    62,    43,    45,    47,    37,   126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    93,    92,    92,    95,    96,    94,
      97,    98,    94,    99,   100,    94,   101,   102,    94,   104,
     103,   105,   106,   103,   108,   107,   109,   107,   111,   110,
     112,   110,   113,   110,   114,   110,   115,   110,   116,   110,
     118,   117,   119,   117,   120,   117,   121,   117,   122,   117,
     124,   123,   125,   123,   126,   123,   127,   123,   128,   123,
     129,   123,   130,   123,   131,   123,   132,   123,   133,   123,
     134,   123,   135,   123,   137,   136,   138,   136,   139,   139,
     139,   141,   140,   142,   140,   143,   143,   144,   144,   145,
     146,   145,   147,   148,   148,   148,   148,   149,   149,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   155,   155,   156,   155,   157,   155,   158,
     155,   159,   159,   159,   159,   160,   160,   162,   161,   163,
     161,   164,   164,   165,   165,   165,   166,   166,   167,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   172,   173,   174,
     172,   172,   172,   172,   172,   175,   175,   175,   177,   176,
     178,   176,   179,   179,   179,   179,   180,   180,   181,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   183,   183,   183,   183,   184,   184,   185,   185,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   187,   187,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   194,   195,   195,   195,
     195,   195,   196,   196,   196,   197,   197,   197,   198,   198,
     198,   198,   199,   199,   200,   200,   200,   200,   200,   200,
     201,   201,   201,   201,   201,   201,   202,   202,   202,   202,
     202,   202,   202,   202,   203,   203,   203,   203,   204,   204,
     205,   205,   205,   205,   206,   207
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     0,     0,     4,
       0,     0,     5,     0,     0,     5,     0,     0,     6,     0,
       3,     0,     0,     5,     0,     2,     0,     3,     0,     2,
       0,     3,     0,     2,     0,     3,     0,     2,     0,     3,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     5,     4,
       2,     0,     2,     0,     2,     1,     2,     1,     3,     1,
       0,     4,     3,     1,     2,     1,     2,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       2,     1,     3,     3,     4,     0,     4,     0,     5,     0,
       5,     1,     2,     2,     3,     1,     2,     0,     2,     0,
       4,     1,     3,     2,     1,     2,     1,     3,     1,     3,
       4,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     0,     0,
       3,     1,     1,     1,     1,     3,     4,     3,     0,     2,
       0,     3,     2,     3,     3,     4,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     7,     8,     7,     8,     8,
       9,     3,     2,     2,     2,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   275,    72,    48,    46,    44,    40,    42,    52,    54,
      56,    58,    64,    66,    60,    62,    74,    76,    50,    81,
      83,     0,     0,   121,     0,     2,     4,     6,     0,    28,
      32,    36,    68,     0,    70,    24,   109,     0,   111,    73,
      49,    47,    45,    41,    43,    53,    55,    57,    59,    65,
      67,    61,    63,    75,    77,    51,    82,    84,     0,   104,
       0,   125,   123,   122,     1,     3,     5,    19,     0,    87,
      24,    30,    29,    34,    33,    38,    37,    69,     0,    80,
      71,     0,    26,     0,   117,     0,   110,     0,   105,   107,
       0,   112,   126,   124,    20,    21,     0,    90,     0,    26,
      31,    35,    39,    93,    95,     0,    85,     0,     0,    24,
       8,     0,     0,    25,     0,     0,     0,     0,   270,   272,
     271,   273,   274,     0,     0,     0,     0,   113,   251,   250,
     252,   253,   254,   255,   213,     0,   211,   214,   216,   218,
     220,   222,   224,   227,   232,   235,   238,   242,     0,   244,
     256,   265,   266,   264,   102,     0,     0,     0,    22,    88,
      89,     0,    14,     0,    94,    96,    79,    86,     0,     0,
      97,    99,     0,     0,     0,     0,     0,     0,   158,     0,
       0,     0,     0,     0,   168,   172,    26,   176,     0,   157,
     161,   158,   162,   163,   164,     0,   196,   198,   242,   264,
       9,    11,    27,   116,   134,     0,   127,   131,     0,   136,
       0,   248,     0,   245,   246,   143,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
     262,   263,     0,     0,     0,   106,   108,   103,    23,     0,
      91,   138,    15,    17,   100,    92,     0,     0,    78,     0,
     158,     0,     0,     0,     0,     0,     0,   192,   193,   194,
       0,   169,   174,   158,   159,   173,   177,   170,     0,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   200,
       0,   158,    12,     0,     0,   133,   145,   135,   146,   118,
       0,   128,     0,   120,     0,     0,   145,   144,     0,   267,
     215,     0,   217,   219,   221,   223,   225,   226,   230,   231,
     228,   229,   233,   234,   236,   237,   239,   240,   241,   261,
     258,   268,     0,     0,   260,   141,     0,    18,    98,   101,
     158,   167,     0,     0,     0,     0,     0,     0,   191,   195,
     175,   160,   171,   197,   199,   165,   153,     0,     0,   149,
       0,   147,     0,     0,   129,   132,   137,   249,   243,     0,
       0,   259,   257,   139,     0,   166,   158,   158,   158,     0,
       0,     0,     0,   154,   148,   150,   155,     0,   151,     0,
     130,   212,   269,   140,   142,   178,   180,   181,     0,   158,
       0,     0,     0,     0,   156,   152,   158,     0,   183,   158,
     158,     0,   158,     0,     0,   179,   182,   184,   185,   158,
     187,   158,   158,     0,   186,   188,   189,   158,   190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    66,    26,    81,   200,   111,   292,    98,
     252,   163,   337,    27,    94,   158,   248,    82,    83,   112,
     204,    72,   100,    74,   101,    76,   102,    29,    43,    44,
      42,    41,    40,    30,    55,    45,    46,    47,    48,    51,
      52,    49,    50,    77,    80,    39,    31,    53,    54,    32,
      33,    56,    57,   105,    68,    69,   161,   106,   107,   169,
     170,    34,    87,    88,    35,    36,   115,   116,   117,    37,
      63,   357,   301,   390,   206,   207,   208,   250,   336,   216,
     358,   298,   187,   188,   351,   189,   190,   271,   352,   110,
     191,   192,   193,   194,   195,   196,   290,   197,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     198,   148,   149,   150,   332,   151,   152,   153
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
    1274,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,    22,    12,   105,  1223,  -245,  -245,  -245,     5,  1373,
    1373,  1373,  -245,    33,  -245,   -48,    51,    10,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    39,    -8,
       3,  -245,  -245,   105,  -245,  -245,  -245,  -245,     4,  -245,
      73,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   343,    34,
    -245,    41,    70,  1373,    31,   741,    51,   139,  -245,   -19,
      39,  -245,  -245,  -245,  -245,  -245,    12,  -245,    41,    74,
    -245,  -245,  -245,   343,   343,  1123,  -245,     7,   343,   475,
    -245,    41,  1373,  -245,     5,    59,  1373,    39,  -245,  -245,
    -245,  -245,  -245,  1124,  1134,  1134,   427,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,   -64,    -3,   160,    69,   110,
     104,   236,    53,   255,   191,   -21,  -245,  -245,  1144,    38,
    -245,  -245,  -245,  -245,  -245,    39,  1144,   212,  -245,  -245,
     126,   755,  -245,    41,  -245,  -245,  -245,  -245,  1144,    47,
    -245,   159,  1314,  1144,   163,   198,   200,   206,   721,   220,
      39,   192,   234,   841,  -245,  -245,   513,  -245,    41,  -245,
    -245,   599,  -245,  -245,  -245,   148,  -245,  -245,   341,   235,
    -245,  -245,  -245,  -245,    57,   152,   239,  -245,   -34,  -245,
     427,  -245,  1144,  -245,  -245,    82,   237,    80,  -245,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  -245,    39,
    -245,  -245,   854,  1144,    39,  -245,  -245,  -245,  -245,   755,
    -245,  -245,  -245,  -245,  -245,  -245,     7,  1144,  -245,   238,
     721,  1144,  1144,  1144,   254,   867,   247,  -245,  -245,  -245,
     176,  -245,  -245,   635,  -245,  -245,  -245,  -245,  1144,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    1144,   721,  -245,  1202,   877,  -245,    50,  -245,   169,  -245,
    1352,  -245,    39,  -245,   241,  1294,   185,  -245,  1144,  -245,
     160,   195,    69,   110,   104,   236,    53,    53,   255,   255,
     255,   255,   191,   191,   -21,   -21,  -245,  -245,  -245,  -245,
    -245,  -245,   125,   -31,  -245,  -245,   218,  -245,  -245,  -245,
     721,  -245,   128,   130,   133,   246,   890,   181,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,   248,   249,  -245,
     244,   169,   582,   976,  -245,  -245,  -245,  -245,  -245,  1144,
    1144,  -245,  -245,  -245,   731,  -245,   721,   721,   721,  1144,
     989,   182,  1002,  -245,  -245,  -245,  -245,   250,  -245,   245,
    -245,  -245,  -245,  -245,  -245,   268,  -245,  -245,   136,   721,
     147,  1015,  1028,   186,  -245,  -245,   721,   259,  -245,   721,
     721,   153,   721,   154,  1114,  -245,  -245,  -245,  -245,   721,
    -245,   721,   721,   155,  -245,  -245,  -245,   721,  -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,   303,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   -56,  -245,  -245,  -245,    68,  -245,  -245,
      16,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,   107,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,   253,  -245,  -245,  -245,
    -245,  -245,  -245,   221,  -245,   232,  -245,   -87,   -74,  -245,
      76,  -245,   240,   179,   -16,   -35,  -245,  -245,  -245,   -22,
    -245,  -113,  -245,  -245,  -245,    35,  -245,  -244,  -245,   131,
    -161,  -239,   -73,  -245,  -245,  -245,  -245,  -245,  -245,   -91,
     156,  -245,  -245,  -245,  -117,   -59,  -245,   -81,  -142,  -245,
     119,   122,   123,   121,   127,    64,     8,    63,    65,  -116,
     -62,  -245,  -245,  -245,  -245,  -245,  -245,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -159
static const yytype_int16 yytable[] =
{
      38,    62,    86,   205,   134,   335,    60,   162,     1,   217,
       1,   218,    70,     1,   246,     1,    28,   219,   167,    -7,
     201,    59,    38,   147,    38,     1,   254,   113,    38,   164,
     165,   259,   238,    79,  -119,   302,     1,    38,   278,   303,
      28,    93,     1,   297,   372,    71,    73,    75,   239,   240,
     241,   156,   215,     1,   307,   235,   202,   361,    89,    90,
       1,   211,   213,   214,   236,   237,   270,   361,   227,   228,
      95,    67,   253,    96,   220,   134,    91,    22,   168,    22,
     160,    23,    22,    23,    22,   167,   147,   134,    23,    58,
      89,   171,   134,   217,   147,   217,    38,   274,   160,   114,
      78,   108,   251,   311,  -115,   264,   147,    38,   109,   199,
     242,   147,   243,   255,    38,   339,   256,   209,   276,   326,
     327,   328,   293,    84,   294,    85,   333,   244,   114,   293,
     394,   294,   203,    23,   229,   230,   215,   -10,    99,   -89,
     -13,   -16,   -89,    97,   342,   343,   344,   222,   347,   278,
      16,    17,   360,   309,   305,    89,   294,   147,    23,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   134,   186,   199,   221,
     266,    23,   296,   331,   224,   103,   199,   341,   295,   223,
     251,   199,   368,   306,   370,   147,    97,   278,   371,   278,
     276,   376,   278,   377,    38,   278,   378,   154,   155,   407,
     103,   103,   103,   134,   277,   103,   278,   278,   355,   353,
     409,   389,   278,   278,   278,   299,   419,   421,   427,   381,
     257,   354,   147,   103,   260,   318,   319,   320,   321,   329,
     171,   362,   349,   363,   334,   278,   147,   382,   401,   387,
     278,   278,   414,   225,   226,   278,    38,   305,   267,   294,
     199,    86,   398,   400,   278,   403,   369,   375,   231,   232,
     261,   296,   262,   199,   233,   234,    61,    60,   263,   103,
     247,   155,   134,   306,   411,   413,   373,   374,   391,   316,
     317,   199,   265,    38,   322,   323,    38,   423,   324,   325,
     268,   147,   366,   395,   396,   397,   291,   147,   300,   340,
     308,   392,   345,   348,   367,   251,    92,   103,   379,   385,
     405,   383,   384,   404,   406,   416,   408,    65,   159,   172,
     157,   104,   338,   415,   245,   365,   417,   418,   310,   420,
     199,   304,   273,   312,   314,   313,   424,     0,   425,   426,
       0,   315,     0,     0,   428,     0,   104,   104,   104,     0,
       0,   104,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     2,     0,   199,   199,   199,   104,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,   199,     0,     0,   199,
     199,   289,   199,     0,     0,     0,     0,     0,     0,   199,
       0,   199,   199,     0,     0,   104,     0,   199,     0,     0,
       1,   118,   119,   120,   121,   122,   123,     0,   124,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   104,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,   118,
     119,   120,   121,   122,   123,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   128,     0,     0,     0,   129,     0,     0,
     130,   131,     0,     0,   132,   133,     1,   118,   119,   120,
     121,   122,   123,     0,   124,   125,     0,     0,   173,   174,
     175,     0,   176,   177,   178,   179,   180,   181,   182,   183,
       0,   184,  -158,   185,     0,     0,     0,   126,     0,     0,
       0,   128,     0,     0,     0,   129,     0,     0,   130,   131,
       0,     0,   132,   133,     0,     0,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   184,
    -158,   272,     0,     0,     0,   126,     0,     0,     0,   128,
       0,     0,     0,   129,     0,     0,   130,   131,     0,     0,
     132,   133,     1,   118,   119,   120,   121,   122,   123,     0,
     124,   125,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     1,   118,
     119,   120,   121,   122,   123,     0,   124,   125,     0,     0,
       0,     0,   173,   174,   175,   386,   176,   177,   178,   179,
     180,   181,   182,   183,     0,   184,     0,   275,     0,     0,
       0,   126,     0,     0,     0,   128,     0,     0,     0,   129,
       0,     0,   130,   131,     0,     0,   132,   133,   173,   174,
     175,     0,   176,   177,   178,   179,   180,   181,   182,   183,
       0,   184,     0,   350,     0,     0,     0,   126,     0,     0,
       0,   128,     0,     0,     0,   129,     0,     0,   130,   131,
       0,     0,   132,   133,     1,   118,   119,   120,   121,   122,
     123,     0,   124,   125,     1,   118,   119,   120,   121,   122,
     123,     0,   124,   125,     1,   118,   119,   120,   121,   122,
     123,     0,   124,   125,     0,     0,     0,     0,     1,   118,
     119,   120,   121,   122,   123,     0,   124,   125,     0,     0,
       0,     0,     0,     0,   173,   174,   175,     0,   176,   177,
     178,   179,   180,   181,   182,   183,     0,   184,     0,     0,
       0,     0,     0,   126,     0,     0,     0,   128,   249,   393,
       0,   129,     0,   126,   130,   131,     0,   128,   132,   133,
       0,   129,     0,   126,   130,   131,   127,   128,   132,   133,
       0,   129,   249,     0,   130,   131,     0,   126,   132,   133,
       0,   128,     0,     0,     0,   129,     0,     0,   130,   131,
       0,     0,   132,   133,     1,   118,   119,   120,   121,   122,
     123,     0,   124,   125,     0,     0,     0,     1,   118,   119,
     120,   121,   122,   123,     0,   124,   125,     0,     0,     0,
       1,   118,   119,   120,   121,   122,   123,     0,   124,   125,
       1,   118,   119,   120,   121,   122,   123,     0,   124,   125,
       0,     0,     0,     1,   118,   119,   120,   121,   122,   123,
       0,   124,   125,     0,     0,     0,     0,   269,     0,     0,
       0,     0,     0,   126,     0,     0,     0,   128,     0,     0,
       0,   129,     0,     0,   130,   131,   126,   330,   132,   133,
     128,     0,     0,   346,   129,     0,     0,   130,   131,   126,
       0,   132,   133,   128,     0,     0,     0,   129,     0,   126,
     130,   131,   359,   128,   132,   133,   380,   129,     0,     0,
     130,   131,   126,     0,   132,   133,   128,     0,     0,     0,
     129,     0,     0,   130,   131,     0,     0,   132,   133,     1,
     118,   119,   120,   121,   122,   123,     0,   124,   125,     0,
       0,     0,     1,   118,   119,   120,   121,   122,   123,     0,
     124,   125,     0,     0,     0,     1,   118,   119,   120,   121,
     122,   123,     0,   124,   125,     0,     0,     0,     1,   118,
     119,   120,   121,   122,   123,     0,   124,   125,     0,     0,
       0,     1,   118,   119,   120,   121,   122,   123,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,   388,   128,     0,     0,     0,   129,     0,     0,   130,
     131,   126,   399,   132,   133,   128,     0,     0,   402,   129,
       0,     0,   130,   131,   126,     0,   132,   133,   128,     0,
       0,     0,   129,     0,     0,   130,   131,   126,   410,   132,
     133,   128,     0,     0,     0,   129,     0,     0,   130,   131,
     126,   412,   132,   133,   128,     0,     0,     0,   129,     0,
       0,   130,   131,     0,     0,   132,   133,     1,   118,   119,
     120,   121,   122,   123,     0,   124,   125,     1,   118,   119,
     120,   121,   122,   123,     0,   124,   125,     1,   118,   119,
     120,   121,   122,   123,     0,   124,   125,     1,   118,   119,
     120,   121,   122,   123,     2,   124,   125,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   422,     0,     0,
     128,   166,     0,     0,   129,     0,   210,   130,   131,     0,
     128,   132,   133,     0,   129,     1,   212,   130,   131,     0,
     128,   132,   133,     0,   129,     0,   126,   130,   131,     0,
     128,   132,   133,    64,   129,     0,     1,   130,   131,     0,
       0,   132,   133,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   293,   356,   294,     1,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     2,    22,     0,     0,     0,
      23,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,   305,   356,   294,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   364,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    23,    37,   116,    85,   249,    22,    98,     3,   126,
       3,    75,    28,     3,   156,     3,     0,    20,   105,    67,
     111,    21,    22,    85,    24,     3,   168,    83,    28,   103,
     104,   173,   148,    33,     3,    69,     3,    37,    69,    73,
      24,    63,     3,   204,    75,    29,    30,    31,    10,    11,
      12,    70,   126,     3,   215,    76,   112,   296,    58,    67,
       3,   123,   124,   125,    85,    86,   183,   306,    15,    16,
      66,    66,   163,    69,    77,   156,    73,    72,    71,    72,
      96,    76,    72,    76,    72,   172,   148,   168,    76,    67,
      90,   107,   173,   210,   156,   212,    96,   188,   114,    83,
      67,    67,   161,   220,    73,   178,   168,   107,    67,   109,
      72,   173,    74,    66,   114,   257,    69,   117,   191,   235,
     236,   237,    72,    72,    74,    74,   243,    89,   112,    72,
     374,    74,    73,    76,    81,    82,   210,    67,    70,    66,
      67,    67,    69,    70,   261,   262,   263,    78,   265,    69,
      45,    46,   294,    73,    72,   155,    74,   219,    76,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   257,   109,   178,    19,
     180,    76,   204,   242,    80,    78,   186,   260,   204,    79,
     249,   191,   308,   215,    69,   257,    70,    69,    73,    69,
     273,    73,    69,    73,   204,    69,    73,    68,    69,    73,
     103,   104,   105,   294,    66,   108,    69,    69,   291,   278,
      73,   363,    69,    69,    69,    73,    73,    73,    73,   346,
      71,   290,   294,   126,    71,   227,   228,   229,   230,   239,
     256,    72,    66,    74,   244,    69,   308,    66,    66,   362,
      69,    69,    66,    17,    18,    69,   256,    72,    66,    74,
     260,   296,   379,   380,    69,   382,    71,   340,    13,    14,
      72,   293,    72,   273,    83,    84,    23,   293,    72,   172,
      68,    69,   363,   305,   401,   402,    68,    69,   369,   225,
     226,   291,    72,   293,   231,   232,   296,   414,   233,   234,
      66,   363,   302,   376,   377,   378,    71,   369,    69,    71,
      73,   370,    58,    66,    73,   374,    63,   210,    72,    75,
      75,    73,    73,    73,    56,    66,   399,    24,    96,   108,
      90,    78,   256,   406,   155,   300,   409,   410,   219,   412,
     340,   210,   186,   221,   223,   222,   419,    -1,   421,   422,
      -1,   224,    -1,    -1,   427,    -1,   103,   104,   105,    -1,
      -1,   108,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    31,    -1,   376,   377,   378,   126,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,   399,
      -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,   409,
     410,    70,   412,    -1,    -1,    -1,    -1,    -1,    -1,   419,
      -1,   421,   422,    -1,    -1,   172,    -1,   427,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,   210,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,
      87,    88,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    53,    54,    55,    73,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    66,    -1,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    84,    -1,    -1,    87,    88,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    66,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    67,    68,
      -1,    80,    -1,    72,    83,    84,    -1,    76,    87,    88,
      -1,    80,    -1,    72,    83,    84,    75,    76,    87,    88,
      -1,    80,    67,    -1,    83,    84,    -1,    72,    87,    88,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    72,    73,    87,    88,
      76,    -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,
      -1,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    72,
      83,    84,    75,    76,    87,    88,    66,    80,    -1,    -1,
      83,    84,    72,    -1,    87,    88,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    72,    73,    87,    88,    76,    -1,    -1,    66,    80,
      -1,    -1,    83,    84,    72,    -1,    87,    88,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    72,    73,    87,
      88,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      72,    73,    87,    88,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    -1,    -1,    87,    88,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    31,    11,    12,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      76,    68,    -1,    -1,    80,    -1,    72,    83,    84,    -1,
      76,    87,    88,    -1,    80,     3,    72,    83,    84,    -1,
      76,    87,    88,    -1,    80,    -1,    72,    83,    84,    -1,
      76,    87,    88,     0,    80,    -1,     3,    83,    84,    -1,
      -1,    87,    88,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    72,    73,    74,     3,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    31,    72,    -1,    -1,    -1,
      76,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    72,    73,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    72,    76,    91,    92,    94,   103,   110,   117,
     123,   136,   139,   140,   151,   154,   155,   159,   207,   135,
     122,   121,   120,   118,   119,   125,   126,   127,   128,   131,
     132,   129,   130,   137,   138,   124,   141,   142,    67,   207,
     154,   136,   159,   160,     0,    92,    93,    66,   144,   145,
     154,   110,   111,   110,   113,   110,   115,   133,    67,   207,
     134,    95,   107,   108,    72,    74,   155,   152,   153,   207,
      67,    73,   136,   159,   104,    66,    69,    70,    99,   107,
     112,   114,   116,   123,   136,   143,   147,   148,    67,    67,
     179,    97,   109,   103,   110,   156,   157,   158,     4,     5,
       6,     7,     8,     9,    11,    12,    72,    75,    76,    80,
      83,    84,    87,    88,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   205,   206,   207,    68,    69,    70,   152,   105,   145,
     154,   146,   179,   101,   148,   148,    68,   147,    71,   149,
     150,   154,   143,    53,    54,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    66,    68,   107,   172,   173,   175,
     176,   180,   181,   182,   183,   184,   185,   187,   200,   207,
      96,   179,   103,    73,   110,   161,   164,   165,   166,   207,
      72,   200,    72,   200,   200,   148,   169,   184,    75,    20,
      77,    19,    78,    79,    80,    17,    18,    15,    16,    81,
      82,    13,    14,    83,    84,    76,    85,    86,   199,    10,
      11,    12,    72,    74,    89,   153,   188,    68,   106,    67,
     167,   185,   100,   179,   188,    66,    69,    71,    68,   188,
      71,    72,    72,    72,   172,    72,   207,    66,    66,    66,
     184,   177,    68,   180,   179,    68,   172,    66,    69,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    70,
     186,    71,    98,    72,    74,   154,   159,   170,   171,    73,
      69,   162,    69,    73,   169,    72,   159,   170,    73,    73,
     190,   184,   191,   192,   193,   194,   195,   195,   196,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   199,   207,
      73,   185,   204,   184,   207,   167,   168,   102,   150,   188,
      71,   172,   184,   184,   184,    58,    66,   184,    66,    66,
      68,   174,   178,   185,   185,   172,    73,   161,   170,    75,
     188,   171,    72,    74,    51,   165,   207,    73,   199,    71,
      69,    73,    75,    68,    69,   172,    73,    73,    73,    72,
      66,   184,    66,    73,    73,    75,    73,   161,    75,   188,
     163,   187,   185,    68,   167,   172,   172,   172,   184,    73,
     184,    66,    66,   184,    73,    75,    56,    73,   172,    73,
      73,   184,    73,   184,    66,   172,    66,   172,   172,    73,
     172,    73,    73,   184,   172,   172,   172,    73,   172
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 423 "ast_c_grammar.y"
    {
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).external_declaration_node_1=(yyvsp[(1) - (1)].external_declaration_val);
    (*anode).translation_unit_node_1= 0;
    (yyval.translation_unit_val) = anode;
    ast.root = anode;

}
    break;

  case 3:
#line 433 "ast_c_grammar.y"
    {
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).translation_unit_node_1=(yyvsp[(1) - (2)].translation_unit_val);
    (*anode).external_declaration_node_1=(yyvsp[(2) - (2)].external_declaration_val);
    (yyval.translation_unit_val) = anode;
    ast.root = anode;
}
    break;

  case 4:
#line 443 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 5:
#line 444 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).function_definition_node_1=(yyvsp[(1) - (2)].function_definition_val);
    (*anode).declaration_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 6:
#line 452 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).function_definition_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 7:
#line 461 "ast_c_grammar.y"
    {st.push();}
    break;

  case 8:
#line 461 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 9:
#line 462 "ast_c_grammar.y"
    {
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (4)].declarator_val);
    (*anode).compound_statement_node_1=(yyvsp[(3) - (4)].compound_statement_val);
    (*anode).declaration_list_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (yyval.function_definition_val) = anode;
}
    break;

  case 10:
#line 471 "ast_c_grammar.y"
    {st.push();}
    break;

  case 11:
#line 471 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 12:
#line 472 "ast_c_grammar.y"
    {
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (5)].declarator_val);
    (*anode).declaration_list_node_1=(yyvsp[(2) - (5)].declaration_list_val);
    (*anode).compound_statement_node_1=(yyvsp[(4) - (5)].compound_statement_val);
    (*anode).declaration_specifiers_node_1= 0;
    (yyval.function_definition_val) = anode;
}
    break;

  case 13:
#line 481 "ast_c_grammar.y"
    {st.push();}
    break;

  case 14:
#line 481 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 15:
#line 482 "ast_c_grammar.y"
    {
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (5)].declaration_specifiers_val);
    (*anode).declarator_node_1=(yyvsp[(2) - (5)].declarator_val);
    (*anode).compound_statement_node_1=(yyvsp[(4) - (5)].compound_statement_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.function_definition_val) = anode;
}
    break;

  case 16:
#line 491 "ast_c_grammar.y"
    {st.push();}
    break;

  case 17:
#line 491 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 18:
#line 492 "ast_c_grammar.y"
    {
     function_definition_node *anode;
anode = (function_definition_node*) malloc(sizeof(function_definition_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (6)].declaration_specifiers_val);
    (*anode).declarator_node_1=(yyvsp[(2) - (6)].declarator_val);
    (*anode).declaration_list_node_1=(yyvsp[(3) - (6)].declaration_list_val);
    (*anode).compound_statement_node_1=(yyvsp[(5) - (6)].compound_statement_val);
    (yyval.function_definition_val) = anode;
}
    break;

  case 19:
#line 503 "ast_c_grammar.y"
    {declMode=false;}
    break;

  case 20:
#line 504 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (3)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1= 0;
    (yyval.declaration_val) = anode;
}
    break;

  case 21:
#line 512 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 22:
#line 514 "ast_c_grammar.y"
    {
      //we'll be using this to store most of the info about
      //the object
      unsigned int new_specs = 0;
      //we'll need to get the info from the declaration specifiers
      
      //this is just to know whether there is another spec node
      bool anotherSpecifier = true;
      declaration_specifiers_node * currentSpecNode = (yyvsp[(1) - (4)].declaration_specifiers_val);
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
      init_declarator_list_node* currentDeclList = (yyvsp[(2) - (4)].init_declarator_list_val);
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

	  //I forget if I should just be seaching top or all....
	  SymbolContent *sc = st.searchAll((*id_node).token_1);
	  (*sc).specs = this_spec;  
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
    break;

  case 23:
#line 728 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (5)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1=(yyvsp[(2) - (5)].init_declarator_list_val);
    (yyval.declaration_val) = anode;
}
    break;

  case 24:
#line 738 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 25:
#line 739 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_node_1=(yyvsp[(2) - (2)].declaration_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.declaration_list_val) = anode;
}
    break;

  case 26:
#line 746 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 27:
#line 747 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_list_node_1=(yyvsp[(1) - (3)].declaration_list_val);
    (*anode).declaration_node_1=(yyvsp[(3) - (3)].declaration_val);
    (yyval.declaration_list_val) = anode;
}
    break;

  case 28:
#line 756 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 29:
#line 757 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=(yyvsp[(1) - (2)].storage_class_specifier_val);
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 30:
#line 766 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 31:
#line 767 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=(yyvsp[(1) - (3)].storage_class_specifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (3)].declaration_specifiers_val);
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 32:
#line 776 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 33:
#line 777 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (2)].type_specifier_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 34:
#line 786 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 35:
#line 787 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (3)].type_specifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (3)].declaration_specifiers_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 36:
#line 796 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 37:
#line 797 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (2)].type_qualifier_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 38:
#line 806 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 39:
#line 807 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (3)].type_qualifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (3)].declaration_specifiers_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 40:
#line 818 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 41:
#line 819 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 42:
#line 825 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 43:
#line 826 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 44:
#line 832 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 45:
#line 833 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 46:
#line 839 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 47:
#line 840 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 48:
#line 846 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 49:
#line 847 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 50:
#line 855 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 51:
#line 856 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 52:
#line 864 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 53:
#line 865 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 54:
#line 873 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 55:
#line 874 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 56:
#line 882 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 57:
#line 883 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 58:
#line 891 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 59:
#line 892 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 60:
#line 900 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 61:
#line 901 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 62:
#line 909 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 63:
#line 910 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 64:
#line 918 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 65:
#line 919 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 66:
#line 927 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 67:
#line 928 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 68:
#line 936 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 69:
#line 937 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).struct_or_union_specifier_node_1=(yyvsp[(1) - (2)].struct_or_union_specifier_val);
    (*anode).token_1= 0;
    (*anode).enum_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 70:
#line 945 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 71:
#line 946 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).enum_specifier_node_1=(yyvsp[(1) - (2)].enum_specifier_val);
    (*anode).token_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 72:
#line 954 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 73:
#line 955 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 74:
#line 965 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 75:
#line 966 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 76:
#line 972 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 77:
#line 973 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 78:
#line 982 "ast_c_grammar.y"
    {
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).struct_or_union_node_1=(yyvsp[(1) - (5)].struct_or_union_val);
    (*anode).identifier_node_1=(yyvsp[(2) - (5)].identifier_val);
    (*anode).struct_declaration_list_node_1=(yyvsp[(4) - (5)].struct_declaration_list_val);
    (yyval.struct_or_union_specifier_val) = anode;
}
    break;

  case 79:
#line 993 "ast_c_grammar.y"
    {
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).struct_or_union_node_1=(yyvsp[(1) - (4)].struct_or_union_val);
    (*anode).struct_declaration_list_node_1=(yyvsp[(3) - (4)].struct_declaration_list_val);
    (*anode).identifier_node_1= 0;
    (yyval.struct_or_union_specifier_val) = anode;
}
    break;

  case 80:
#line 1004 "ast_c_grammar.y"
    {
     struct_or_union_specifier_node *anode;
anode = (struct_or_union_specifier_node*) malloc(sizeof(struct_or_union_specifier_node));
    (*anode).struct_or_union_node_1=(yyvsp[(1) - (2)].struct_or_union_val);
    (*anode).identifier_node_1=(yyvsp[(2) - (2)].identifier_val);
    (*anode).char_lit_1= "";
    (*anode).struct_declaration_list_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.struct_or_union_specifier_val) = anode;
}
    break;

  case 81:
#line 1016 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 82:
#line 1017 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 83:
#line 1023 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 84:
#line 1024 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 85:
#line 1033 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_node_1=(yyvsp[(1) - (1)].struct_declaration_val);
    (*anode).struct_declaration_list_node_1= 0;
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 86:
#line 1041 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_list_node_1=(yyvsp[(1) - (2)].struct_declaration_list_val);
    (*anode).struct_declaration_node_1=(yyvsp[(2) - (2)].struct_declaration_val);
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 87:
#line 1051 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).init_declarator_node_1=(yyvsp[(1) - (1)].init_declarator_val);
    (*anode).init_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 88:
#line 1060 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).init_declarator_list_node_1=(yyvsp[(1) - (3)].init_declarator_list_val);
    (*anode).init_declarator_node_1=(yyvsp[(3) - (3)].init_declarator_val);
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 89:
#line 1071 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).initializer_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_val) = anode;
}
    break;

  case 90:
#line 1079 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 91:
#line 1080 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).char_lit_1="'='";
    (*anode).declarator_node_1=(yyvsp[(1) - (4)].declarator_val);
    (*anode).initializer_node_1=(yyvsp[(4) - (4)].initializer_val);
    (yyval.init_declarator_val) = anode;
}
    break;

  case 92:
#line 1091 "ast_c_grammar.y"
    {
     struct_declaration_node *anode;
anode = (struct_declaration_node*) malloc(sizeof(struct_declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (3)].specifier_qualifier_list_val);
    (*anode).struct_declarator_list_node_1=(yyvsp[(2) - (3)].struct_declarator_list_val);
    (yyval.struct_declaration_val) = anode;
}
    break;

  case 93:
#line 1102 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (1)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 94:
#line 1111 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (2)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 95:
#line 1120 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 96:
#line 1129 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (2)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 97:
#line 1140 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).struct_declarator_node_1=(yyvsp[(1) - (1)].struct_declarator_val);
    (*anode).struct_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 98:
#line 1149 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).struct_declarator_list_node_1=(yyvsp[(1) - (3)].struct_declarator_list_val);
    (*anode).struct_declarator_node_1=(yyvsp[(3) - (3)].struct_declarator_val);
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 99:
#line 1160 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 100:
#line 1169 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).constant_expression_node_1=(yyvsp[(2) - (2)].constant_expression_val);
    (*anode).declarator_node_1= 0;
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 101:
#line 1178 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).declarator_node_1=(yyvsp[(1) - (3)].declarator_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 102:
#line 1189 "ast_c_grammar.y"
    {
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).token_1=(yyvsp[(1) - (4)].sval);
    (*anode).enumerator_list_node_1=(yyvsp[(3) - (4)].enumerator_list_val);
    (*anode).identifier_node_1= 0;
    (yyval.enum_specifier_val) = anode;
}
    break;

  case 103:
#line 1200 "ast_c_grammar.y"
    {
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).token_1=(yyvsp[(1) - (5)].sval);
    (*anode).identifier_node_1=(yyvsp[(2) - (5)].identifier_val);
    (*anode).enumerator_list_node_1=(yyvsp[(4) - (5)].enumerator_list_val);
    (yyval.enum_specifier_val) = anode;
}
    break;

  case 104:
#line 1211 "ast_c_grammar.y"
    {
     enum_specifier_node *anode;
anode = (enum_specifier_node*) malloc(sizeof(enum_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).identifier_node_1=(yyvsp[(2) - (2)].identifier_val);
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.enum_specifier_val) = anode;
}
    break;

  case 105:
#line 1224 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).enumerator_node_1=(yyvsp[(1) - (1)].enumerator_val);
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 106:
#line 1233 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).char_lit_1="','";
    (*anode).enumerator_list_node_1=(yyvsp[(1) - (3)].enumerator_list_val);
    (*anode).enumerator_node_1=(yyvsp[(3) - (3)].enumerator_val);
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 107:
#line 1244 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.enumerator_val) = anode;
}
    break;

  case 108:
#line 1253 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).char_lit_1="'='";
    (*anode).identifier_node_1=(yyvsp[(1) - (3)].identifier_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.enumerator_val) = anode;
}
    break;

  case 109:
#line 1264 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (1)].direct_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.declarator_val) = anode;
}
    break;

  case 110:
#line 1272 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_declarator_node_1=(yyvsp[(2) - (2)].direct_declarator_val);
    (yyval.declarator_val) = anode;
}
    break;

  case 111:
#line 1282 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).direct_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 112:
#line 1296 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).declarator_node_1=(yyvsp[(2) - (3)].declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).direct_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 113:
#line 1310 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (3)].direct_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 114:
#line 1324 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (4)].direct_declarator_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (4)].constant_expression_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 115:
#line 1337 "ast_c_grammar.y"
    {st.push();}
    break;

  case 116:
#line 1338 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (4)].direct_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 117:
#line 1351 "ast_c_grammar.y"
    {st.push();}
    break;

  case 118:
#line 1352 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (5)].direct_declarator_val);
    (*anode).parameter_type_list_node_1=(yyvsp[(4) - (5)].parameter_type_list_val);
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 119:
#line 1365 "ast_c_grammar.y"
    {st.push();}
    break;

  case 120:
#line 1366 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (5)].direct_declarator_val);
    (*anode).identifier_list_node_1=(yyvsp[(4) - (5)].identifier_list_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 121:
#line 1382 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1= 0;
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 122:
#line 1391 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (2)].type_qualifier_list_val);
    (*anode).pointer_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 123:
#line 1400 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1=(yyvsp[(2) - (2)].pointer_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 124:
#line 1409 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (3)].type_qualifier_list_val);
    (*anode).pointer_node_1=(yyvsp[(3) - (3)].pointer_val);
    (yyval.pointer_val) = anode;
}
    break;

  case 125:
#line 1420 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 126:
#line 1428 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_list_node_1=(yyvsp[(1) - (2)].type_qualifier_list_val);
    (*anode).type_qualifier_node_1=(yyvsp[(2) - (2)].type_qualifier_val);
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 127:
#line 1437 "ast_c_grammar.y"
    {declMode=false;}
    break;

  case 128:
#line 1438 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).parameter_list_node_1=(yyvsp[(1) - (2)].parameter_list_val);
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 129:
#line 1446 "ast_c_grammar.y"
    {declMode=false;}
    break;

  case 130:
#line 1447 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).char_lit_1="','";
    (*anode).token_1=(yyvsp[(3) - (4)].sval);
    (*anode).parameter_list_node_1=(yyvsp[(1) - (4)].parameter_list_val);
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 131:
#line 1458 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).parameter_declaration_node_1=(yyvsp[(1) - (1)].parameter_declaration_val);
    (*anode).parameter_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_list_val) = anode;
}
    break;

  case 132:
#line 1467 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).char_lit_1="','";
    (*anode).parameter_list_node_1=(yyvsp[(1) - (3)].parameter_list_val);
    (*anode).parameter_declaration_node_1=(yyvsp[(3) - (3)].parameter_declaration_val);
    (yyval.parameter_list_val) = anode;
}
    break;

  case 133:
#line 1478 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).declarator_node_1=(yyvsp[(2) - (2)].declarator_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 134:
#line 1487 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (1)].declaration_specifiers_val);
    (*anode).declarator_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 135:
#line 1496 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (*anode).declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 136:
#line 1507 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).char_lit_1= "";
    (*anode).identifier_list_node_1= 0;
    (yyval.identifier_list_val) = anode;
}
    break;

  case 137:
#line 1516 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).char_lit_1="','";
    (*anode).identifier_list_node_1=(yyvsp[(1) - (3)].identifier_list_val);
    (*anode).identifier_node_1=(yyvsp[(3) - (3)].identifier_val);
    (yyval.identifier_list_val) = anode;
}
    break;

  case 138:
#line 1527 "ast_c_grammar.y"
    {
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_3= "";
    (*anode).char_lit_2= "";
    (yyval.initializer_val) = anode;
}
    break;

  case 139:
#line 1538 "ast_c_grammar.y"
    {
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).initializer_list_node_1=(yyvsp[(2) - (3)].initializer_list_val);
    (*anode).assignment_expression_node_1= 0;
    (*anode).char_lit_3= "";
    (yyval.initializer_val) = anode;
}
    break;

  case 140:
#line 1549 "ast_c_grammar.y"
    {
     initializer_node *anode;
anode = (initializer_node*) malloc(sizeof(initializer_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="','";
    (*anode).char_lit_3="'}'";
    (*anode).initializer_list_node_1=(yyvsp[(2) - (4)].initializer_list_val);
    (*anode).assignment_expression_node_1= 0;
    (yyval.initializer_val) = anode;
}
    break;

  case 141:
#line 1562 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).initializer_node_1=(yyvsp[(1) - (1)].initializer_val);
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.initializer_list_val) = anode;
}
    break;

  case 142:
#line 1571 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).char_lit_1="','";
    (*anode).initializer_list_node_1=(yyvsp[(1) - (3)].initializer_list_val);
    (*anode).initializer_node_1=(yyvsp[(3) - (3)].initializer_val);
    (yyval.initializer_list_val) = anode;
}
    break;

  case 143:
#line 1582 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (1)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.type_name_val) = anode;
}
    break;

  case 144:
#line 1590 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (2)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (yyval.type_name_val) = anode;
}
    break;

  case 145:
#line 1600 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (1)].pointer_val);
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 146:
#line 1608 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (1)].direct_abstract_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 147:
#line 1616 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(2) - (2)].direct_abstract_declarator_val);
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 148:
#line 1626 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (3)].abstract_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 149:
#line 1638 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 150:
#line 1650 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).constant_expression_node_1=(yyvsp[(2) - (3)].constant_expression_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 151:
#line 1662 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (3)].direct_abstract_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 152:
#line 1674 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (4)].direct_abstract_declarator_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (4)].constant_expression_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 153:
#line 1686 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 154:
#line 1698 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).parameter_type_list_node_1=(yyvsp[(2) - (3)].parameter_type_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 155:
#line 1710 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (3)].direct_abstract_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 156:
#line 1722 "ast_c_grammar.y"
    {
     direct_abstract_declarator_node *anode;
anode = (direct_abstract_declarator_node*) malloc(sizeof(direct_abstract_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (4)].direct_abstract_declarator_val);
    (*anode).parameter_type_list_node_1=(yyvsp[(3) - (4)].parameter_type_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (yyval.direct_abstract_declarator_val) = anode;
}
    break;

  case 157:
#line 1736 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).labeled_statement_node_1=(yyvsp[(1) - (1)].labeled_statement_val);
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 158:
#line 1747 "ast_c_grammar.y"
    {st.push();}
    break;

  case 159:
#line 1747 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 160:
#line 1748 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).compound_statement_node_1=(yyvsp[(2) - (3)].compound_statement_val);
    (*anode).expression_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 161:
#line 1760 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).expression_statement_node_1=(yyvsp[(1) - (1)].expression_statement_val);
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 162:
#line 1772 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).selection_statement_node_1=(yyvsp[(1) - (1)].selection_statement_val);
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 163:
#line 1784 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).iteration_statement_node_1=(yyvsp[(1) - (1)].iteration_statement_val);
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).jump_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 164:
#line 1796 "ast_c_grammar.y"
    {
     statement_node *anode;
anode = (statement_node*) malloc(sizeof(statement_node));
    (*anode).jump_statement_node_1=(yyvsp[(1) - (1)].jump_statement_val);
    (*anode).expression_statement_node_1= 0;
    (*anode).compound_statement_node_1= 0;
    (*anode).iteration_statement_node_1= 0;
    (*anode).selection_statement_node_1= 0;
    (*anode).labeled_statement_node_1= 0;
    (yyval.statement_val) = anode;
}
    break;

  case 165:
#line 1810 "ast_c_grammar.y"
    {
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).identifier_node_1=(yyvsp[(1) - (3)].identifier_val);
    (*anode).statement_node_1=(yyvsp[(3) - (3)].statement_val);
    (*anode).token_1= 0;
    (*anode).constant_expression_node_1= 0;
    (yyval.labeled_statement_val) = anode;
}
    break;

  case 166:
#line 1821 "ast_c_grammar.y"
    {
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).token_1=(yyvsp[(1) - (4)].sval);
    (*anode).constant_expression_node_1=(yyvsp[(2) - (4)].constant_expression_val);
    (*anode).statement_node_1=(yyvsp[(4) - (4)].statement_val);
    (*anode).identifier_node_1= 0;
    (yyval.labeled_statement_val) = anode;
}
    break;

  case 167:
#line 1832 "ast_c_grammar.y"
    {
     labeled_statement_node *anode;
anode = (labeled_statement_node*) malloc(sizeof(labeled_statement_node));
    (*anode).char_lit_1="':'";
    (*anode).token_1=(yyvsp[(1) - (3)].sval);
    (*anode).statement_node_1=(yyvsp[(3) - (3)].statement_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.labeled_statement_val) = anode;
}
    break;

  case 168:
#line 1844 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 169:
#line 1845 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1= 0;
    (yyval.expression_statement_val) = anode;
}
    break;

  case 170:
#line 1852 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 171:
#line 1853 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1=(yyvsp[(1) - (3)].expression_val);
    (yyval.expression_statement_val) = anode;
}
    break;

  case 172:
#line 1863 "ast_c_grammar.y"
    {
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1= 0;
    (*anode).statement_list_node_1= 0;
    (yyval.compound_statement_val) = anode;
}
    break;

  case 173:
#line 1873 "ast_c_grammar.y"
    {
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).statement_list_node_1=(yyvsp[(2) - (3)].statement_list_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.compound_statement_val) = anode;
}
    break;

  case 174:
#line 1883 "ast_c_grammar.y"
    {
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1=(yyvsp[(2) - (3)].declaration_list_val);
    (*anode).statement_list_node_1= 0;
    (yyval.compound_statement_val) = anode;
}
    break;

  case 175:
#line 1893 "ast_c_grammar.y"
    {
     compound_statement_node *anode;
anode = (compound_statement_node*) malloc(sizeof(compound_statement_node));
    (*anode).char_lit_1="'{'";
    (*anode).char_lit_2="'}'";
    (*anode).declaration_list_node_1=(yyvsp[(2) - (4)].declaration_list_val);
    (*anode).statement_list_node_1=(yyvsp[(3) - (4)].statement_list_val);
    (yyval.compound_statement_val) = anode;
}
    break;

  case 176:
#line 1905 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_node_1=(yyvsp[(1) - (1)].statement_val);
    (*anode).statement_list_node_1= 0;
    (yyval.statement_list_val) = anode;
}
    break;

  case 177:
#line 1913 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_list_node_1=(yyvsp[(1) - (2)].statement_list_val);
    (*anode).statement_node_1=(yyvsp[(2) - (2)].statement_val);
    (yyval.statement_list_val) = anode;
}
    break;

  case 178:
#line 1923 "ast_c_grammar.y"
    {
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (5)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (5)].expression_val);
    (*anode).statement_node_1=(yyvsp[(5) - (5)].statement_val);
    (*anode).token_2= 0;
    (*anode).statement_node_2= 0;
    (yyval.selection_statement_val) = anode;
}
    break;

  case 179:
#line 1936 "ast_c_grammar.y"
    {
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).token_2=(yyvsp[(6) - (7)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (7)].expression_val);
    (*anode).statement_node_1=(yyvsp[(5) - (7)].statement_val);
    (*anode).statement_node_2=(yyvsp[(7) - (7)].statement_val);
    (yyval.selection_statement_val) = anode;
}
    break;

  case 180:
#line 1949 "ast_c_grammar.y"
    {
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (5)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (5)].expression_val);
    (*anode).statement_node_1=(yyvsp[(5) - (5)].statement_val);
    (*anode).token_2= 0;
    (*anode).statement_node_2= 0;
    (yyval.selection_statement_val) = anode;
}
    break;

  case 181:
#line 1964 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (5)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (5)].expression_val);
    (*anode).statement_node_1=(yyvsp[(5) - (5)].statement_val);
    (*anode).char_lit_4= "";
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).char_lit_3= "";
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 182:
#line 1980 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).char_lit_3="';'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).token_2=(yyvsp[(3) - (7)].sval);
    (*anode).statement_node_1=(yyvsp[(2) - (7)].statement_val);
    (*anode).expression_node_1=(yyvsp[(5) - (7)].expression_val);
    (*anode).char_lit_4= "";
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 183:
#line 1996 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (6)].sval);
    (*anode).statement_node_1=(yyvsp[(6) - (6)].statement_val);
    (*anode).expression_node_1= 0;
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 184:
#line 2012 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).expression_node_1=(yyvsp[(5) - (7)].expression_val);
    (*anode).statement_node_1=(yyvsp[(7) - (7)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 185:
#line 2028 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).expression_node_1=(yyvsp[(4) - (7)].expression_val);
    (*anode).statement_node_1=(yyvsp[(7) - (7)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 186:
#line 2044 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (8)].sval);
    (*anode).expression_node_1=(yyvsp[(4) - (8)].expression_val);
    (*anode).expression_node_2=(yyvsp[(6) - (8)].expression_val);
    (*anode).statement_node_1=(yyvsp[(8) - (8)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 187:
#line 2060 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (7)].expression_val);
    (*anode).statement_node_1=(yyvsp[(7) - (7)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).expression_node_2= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 188:
#line 2076 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (8)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (8)].expression_val);
    (*anode).expression_node_2=(yyvsp[(3) - (8)].expression_val);
    (*anode).expression_node_1=(yyvsp[(3) - (8)].expression_val);
    (*anode).statement_node_1=(yyvsp[(8) - (8)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 189:
#line 2093 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (8)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (8)].expression_val);
    (*anode).expression_node_2=(yyvsp[(5) - (8)].expression_val);
    (*anode).statement_node_1=(yyvsp[(8) - (8)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 190:
#line 2109 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (9)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_2=(yyvsp[(5) - (9)].expression_val);
    (*anode).expression_node_3=(yyvsp[(7) - (9)].expression_val);
    (*anode).statement_node_1=(yyvsp[(9) - (9)].statement_val);
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 191:
#line 2127 "ast_c_grammar.y"
    {
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=(yyvsp[(1) - (3)].sval);
    (*anode).identifier_node_1=(yyvsp[(2) - (3)].identifier_val);
    (*anode).expression_node_1= 0;
    (yyval.jump_statement_val) = anode;
}
    break;

  case 192:
#line 2137 "ast_c_grammar.y"
    {
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.jump_statement_val) = anode;
}
    break;

  case 193:
#line 2147 "ast_c_grammar.y"
    {
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.jump_statement_val) = anode;
}
    break;

  case 194:
#line 2157 "ast_c_grammar.y"
    {
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.jump_statement_val) = anode;
}
    break;

  case 195:
#line 2167 "ast_c_grammar.y"
    {
     jump_statement_node *anode;
anode = (jump_statement_node*) malloc(sizeof(jump_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).token_1=(yyvsp[(1) - (3)].sval);
    (*anode).expression_node_1=(yyvsp[(2) - (3)].expression_val);
    (*anode).identifier_node_1= 0;
    (yyval.jump_statement_val) = anode;
}
    break;

  case 196:
#line 2179 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.expression_val) = anode;
}
    break;

  case 197:
#line 2188 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).char_lit_1="','";
    (*anode).expression_node_1=(yyvsp[(1) - (3)].expression_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.expression_val) = anode;
}
    break;

  case 198:
#line 2199 "ast_c_grammar.y"
    {
     assignment_expression_node *anode;
anode = (assignment_expression_node*) malloc(sizeof(assignment_expression_node));
    (*anode).conditional_expression_node_1=(yyvsp[(1) - (1)].conditional_expression_val);
    (*anode).assignment_operator_node_1= 0;
    (*anode).unary_expression_node_1= 0;
    (*anode).assignment_expression_node_1= 0;
    (yyval.assignment_expression_val) = anode;
}
    break;

  case 199:
#line 2209 "ast_c_grammar.y"
    {
     assignment_expression_node *anode;
anode = (assignment_expression_node*) malloc(sizeof(assignment_expression_node));
    (*anode).unary_expression_node_1=(yyvsp[(1) - (3)].unary_expression_val);
    (*anode).assignment_operator_node_1=(yyvsp[(2) - (3)].assignment_operator_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (*anode).conditional_expression_node_1= 0;
    (yyval.assignment_expression_val) = anode;
}
    break;

  case 200:
#line 2221 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).char_lit_1="'='";
    (*anode).token_1= 0;
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 201:
#line 2229 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 202:
#line 2237 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 203:
#line 2245 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 204:
#line 2253 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 205:
#line 2261 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 206:
#line 2269 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 207:
#line 2277 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 208:
#line 2285 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 209:
#line 2293 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 210:
#line 2301 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 211:
#line 2311 "ast_c_grammar.y"
    {
     conditional_expression_node *anode;
anode = (conditional_expression_node*) malloc(sizeof(conditional_expression_node));
    (*anode).logical_or_expression_node_1=(yyvsp[(1) - (1)].logical_or_expression_val);
    (*anode).expression_node_1= 0;
    (*anode).conditional_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (yyval.conditional_expression_val) = anode;
}
    break;

  case 212:
#line 2322 "ast_c_grammar.y"
    {
     conditional_expression_node *anode;
anode = (conditional_expression_node*) malloc(sizeof(conditional_expression_node));
    (*anode).char_lit_1="'?'";
    (*anode).char_lit_2="':'";
    (*anode).logical_or_expression_node_1=(yyvsp[(1) - (5)].logical_or_expression_val);
    (*anode).expression_node_1=(yyvsp[(3) - (5)].expression_val);
    (*anode).conditional_expression_node_1=(yyvsp[(5) - (5)].conditional_expression_val);
    (yyval.conditional_expression_val) = anode;
}
    break;

  case 213:
#line 2335 "ast_c_grammar.y"
    {
     constant_expression_node *anode;
anode = (constant_expression_node*) malloc(sizeof(constant_expression_node));
    (*anode).conditional_expression_node_1=(yyvsp[(1) - (1)].conditional_expression_val);
    (yyval.constant_expression_val) = anode;
}
    break;

  case 214:
#line 2344 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (1)].logical_and_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_or_expression_node_1= 0;
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 215:
#line 2353 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_or_expression_node_1=(yyvsp[(1) - (3)].logical_or_expression_val);
    (*anode).logical_and_expression_node_1=(yyvsp[(3) - (3)].logical_and_expression_val);
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 216:
#line 2364 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (1)].inclusive_or_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_and_expression_node_1= 0;
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 217:
#line 2373 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (3)].logical_and_expression_val);
    (*anode).inclusive_or_expression_node_1=(yyvsp[(3) - (3)].inclusive_or_expression_val);
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 218:
#line 2384 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (1)].exclusive_or_expression_val);
    (*anode).inclusive_or_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 219:
#line 2393 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).char_lit_1="'|'";
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (3)].inclusive_or_expression_val);
    (*anode).exclusive_or_expression_node_1=(yyvsp[(3) - (3)].exclusive_or_expression_val);
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 220:
#line 2404 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).and_expression_node_1=(yyvsp[(1) - (1)].and_expression_val);
    (*anode).char_lit_1= "";
    (*anode).exclusive_or_expression_node_1= 0;
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 221:
#line 2413 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).char_lit_1="'^'";
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (3)].exclusive_or_expression_val);
    (*anode).and_expression_node_1=(yyvsp[(3) - (3)].and_expression_val);
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 222:
#line 2424 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).equality_expression_node_1=(yyvsp[(1) - (1)].equality_expression_val);
    (*anode).and_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.and_expression_val) = anode;
}
    break;

  case 223:
#line 2433 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).char_lit_1="'&'";
    (*anode).and_expression_node_1=(yyvsp[(1) - (3)].and_expression_val);
    (*anode).equality_expression_node_1=(yyvsp[(3) - (3)].equality_expression_val);
    (yyval.and_expression_val) = anode;
}
    break;

  case 224:
#line 2444 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).relational_expression_node_1=(yyvsp[(1) - (1)].relational_expression_val);
    (*anode).token_1= 0;
    (*anode).equality_expression_node_1= 0;
    (yyval.equality_expression_val) = anode;
}
    break;

  case 225:
#line 2453 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 226:
#line 2462 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 227:
#line 2473 "ast_c_grammar.y"
    {
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).shift_expression_node_1=(yyvsp[(1) - (1)].shift_expression_val);
    (*anode).token_1= 0;
    (*anode).relational_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.relational_expression_val) = anode;
}
    break;

  case 228:
#line 2483 "ast_c_grammar.y"
    {
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).char_lit_1="'<'";
    (*anode).relational_expression_node_1=(yyvsp[(1) - (3)].relational_expression_val);
    (*anode).shift_expression_node_1=(yyvsp[(3) - (3)].shift_expression_val);
    (*anode).token_1= 0;
    (yyval.relational_expression_val) = anode;
}
    break;

  case 229:
#line 2493 "ast_c_grammar.y"
    {
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).char_lit_1="'>'";
    (*anode).relational_expression_node_1=(yyvsp[(1) - (3)].relational_expression_val);
    (*anode).shift_expression_node_1=(yyvsp[(3) - (3)].shift_expression_val);
    (*anode).token_1= 0;
    (yyval.relational_expression_val) = anode;
}
    break;

  case 230:
#line 2503 "ast_c_grammar.y"
    {
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).relational_expression_node_1=(yyvsp[(1) - (3)].relational_expression_val);
    (*anode).shift_expression_node_1=(yyvsp[(3) - (3)].shift_expression_val);
    (*anode).char_lit_1= "";
    (yyval.relational_expression_val) = anode;
}
    break;

  case 231:
#line 2513 "ast_c_grammar.y"
    {
     relational_expression_node *anode;
anode = (relational_expression_node*) malloc(sizeof(relational_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).relational_expression_node_1=(yyvsp[(1) - (3)].relational_expression_val);
    (*anode).shift_expression_node_1=(yyvsp[(3) - (3)].shift_expression_val);
    (*anode).char_lit_1= "";
    (yyval.relational_expression_val) = anode;
}
    break;

  case 232:
#line 2525 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).additive_expression_node_1=(yyvsp[(1) - (1)].additive_expression_val);
    (*anode).token_1= 0;
    (*anode).shift_expression_node_1= 0;
    (yyval.shift_expression_val) = anode;
}
    break;

  case 233:
#line 2534 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 234:
#line 2543 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 235:
#line 2554 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (1)].multiplicative_expression_val);
    (*anode).additive_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.additive_expression_val) = anode;
}
    break;

  case 236:
#line 2563 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'+'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 237:
#line 2572 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'-'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 238:
#line 2583 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).cast_expression_node_1=(yyvsp[(1) - (1)].cast_expression_val);
    (*anode).multiplicative_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 239:
#line 2592 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'*'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 240:
#line 2601 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'/'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 241:
#line 2610 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'%'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 242:
#line 2621 "ast_c_grammar.y"
    {
     cast_expression_node *anode;
anode = (cast_expression_node*) malloc(sizeof(cast_expression_node));
    (*anode).unary_expression_node_1=(yyvsp[(1) - (1)].unary_expression_val);
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).type_name_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    (yyval.cast_expression_val) = anode;
}
    break;

  case 243:
#line 2632 "ast_c_grammar.y"
    {
     cast_expression_node *anode;
anode = (cast_expression_node*) malloc(sizeof(cast_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).type_name_node_1=(yyvsp[(2) - (4)].type_name_val);
    (*anode).cast_expression_node_1=(yyvsp[(4) - (4)].cast_expression_val);
    (*anode).unary_expression_node_1= 0;
    (yyval.cast_expression_val) = anode;
}
    break;

  case 244:
#line 2645 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (1)].postfix_expression_val);
    (*anode).type_name_node_1= 0;
    (*anode).token_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).unary_expression_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.unary_expression_val) = anode;
}
    break;

  case 245:
#line 2659 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).unary_expression_node_1=(yyvsp[(2) - (2)].unary_expression_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    (yyval.unary_expression_val) = anode;
}
    break;

  case 246:
#line 2673 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).unary_expression_node_1=(yyvsp[(2) - (2)].unary_expression_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    (yyval.unary_expression_val) = anode;
}
    break;

  case 247:
#line 2687 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).unary_operator_node_1=(yyvsp[(1) - (2)].unary_operator_val);
    (*anode).cast_expression_node_1=(yyvsp[(2) - (2)].cast_expression_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (*anode).unary_expression_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.unary_expression_val) = anode;
}
    break;

  case 248:
#line 2701 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).token_1=(yyvsp[(1) - (2)].sval);
    (*anode).unary_expression_node_1=(yyvsp[(2) - (2)].unary_expression_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).type_name_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).cast_expression_node_1= 0;
    (yyval.unary_expression_val) = anode;
}
    break;

  case 249:
#line 2715 "ast_c_grammar.y"
    {
     unary_expression_node *anode;
anode = (unary_expression_node*) malloc(sizeof(unary_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (4)].sval);
    (*anode).type_name_node_1=(yyvsp[(3) - (4)].type_name_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).unary_operator_node_1= 0;
    (*anode).unary_expression_node_1= 0;
    (*anode).cast_expression_node_1= 0;
    (yyval.unary_expression_val) = anode;
}
    break;

  case 250:
#line 2731 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'&'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 251:
#line 2738 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'*'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 252:
#line 2745 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'+'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 253:
#line 2752 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'-'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 254:
#line 2759 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'~'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 255:
#line 2766 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'!'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 256:
#line 2775 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).primary_expression_node_1=(yyvsp[(1) - (1)].primary_expression_val);
    (*anode).postfix_expression_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 257:
#line 2789 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'['";
    (*anode).char_lit_2="']'";
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (4)].postfix_expression_val);
    (*anode).expression_node_1=(yyvsp[(3) - (4)].expression_val);
    (*anode).token_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).primary_expression_node_1= 0;
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 258:
#line 2803 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (3)].postfix_expression_val);
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).primary_expression_node_1= 0;
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 259:
#line 2817 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (4)].postfix_expression_val);
    (*anode).argument_expression_list_node_1=(yyvsp[(3) - (4)].argument_expression_list_val);
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).primary_expression_node_1= 0;
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 260:
#line 2831 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).char_lit_1="'.'";
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (3)].postfix_expression_val);
    (*anode).identifier_node_1=(yyvsp[(3) - (3)].identifier_val);
    (*anode).token_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).primary_expression_node_1= 0;
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 261:
#line 2845 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (3)].postfix_expression_val);
    (*anode).identifier_node_1=(yyvsp[(3) - (3)].identifier_val);
    (*anode).expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (*anode).primary_expression_node_1= 0;
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 262:
#line 2859 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=(yyvsp[(2) - (2)].sval);
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (2)].postfix_expression_val);
    (*anode).primary_expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 263:
#line 2873 "ast_c_grammar.y"
    {
     postfix_expression_node *anode;
anode = (postfix_expression_node*) malloc(sizeof(postfix_expression_node));
    (*anode).token_1=(yyvsp[(2) - (2)].sval);
    (*anode).postfix_expression_node_1=(yyvsp[(1) - (2)].postfix_expression_val);
    (*anode).primary_expression_node_1= 0;
    (*anode).argument_expression_list_node_1= 0;
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.postfix_expression_val) = anode;
}
    break;

  case 264:
#line 2889 "ast_c_grammar.y"
    {
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).char_lit_2= "";
    (*anode).constant_node_1= 0;
    (*anode).string_node_1= 0;
    (yyval.primary_expression_val) = anode;
}
    break;

  case 265:
#line 2901 "ast_c_grammar.y"
    {
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).constant_node_1=(yyvsp[(1) - (1)].constant_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_2= "";
    (*anode).char_lit_1= "";
    (*anode).identifier_node_1= 0;
    (*anode).string_node_1= 0;
    (yyval.primary_expression_val) = anode;
}
    break;

  case 266:
#line 2913 "ast_c_grammar.y"
    {
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).string_node_1=(yyvsp[(1) - (1)].string_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (*anode).constant_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).char_lit_2= "";
    (yyval.primary_expression_val) = anode;
}
    break;

  case 267:
#line 2925 "ast_c_grammar.y"
    {
     primary_expression_node *anode;
anode = (primary_expression_node*) malloc(sizeof(primary_expression_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).expression_node_1=(yyvsp[(2) - (3)].expression_val);
    (*anode).constant_node_1= 0;
    (*anode).identifier_node_1= 0;
    (*anode).string_node_1= 0;
    (yyval.primary_expression_val) = anode;
}
    break;

  case 268:
#line 2939 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).char_lit_1= "";
    (*anode).argument_expression_list_node_1= 0;
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 269:
#line 2948 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).char_lit_1="','";
    (*anode).argument_expression_list_node_1=(yyvsp[(1) - (3)].argument_expression_list_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 270:
#line 2959 "ast_c_grammar.y"
    {
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).int_token_1=(yyvsp[(1) - (1)].ival);
 
    (*anode).token_1 = "";
    (*anode).char_token_1 = 0;
    (*anode).dec_token_1 = 0; //just so we can know this is an int
    (yyval.constant_val) = anode;
}
    break;

  case 271:
#line 2970 "ast_c_grammar.y"
    {
     constant_node *anode;
     anode = (constant_node*) malloc(sizeof(constant_node));
     (*anode).char_token_1 = (yyvsp[(1) - (1)].cval);
     (*anode).token_1 = "";
     (*anode).int_token_1 = 0;
     (*anode).dec_token_1 = 0;
     (yyval.constant_val) = anode;
}
    break;

  case 272:
#line 2980 "ast_c_grammar.y"
    {
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).dec_token_1=(yyvsp[(1) - (1)].dval);
    (*anode).token_1 = 0;
    (*anode).int_token_1 = 0;
    (*anode).char_token_1 = 0;
    (yyval.constant_val) = anode;
}
    break;

  case 273:
#line 2990 "ast_c_grammar.y"
    {
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).int_token_1 = 0;
    (*anode).dec_token_1 = 0;
    (yyval.constant_val) = anode;
}
    break;

  case 274:
#line 3001 "ast_c_grammar.y"
    {
     string_node *anode;
anode = (string_node*) malloc(sizeof(string_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.string_val) = anode;
}
    break;

  case 275:
#line 3010 "ast_c_grammar.y"
    {
     identifier_node *anode;
anode = (identifier_node*) malloc(sizeof(identifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.identifier_val) = anode;
}
    break;


/* Line 1267 of yacc.c.  */
#line 5799 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3019 "ast_c_grammar.y"


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
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
    
    if(aNode.initializer_node_1 != 0)
    { 
      rstring +=initializer_node_3ac(aNode.initializer_node_1);
      rstring += declarator_node_3ac(aNode.declarator_node_1)+" := "+getLastTemp()+"\n";
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
std::string rstring = "";   if(aNode.parameter_type_list_node_1 != 0)
    { rstring +=parameter_type_list_node_3ac(aNode.parameter_type_list_node_1);}
   if(aNode.direct_declarator_node_1 != 0)
    { rstring +=direct_declarator_node_3ac(aNode.direct_declarator_node_1);}
   if(aNode.constant_expression_node_1 != 0)
    { rstring +=constant_expression_node_3ac(aNode.constant_expression_node_1);}
   if(aNode.identifier_list_node_1 != 0)
    { rstring +=identifier_list_node_3ac(aNode.identifier_list_node_1);}
   if(aNode.declarator_node_1 != 0)
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}

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
    rstring += "\nSOME EXPRESSION MAGIC 0/1 to temp\n";
    rstring += expression_node_3ac(aNode.expression_node_1);
    rstring += "\nEND EXPRESSION MAGIC 0/1 to temp\n";
    rstring += "ifFalse "+getLastTemp()+" goto "+elseLabel+"\n";
    rstring += statement_node_3ac(aNode.statement_node_1);
    rstring += "goto "+endLabel;
    rstring += ":"+elseLabel+" ";
    if(aNode.statement_node_2 != 0)
      {
	rstring+=statement_node_3ac(aNode.statement_node_1);
      }
    rstring += "goto "+endLabel+"\n";
    rstring += ":"+endLabel;

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
	rstring += ":"+startLabel+"\n";
	rstring += expression_node_3ac(aNode.expression_node_1);
	rstring += "ifFalse "+getLastTemp()+" goto "+endLabel+"\n";
	rstring += statement_node_3ac(aNode.statement_node_1);
	rstring += "goto "+startLabel;
	rstring += ":"+endLabel+"\n";
	
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
std::string rstring = "";   if(aNode.conditional_expression_node_1 != 0)
    { rstring +=conditional_expression_node_3ac(aNode.conditional_expression_node_1);}
   if(aNode.assignment_operator_node_1 != 0)
    { rstring +=assignment_operator_node_3ac(aNode.assignment_operator_node_1);}
   if(aNode.unary_expression_node_1 != 0)
    { rstring +=unary_expression_node_3ac(aNode.unary_expression_node_1);}
   if(aNode.assignment_expression_node_1 != 0)
    { rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);}

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
      rstring+=":"+trueLabel+" "+getCurrentTemp()+" := 1\n";
      rstring+="goto "+endLabel+"\n";
      rstring+=":"+falseLabel+" "+getCurrentTemp()+" := 0\n";
      rstring+="goto "+endLabel+"\n";
      rstring+=":"+endLabel+"\n";
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
	 rstring+=":"+trueLabel+" "+getCurrentTemp()+" := 1\n";
	 rstring+="goto "+endLabel+"\n";
	 rstring+=":"+falseLabel+" "+getCurrentTemp()+" := 0\n";
	 rstring+="goto "+endLabel+"\n";
	 rstring+=":"+endLabel+"\n";
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
     { rstring += getCurrentTemp()+" := "+unary_expression_node_3ac(aNode.unary_expression_node_1)+"\n";
       currentTemp++;
     }

return rstring;
}
std::string unary_expression_node_3ac(unary_expression_node *ptr)
{
    unary_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.postfix_expression_node_1 != 0)
    { rstring +=postfix_expression_node_3ac(aNode.postfix_expression_node_1);}
//  if(aNode.type_name_node_1 != 0)
//  { rstring +=type_name_node_3ac(aNode.type_name_node_1);}
//   if(aNode.unary_operator_node_1 != 0)
//    { rstring +=unary_operator_node_3ac(aNode.unary_operator_node_1);}
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
  if(aNode.postfix_expression_node_1 != 0 && aNode.token_1 != "")
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
std::string rstring = "";   if(aNode.assignment_expression_node_1 != 0)
    { rstring +=assignment_expression_node_3ac(aNode.assignment_expression_node_1);}
   if(aNode.argument_expression_list_node_1 != 0)
    { rstring +=argument_expression_list_node_3ac(aNode.argument_expression_list_node_1);}

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
    identifier_node aNode = *ptr;
    std::string rstring = aNode.token_1;
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

