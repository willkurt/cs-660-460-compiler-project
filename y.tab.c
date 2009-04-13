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

 std::string getCurrentTemp()
   {
     std::stringstream ss;
     ss<<"T-"<<currentTemp;
     return ss.str();
   }

 std::string getLastTemp()
   {
     std::stringstream ss;
     ss<<"T-"<<(currentTemp-1);
     return ss.str();
   }

 std::string getNextTemp()
   {
     std::stringstream ss;
     ss<<"T-"<<(currentTemp+1);
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
#line 222 "ast_c_grammar.y"
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
#line 525 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 538 "y.tab.c"

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNRULES -- Number of states.  */
#define YYNSTATES  406

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
      49,    50,    55,    56,    59,    60,    64,    65,    68,    69,
      73,    74,    77,    78,    82,    83,    86,    87,    91,    93,
      95,    97,    99,   101,   103,   105,   107,   109,   111,   113,
     115,   117,   119,   121,   123,   125,   127,   129,   135,   140,
     143,   145,   147,   149,   152,   154,   158,   160,   161,   166,
     170,   172,   175,   177,   180,   182,   186,   188,   191,   195,
     200,   206,   209,   211,   215,   217,   221,   223,   226,   228,
     232,   236,   241,   242,   247,   248,   254,   255,   261,   263,
     266,   269,   273,   275,   278,   279,   282,   283,   288,   290,
     294,   297,   299,   302,   304,   308,   310,   314,   319,   321,
     325,   327,   330,   332,   334,   337,   341,   344,   348,   352,
     357,   360,   364,   368,   373,   375,   376,   377,   381,   383,
     385,   387,   389,   393,   398,   402,   403,   406,   407,   411,
     414,   418,   422,   427,   429,   432,   438,   446,   452,   458,
     466,   473,   481,   489,   498,   506,   515,   524,   534,   538,
     541,   544,   547,   551,   553,   557,   559,   563,   565,   567,
     569,   571,   573,   575,   577,   579,   581,   583,   585,   587,
     593,   595,   597,   601,   603,   607,   609,   613,   615,   619,
     621,   625,   627,   631,   635,   637,   641,   645,   649,   653,
     655,   659,   663,   665,   669,   673,   675,   679,   683,   687,
     689,   694,   696,   699,   702,   705,   708,   713,   715,   717,
     719,   721,   723,   725,   727,   732,   736,   741,   745,   749,
     752,   755,   757,   759,   761,   765,   767,   771,   773,   775,
     777,   779,   781
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    -1,    94,
      93,    -1,   103,    -1,    -1,    -1,   131,    95,   156,    96,
      -1,    -1,    -1,   131,   105,    97,   156,    98,    -1,    -1,
      -1,   108,   131,    99,   156,   100,    -1,    -1,    -1,   108,
     131,   105,   101,   156,   102,    -1,   108,    66,    -1,    -1,
     108,   121,    66,   104,    -1,    -1,   106,   103,    -1,    -1,
     105,   107,   103,    -1,    -1,   115,   109,    -1,    -1,   115,
     108,   110,    -1,    -1,   116,   111,    -1,    -1,   116,   108,
     112,    -1,    -1,   117,   113,    -1,    -1,   117,   108,   114,
      -1,    35,    -1,    36,    -1,    34,    -1,    33,    -1,    32,
      -1,    47,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    43,    -1,    44,    -1,    41,    -1,    42,    -1,   118,
      -1,   128,    -1,    31,    -1,    45,    -1,    46,    -1,   119,
     184,    67,   120,    68,    -1,   119,    67,   120,    68,    -1,
     119,   184,    -1,    48,    -1,    49,    -1,   124,    -1,   120,
     124,    -1,   122,    -1,   121,    69,   122,    -1,   131,    -1,
      -1,   131,    70,   123,   144,    -1,   125,   126,    66,    -1,
     116,    -1,   116,   125,    -1,   117,    -1,   117,   125,    -1,
     127,    -1,   126,    69,   127,    -1,   131,    -1,    71,   165,
      -1,   131,    71,   165,    -1,    50,    67,   129,    68,    -1,
      50,   184,    67,   129,    68,    -1,    50,   184,    -1,   130,
      -1,   129,    69,   130,    -1,   184,    -1,   184,    70,   165,
      -1,   132,    -1,   136,   132,    -1,   184,    -1,    72,   131,
      73,    -1,   132,    74,    75,    -1,   132,    74,   165,    75,
      -1,    -1,   132,    72,   133,    73,    -1,    -1,   132,    72,
     134,   138,    73,    -1,    -1,   132,    72,   135,   143,    73,
      -1,    76,    -1,    76,   137,    -1,    76,   136,    -1,    76,
     137,   136,    -1,   117,    -1,   137,   117,    -1,    -1,   141,
     139,    -1,    -1,   141,    69,    51,   140,    -1,   142,    -1,
     141,    69,   142,    -1,   108,   131,    -1,   108,    -1,   108,
     147,    -1,   184,    -1,   143,    69,   184,    -1,   162,    -1,
      67,   145,    68,    -1,    67,   145,    69,    68,    -1,   144,
      -1,   145,    69,   144,    -1,   125,    -1,   125,   147,    -1,
     136,    -1,   148,    -1,   136,   148,    -1,    72,   147,    73,
      -1,    74,    75,    -1,    74,   165,    75,    -1,   148,    74,
      75,    -1,   148,    74,   165,    75,    -1,    72,    73,    -1,
      72,   138,    73,    -1,   148,    72,    73,    -1,   148,    72,
     138,    73,    -1,   152,    -1,    -1,    -1,   150,   156,   151,
      -1,   153,    -1,   158,    -1,   159,    -1,   160,    -1,   184,
      71,   149,    -1,    53,   165,    71,   149,    -1,    54,    71,
     149,    -1,    -1,    66,   154,    -1,    -1,   161,    66,   155,
      -1,    67,    68,    -1,    67,   157,    68,    -1,    67,   105,
      68,    -1,    67,   105,   157,    68,    -1,   149,    -1,   157,
     149,    -1,    55,    72,   161,    73,   149,    -1,    55,    72,
     161,    73,   149,    56,   149,    -1,    57,    72,   161,    73,
     149,    -1,    58,    72,   161,    73,   149,    -1,    59,   149,
      58,    72,   161,    73,    66,    -1,    60,    72,    66,    66,
      73,   149,    -1,    60,    72,    66,    66,   161,    73,   149,
      -1,    60,    72,    66,   161,    66,    73,   149,    -1,    60,
      72,    66,   161,    66,   161,    73,   149,    -1,    60,    72,
     161,    66,    66,    73,   149,    -1,    60,    72,   161,    66,
      66,   161,    73,   149,    -1,    60,    72,   161,    66,   161,
      66,    73,   149,    -1,    60,    72,   161,    66,   161,    66,
     161,    73,   149,    -1,    61,   184,    66,    -1,    62,    66,
      -1,    63,    66,    -1,    64,    66,    -1,    64,   161,    66,
      -1,   162,    -1,   161,    69,   162,    -1,   164,    -1,   177,
     163,   162,    -1,    70,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,   166,    -1,   166,    77,   161,
      71,   164,    -1,   164,    -1,   167,    -1,   166,    20,   167,
      -1,   168,    -1,   167,    19,   168,    -1,   169,    -1,   168,
      78,   169,    -1,   170,    -1,   169,    79,   170,    -1,   171,
      -1,   170,    80,   171,    -1,   172,    -1,   171,    17,   172,
      -1,   171,    18,   172,    -1,   173,    -1,   172,    81,   173,
      -1,   172,    82,   173,    -1,   172,    15,   173,    -1,   172,
      16,   173,    -1,   174,    -1,   173,    13,   174,    -1,   173,
      14,   174,    -1,   175,    -1,   174,    83,   175,    -1,   174,
      84,   175,    -1,   176,    -1,   175,    76,   176,    -1,   175,
      85,   176,    -1,   175,    86,   176,    -1,   177,    -1,    72,
     146,    73,   176,    -1,   179,    -1,    11,   177,    -1,    12,
     177,    -1,   178,   176,    -1,     9,   177,    -1,     9,    72,
     146,    73,    -1,    80,    -1,    76,    -1,    83,    -1,    84,
      -1,    87,    -1,    88,    -1,   180,    -1,   179,    74,   161,
      75,    -1,   179,    72,    73,    -1,   179,    72,   181,    73,
      -1,   179,    89,   184,    -1,   179,    10,   184,    -1,   179,
      11,    -1,   179,    12,    -1,   184,    -1,   182,    -1,   183,
      -1,    72,   161,    73,    -1,   162,    -1,   181,    69,   162,
      -1,     4,    -1,     6,    -1,     5,    -1,     7,    -1,     8,
      -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   400,   400,   410,   421,   421,   429,   439,   439,   439,
     449,   449,   449,   459,   459,   459,   469,   469,   469,   481,
     492,   490,   718,   718,   726,   726,   736,   736,   746,   746,
     756,   756,   766,   766,   776,   776,   786,   786,   798,   805,
     812,   819,   826,   835,   844,   853,   862,   871,   880,   889,
     898,   907,   916,   925,   934,   945,   952,   961,   972,   983,
     996,  1003,  1012,  1020,  1030,  1039,  1050,  1059,  1059,  1070,
    1081,  1090,  1099,  1108,  1119,  1128,  1139,  1148,  1157,  1168,
    1179,  1190,  1203,  1212,  1223,  1232,  1243,  1251,  1261,  1275,
    1289,  1303,  1317,  1317,  1331,  1331,  1345,  1345,  1361,  1370,
    1379,  1388,  1399,  1407,  1417,  1417,  1426,  1426,  1437,  1446,
    1457,  1466,  1475,  1486,  1495,  1506,  1517,  1528,  1541,  1550,
    1561,  1569,  1579,  1587,  1595,  1605,  1617,  1629,  1641,  1653,
    1665,  1677,  1689,  1701,  1715,  1727,  1727,  1727,  1739,  1751,
    1763,  1775,  1789,  1800,  1811,  1824,  1824,  1832,  1832,  1842,
    1852,  1862,  1872,  1884,  1892,  1902,  1915,  1929,  1944,  1960,
    1976,  1992,  2008,  2024,  2041,  2057,  2074,  2091,  2112,  2122,
    2132,  2142,  2152,  2164,  2173,  2184,  2194,  2206,  2214,  2222,
    2230,  2238,  2246,  2254,  2262,  2270,  2278,  2286,  2296,  2307,
    2320,  2329,  2338,  2349,  2358,  2369,  2378,  2389,  2398,  2409,
    2418,  2429,  2438,  2447,  2458,  2468,  2478,  2488,  2498,  2510,
    2519,  2528,  2539,  2548,  2557,  2568,  2577,  2586,  2595,  2606,
    2617,  2630,  2644,  2658,  2672,  2686,  2700,  2716,  2723,  2730,
    2737,  2744,  2751,  2760,  2774,  2788,  2802,  2816,  2830,  2844,
    2858,  2874,  2886,  2898,  2910,  2924,  2933,  2944,  2955,  2965,
    2975,  2986,  2995
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
  "declaration", "@10", "declaration_list", "@11", "@12",
  "declaration_specifiers", "@13", "@14", "@15", "@16", "@17", "@18",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "@19", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "@20", "@21", "@22", "pointer", "type_qualifier_list",
  "parameter_type_list", "@23", "@24", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@25", "@26",
  "labeled_statement", "expression_statement", "@27", "@28",
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
      97,    98,    94,    99,   100,    94,   101,   102,    94,   103,
     104,   103,   106,   105,   107,   105,   109,   108,   110,   108,
     111,   108,   112,   108,   113,   108,   114,   108,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   123,   122,   124,
     125,   125,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   132,   134,   132,   135,   132,   136,   136,
     136,   136,   137,   137,   139,   138,   140,   138,   141,   141,
     142,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     146,   146,   147,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   150,   151,   149,   149,   149,
     149,   149,   152,   152,   152,   154,   153,   155,   153,   156,
     156,   156,   156,   157,   157,   158,   158,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   171,   172,   172,   172,   172,   172,   173,
     173,   173,   174,   174,   174,   175,   175,   175,   175,   176,
     176,   177,   177,   177,   177,   177,   177,   178,   178,   178,
     178,   178,   178,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   180,   180,   181,   181,   182,   182,   182,
     182,   183,   184
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     0,     0,     4,
       0,     0,     5,     0,     0,     5,     0,     0,     6,     2,
       0,     4,     0,     2,     0,     3,     0,     2,     0,     3,
       0,     2,     0,     3,     0,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     1,     3,     1,     0,     4,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     2,     1,     3,
       3,     4,     0,     4,     0,     5,     0,     5,     1,     2,
       2,     3,     1,     2,     0,     2,     0,     4,     1,     3,
       2,     1,     2,     1,     3,     1,     3,     4,     1,     3,
       1,     2,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     1,     0,     0,     3,     1,     1,
       1,     1,     3,     4,     3,     0,     2,     0,     3,     2,
       3,     3,     4,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     7,     8,     7,     8,     8,     9,     3,     2,
       2,     2,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     3,     3,     2,
       2,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   252,    54,    42,    41,    40,    38,    39,    44,    45,
      46,    47,    50,    51,    48,    49,    55,    56,    43,    60,
      61,     0,     0,    98,     0,     2,     4,     6,     0,    26,
      30,    34,    52,     0,    53,    22,    86,     0,    88,     0,
      81,     0,   102,   100,    99,     1,     3,     5,    19,     0,
      64,    22,    28,    27,    32,    31,    36,    35,     0,    59,
       0,    24,     0,    94,     0,    87,     0,    82,    84,     0,
      89,   103,   101,    20,     0,    67,     0,    24,    29,    33,
      37,    70,    72,     0,    62,     0,     0,    22,     8,     0,
       0,    23,     0,     0,     0,     0,   247,   249,   248,   250,
     251,     0,     0,     0,     0,    90,   228,   227,   229,   230,
     231,   232,   190,     0,   188,   191,   193,   195,   197,   199,
     201,   204,   209,   212,   215,   219,     0,   221,   233,   242,
     243,   241,    79,     0,     0,     0,    21,    65,    66,     0,
      14,     0,    71,    73,    58,    63,     0,     0,    74,    76,
       0,     0,     0,     0,     0,     0,   135,     0,     0,     0,
       0,     0,   145,   149,    24,   153,     0,   134,   138,   135,
     139,   140,   141,     0,   173,   175,   219,   241,     9,    11,
      25,    93,   111,     0,   104,   108,     0,   113,     0,   225,
       0,   222,   223,   120,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,   239,   240,
       0,     0,     0,    83,    85,    80,     0,    68,   115,    15,
      17,    77,    69,     0,     0,    57,     0,   135,     0,     0,
       0,     0,     0,     0,   169,   170,   171,     0,   146,   151,
     135,   136,   150,   154,   147,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   177,     0,   135,    12,
       0,     0,   110,   122,   112,   123,    95,     0,   105,     0,
      97,     0,     0,   122,   121,     0,   244,   192,     0,   194,
     196,   198,   200,   202,   203,   207,   208,   205,   206,   210,
     211,   213,   214,   216,   217,   218,   238,   235,   245,     0,
       0,   237,   118,     0,    18,    75,    78,   135,   144,     0,
       0,     0,     0,     0,     0,   168,   172,   152,   137,   148,
     174,   176,   142,   130,     0,     0,   126,     0,   124,     0,
       0,   106,   109,   114,   226,   220,     0,     0,   236,   234,
     116,     0,   143,   135,   135,   135,     0,     0,     0,     0,
     131,   125,   127,   132,     0,   128,     0,   107,   189,   246,
     117,   119,   155,   157,   158,     0,   135,     0,     0,     0,
       0,   133,   129,   135,     0,   160,   135,   135,     0,   135,
       0,     0,   156,   159,   161,   162,   135,   164,   135,   135,
       0,   163,   165,   166,   135,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    47,    26,    60,   178,    89,   269,    76,
     229,   141,   314,    27,   136,    61,    62,    90,   182,    53,
      78,    55,    79,    57,    80,    29,    30,    31,    32,    33,
      83,    49,    50,   139,    84,    85,   147,   148,    34,    66,
      67,    35,    36,    93,    94,    95,    37,    44,   334,   278,
     367,   184,   185,   186,   227,   313,   194,   335,   275,   165,
     166,   328,   167,   168,   248,   329,    88,   169,   170,   171,
     172,   173,   174,   267,   175,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   176,   126,   127,
     128,   309,   129,   130,   131
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
    1187,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,    35,    53,    45,   325,  -221,  -221,  -221,   111,  1312,
    1312,  1312,  -221,    51,  -221,    -5,    -2,    33,  -221,    13,
      26,   -38,  -221,  -221,    45,  -221,  -221,  -221,  -221,   -51,
    -221,    83,  -221,  -221,  -221,  -221,  -221,  -221,  1207,    44,
      68,    74,  1312,    27,   716,    -2,   117,  -221,    76,    13,
    -221,  -221,  -221,  -221,    53,  -221,    68,   152,  -221,  -221,
    -221,  1207,  1207,  1088,  -221,     8,  1207,   450,  -221,    68,
    1312,  -221,   111,    -8,  1312,    13,  -221,  -221,  -221,  -221,
    -221,    40,  1099,  1099,   402,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,   103,   -10,   253,   244,   230,   194,   174,
     165,   231,   175,   -44,  -221,  -221,  1109,    71,  -221,  -221,
    -221,  -221,  -221,    13,  1109,   184,  -221,  -221,   263,   730,
    -221,    68,  -221,  -221,  -221,  -221,  1109,    99,  -221,   266,
    1253,  1109,   267,   268,   269,   271,   696,   272,    13,   261,
     273,   816,  -221,  -221,   488,  -221,    68,  -221,  -221,   574,
    -221,  -221,  -221,   101,  -221,  -221,   394,   274,  -221,  -221,
    -221,  -221,   226,   275,   278,  -221,   -12,  -221,   402,  -221,
    1109,  -221,  -221,     1,   276,    86,  -221,  1109,  1109,  1109,
    1109,  1109,  1109,  1109,  1109,  1109,  1109,  1109,  1109,  1109,
    1109,  1109,  1109,  1109,  1109,  1109,  -221,    13,  -221,  -221,
     829,  1109,    13,  -221,  -221,  -221,   730,  -221,  -221,  -221,
    -221,  -221,  -221,     8,  1109,  -221,   279,   696,  1109,  1109,
    1109,   293,   842,   286,  -221,  -221,  -221,   241,  -221,  -221,
     610,  -221,  -221,  -221,  -221,  1109,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  1109,   696,  -221,
    1167,   852,  -221,   225,  -221,   153,  -221,  1291,  -221,    13,
    -221,   304,  1233,   160,  -221,  1109,  -221,   253,   195,   244,
     230,   194,   174,   165,   165,   231,   231,   231,   231,   175,
     175,   -44,   -44,  -221,  -221,  -221,  -221,  -221,  -221,    93,
      57,  -221,  -221,   223,  -221,  -221,  -221,   696,  -221,   115,
     147,   169,   306,   865,   250,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,   307,   308,  -221,   309,   153,   557,
     951,  -221,  -221,  -221,  -221,  -221,  1109,  1109,  -221,  -221,
    -221,   706,  -221,   696,   696,   696,  1109,   964,   255,   977,
    -221,  -221,  -221,  -221,   312,  -221,   313,  -221,  -221,  -221,
    -221,  -221,   323,  -221,  -221,   170,   696,   196,   990,  1003,
     257,  -221,  -221,   696,   316,  -221,   696,   696,   202,   696,
     215,  1089,  -221,  -221,  -221,  -221,   696,  -221,   696,   696,
     235,  -221,  -221,  -221,   696,  -221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   366,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,   -50,  -221,   -37,  -221,  -221,   256,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   132,    90,  -221,  -221,
     305,  -221,   318,  -221,   -56,   -73,  -221,   161,  -221,   324,
     262,   -21,   -32,  -221,  -221,  -221,   -19,  -221,   -91,  -221,
    -221,  -221,   125,  -221,  -220,  -221,   212,  -127,  -215,   -93,
    -221,  -221,  -221,  -221,  -221,  -221,   -63,   239,  -221,  -221,
    -221,  -102,  -116,  -221,   -45,  -117,  -221,   228,   213,   227,
     229,   224,   126,   107,   122,   123,  -106,    -4,  -221,  -221,
    -221,  -221,  -221,  -221,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -136
static const yytype_int16 yytable[] =
{
      38,    41,   195,   183,    43,    65,   312,    51,   142,   143,
     197,     1,    91,   140,    77,    73,     1,   224,    74,   112,
     216,    40,    38,   228,    38,    72,   179,   145,    38,   231,
     -96,   193,   213,    59,   236,    70,     1,    38,     1,    68,
     180,   214,   215,     1,    96,    97,    98,    99,   100,   101,
     164,   102,   103,   138,     1,   274,     1,   279,   338,   247,
     125,   280,    -7,   241,   149,   181,   284,   198,   338,    68,
      63,   138,    64,   282,    38,   271,   253,    23,   230,   146,
      22,   217,   218,   219,    23,    38,   195,   177,   195,   112,
      16,    17,    38,    69,   145,   187,   288,   189,   191,   192,
     -92,   112,    39,   251,   308,    22,   112,   303,   304,   305,
     228,    86,   188,    42,     1,   193,   106,   316,    58,   310,
     107,    23,   125,   108,   109,    22,   255,   110,   111,    23,
     125,   371,   349,    68,    71,    87,   319,   320,   321,   330,
     324,   -10,   125,   220,   318,   221,   134,   125,    82,   -66,
     -13,   331,   -66,    75,   337,   255,   177,   253,   243,   286,
     222,   272,   347,   273,   177,   232,   348,   254,   233,   177,
     255,    82,    82,    82,   283,   332,    82,    48,   196,   345,
     205,   206,    38,    22,   255,   132,   133,    23,   353,   112,
      81,   203,   204,   125,    82,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   149,    81,    81,    81,   255,   306,    81,   -16,
     354,   358,   311,   366,   352,   339,   112,   340,     1,     1,
     125,   369,   282,    38,   271,   228,    81,   177,   255,   255,
      82,    65,   355,   384,   209,   210,   207,   208,   364,    41,
     177,   273,   225,   133,   375,   377,    28,   380,   211,   212,
     372,   373,   374,   283,   255,   255,   346,   125,   177,   386,
      38,   255,   199,    38,   202,   396,   388,   390,    82,   343,
      28,   125,    81,   385,   255,    52,    54,    56,   398,   400,
     392,   350,   351,   394,   395,   112,   397,   270,   270,   271,
     271,   368,    23,   401,   255,   402,   403,   326,   404,   201,
     255,   405,   295,   296,   297,   298,   359,   177,    92,   255,
      81,   378,   200,   391,   255,    45,   255,   244,     1,   293,
     294,   299,   300,    75,   301,   302,   125,   234,   237,   245,
     238,   239,   125,   240,   242,   268,    92,   277,   276,   285,
     317,   322,   325,   177,   177,   177,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   177,   344,   356,   383,
     360,   361,   393,   177,   362,   381,   177,   177,   382,   177,
      46,   150,   137,   135,   315,   223,   177,    22,   177,   177,
     281,    23,   342,   250,   177,     1,    96,    97,    98,    99,
     100,   101,   289,   102,   103,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   287,   292,   290,     0,     0,
     291,     0,     0,     2,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,   106,     0,
       0,     0,   107,     0,     0,   108,   109,     0,     0,   110,
     111,     1,    96,    97,    98,    99,   100,   101,     0,   102,
     103,     0,     0,   151,   152,   153,     0,   154,   155,   156,
     157,   158,   159,   160,   161,     0,   162,  -135,   163,     0,
       0,     0,   104,     0,     0,     0,   106,     0,     0,     0,
     107,     0,     0,   108,   109,     0,     0,   110,   111,     0,
       0,   151,   152,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,     0,   162,  -135,   249,     0,     0,     0,
     104,     0,     0,     0,   106,     0,     0,     0,   107,     0,
       0,   108,   109,     0,     0,   110,   111,     1,    96,    97,
      98,    99,   100,   101,     0,   102,   103,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,   151,   152,   153,
     363,   154,   155,   156,   157,   158,   159,   160,   161,     0,
     162,     0,   252,     0,     0,     0,   104,     0,     0,     0,
     106,     0,     0,     0,   107,     0,     0,   108,   109,     0,
       0,   110,   111,   151,   152,   153,     0,   154,   155,   156,
     157,   158,   159,   160,   161,     0,   162,     0,   327,     0,
       0,     0,   104,     0,     0,     0,   106,     0,     0,     0,
     107,     0,     0,   108,   109,     0,     0,   110,   111,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     0,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,   151,
     152,   153,     0,   154,   155,   156,   157,   158,   159,   160,
     161,     0,   162,     0,     0,     0,     0,     0,   104,     0,
       0,     0,   106,   226,   370,     0,   107,     0,   104,   108,
     109,     0,   106,   110,   111,     0,   107,     0,   104,   108,
     109,   105,   106,   110,   111,     0,   107,   226,     0,   108,
     109,     0,   104,   110,   111,     0,   106,     0,     0,     0,
     107,     0,     0,   108,   109,     0,     0,   110,   111,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     1,    96,
      97,    98,    99,   100,   101,     0,   102,   103,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,   104,     0,
       0,     0,   106,     0,     0,     0,   107,     0,     0,   108,
     109,   104,   307,   110,   111,   106,     0,     0,   323,   107,
       0,     0,   108,   109,   104,     0,   110,   111,   106,     0,
       0,     0,   107,     0,   104,   108,   109,   336,   106,   110,
     111,   357,   107,     0,     0,   108,   109,   104,     0,   110,
     111,   106,     0,     0,     0,   107,     0,     0,   108,   109,
       0,     0,   110,   111,     1,    96,    97,    98,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     1,    96,    97,
      98,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     0,     0,     0,     0,
       0,     0,     0,   104,     0,     0,   365,   106,     0,     0,
       0,   107,     0,     0,   108,   109,   104,   376,   110,   111,
     106,     0,     0,   379,   107,     0,     0,   108,   109,   104,
       0,   110,   111,   106,     0,     0,     0,   107,     0,     0,
     108,   109,   104,   387,   110,   111,   106,     0,     0,     0,
     107,     0,     0,   108,   109,   104,   389,   110,   111,   106,
       0,     0,     0,   107,     0,     0,   108,   109,     0,     0,
     110,   111,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     1,    96,    97,    98,    99,   100,   101,     2,
     102,   103,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,   104,   399,     0,     0,   106,     0,     0,     0,   107,
       1,   190,   108,   109,     0,   106,   110,   111,     0,   107,
       0,   104,   108,   109,     0,   106,   110,   111,     0,   107,
       1,     0,   108,   109,     0,     0,   110,   111,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,   270,
     333,   271,     0,    23,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    22,
       0,     0,     0,    23,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     2,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,   282,   333,   271,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   235,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   341,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    22,   104,    94,    23,    37,   226,    28,    81,    82,
      20,     3,    62,    76,    51,    66,     3,   134,    69,    64,
     126,    21,    22,   139,    24,    44,    89,    83,    28,   146,
       3,   104,    76,    33,   151,    73,     3,    37,     3,    39,
      90,    85,    86,     3,     4,     5,     6,     7,     8,     9,
      87,    11,    12,    74,     3,   182,     3,    69,   273,   161,
      64,    73,    67,   156,    85,    73,   193,    77,   283,    69,
      72,    92,    74,    72,    74,    74,   169,    76,   141,    71,
      72,    10,    11,    12,    76,    85,   188,    87,   190,   134,
      45,    46,    92,    67,   150,    95,   198,   101,   102,   103,
      73,   146,    67,   166,   220,    72,   151,   213,   214,   215,
     226,    67,    72,    23,     3,   188,    76,   234,    67,   221,
      80,    76,   126,    83,    84,    72,    69,    87,    88,    76,
     134,   351,    75,   133,    44,    67,   238,   239,   240,   255,
     242,    67,   146,    72,   237,    74,    70,   151,    58,    66,
      67,   267,    69,    70,   271,    69,   156,   250,   158,    73,
      89,   182,    69,   182,   164,    66,    73,    66,    69,   169,
      69,    81,    82,    83,   193,   268,    86,    66,    75,   285,
      15,    16,   182,    72,    69,    68,    69,    76,    73,   234,
      58,    17,    18,   197,   104,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   233,    81,    82,    83,    69,   217,    86,    67,
      73,   323,   222,   340,   317,    72,   271,    74,     3,     3,
     234,   347,    72,   233,    74,   351,   104,   237,    69,    69,
     150,   273,    73,    73,    13,    14,    81,    82,   339,   270,
     250,   270,    68,    69,   356,   357,     0,   359,    83,    84,
     353,   354,   355,   282,    69,    69,    71,   271,   268,    73,
     270,    69,    19,   273,    80,    73,   378,   379,   188,   279,
      24,   285,   150,   376,    69,    29,    30,    31,    73,   391,
     383,    68,    69,   386,   387,   340,   389,    72,    72,    74,
      74,   346,    76,   396,    69,   398,   399,    66,    73,    79,
      69,   404,   205,   206,   207,   208,    66,   317,    62,    69,
     188,    66,    78,    66,    69,     0,    69,    66,     3,   203,
     204,   209,   210,    70,   211,   212,   340,    71,    71,    66,
      72,    72,   346,    72,    72,    71,    90,    69,    73,    73,
      71,    58,    66,   353,   354,   355,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   376,    73,    72,    56,
      73,    73,    66,   383,    75,    73,   386,   387,    75,   389,
      24,    86,    74,    69,   233,   133,   396,    72,   398,   399,
     188,    76,   277,   164,   404,     3,     4,     5,     6,     7,
       8,     9,   199,    11,    12,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   197,   202,   200,    -1,    -1,
     201,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,    -1,
      -1,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    -1,    -1,    87,    88,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    53,    54,    55,
      73,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    -1,    68,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    76,    67,    68,    -1,    80,    -1,    72,    83,
      84,    -1,    76,    87,    88,    -1,    80,    -1,    72,    83,
      84,    75,    76,    87,    88,    -1,    80,    67,    -1,    83,
      84,    -1,    72,    87,    88,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    72,    73,    87,    88,    76,    -1,    -1,    66,    80,
      -1,    -1,    83,    84,    72,    -1,    87,    88,    76,    -1,
      -1,    -1,    80,    -1,    72,    83,    84,    75,    76,    87,
      88,    66,    80,    -1,    -1,    83,    84,    72,    -1,    87,
      88,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    72,    73,    87,    88,
      76,    -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,
      -1,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    72,    73,    87,    88,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    72,    73,    87,    88,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,
      87,    88,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,     3,     4,     5,     6,     7,     8,     9,    31,
      11,    12,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,
       3,    72,    83,    84,    -1,    76,    87,    88,    -1,    80,
      -1,    72,    83,    84,    -1,    76,    87,    88,    -1,    80,
       3,    -1,    83,    84,    -1,    -1,    87,    88,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    31,    72,
      73,    74,    -1,    76,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    72,
      -1,    -1,    -1,    76,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    72,    76,    91,    92,    94,   103,   108,   115,
     116,   117,   118,   119,   128,   131,   132,   136,   184,    67,
     184,   131,   117,   136,   137,     0,    92,    93,    66,   121,
     122,   131,   108,   109,   108,   111,   108,   113,    67,   184,
      95,   105,   106,    72,    74,   132,   129,   130,   184,    67,
      73,   117,   136,    66,    69,    70,    99,   105,   110,   112,
     114,   116,   117,   120,   124,   125,    67,    67,   156,    97,
     107,   103,   108,   133,   134,   135,     4,     5,     6,     7,
       8,     9,    11,    12,    72,    75,    76,    80,    83,    84,
      87,    88,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   182,
     183,   184,    68,    69,    70,   129,   104,   122,   131,   123,
     156,   101,   125,   125,    68,   124,    71,   126,   127,   131,
     120,    53,    54,    55,    57,    58,    59,    60,    61,    62,
      63,    64,    66,    68,   105,   149,   150,   152,   153,   157,
     158,   159,   160,   161,   162,   164,   177,   184,    96,   156,
     103,    73,   108,   138,   141,   142,   143,   184,    72,   177,
      72,   177,   177,   125,   146,   161,    75,    20,    77,    19,
      78,    79,    80,    17,    18,    15,    16,    81,    82,    13,
      14,    83,    84,    76,    85,    86,   176,    10,    11,    12,
      72,    74,    89,   130,   165,    68,    67,   144,   162,   100,
     156,   165,    66,    69,    71,    68,   165,    71,    72,    72,
      72,   149,    72,   184,    66,    66,    66,   161,   154,    68,
     157,   156,    68,   149,    66,    69,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    70,   163,    71,    98,
      72,    74,   131,   136,   147,   148,    73,    69,   139,    69,
      73,   146,    72,   136,   147,    73,    73,   167,   161,   168,
     169,   170,   171,   172,   172,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   176,   184,    73,   162,   181,
     161,   184,   144,   145,   102,   127,   165,    71,   149,   161,
     161,   161,    58,    66,   161,    66,    66,    68,   151,   155,
     162,   162,   149,    73,   138,   147,    75,   165,   148,    72,
      74,    51,   142,   184,    73,   176,    71,    69,    73,    75,
      68,    69,   149,    73,    73,    73,    72,    66,   161,    66,
      73,    73,    75,    73,   138,    75,   165,   140,   164,   162,
      68,   144,   149,   149,   149,   161,    73,   161,    66,    66,
     161,    73,    75,    56,    73,   149,    73,    73,   161,    73,
     161,    66,   149,    66,   149,   149,    73,   149,    73,    73,
     161,   149,   149,   149,    73,   149
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
#line 401 "ast_c_grammar.y"
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
#line 411 "ast_c_grammar.y"
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
#line 421 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 5:
#line 422 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).function_definition_node_1=(yyvsp[(1) - (2)].function_definition_val);
    (*anode).declaration_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 6:
#line 430 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).function_definition_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 7:
#line 439 "ast_c_grammar.y"
    {st.push();}
    break;

  case 8:
#line 439 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 9:
#line 440 "ast_c_grammar.y"
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
#line 449 "ast_c_grammar.y"
    {st.push();}
    break;

  case 11:
#line 449 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 12:
#line 450 "ast_c_grammar.y"
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
#line 459 "ast_c_grammar.y"
    {st.push();}
    break;

  case 14:
#line 459 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 15:
#line 460 "ast_c_grammar.y"
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
#line 469 "ast_c_grammar.y"
    {st.push();}
    break;

  case 17:
#line 469 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 18:
#line 470 "ast_c_grammar.y"
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
#line 482 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1= 0;
    (yyval.declaration_val) = anode;
}
    break;

  case 20:
#line 492 "ast_c_grammar.y"
    {
      //we'll be using this to store most of the info about
      //the object
      unsigned int new_specs = 0;
      //we'll need to get the info from the declaration specifiers
      
      //this is just to know whether there is another spec node
      bool anotherSpecifier = true;
      declaration_specifiers_node * currentSpecNode = (yyvsp[(1) - (3)].declaration_specifiers_val);
      while(anotherSpecifier)
	{
	  if((*currentSpecNode).storage_class_specifier_node_1 != 0)
	    {
	      
	      std::string value = (*(*currentSpecNode).storage_class_specifier_node_1).token_1;
	      if(value =="auto")
		{
		  std::cout<<"I am here"<<std::endl;
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
	      std::cout<<new_specs<<std::endl;
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
      init_declarator_list_node* currentDeclList = (yyvsp[(2) - (3)].init_declarator_list_val);
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

  case 21:
#line 708 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (4)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1=(yyvsp[(2) - (4)].init_declarator_list_val);
    (yyval.declaration_val) = anode;
}
    break;

  case 22:
#line 718 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 23:
#line 719 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_node_1=(yyvsp[(2) - (2)].declaration_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.declaration_list_val) = anode;
}
    break;

  case 24:
#line 726 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 25:
#line 727 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_list_node_1=(yyvsp[(1) - (3)].declaration_list_val);
    (*anode).declaration_node_1=(yyvsp[(3) - (3)].declaration_val);
    (yyval.declaration_list_val) = anode;
}
    break;

  case 26:
#line 736 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 27:
#line 737 "ast_c_grammar.y"
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

  case 28:
#line 746 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 29:
#line 747 "ast_c_grammar.y"
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

  case 30:
#line 756 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 31:
#line 757 "ast_c_grammar.y"
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

  case 32:
#line 766 "ast_c_grammar.y"
    {declMode = true;}
    break;

  case 33:
#line 767 "ast_c_grammar.y"
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

  case 34:
#line 776 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 35:
#line 777 "ast_c_grammar.y"
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

  case 36:
#line 786 "ast_c_grammar.y"
    {declMode=true;}
    break;

  case 37:
#line 787 "ast_c_grammar.y"
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

  case 38:
#line 799 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 39:
#line 806 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 40:
#line 813 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 41:
#line 820 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 42:
#line 827 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 43:
#line 836 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 44:
#line 845 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 45:
#line 854 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 46:
#line 863 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 47:
#line 872 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 48:
#line 881 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 49:
#line 890 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 50:
#line 899 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 51:
#line 908 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 52:
#line 917 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).struct_or_union_specifier_node_1=(yyvsp[(1) - (1)].struct_or_union_specifier_val);
    (*anode).token_1= 0;
    (*anode).enum_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 53:
#line 926 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).enum_specifier_node_1=(yyvsp[(1) - (1)].enum_specifier_val);
    (*anode).token_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 54:
#line 935 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 55:
#line 946 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 56:
#line 953 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 57:
#line 962 "ast_c_grammar.y"
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

  case 58:
#line 973 "ast_c_grammar.y"
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

  case 59:
#line 984 "ast_c_grammar.y"
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

  case 60:
#line 997 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 61:
#line 1004 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 62:
#line 1013 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_node_1=(yyvsp[(1) - (1)].struct_declaration_val);
    (*anode).struct_declaration_list_node_1= 0;
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 63:
#line 1021 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_list_node_1=(yyvsp[(1) - (2)].struct_declaration_list_val);
    (*anode).struct_declaration_node_1=(yyvsp[(2) - (2)].struct_declaration_val);
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 64:
#line 1031 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).init_declarator_node_1=(yyvsp[(1) - (1)].init_declarator_val);
    (*anode).init_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 65:
#line 1040 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).init_declarator_list_node_1=(yyvsp[(1) - (3)].init_declarator_list_val);
    (*anode).init_declarator_node_1=(yyvsp[(3) - (3)].init_declarator_val);
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 66:
#line 1051 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).initializer_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_val) = anode;
}
    break;

  case 67:
#line 1059 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 68:
#line 1060 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).char_lit_1="'='";
    (*anode).declarator_node_1=(yyvsp[(1) - (4)].declarator_val);
    (*anode).initializer_node_1=(yyvsp[(4) - (4)].initializer_val);
    (yyval.init_declarator_val) = anode;
}
    break;

  case 69:
#line 1071 "ast_c_grammar.y"
    {
     struct_declaration_node *anode;
anode = (struct_declaration_node*) malloc(sizeof(struct_declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (3)].specifier_qualifier_list_val);
    (*anode).struct_declarator_list_node_1=(yyvsp[(2) - (3)].struct_declarator_list_val);
    (yyval.struct_declaration_val) = anode;
}
    break;

  case 70:
#line 1082 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (1)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 71:
#line 1091 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (2)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 72:
#line 1100 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 73:
#line 1109 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (2)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 74:
#line 1120 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).struct_declarator_node_1=(yyvsp[(1) - (1)].struct_declarator_val);
    (*anode).struct_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 75:
#line 1129 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).struct_declarator_list_node_1=(yyvsp[(1) - (3)].struct_declarator_list_val);
    (*anode).struct_declarator_node_1=(yyvsp[(3) - (3)].struct_declarator_val);
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 76:
#line 1140 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 77:
#line 1149 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).constant_expression_node_1=(yyvsp[(2) - (2)].constant_expression_val);
    (*anode).declarator_node_1= 0;
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 78:
#line 1158 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).declarator_node_1=(yyvsp[(1) - (3)].declarator_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 79:
#line 1169 "ast_c_grammar.y"
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

  case 80:
#line 1180 "ast_c_grammar.y"
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

  case 81:
#line 1191 "ast_c_grammar.y"
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

  case 82:
#line 1204 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).enumerator_node_1=(yyvsp[(1) - (1)].enumerator_val);
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 83:
#line 1213 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).char_lit_1="','";
    (*anode).enumerator_list_node_1=(yyvsp[(1) - (3)].enumerator_list_val);
    (*anode).enumerator_node_1=(yyvsp[(3) - (3)].enumerator_val);
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 84:
#line 1224 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.enumerator_val) = anode;
}
    break;

  case 85:
#line 1233 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).char_lit_1="'='";
    (*anode).identifier_node_1=(yyvsp[(1) - (3)].identifier_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.enumerator_val) = anode;
}
    break;

  case 86:
#line 1244 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (1)].direct_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.declarator_val) = anode;
}
    break;

  case 87:
#line 1252 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_declarator_node_1=(yyvsp[(2) - (2)].direct_declarator_val);
    (yyval.declarator_val) = anode;
}
    break;

  case 88:
#line 1262 "ast_c_grammar.y"
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

  case 89:
#line 1276 "ast_c_grammar.y"
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

  case 90:
#line 1290 "ast_c_grammar.y"
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

  case 91:
#line 1304 "ast_c_grammar.y"
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

  case 92:
#line 1317 "ast_c_grammar.y"
    {st.push();}
    break;

  case 93:
#line 1318 "ast_c_grammar.y"
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

  case 94:
#line 1331 "ast_c_grammar.y"
    {st.push();}
    break;

  case 95:
#line 1332 "ast_c_grammar.y"
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

  case 96:
#line 1345 "ast_c_grammar.y"
    {st.push();}
    break;

  case 97:
#line 1346 "ast_c_grammar.y"
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

  case 98:
#line 1362 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1= 0;
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 99:
#line 1371 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (2)].type_qualifier_list_val);
    (*anode).pointer_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 100:
#line 1380 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1=(yyvsp[(2) - (2)].pointer_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 101:
#line 1389 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (3)].type_qualifier_list_val);
    (*anode).pointer_node_1=(yyvsp[(3) - (3)].pointer_val);
    (yyval.pointer_val) = anode;
}
    break;

  case 102:
#line 1400 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 103:
#line 1408 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_list_node_1=(yyvsp[(1) - (2)].type_qualifier_list_val);
    (*anode).type_qualifier_node_1=(yyvsp[(2) - (2)].type_qualifier_val);
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 104:
#line 1417 "ast_c_grammar.y"
    {declMode=false;}
    break;

  case 105:
#line 1418 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).parameter_list_node_1=(yyvsp[(1) - (2)].parameter_list_val);
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 106:
#line 1426 "ast_c_grammar.y"
    {declMode=false;}
    break;

  case 107:
#line 1427 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).char_lit_1="','";
    (*anode).token_1=(yyvsp[(3) - (4)].sval);
    (*anode).parameter_list_node_1=(yyvsp[(1) - (4)].parameter_list_val);
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 108:
#line 1438 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).parameter_declaration_node_1=(yyvsp[(1) - (1)].parameter_declaration_val);
    (*anode).parameter_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_list_val) = anode;
}
    break;

  case 109:
#line 1447 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).char_lit_1="','";
    (*anode).parameter_list_node_1=(yyvsp[(1) - (3)].parameter_list_val);
    (*anode).parameter_declaration_node_1=(yyvsp[(3) - (3)].parameter_declaration_val);
    (yyval.parameter_list_val) = anode;
}
    break;

  case 110:
#line 1458 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).declarator_node_1=(yyvsp[(2) - (2)].declarator_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 111:
#line 1467 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (1)].declaration_specifiers_val);
    (*anode).declarator_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 112:
#line 1476 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (*anode).declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 113:
#line 1487 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).char_lit_1= "";
    (*anode).identifier_list_node_1= 0;
    (yyval.identifier_list_val) = anode;
}
    break;

  case 114:
#line 1496 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).char_lit_1="','";
    (*anode).identifier_list_node_1=(yyvsp[(1) - (3)].identifier_list_val);
    (*anode).identifier_node_1=(yyvsp[(3) - (3)].identifier_val);
    (yyval.identifier_list_val) = anode;
}
    break;

  case 115:
#line 1507 "ast_c_grammar.y"
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

  case 116:
#line 1518 "ast_c_grammar.y"
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

  case 117:
#line 1529 "ast_c_grammar.y"
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

  case 118:
#line 1542 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).initializer_node_1=(yyvsp[(1) - (1)].initializer_val);
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.initializer_list_val) = anode;
}
    break;

  case 119:
#line 1551 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).char_lit_1="','";
    (*anode).initializer_list_node_1=(yyvsp[(1) - (3)].initializer_list_val);
    (*anode).initializer_node_1=(yyvsp[(3) - (3)].initializer_val);
    (yyval.initializer_list_val) = anode;
}
    break;

  case 120:
#line 1562 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (1)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.type_name_val) = anode;
}
    break;

  case 121:
#line 1570 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (2)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (yyval.type_name_val) = anode;
}
    break;

  case 122:
#line 1580 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (1)].pointer_val);
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 123:
#line 1588 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (1)].direct_abstract_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 124:
#line 1596 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(2) - (2)].direct_abstract_declarator_val);
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 125:
#line 1606 "ast_c_grammar.y"
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

  case 126:
#line 1618 "ast_c_grammar.y"
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

  case 127:
#line 1630 "ast_c_grammar.y"
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

  case 128:
#line 1642 "ast_c_grammar.y"
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

  case 129:
#line 1654 "ast_c_grammar.y"
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

  case 130:
#line 1666 "ast_c_grammar.y"
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

  case 131:
#line 1678 "ast_c_grammar.y"
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

  case 132:
#line 1690 "ast_c_grammar.y"
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

  case 133:
#line 1702 "ast_c_grammar.y"
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

  case 134:
#line 1716 "ast_c_grammar.y"
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

  case 135:
#line 1727 "ast_c_grammar.y"
    {st.push();}
    break;

  case 136:
#line 1727 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 137:
#line 1728 "ast_c_grammar.y"
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

  case 138:
#line 1740 "ast_c_grammar.y"
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

  case 139:
#line 1752 "ast_c_grammar.y"
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

  case 140:
#line 1764 "ast_c_grammar.y"
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

  case 141:
#line 1776 "ast_c_grammar.y"
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

  case 142:
#line 1790 "ast_c_grammar.y"
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

  case 143:
#line 1801 "ast_c_grammar.y"
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

  case 144:
#line 1812 "ast_c_grammar.y"
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

  case 145:
#line 1824 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 146:
#line 1825 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1= 0;
    (yyval.expression_statement_val) = anode;
}
    break;

  case 147:
#line 1832 "ast_c_grammar.y"
    {declMode = false;}
    break;

  case 148:
#line 1833 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1=(yyvsp[(1) - (3)].expression_val);
    (yyval.expression_statement_val) = anode;
}
    break;

  case 149:
#line 1843 "ast_c_grammar.y"
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

  case 150:
#line 1853 "ast_c_grammar.y"
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

  case 151:
#line 1863 "ast_c_grammar.y"
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

  case 152:
#line 1873 "ast_c_grammar.y"
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

  case 153:
#line 1885 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_node_1=(yyvsp[(1) - (1)].statement_val);
    (*anode).statement_list_node_1= 0;
    (yyval.statement_list_val) = anode;
}
    break;

  case 154:
#line 1893 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_list_node_1=(yyvsp[(1) - (2)].statement_list_val);
    (*anode).statement_node_1=(yyvsp[(2) - (2)].statement_val);
    (yyval.statement_list_val) = anode;
}
    break;

  case 155:
#line 1903 "ast_c_grammar.y"
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

  case 156:
#line 1916 "ast_c_grammar.y"
    {
     selection_statement_node *anode;
anode = (selection_statement_node*) malloc(sizeof(selection_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).token_1=(yyvsp[(1) - (7)].sval);
    (*anode).token_2=(yyvsp[(6) - (7)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (7)].expression_val);
    (*anode).statement_node_1=(yyvsp[(5) - (7)].statement_val);
    (*anode).statement_node_2=(yyvsp[(5) - (7)].statement_val);
    (*anode).statement_node_1=(yyvsp[(5) - (7)].statement_val);
    (yyval.selection_statement_val) = anode;
}
    break;

  case 157:
#line 1930 "ast_c_grammar.y"
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

  case 158:
#line 1945 "ast_c_grammar.y"
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

  case 159:
#line 1961 "ast_c_grammar.y"
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

  case 160:
#line 1977 "ast_c_grammar.y"
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

  case 161:
#line 1993 "ast_c_grammar.y"
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

  case 162:
#line 2009 "ast_c_grammar.y"
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

  case 163:
#line 2025 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (8)].sval);
    (*anode).expression_node_1=(yyvsp[(4) - (8)].expression_val);
    (*anode).expression_node_2=(yyvsp[(4) - (8)].expression_val);
    (*anode).expression_node_1=(yyvsp[(4) - (8)].expression_val);
    (*anode).statement_node_1=(yyvsp[(8) - (8)].statement_val);
    (*anode).expression_node_3= 0;
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 164:
#line 2042 "ast_c_grammar.y"
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

  case 165:
#line 2058 "ast_c_grammar.y"
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

  case 166:
#line 2075 "ast_c_grammar.y"
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

  case 167:
#line 2092 "ast_c_grammar.y"
    {
     iteration_statement_node *anode;
anode = (iteration_statement_node*) malloc(sizeof(iteration_statement_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="';'";
    (*anode).char_lit_3="';'";
    (*anode).char_lit_4="')'";
    (*anode).token_1=(yyvsp[(1) - (9)].sval);
    (*anode).expression_node_1=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_2=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_3=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_1=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_2=(yyvsp[(3) - (9)].expression_val);
    (*anode).expression_node_1=(yyvsp[(3) - (9)].expression_val);
    (*anode).statement_node_1=(yyvsp[(9) - (9)].statement_val);
    (*anode).token_2= 0;
    (yyval.iteration_statement_val) = anode;
}
    break;

  case 168:
#line 2113 "ast_c_grammar.y"
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

  case 169:
#line 2123 "ast_c_grammar.y"
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

  case 170:
#line 2133 "ast_c_grammar.y"
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

  case 171:
#line 2143 "ast_c_grammar.y"
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

  case 172:
#line 2153 "ast_c_grammar.y"
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

  case 173:
#line 2165 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.expression_val) = anode;
}
    break;

  case 174:
#line 2174 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).char_lit_1="','";
    (*anode).expression_node_1=(yyvsp[(1) - (3)].expression_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.expression_val) = anode;
}
    break;

  case 175:
#line 2185 "ast_c_grammar.y"
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

  case 176:
#line 2195 "ast_c_grammar.y"
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

  case 177:
#line 2207 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).char_lit_1="'='";
    (*anode).token_1= 0;
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 178:
#line 2215 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 179:
#line 2223 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 180:
#line 2231 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 181:
#line 2239 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 182:
#line 2247 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 183:
#line 2255 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 184:
#line 2263 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 185:
#line 2271 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 186:
#line 2279 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 187:
#line 2287 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 188:
#line 2297 "ast_c_grammar.y"
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

  case 189:
#line 2308 "ast_c_grammar.y"
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

  case 190:
#line 2321 "ast_c_grammar.y"
    {
     constant_expression_node *anode;
anode = (constant_expression_node*) malloc(sizeof(constant_expression_node));
    (*anode).conditional_expression_node_1=(yyvsp[(1) - (1)].conditional_expression_val);
    (yyval.constant_expression_val) = anode;
}
    break;

  case 191:
#line 2330 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (1)].logical_and_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_or_expression_node_1= 0;
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 192:
#line 2339 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_or_expression_node_1=(yyvsp[(1) - (3)].logical_or_expression_val);
    (*anode).logical_and_expression_node_1=(yyvsp[(3) - (3)].logical_and_expression_val);
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 193:
#line 2350 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (1)].inclusive_or_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_and_expression_node_1= 0;
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 194:
#line 2359 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (3)].logical_and_expression_val);
    (*anode).inclusive_or_expression_node_1=(yyvsp[(3) - (3)].inclusive_or_expression_val);
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 195:
#line 2370 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (1)].exclusive_or_expression_val);
    (*anode).inclusive_or_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 196:
#line 2379 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).char_lit_1="'|'";
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (3)].inclusive_or_expression_val);
    (*anode).exclusive_or_expression_node_1=(yyvsp[(3) - (3)].exclusive_or_expression_val);
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 197:
#line 2390 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).and_expression_node_1=(yyvsp[(1) - (1)].and_expression_val);
    (*anode).char_lit_1= "";
    (*anode).exclusive_or_expression_node_1= 0;
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 198:
#line 2399 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).char_lit_1="'^'";
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (3)].exclusive_or_expression_val);
    (*anode).and_expression_node_1=(yyvsp[(3) - (3)].and_expression_val);
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 199:
#line 2410 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).equality_expression_node_1=(yyvsp[(1) - (1)].equality_expression_val);
    (*anode).and_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.and_expression_val) = anode;
}
    break;

  case 200:
#line 2419 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).char_lit_1="'&'";
    (*anode).and_expression_node_1=(yyvsp[(1) - (3)].and_expression_val);
    (*anode).equality_expression_node_1=(yyvsp[(3) - (3)].equality_expression_val);
    (yyval.and_expression_val) = anode;
}
    break;

  case 201:
#line 2430 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).relational_expression_node_1=(yyvsp[(1) - (1)].relational_expression_val);
    (*anode).token_1= 0;
    (*anode).equality_expression_node_1= 0;
    (yyval.equality_expression_val) = anode;
}
    break;

  case 202:
#line 2439 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 203:
#line 2448 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 204:
#line 2459 "ast_c_grammar.y"
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

  case 205:
#line 2469 "ast_c_grammar.y"
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

  case 206:
#line 2479 "ast_c_grammar.y"
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

  case 207:
#line 2489 "ast_c_grammar.y"
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

  case 208:
#line 2499 "ast_c_grammar.y"
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

  case 209:
#line 2511 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).additive_expression_node_1=(yyvsp[(1) - (1)].additive_expression_val);
    (*anode).token_1= 0;
    (*anode).shift_expression_node_1= 0;
    (yyval.shift_expression_val) = anode;
}
    break;

  case 210:
#line 2520 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 211:
#line 2529 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 212:
#line 2540 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (1)].multiplicative_expression_val);
    (*anode).additive_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.additive_expression_val) = anode;
}
    break;

  case 213:
#line 2549 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'+'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 214:
#line 2558 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'-'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 215:
#line 2569 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).cast_expression_node_1=(yyvsp[(1) - (1)].cast_expression_val);
    (*anode).multiplicative_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 216:
#line 2578 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'*'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 217:
#line 2587 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'/'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 218:
#line 2596 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'%'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 219:
#line 2607 "ast_c_grammar.y"
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

  case 220:
#line 2618 "ast_c_grammar.y"
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

  case 221:
#line 2631 "ast_c_grammar.y"
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

  case 222:
#line 2645 "ast_c_grammar.y"
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

  case 223:
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

  case 224:
#line 2673 "ast_c_grammar.y"
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

  case 225:
#line 2687 "ast_c_grammar.y"
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

  case 226:
#line 2701 "ast_c_grammar.y"
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

  case 227:
#line 2717 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'&'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 228:
#line 2724 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'*'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 229:
#line 2731 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'+'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 230:
#line 2738 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'-'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 231:
#line 2745 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'~'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 232:
#line 2752 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'!'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 233:
#line 2761 "ast_c_grammar.y"
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

  case 234:
#line 2775 "ast_c_grammar.y"
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

  case 235:
#line 2789 "ast_c_grammar.y"
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

  case 236:
#line 2803 "ast_c_grammar.y"
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

  case 237:
#line 2817 "ast_c_grammar.y"
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

  case 238:
#line 2831 "ast_c_grammar.y"
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

  case 239:
#line 2845 "ast_c_grammar.y"
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

  case 240:
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

  case 241:
#line 2875 "ast_c_grammar.y"
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

  case 242:
#line 2887 "ast_c_grammar.y"
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

  case 243:
#line 2899 "ast_c_grammar.y"
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

  case 244:
#line 2911 "ast_c_grammar.y"
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

  case 245:
#line 2925 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).char_lit_1= "";
    (*anode).argument_expression_list_node_1= 0;
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 246:
#line 2934 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).char_lit_1="','";
    (*anode).argument_expression_list_node_1=(yyvsp[(1) - (3)].argument_expression_list_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 247:
#line 2945 "ast_c_grammar.y"
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

  case 248:
#line 2956 "ast_c_grammar.y"
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

  case 249:
#line 2966 "ast_c_grammar.y"
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

  case 250:
#line 2976 "ast_c_grammar.y"
    {
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).int_token_1 = 0;
    (*anode).dec_token_1 = 0;
    (yyval.constant_val) = anode;
}
    break;

  case 251:
#line 2987 "ast_c_grammar.y"
    {
     string_node *anode;
anode = (string_node*) malloc(sizeof(string_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.string_val) = anode;
}
    break;

  case 252:
#line 2996 "ast_c_grammar.y"
    {
     identifier_node *anode;
anode = (identifier_node*) malloc(sizeof(identifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.identifier_val) = anode;
}
    break;


/* Line 1267 of yacc.c.  */
#line 5634 "y.tab.c"
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


#line 3005 "ast_c_grammar.y"


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
std::string rstring = "";   if(aNode.external_declaration_node_1 != 0)
    { rstring +=external_declaration_node_3ac(aNode.external_declaration_node_1);}
   if(aNode.translation_unit_node_1 != 0)
    { rstring +=translation_unit_node_3ac(aNode.translation_unit_node_1);}
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
std::string rstring = "";   if(aNode.declarator_node_1 != 0)
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
   if(aNode.declaration_list_node_1 != 0)
    { rstring +=declaration_list_node_3ac(aNode.declaration_list_node_1);}
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
std::string rstring = "";   if(aNode.declaration_node_1 != 0)
    { rstring +=declaration_node_3ac(aNode.declaration_node_1);}
   if(aNode.declaration_list_node_1 != 0)
    { rstring +=declaration_list_node_3ac(aNode.declaration_list_node_1);}

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
std::string rstring = "";   if(aNode.init_declarator_node_1 != 0)
    { rstring +=init_declarator_node_3ac(aNode.init_declarator_node_1);}
   if(aNode.init_declarator_list_node_1 != 0)
    { rstring +=init_declarator_list_node_3ac(aNode.init_declarator_list_node_1);}

return rstring;
}
std::string init_declarator_node_3ac(init_declarator_node *ptr)
{
    init_declarator_node aNode = *ptr;
std::string rstring = "";   if(aNode.declarator_node_1 != 0)
    { rstring +=declarator_node_3ac(aNode.declarator_node_1);}
   if(aNode.initializer_node_1 != 0)
    { rstring +=initializer_node_3ac(aNode.initializer_node_1);}

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
std::string rstring = "";   if(aNode.statement_list_node_1 != 0)
    { rstring +=statement_list_node_3ac(aNode.statement_list_node_1);}
   if(aNode.declaration_list_node_1 != 0)
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
std::string rstring = "";   if(aNode.statement_node_2 != 0)
    { rstring +=statement_node_3ac(aNode.statement_node_2);}
   if(aNode.statement_node_1 != 0)
    { rstring +=statement_node_3ac(aNode.statement_node_1);}
   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}

return rstring;
}
std::string iteration_statement_node_3ac(iteration_statement_node *ptr)
{
    iteration_statement_node aNode = *ptr;
std::string rstring = "";   if(aNode.expression_node_2 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_2);}
   if(aNode.statement_node_1 != 0)
    { rstring +=statement_node_3ac(aNode.statement_node_1);}
   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.expression_node_3 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_3);}

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
std::string rstring = "";   if(aNode.logical_or_expression_node_1 != 0)
    { rstring +=logical_or_expression_node_3ac(aNode.logical_or_expression_node_1);}
   if(aNode.logical_and_expression_node_1 != 0)
    { rstring +=logical_and_expression_node_3ac(aNode.logical_and_expression_node_1);}

return rstring;
}
std::string logical_and_expression_node_3ac(logical_and_expression_node *ptr)
{
    logical_and_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.inclusive_or_expression_node_1 != 0)
    { rstring +=inclusive_or_expression_node_3ac(aNode.inclusive_or_expression_node_1);}
   if(aNode.logical_and_expression_node_1 != 0)
    { rstring +=logical_and_expression_node_3ac(aNode.logical_and_expression_node_1);}

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
std::string rstring = "";   if(aNode.equality_expression_node_1 != 0)
    { rstring +=equality_expression_node_3ac(aNode.equality_expression_node_1);}
   if(aNode.and_expression_node_1 != 0)
    { rstring +=and_expression_node_3ac(aNode.and_expression_node_1);}

return rstring;
}
std::string equality_expression_node_3ac(equality_expression_node *ptr)
{
    equality_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.equality_expression_node_1 != 0)
    { rstring +=equality_expression_node_3ac(aNode.equality_expression_node_1);}
   if(aNode.relational_expression_node_1 != 0)
    { rstring +=relational_expression_node_3ac(aNode.relational_expression_node_1);}

return rstring;
}
std::string relational_expression_node_3ac(relational_expression_node *ptr)
{
    relational_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.relational_expression_node_1 != 0)
    { rstring +=relational_expression_node_3ac(aNode.relational_expression_node_1);}
   if(aNode.shift_expression_node_1 != 0)
    { rstring +=shift_expression_node_3ac(aNode.shift_expression_node_1);}

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
std::string rstring = "";   if(aNode.multiplicative_expression_node_1 != 0)
    { rstring +=multiplicative_expression_node_3ac(aNode.multiplicative_expression_node_1);}
   if(aNode.additive_expression_node_1 != 0)
    { rstring +=additive_expression_node_3ac(aNode.additive_expression_node_1);}

return rstring;
}
std::string multiplicative_expression_node_3ac(multiplicative_expression_node *ptr)
{
  /*for right now, I just want to get the basics down, so T will be replaced with T-x 
    where 'x' is the appropriate number

    later of we'll have to do much more thinking re: cast_expressions... for now
    I just want this to work, even in the most primative fashion
  */
    multiplicative_expression_node aNode = *ptr;
    multiplicative_expression_node *next = aNode.multiplicative_expression_node_1;
    std::string rstring = "";   
  if(aNode.cast_expression_node_1 != 0 && next == 0)
    {
      rstring += cast_expression_node_3ac(aNode.cast_expression_node_1);
    }
  else if(next != 0 && (*next).multiplicative_expression_node_1 != 0)
    {
      rstring += multiplicative_expression_node_3ac(next);
      rstring += getCurrentTemp()+" := "+getLastTemp()+" * "+cast_expression_node_3ac(aNode.cast_expression_node_1)+"\n"; 
      currentTemp++;
    }
  /* this is the case where the next is a cast_expression_node alone */
  else
    {
      rstring += getCurrentTemp()+" := "+cast_expression_node_3ac((*next).cast_expression_node_1)+" * "+cast_expression_node_3ac(aNode.cast_expression_node_1)+"\n";
      currentTemp++;
    }
 
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
    { rstring +=unary_expression_node_3ac(aNode.unary_expression_node_1);}

return rstring;
}
std::string unary_expression_node_3ac(unary_expression_node *ptr)
{
    unary_expression_node aNode = *ptr;
std::string rstring = "";   if(aNode.postfix_expression_node_1 != 0)
    { rstring +=postfix_expression_node_3ac(aNode.postfix_expression_node_1);}
   if(aNode.type_name_node_1 != 0)
    { rstring +=type_name_node_3ac(aNode.type_name_node_1);}
   if(aNode.unary_operator_node_1 != 0)
    { rstring +=unary_operator_node_3ac(aNode.unary_operator_node_1);}
   if(aNode.unary_expression_node_1 != 0)
    { rstring +=unary_expression_node_3ac(aNode.unary_expression_node_1);}
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
std::string rstring = "";   if(aNode.postfix_expression_node_1 != 0)
    { rstring +=postfix_expression_node_3ac(aNode.postfix_expression_node_1);}
   if(aNode.primary_expression_node_1 != 0)
    { rstring +=primary_expression_node_3ac(aNode.primary_expression_node_1);}
   if(aNode.argument_expression_list_node_1 != 0)
    { rstring +=argument_expression_list_node_3ac(aNode.argument_expression_list_node_1);}
   if(aNode.expression_node_1 != 0)
    { rstring +=expression_node_3ac(aNode.expression_node_1);}
   if(aNode.identifier_node_1 != 0)
    { rstring +=identifier_node_3ac(aNode.identifier_node_1);}

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
std::string rstring = "";
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

