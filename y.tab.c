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

extern SymbolTable st;
extern bool parseDebug;
extern std::ofstream parseDebugOut;
extern int lineCount;
/*for declaration or not*/
extern bool declMode;

extern bool undeclVar;
extern bool redeclVar;

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
#line 130 "ast_c_grammar.y"
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
#line 433 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 446 "y.tab.c"

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
#define YYLAST   1558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNRULES -- Number of states.  */
#define YYNSTATES  389

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
       0,     0,     3,     5,     8,    10,    12,    13,    14,    19,
      20,    21,    27,    28,    29,    35,    36,    37,    44,    47,
      48,    53,    55,    58,    60,    63,    65,    68,    70,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      95,    97,    99,   101,   103,   105,   107,   109,   111,   117,
     122,   125,   127,   129,   131,   134,   136,   140,   142,   146,
     150,   152,   155,   157,   160,   162,   166,   168,   171,   175,
     180,   186,   189,   191,   195,   197,   201,   203,   206,   208,
     212,   216,   221,   225,   230,   235,   237,   240,   243,   247,
     249,   252,   254,   258,   260,   264,   267,   269,   272,   274,
     278,   280,   284,   289,   291,   295,   297,   300,   302,   304,
     307,   311,   314,   318,   322,   327,   330,   334,   338,   343,
     345,   346,   347,   351,   353,   355,   357,   359,   363,   368,
     372,   374,   377,   380,   384,   388,   393,   395,   398,   404,
     412,   418,   424,   432,   439,   447,   455,   464,   472,   481,
     490,   500,   504,   507,   510,   513,   517,   519,   523,   525,
     529,   531,   533,   535,   537,   539,   541,   543,   545,   547,
     549,   551,   553,   559,   561,   563,   567,   569,   573,   575,
     579,   581,   585,   587,   591,   593,   597,   601,   603,   607,
     611,   615,   619,   621,   625,   629,   631,   635,   639,   641,
     645,   649,   653,   655,   660,   662,   665,   668,   671,   674,
     679,   681,   683,   685,   687,   689,   691,   693,   698,   702,
     707,   711,   715,   718,   721,   723,   725,   727,   731,   733,
     737,   739,   741,   743,   745,   747
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    93,    -1,
     102,    -1,    -1,    -1,   121,    94,   139,    95,    -1,    -1,
      -1,   121,   104,    96,   139,    97,    -1,    -1,    -1,   105,
     121,    98,   139,    99,    -1,    -1,    -1,   105,   121,   104,
     100,   139,   101,    -1,   105,    66,    -1,    -1,   105,   112,
      66,   103,    -1,   102,    -1,   104,   102,    -1,   106,    -1,
     106,   105,    -1,   107,    -1,   107,   105,    -1,   108,    -1,
     108,   105,    -1,    35,    -1,    36,    -1,    34,    -1,    33,
      -1,    32,    -1,    47,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    43,    -1,    44,    -1,    41,    -1,    42,
      -1,   109,    -1,   118,    -1,    31,    -1,    45,    -1,    46,
      -1,   110,   167,    67,   111,    68,    -1,   110,    67,   111,
      68,    -1,   110,   167,    -1,    48,    -1,    49,    -1,   114,
      -1,   111,   114,    -1,   113,    -1,   112,    69,   113,    -1,
     121,    -1,   121,    70,   129,    -1,   115,   116,    66,    -1,
     107,    -1,   107,   115,    -1,   108,    -1,   108,   115,    -1,
     117,    -1,   116,    69,   117,    -1,   121,    -1,    71,   148,
      -1,   121,    71,   148,    -1,    50,    67,   119,    68,    -1,
      50,   167,    67,   119,    68,    -1,    50,   167,    -1,   120,
      -1,   119,    69,   120,    -1,   167,    -1,   167,    70,   148,
      -1,   122,    -1,   123,   122,    -1,   167,    -1,    72,   121,
      73,    -1,   122,    74,    75,    -1,   122,    74,   148,    75,
      -1,   122,    72,    73,    -1,   122,    72,   125,    73,    -1,
     122,    72,   128,    73,    -1,    76,    -1,    76,   124,    -1,
      76,   123,    -1,    76,   124,   123,    -1,   108,    -1,   124,
     108,    -1,   126,    -1,   126,    69,    51,    -1,   127,    -1,
     126,    69,   127,    -1,   105,   121,    -1,   105,    -1,   105,
     132,    -1,   167,    -1,   128,    69,   167,    -1,   145,    -1,
      67,   130,    68,    -1,    67,   130,    69,    68,    -1,   129,
      -1,   130,    69,   129,    -1,   115,    -1,   115,   132,    -1,
     123,    -1,   133,    -1,   123,   133,    -1,    72,   132,    73,
      -1,    74,    75,    -1,    74,   148,    75,    -1,   133,    74,
      75,    -1,   133,    74,   148,    75,    -1,    72,    73,    -1,
      72,   125,    73,    -1,   133,    72,    73,    -1,   133,    72,
     125,    73,    -1,   137,    -1,    -1,    -1,   135,   139,   136,
      -1,   138,    -1,   141,    -1,   142,    -1,   143,    -1,   167,
      71,   134,    -1,    53,   148,    71,   134,    -1,    54,    71,
     134,    -1,    66,    -1,   144,    66,    -1,    67,    68,    -1,
      67,   140,    68,    -1,    67,   104,    68,    -1,    67,   104,
     140,    68,    -1,   134,    -1,   140,   134,    -1,    55,    72,
     144,    73,   134,    -1,    55,    72,   144,    73,   134,    56,
     134,    -1,    57,    72,   144,    73,   134,    -1,    58,    72,
     144,    73,   134,    -1,    59,   134,    58,    72,   144,    73,
      66,    -1,    60,    72,    66,    66,    73,   134,    -1,    60,
      72,    66,    66,   144,    73,   134,    -1,    60,    72,    66,
     144,    66,    73,   134,    -1,    60,    72,    66,   144,    66,
     144,    73,   134,    -1,    60,    72,   144,    66,    66,    73,
     134,    -1,    60,    72,   144,    66,    66,   144,    73,   134,
      -1,    60,    72,   144,    66,   144,    66,    73,   134,    -1,
      60,    72,   144,    66,   144,    66,   144,    73,   134,    -1,
      61,   167,    66,    -1,    62,    66,    -1,    63,    66,    -1,
      64,    66,    -1,    64,   144,    66,    -1,   145,    -1,   144,
      69,   145,    -1,   147,    -1,   160,   146,   145,    -1,    70,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,   149,    -1,   149,    77,   144,    71,   147,    -1,   147,
      -1,   150,    -1,   149,    20,   150,    -1,   151,    -1,   150,
      19,   151,    -1,   152,    -1,   151,    78,   152,    -1,   153,
      -1,   152,    79,   153,    -1,   154,    -1,   153,    80,   154,
      -1,   155,    -1,   154,    17,   155,    -1,   154,    18,   155,
      -1,   156,    -1,   155,    81,   156,    -1,   155,    82,   156,
      -1,   155,    15,   156,    -1,   155,    16,   156,    -1,   157,
      -1,   156,    13,   157,    -1,   156,    14,   157,    -1,   158,
      -1,   157,    83,   158,    -1,   157,    84,   158,    -1,   159,
      -1,   158,    76,   159,    -1,   158,    85,   159,    -1,   158,
      86,   159,    -1,   160,    -1,    72,   131,    73,   159,    -1,
     162,    -1,    11,   160,    -1,    12,   160,    -1,   161,   159,
      -1,     9,   160,    -1,     9,    72,   131,    73,    -1,    80,
      -1,    76,    -1,    83,    -1,    84,    -1,    87,    -1,    88,
      -1,   163,    -1,   162,    74,   144,    75,    -1,   162,    72,
      73,    -1,   162,    72,   164,    73,    -1,   162,    89,   167,
      -1,   162,    10,   167,    -1,   162,    11,    -1,   162,    12,
      -1,   167,    -1,   165,    -1,   166,    -1,    72,   144,    73,
      -1,   145,    -1,   164,    69,   145,    -1,     4,    -1,     6,
      -1,     5,    -1,     7,    -1,     8,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   308,   308,   317,   327,   335,   345,   345,   345,   355,
     355,   355,   365,   365,   365,   375,   375,   375,   387,   398,
     396,   624,   632,   642,   652,   662,   672,   682,   692,   704,
     711,   718,   725,   732,   741,   750,   759,   768,   777,   786,
     795,   804,   813,   822,   831,   840,   851,   858,   867,   878,
     889,   902,   909,   918,   926,   936,   945,   956,   965,   976,
     987,   996,  1005,  1014,  1025,  1034,  1045,  1054,  1063,  1074,
    1085,  1096,  1109,  1118,  1129,  1138,  1149,  1157,  1167,  1181,
    1195,  1209,  1223,  1237,  1251,  1267,  1276,  1285,  1294,  1305,
    1313,  1323,  1332,  1343,  1352,  1363,  1372,  1381,  1392,  1401,
    1412,  1423,  1434,  1447,  1456,  1467,  1475,  1485,  1493,  1501,
    1511,  1523,  1535,  1547,  1559,  1571,  1583,  1595,  1607,  1621,
    1633,  1633,  1633,  1645,  1657,  1669,  1681,  1695,  1706,  1717,
    1730,  1738,  1748,  1758,  1768,  1778,  1790,  1798,  1808,  1821,
    1835,  1850,  1866,  1882,  1898,  1914,  1930,  1947,  1963,  1980,
    1997,  2018,  2028,  2038,  2048,  2058,  2070,  2079,  2090,  2100,
    2112,  2120,  2128,  2136,  2144,  2152,  2160,  2168,  2176,  2184,
    2192,  2202,  2213,  2226,  2235,  2244,  2255,  2264,  2275,  2284,
    2295,  2304,  2315,  2324,  2335,  2344,  2353,  2364,  2374,  2384,
    2394,  2404,  2416,  2425,  2434,  2445,  2454,  2463,  2474,  2483,
    2492,  2501,  2512,  2523,  2536,  2550,  2564,  2578,  2592,  2606,
    2622,  2629,  2636,  2643,  2650,  2657,  2666,  2680,  2694,  2708,
    2722,  2736,  2750,  2764,  2780,  2792,  2804,  2816,  2830,  2839,
    2850,  2861,  2871,  2881,  2892,  2901
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
  "'.'", "$accept", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8",
  "declaration", "@9", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@10", "@11",
  "labeled_statement", "expression_statement", "compound_statement",
  "statement_list", "selection_statement", "iteration_statement",
  "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_or_expression", "logical_and_expression",
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
       0,    90,    91,    91,    92,    92,    94,    95,    93,    96,
      97,    93,    98,    99,    93,   100,   101,    93,   102,   103,
     102,   104,   104,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     135,   136,   134,   134,   134,   134,   134,   137,   137,   137,
     138,   138,   139,   139,   139,   139,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   147,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   155,
     155,   155,   156,   156,   156,   157,   157,   157,   158,   158,
     158,   158,   159,   159,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   164,   164,
     165,   165,   165,   165,   166,   167
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     2,     0,
       4,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     3,     4,
       5,     2,     1,     3,     1,     3,     1,     2,     1,     3,
       3,     4,     3,     4,     4,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     2,     1,     3,
       1,     3,     4,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       0,     0,     3,     1,     1,     1,     1,     3,     4,     3,
       1,     2,     2,     3,     3,     4,     1,     2,     5,     7,
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
static const yytype_uint8 yydefact[] =
{
       0,   235,    45,    33,    32,    31,    29,    30,    35,    36,
      37,    38,    41,    42,    39,    40,    46,    47,    34,    51,
      52,     0,     0,    85,     0,     2,     4,     5,     0,    23,
      25,    27,    43,     0,    44,     6,    76,     0,    78,     0,
      71,     0,    89,    87,    86,     1,     3,    18,     0,    55,
      57,    24,    26,    28,     0,    50,     0,    21,     9,     0,
       0,     0,    77,     0,    72,    74,     0,    79,    90,    88,
      19,     0,     0,     0,    15,    60,    62,     0,    53,     0,
       0,   120,     7,     0,    22,    57,    82,    96,     0,    91,
      93,     0,    98,   230,   232,   231,   233,   234,     0,     0,
       0,     0,    80,   211,   210,   212,   213,   214,   215,   173,
       0,   171,   174,   176,   178,   180,   182,   184,   187,   192,
     195,   198,   202,     0,   204,   216,   225,   226,   224,    69,
       0,     0,     0,    20,    56,     0,    58,   100,   158,   202,
      13,     0,    61,    63,    49,    54,     0,     0,    64,    66,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,   130,   132,   120,   136,     0,   119,   123,   120,
     124,   125,   126,     0,   156,   224,     8,    10,     0,     0,
      95,   107,    97,   108,    83,     0,     0,    84,     0,   208,
       0,   205,   206,   105,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   222,   223,
       0,     0,     0,    73,    75,    70,   103,     0,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   160,     0,
      14,    16,    67,    59,     0,     0,    48,     0,   120,     0,
       0,     0,     0,     0,     0,   152,   153,   154,     0,   134,
     120,   121,   133,   137,   131,     0,   120,    11,   115,     0,
       0,   111,     0,   109,     0,     0,    92,    94,    99,     0,
       0,   107,   106,     0,   227,   175,     0,   177,   179,   181,
     183,   185,   186,   190,   191,   188,   189,   193,   194,   196,
     197,   199,   200,   201,   221,   218,   228,     0,     0,   220,
     101,     0,   159,    17,    65,    68,   120,   129,     0,     0,
       0,     0,     0,     0,   151,   155,   135,   122,   157,   127,
     116,   110,   112,   117,     0,   113,     0,   209,   203,     0,
       0,   219,   217,   102,   104,   128,   120,   120,   120,     0,
       0,     0,     0,   118,   114,   172,   229,   138,   140,   141,
       0,   120,     0,     0,     0,     0,   120,     0,   143,   120,
     120,     0,   120,     0,     0,   139,   142,   144,   145,   120,
     147,   120,   120,     0,   146,   148,   149,   120,   150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    56,   176,    83,   267,    73,   240,
     141,   313,    57,   133,    58,    59,    29,    30,    31,    32,
      33,    77,    48,    49,    78,    79,   147,   148,    34,    63,
      64,    35,    36,    37,    44,   269,    89,    90,    91,   136,
     227,   194,   270,   183,   165,   166,   327,   167,   168,    82,
     169,   170,   171,   172,   173,   174,   239,   138,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     139,   123,   124,   125,   307,   126,   127,   128
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
    1281,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,    28,    70,    17,  1186,  -180,  -180,  -180,    55,  1508,
    1508,  1508,  -180,    46,  -180,  1508,   171,    16,  -180,     7,
     -50,   -48,  -180,  -180,    17,  -180,  -180,  -180,    63,  -180,
    1415,  -180,  -180,  -180,   508,   -37,   -22,  -180,  1508,    55,
    1329,   385,   171,   167,  -180,   -20,     7,  -180,  -180,  -180,
    -180,    70,   811,   -22,  1508,   508,   508,  1206,  -180,    65,
     508,   443,  -180,   -22,  -180,    -1,  -180,     8,    24,     9,
    -180,   -26,  -180,  -180,  -180,  -180,  -180,  -180,  1107,  1193,
    1193,   615,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
      26,    -2,    99,    42,    60,    68,   239,   144,   264,   200,
      49,  -180,  -180,  1203,   220,  -180,  -180,  -180,  -180,  -180,
       7,  1203,   212,  -180,  -180,   811,  -180,  -180,  -180,   313,
    -180,   -22,  -180,  -180,  -180,  -180,  1203,    88,  -180,    84,
    1449,  1203,    94,   105,   113,   137,   787,   149,     7,   185,
     198,   824,  -180,  -180,   529,  -180,   -22,  -180,  -180,   663,
    -180,  -180,  -180,   101,  -180,   222,  -180,  -180,  1261,   910,
    -180,    45,  -180,   197,  -180,  1487,     7,  -180,   615,  -180,
    1203,  -180,  -180,   -34,   225,   -18,  -180,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,  1203,  1203,  1203,  -180,     7,  -180,  -180,
     923,  1203,     7,  -180,  -180,  -180,  -180,   218,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  1203,
    -180,  -180,  -180,  -180,    65,  1203,  -180,   224,   787,  1203,
    1203,  1203,   215,   936,   233,  -180,  -180,  -180,   106,  -180,
     701,  -180,  -180,  -180,  -180,  1203,   787,  -180,  -180,   230,
     232,  -180,   216,   197,  1395,   946,  -180,  -180,  -180,   237,
    1349,   202,  -180,  1203,  -180,    99,   199,    42,    60,    68,
     239,   144,   144,   264,   264,   264,   264,   200,   200,    49,
      49,  -180,  -180,  -180,  -180,  -180,  -180,   -12,   -43,  -180,
    -180,   797,  -180,  -180,  -180,  -180,   787,  -180,    76,    78,
      93,   240,   959,   181,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,   238,  -180,   242,  -180,  -180,  1203,
    1203,  -180,  -180,  -180,  -180,  -180,   787,   787,   787,  1203,
     972,   192,  1058,  -180,  -180,  -180,  -180,   257,  -180,  -180,
     111,   787,   150,  1071,  1084,   196,   787,   248,  -180,   787,
     787,   155,   787,   165,  1097,  -180,  -180,  -180,  -180,   787,
    -180,   787,   787,   173,  -180,  -180,  -180,   787,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,   291,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,    52,  -180,   -27,     5,  -180,    32,    23,  -180,
    -180,   241,  -180,   249,   -65,   -60,  -180,    75,  -180,   256,
     193,   -15,   -28,   -17,  -180,   -59,  -180,   140,  -180,  -132,
    -180,   138,   -79,  -179,    58,  -180,  -180,  -180,  -180,    67,
     163,  -180,  -180,  -180,    51,   -52,  -180,   -57,   -35,  -180,
     131,   130,   132,   129,   142,    86,    47,    87,    96,  -109,
      -8,  -180,  -180,  -180,  -180,  -180,  -180,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -13
static const yytype_int16 yytable[] =
{
      38,    88,   273,   226,   109,    28,    43,    41,   182,    62,
       1,     1,   145,    50,   216,   142,   143,    66,   197,     1,
     137,    40,    38,    74,    38,    67,   265,    69,    38,    28,
      80,     1,   342,    55,    51,    52,    53,    38,   280,    65,
     179,   193,    23,   186,    85,    81,    42,   187,     1,     1,
     131,   265,    27,   122,   164,   284,    85,   340,     1,    38,
      92,   341,    16,    17,   149,    87,    65,    68,     1,    72,
     181,    38,   180,     1,   109,   198,    27,    76,   185,    38,
     178,   175,   179,   137,    23,   145,    75,    38,    22,   109,
     189,   191,   192,    23,   109,    39,   224,   184,    76,    76,
      76,   196,   273,    76,   301,   302,   303,    75,    75,    75,
      84,   242,    75,    54,   282,   122,   247,   178,   199,   179,
     200,    47,   109,   122,    76,   213,    84,    22,   193,    70,
      65,    23,    71,    75,   214,   215,   146,    22,   122,   201,
     140,    23,    22,   122,   272,   265,    23,   265,   202,   346,
     177,   347,   195,    62,   243,   245,   175,   244,   254,   205,
     206,   181,   265,    41,   175,   248,   348,   264,   306,   175,
     265,   122,   325,    76,   338,   265,   281,   249,    38,   344,
     265,    38,    75,    87,   367,   250,   278,   312,   109,   122,
      87,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   241,   251,
     315,    76,   258,   328,   252,   334,    84,   304,   109,   265,
      75,   253,   309,   369,   265,   207,   208,   263,   379,   149,
     217,   218,   219,   261,   265,   129,   130,   122,   381,   195,
     336,   195,   265,    60,    38,    61,   387,   352,   175,   286,
     265,   255,   293,   294,   295,   296,   203,   204,   363,   137,
     175,   265,   374,   281,   256,   265,   175,   122,   265,   274,
     339,   275,   308,   321,   280,   122,   179,   209,   210,    87,
     225,   130,   355,   211,   212,    87,   310,   311,   356,   291,
     292,   332,   220,   266,   221,   316,   297,   298,   283,   324,
     318,   319,   320,   330,   323,   331,   317,   299,   300,   222,
     337,   353,   349,   366,   376,    46,   175,   354,   263,   314,
     134,   150,   132,   223,   329,   277,   279,   260,   285,   287,
     289,   122,   288,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   290,     0,   175,   175,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,   175,     0,     0,   175,
     175,     0,   175,   351,   345,     0,     0,     0,     0,   175,
       0,   175,   175,   238,     0,     0,     0,   175,     1,    93,
      94,    95,    96,    97,    98,     0,    99,   100,     0,     0,
     360,   362,     0,   365,   357,   358,   359,     0,     0,     0,
       0,     0,     0,     0,   371,   373,     0,     0,     0,   368,
       0,     0,     0,     0,   375,   383,     0,   377,   378,     0,
     380,     0,     0,     0,     0,     0,     0,   384,     0,   385,
     386,     0,     0,     0,     0,   388,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     0,   101,     0,     0,
     102,   103,     0,     0,     0,   104,     0,     0,   105,   106,
       0,     0,   107,   108,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,   151,   152,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,     0,   162,
       0,   163,     0,     0,     0,   101,     0,     0,     0,   103,
       0,     0,     0,   104,     0,     0,   105,   106,     0,     0,
     107,   108,     1,    93,    94,    95,    96,    97,    98,     2,
      99,   100,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,   151,   152,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,     0,   162,     0,   259,     0,     0,
       0,   101,     0,     0,     0,   103,     0,     0,     0,   104,
       0,     0,   105,   106,     0,     0,   107,   108,     1,    93,
      94,    95,    96,    97,    98,     0,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
       0,   103,     0,     0,     0,   104,     0,     0,   105,   106,
       0,     0,   107,   108,     1,    93,    94,    95,    96,    97,
      98,     0,    99,   100,     0,     0,   151,   152,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,     0,   162,
       0,   262,     0,     0,     0,   101,     0,     0,     0,   103,
       0,     0,     0,   104,     0,     0,   105,   106,     0,     0,
     107,   108,     0,     0,   151,   152,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,     0,   162,     0,   326,
       0,     0,     0,   101,     0,     0,     0,   103,     0,     0,
       0,   104,     0,     0,   105,   106,     0,     0,   107,   108,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     0,     0,     0,     1,    93,    94,    95,    96,    97,
      98,     0,    99,   100,     0,     0,     0,     1,    93,    94,
      95,    96,    97,    98,     0,    99,   100,     0,     0,     0,
     151,   152,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,   162,     0,     0,     0,     0,     0,   101,
       0,     0,     0,   103,   135,   343,     0,   104,     0,   101,
     105,   106,     0,   103,   107,   108,     0,   104,   135,     0,
     105,   106,     0,   101,   107,   108,     0,   103,     0,     0,
     257,   104,     0,     0,   105,   106,   101,     0,   107,   108,
     103,     0,     0,     0,   104,     0,     0,   105,   106,     0,
       0,   107,   108,     1,    93,    94,    95,    96,    97,    98,
       0,    99,   100,     0,     0,     0,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     0,     0,     0,     1,
      93,    94,    95,    96,    97,    98,     0,    99,   100,     1,
      93,    94,    95,    96,    97,    98,     0,    99,   100,     0,
       0,     0,     1,    93,    94,    95,    96,    97,    98,     0,
      99,   100,     0,     0,     0,     1,    93,    94,    95,    96,
      97,    98,   101,    99,   100,   271,   103,     0,     0,     0,
     104,     0,     0,   105,   106,   101,   305,   107,   108,   103,
       0,     0,   322,   104,     0,     0,   105,   106,   101,     0,
     107,   108,   103,     0,     0,     0,   104,     0,   101,   105,
     106,   335,   103,   107,   108,   350,   104,     0,     0,   105,
     106,   101,     0,   107,   108,   103,     0,     0,     0,   104,
       0,     0,   105,   106,   101,   361,   107,   108,   103,     0,
       0,     0,   104,     0,     0,   105,   106,     0,     0,   107,
     108,     1,    93,    94,    95,    96,    97,    98,     0,    99,
     100,     0,     0,     0,     1,    93,    94,    95,    96,    97,
      98,     0,    99,   100,     0,     0,     0,     1,    93,    94,
      95,    96,    97,    98,     0,    99,   100,     0,     0,     0,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       1,    93,    94,    95,    96,    97,    98,     0,    99,   100,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
     101,     0,     0,     0,   103,     0,     0,     0,   104,     0,
       0,   105,   106,   101,   370,   107,   108,   103,     0,     0,
       0,   104,     0,     0,   105,   106,   101,   372,   107,   108,
     103,     0,     0,     0,   104,     0,     0,   105,   106,   101,
     382,   107,   108,   103,     0,     0,     0,   104,     0,   188,
     105,   106,     0,   103,   107,   108,    45,   104,     0,     1,
     105,   106,     0,     0,   107,   108,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     1,    93,    94,    95,
      96,    97,    98,     0,    99,   100,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     2,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,     0,    23,     0,     1,   190,     0,     0,     0,   103,
       0,     0,     0,   104,   144,   101,   105,   106,     0,   103,
     107,   108,     0,   104,     1,     0,   105,   106,     0,     0,
     107,   108,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,   178,   268,   179,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,    23,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   268,   179,     0,    23,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,   -12,     0,     0,    72,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   276,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    60,   181,   135,    61,     0,    23,    22,    87,    37,
       3,     3,    77,    28,   123,    75,    76,    67,    20,     3,
      72,    21,    22,    50,    24,    73,    69,    44,    28,    24,
      67,     3,    75,    33,    29,    30,    31,    37,    72,    39,
      74,   101,    76,    69,    59,    67,    23,    73,     3,     3,
      70,    69,     0,    61,    81,    73,    71,    69,     3,    59,
      60,    73,    45,    46,    79,    60,    66,    44,     3,    70,
      87,    71,    87,     3,   131,    77,    24,    54,    69,    79,
      72,    81,    74,   135,    76,   150,    54,    87,    72,   146,
      98,    99,   100,    76,   151,    67,   131,    73,    75,    76,
      77,    75,   281,    80,   213,   214,   215,    75,    76,    77,
      58,   146,    80,    67,   193,   123,   151,    72,    19,    74,
      78,    66,   179,   131,   101,    76,    74,    72,   188,    66,
     130,    76,    69,   101,    85,    86,    71,    72,   146,    79,
      73,    76,    72,   151,   179,    69,    76,    69,    80,    73,
      83,    73,   101,   181,    66,    71,   156,    69,   158,    15,
      16,   178,    69,   178,   164,    71,    73,    66,   220,   169,
      69,   179,    66,   150,   283,    69,   193,    72,   178,   311,
      69,   181,   150,   178,    73,    72,   186,   239,   245,   197,
     185,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   141,    72,
     245,   188,   161,   265,   156,   274,   164,   217,   275,    69,
     188,    72,   222,    73,    69,    81,    82,   169,    73,   244,
      10,    11,    12,   166,    69,    68,    69,   245,    73,   188,
     275,   190,    69,    72,   244,    74,    73,    66,   248,   198,
      69,    66,   205,   206,   207,   208,    17,    18,    66,   311,
     260,    69,    66,   280,    66,    69,   266,   275,    69,    72,
      71,    74,   221,    58,    72,   283,    74,    13,    14,   274,
      68,    69,   339,    83,    84,   280,    68,    69,   340,   203,
     204,    75,    72,    71,    74,    71,   209,   210,    73,    66,
     249,   250,   251,    73,   253,    73,   248,   211,   212,    89,
      73,    73,    72,    56,    66,    24,   316,    75,   260,   244,
      71,    80,    66,   130,   266,   185,   188,   164,   197,   199,
     201,   339,   200,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   202,    -1,   346,   347,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   361,    -1,    -1,    -1,    -1,   366,    -1,    -1,   369,
     370,    -1,   372,   322,   316,    -1,    -1,    -1,    -1,   379,
      -1,   381,   382,    70,    -1,    -1,    -1,   387,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
     349,   350,    -1,   352,   346,   347,   348,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   363,   364,    -1,    -1,    -1,   361,
      -1,    -1,    -1,    -1,   366,   374,    -1,   369,   370,    -1,
     372,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
     382,    -1,    -1,    -1,    -1,   387,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    72,    -1,    -1,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,
      87,    88,     3,     4,     5,     6,     7,     8,     9,    31,
      11,    12,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    66,    -1,    68,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,
      87,    88,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    -1,    68,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    76,    67,    68,    -1,    80,    -1,    72,
      83,    84,    -1,    76,    87,    88,    -1,    80,    67,    -1,
      83,    84,    -1,    72,    87,    88,    -1,    76,    -1,    -1,
      66,    80,    -1,    -1,    83,    84,    72,    -1,    87,    88,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    72,    11,    12,    75,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    72,    73,    87,    88,    76,
      -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,    -1,
      87,    88,    76,    -1,    -1,    -1,    80,    -1,    72,    83,
      84,    75,    76,    87,    88,    66,    80,    -1,    -1,    83,
      84,    72,    -1,    87,    88,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    84,    72,    73,    87,    88,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    72,    73,    87,    88,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    72,    73,    87,    88,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    72,
      73,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    72,
      83,    84,    -1,    76,    87,    88,     0,    80,    -1,     3,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    72,    -1,
      -1,    -1,    76,    -1,     3,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    68,    72,    83,    84,    -1,    76,
      87,    88,    -1,    80,     3,    -1,    83,    84,    -1,    -1,
      87,    88,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     3,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    67,    -1,    -1,    70,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    72,    76,    91,    92,    93,   102,   105,   106,
     107,   108,   109,   110,   118,   121,   122,   123,   167,    67,
     167,   121,   108,   123,   124,     0,    92,    66,   112,   113,
     121,   105,   105,   105,    67,   167,    94,   102,   104,   105,
      72,    74,   122,   119,   120,   167,    67,    73,   108,   123,
      66,    69,    70,    98,   104,   107,   108,   111,   114,   115,
      67,    67,   139,    96,   102,   121,    73,   105,   125,   126,
     127,   128,   167,     4,     5,     6,     7,     8,     9,    11,
      12,    72,    75,    76,    80,    83,    84,    87,    88,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   165,   166,   167,    68,
      69,    70,   119,   103,   113,    67,   129,   145,   147,   160,
     139,   100,   115,   115,    68,   114,    71,   116,   117,   121,
     111,    53,    54,    55,    57,    58,    59,    60,    61,    62,
      63,    64,    66,    68,   104,   134,   135,   137,   138,   140,
     141,   142,   143,   144,   145,   167,    95,   139,    72,    74,
     121,   123,   132,   133,    73,    69,    69,    73,    72,   160,
      72,   160,   160,   115,   131,   144,    75,    20,    77,    19,
      78,    79,    80,    17,    18,    15,    16,    81,    82,    13,
      14,    83,    84,    76,    85,    86,   159,    10,    11,    12,
      72,    74,    89,   120,   148,    68,   129,   130,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    70,   146,
      99,   139,   148,    66,    69,    71,    68,   148,    71,    72,
      72,    72,   134,    72,   167,    66,    66,    66,   144,    68,
     140,   139,    68,   134,    66,    69,    71,    97,    73,   125,
     132,    75,   148,   133,    72,    74,    51,   127,   167,   131,
      72,   123,   132,    73,    73,   150,   144,   151,   152,   153,
     154,   155,   155,   156,   156,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   167,    73,   145,   164,   144,   167,
      68,    69,   145,   101,   117,   148,    71,   134,   144,   144,
     144,    58,    66,   144,    66,    66,    68,   136,   145,   134,
      73,    73,    75,    73,   125,    75,   148,    73,   159,    71,
      69,    73,    75,    68,   129,   134,    73,    73,    73,    72,
      66,   144,    66,    73,    75,   147,   145,   134,   134,   134,
     144,    73,   144,    66,    66,   144,    56,    73,   134,    73,
      73,   144,    73,   144,    66,   134,    66,   134,   134,    73,
     134,    73,    73,   144,   134,   134,   134,    73,   134
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
#line 309 "ast_c_grammar.y"
    {
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).external_declaration_node_1=(yyvsp[(1) - (1)].external_declaration_val);
    (*anode).translation_unit_node_1= 0;
    (yyval.translation_unit_val) = anode;
    print_translation_unit_node((yyval.translation_unit_val)," ");
}
    break;

  case 3:
#line 318 "ast_c_grammar.y"
    {
     translation_unit_node *anode;
anode = (translation_unit_node*) malloc(sizeof(translation_unit_node));
    (*anode).translation_unit_node_1=(yyvsp[(1) - (2)].translation_unit_val);
    (*anode).external_declaration_node_1=(yyvsp[(2) - (2)].external_declaration_val);
    (yyval.translation_unit_val) = anode;
}
    break;

  case 4:
#line 328 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).function_definition_node_1=(yyvsp[(1) - (1)].function_definition_val);
    (*anode).declaration_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 5:
#line 336 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).function_definition_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 6:
#line 345 "ast_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 345 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 8:
#line 346 "ast_c_grammar.y"
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

  case 9:
#line 355 "ast_c_grammar.y"
    {st.push();}
    break;

  case 10:
#line 355 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 11:
#line 356 "ast_c_grammar.y"
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

  case 12:
#line 365 "ast_c_grammar.y"
    {st.push();}
    break;

  case 13:
#line 365 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 14:
#line 366 "ast_c_grammar.y"
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

  case 15:
#line 375 "ast_c_grammar.y"
    {st.push();}
    break;

  case 16:
#line 375 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 17:
#line 376 "ast_c_grammar.y"
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

  case 18:
#line 388 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1= 0;
    (yyval.declaration_val) = anode;
}
    break;

  case 19:
#line 398 "ast_c_grammar.y"
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

  case 20:
#line 614 "ast_c_grammar.y"
    {
     declaration_node *anode;
anode = (declaration_node*) malloc(sizeof(declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (4)].declaration_specifiers_val);
    (*anode).init_declarator_list_node_1=(yyvsp[(2) - (4)].init_declarator_list_val);
    (yyval.declaration_val) = anode;
}
    break;

  case 21:
#line 625 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.declaration_list_val) = anode;
}
    break;

  case 22:
#line 633 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_list_node_1=(yyvsp[(1) - (2)].declaration_list_val);
    (*anode).declaration_node_1=(yyvsp[(2) - (2)].declaration_val);
    (yyval.declaration_list_val) = anode;
}
    break;

  case 23:
#line 643 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=(yyvsp[(1) - (1)].storage_class_specifier_val);
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 24:
#line 653 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).storage_class_specifier_node_1=(yyvsp[(1) - (2)].storage_class_specifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (2)].declaration_specifiers_val);
    (*anode).type_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 25:
#line 663 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (1)].type_specifier_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 26:
#line 673 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (2)].type_specifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (2)].declaration_specifiers_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 27:
#line 683 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).declaration_specifiers_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 28:
#line 693 "ast_c_grammar.y"
    {
     declaration_specifiers_node *anode;
anode = (declaration_specifiers_node*) malloc(sizeof(declaration_specifiers_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (2)].type_qualifier_val);
    (*anode).declaration_specifiers_node_1=(yyvsp[(2) - (2)].declaration_specifiers_val);
    (*anode).storage_class_specifier_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.declaration_specifiers_val) = anode;
}
    break;

  case 29:
#line 705 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 30:
#line 712 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 31:
#line 719 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 32:
#line 726 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 33:
#line 733 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 34:
#line 742 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 35:
#line 751 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 36:
#line 760 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 37:
#line 769 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 38:
#line 778 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 39:
#line 787 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 40:
#line 796 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 41:
#line 805 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 42:
#line 814 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).enum_specifier_node_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 43:
#line 823 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).struct_or_union_specifier_node_1=(yyvsp[(1) - (1)].struct_or_union_specifier_val);
    (*anode).token_1= 0;
    (*anode).enum_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 44:
#line 832 "ast_c_grammar.y"
    {
     type_specifier_node *anode;
anode = (type_specifier_node*) malloc(sizeof(type_specifier_node));
    (*anode).enum_specifier_node_1=(yyvsp[(1) - (1)].enum_specifier_val);
    (*anode).token_1= 0;
    (*anode).struct_or_union_specifier_node_1= 0;
    (yyval.type_specifier_val) = anode;
}
    break;

  case 45:
#line 841 "ast_c_grammar.y"
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
#line 852 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 47:
#line 859 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 48:
#line 868 "ast_c_grammar.y"
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

  case 49:
#line 879 "ast_c_grammar.y"
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

  case 50:
#line 890 "ast_c_grammar.y"
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

  case 51:
#line 903 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 52:
#line 910 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 53:
#line 919 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_node_1=(yyvsp[(1) - (1)].struct_declaration_val);
    (*anode).struct_declaration_list_node_1= 0;
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 54:
#line 927 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_list_node_1=(yyvsp[(1) - (2)].struct_declaration_list_val);
    (*anode).struct_declaration_node_1=(yyvsp[(2) - (2)].struct_declaration_val);
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 55:
#line 937 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).init_declarator_node_1=(yyvsp[(1) - (1)].init_declarator_val);
    (*anode).init_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 56:
#line 946 "ast_c_grammar.y"
    {
     init_declarator_list_node *anode;
anode = (init_declarator_list_node*) malloc(sizeof(init_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).init_declarator_list_node_1=(yyvsp[(1) - (3)].init_declarator_list_val);
    (*anode).init_declarator_node_1=(yyvsp[(3) - (3)].init_declarator_val);
    (yyval.init_declarator_list_val) = anode;
}
    break;

  case 57:
#line 957 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).initializer_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.init_declarator_val) = anode;
}
    break;

  case 58:
#line 966 "ast_c_grammar.y"
    {
     init_declarator_node *anode;
anode = (init_declarator_node*) malloc(sizeof(init_declarator_node));
    (*anode).char_lit_1="'='";
    (*anode).declarator_node_1=(yyvsp[(1) - (3)].declarator_val);
    (*anode).initializer_node_1=(yyvsp[(3) - (3)].initializer_val);
    (yyval.init_declarator_val) = anode;
}
    break;

  case 59:
#line 977 "ast_c_grammar.y"
    {
     struct_declaration_node *anode;
anode = (struct_declaration_node*) malloc(sizeof(struct_declaration_node));
    (*anode).char_lit_1="';'";
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (3)].specifier_qualifier_list_val);
    (*anode).struct_declarator_list_node_1=(yyvsp[(2) - (3)].struct_declarator_list_val);
    (yyval.struct_declaration_val) = anode;
}
    break;

  case 60:
#line 988 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (1)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 61:
#line 997 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_specifier_node_1=(yyvsp[(1) - (2)].type_specifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_qualifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 62:
#line 1006 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1= 0;
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 63:
#line 1015 "ast_c_grammar.y"
    {
     specifier_qualifier_list_node *anode;
anode = (specifier_qualifier_list_node*) malloc(sizeof(specifier_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (2)].type_qualifier_val);
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(2) - (2)].specifier_qualifier_list_val);
    (*anode).type_specifier_node_1= 0;
    (yyval.specifier_qualifier_list_val) = anode;
}
    break;

  case 64:
#line 1026 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).struct_declarator_node_1=(yyvsp[(1) - (1)].struct_declarator_val);
    (*anode).struct_declarator_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 65:
#line 1035 "ast_c_grammar.y"
    {
     struct_declarator_list_node *anode;
anode = (struct_declarator_list_node*) malloc(sizeof(struct_declarator_list_node));
    (*anode).char_lit_1="','";
    (*anode).struct_declarator_list_node_1=(yyvsp[(1) - (3)].struct_declarator_list_val);
    (*anode).struct_declarator_node_1=(yyvsp[(3) - (3)].struct_declarator_val);
    (yyval.struct_declarator_list_val) = anode;
}
    break;

  case 66:
#line 1046 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).declarator_node_1=(yyvsp[(1) - (1)].declarator_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 67:
#line 1055 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).constant_expression_node_1=(yyvsp[(2) - (2)].constant_expression_val);
    (*anode).declarator_node_1= 0;
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 68:
#line 1064 "ast_c_grammar.y"
    {
     struct_declarator_node *anode;
anode = (struct_declarator_node*) malloc(sizeof(struct_declarator_node));
    (*anode).char_lit_1="':'";
    (*anode).declarator_node_1=(yyvsp[(1) - (3)].declarator_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.struct_declarator_val) = anode;
}
    break;

  case 69:
#line 1075 "ast_c_grammar.y"
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

  case 70:
#line 1086 "ast_c_grammar.y"
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

  case 71:
#line 1097 "ast_c_grammar.y"
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

  case 72:
#line 1110 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).enumerator_node_1=(yyvsp[(1) - (1)].enumerator_val);
    (*anode).char_lit_1= "";
    (*anode).enumerator_list_node_1= 0;
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 73:
#line 1119 "ast_c_grammar.y"
    {
     enumerator_list_node *anode;
anode = (enumerator_list_node*) malloc(sizeof(enumerator_list_node));
    (*anode).char_lit_1="','";
    (*anode).enumerator_list_node_1=(yyvsp[(1) - (3)].enumerator_list_val);
    (*anode).enumerator_node_1=(yyvsp[(3) - (3)].enumerator_val);
    (yyval.enumerator_list_val) = anode;
}
    break;

  case 74:
#line 1130 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).constant_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.enumerator_val) = anode;
}
    break;

  case 75:
#line 1139 "ast_c_grammar.y"
    {
     enumerator_node *anode;
anode = (enumerator_node*) malloc(sizeof(enumerator_node));
    (*anode).char_lit_1="'='";
    (*anode).identifier_node_1=(yyvsp[(1) - (3)].identifier_val);
    (*anode).constant_expression_node_1=(yyvsp[(3) - (3)].constant_expression_val);
    (yyval.enumerator_val) = anode;
}
    break;

  case 76:
#line 1150 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (1)].direct_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.declarator_val) = anode;
}
    break;

  case 77:
#line 1158 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_declarator_node_1=(yyvsp[(2) - (2)].direct_declarator_val);
    (yyval.declarator_val) = anode;
}
    break;

  case 78:
#line 1168 "ast_c_grammar.y"
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

  case 79:
#line 1182 "ast_c_grammar.y"
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

  case 80:
#line 1196 "ast_c_grammar.y"
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

  case 81:
#line 1210 "ast_c_grammar.y"
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

  case 82:
#line 1224 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (3)].direct_declarator_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 83:
#line 1238 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (4)].direct_declarator_val);
    (*anode).parameter_type_list_node_1=(yyvsp[(3) - (4)].parameter_type_list_val);
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_list_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 84:
#line 1252 "ast_c_grammar.y"
    {
     direct_declarator_node *anode;
anode = (direct_declarator_node*) malloc(sizeof(direct_declarator_node));
    (*anode).char_lit_1="'('";
    (*anode).char_lit_2="')'";
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (4)].direct_declarator_val);
    (*anode).identifier_list_node_1=(yyvsp[(3) - (4)].identifier_list_val);
    (*anode).parameter_type_list_node_1= 0;
    (*anode).declarator_node_1= 0;
    (*anode).constant_expression_node_1= 0;
    (*anode).identifier_node_1= 0;
    (yyval.direct_declarator_val) = anode;
}
    break;

  case 85:
#line 1268 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1= 0;
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 86:
#line 1277 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (2)].type_qualifier_list_val);
    (*anode).pointer_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 87:
#line 1286 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).pointer_node_1=(yyvsp[(2) - (2)].pointer_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.pointer_val) = anode;
}
    break;

  case 88:
#line 1295 "ast_c_grammar.y"
    {
     pointer_node *anode;
anode = (pointer_node*) malloc(sizeof(pointer_node));
    (*anode).char_lit_1="'*'";
    (*anode).type_qualifier_list_node_1=(yyvsp[(2) - (3)].type_qualifier_list_val);
    (*anode).pointer_node_1=(yyvsp[(3) - (3)].pointer_val);
    (yyval.pointer_val) = anode;
}
    break;

  case 89:
#line 1306 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 90:
#line 1314 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_list_node_1=(yyvsp[(1) - (2)].type_qualifier_list_val);
    (*anode).type_qualifier_node_1=(yyvsp[(2) - (2)].type_qualifier_val);
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 91:
#line 1324 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).parameter_list_node_1=(yyvsp[(1) - (1)].parameter_list_val);
    (*anode).token_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 92:
#line 1333 "ast_c_grammar.y"
    {
     parameter_type_list_node *anode;
anode = (parameter_type_list_node*) malloc(sizeof(parameter_type_list_node));
    (*anode).char_lit_1="','";
    (*anode).token_1=(yyvsp[(3) - (3)].sval);
    (*anode).parameter_list_node_1=(yyvsp[(1) - (3)].parameter_list_val);
    (yyval.parameter_type_list_val) = anode;
}
    break;

  case 93:
#line 1344 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).parameter_declaration_node_1=(yyvsp[(1) - (1)].parameter_declaration_val);
    (*anode).parameter_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.parameter_list_val) = anode;
}
    break;

  case 94:
#line 1353 "ast_c_grammar.y"
    {
     parameter_list_node *anode;
anode = (parameter_list_node*) malloc(sizeof(parameter_list_node));
    (*anode).char_lit_1="','";
    (*anode).parameter_list_node_1=(yyvsp[(1) - (3)].parameter_list_val);
    (*anode).parameter_declaration_node_1=(yyvsp[(3) - (3)].parameter_declaration_val);
    (yyval.parameter_list_val) = anode;
}
    break;

  case 95:
#line 1364 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).declarator_node_1=(yyvsp[(2) - (2)].declarator_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 96:
#line 1373 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (1)].declaration_specifiers_val);
    (*anode).declarator_node_1= 0;
    (*anode).abstract_declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 97:
#line 1382 "ast_c_grammar.y"
    {
     parameter_declaration_node *anode;
anode = (parameter_declaration_node*) malloc(sizeof(parameter_declaration_node));
    (*anode).declaration_specifiers_node_1=(yyvsp[(1) - (2)].declaration_specifiers_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (*anode).declarator_node_1= 0;
    (yyval.parameter_declaration_val) = anode;
}
    break;

  case 98:
#line 1393 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).identifier_node_1=(yyvsp[(1) - (1)].identifier_val);
    (*anode).char_lit_1= "";
    (*anode).identifier_list_node_1= 0;
    (yyval.identifier_list_val) = anode;
}
    break;

  case 99:
#line 1402 "ast_c_grammar.y"
    {
     identifier_list_node *anode;
anode = (identifier_list_node*) malloc(sizeof(identifier_list_node));
    (*anode).char_lit_1="','";
    (*anode).identifier_list_node_1=(yyvsp[(1) - (3)].identifier_list_val);
    (*anode).identifier_node_1=(yyvsp[(3) - (3)].identifier_val);
    (yyval.identifier_list_val) = anode;
}
    break;

  case 100:
#line 1413 "ast_c_grammar.y"
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

  case 101:
#line 1424 "ast_c_grammar.y"
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

  case 102:
#line 1435 "ast_c_grammar.y"
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

  case 103:
#line 1448 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).initializer_node_1=(yyvsp[(1) - (1)].initializer_val);
    (*anode).initializer_list_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.initializer_list_val) = anode;
}
    break;

  case 104:
#line 1457 "ast_c_grammar.y"
    {
     initializer_list_node *anode;
anode = (initializer_list_node*) malloc(sizeof(initializer_list_node));
    (*anode).char_lit_1="','";
    (*anode).initializer_list_node_1=(yyvsp[(1) - (3)].initializer_list_val);
    (*anode).initializer_node_1=(yyvsp[(3) - (3)].initializer_val);
    (yyval.initializer_list_val) = anode;
}
    break;

  case 105:
#line 1468 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (1)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.type_name_val) = anode;
}
    break;

  case 106:
#line 1476 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (2)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (yyval.type_name_val) = anode;
}
    break;

  case 107:
#line 1486 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (1)].pointer_val);
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 108:
#line 1494 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (1)].direct_abstract_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 109:
#line 1502 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(2) - (2)].direct_abstract_declarator_val);
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 110:
#line 1512 "ast_c_grammar.y"
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

  case 111:
#line 1524 "ast_c_grammar.y"
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

  case 112:
#line 1536 "ast_c_grammar.y"
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

  case 113:
#line 1548 "ast_c_grammar.y"
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

  case 114:
#line 1560 "ast_c_grammar.y"
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

  case 115:
#line 1572 "ast_c_grammar.y"
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

  case 116:
#line 1584 "ast_c_grammar.y"
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

  case 117:
#line 1596 "ast_c_grammar.y"
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

  case 118:
#line 1608 "ast_c_grammar.y"
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

  case 119:
#line 1622 "ast_c_grammar.y"
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

  case 120:
#line 1633 "ast_c_grammar.y"
    {st.push();}
    break;

  case 121:
#line 1633 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 122:
#line 1634 "ast_c_grammar.y"
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

  case 123:
#line 1646 "ast_c_grammar.y"
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

  case 124:
#line 1658 "ast_c_grammar.y"
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

  case 125:
#line 1670 "ast_c_grammar.y"
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

  case 126:
#line 1682 "ast_c_grammar.y"
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

  case 127:
#line 1696 "ast_c_grammar.y"
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

  case 128:
#line 1707 "ast_c_grammar.y"
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

  case 129:
#line 1718 "ast_c_grammar.y"
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

  case 130:
#line 1731 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1= 0;
    (yyval.expression_statement_val) = anode;
}
    break;

  case 131:
#line 1739 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1=(yyvsp[(1) - (2)].expression_val);
    (yyval.expression_statement_val) = anode;
}
    break;

  case 132:
#line 1749 "ast_c_grammar.y"
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

  case 133:
#line 1759 "ast_c_grammar.y"
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

  case 134:
#line 1769 "ast_c_grammar.y"
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

  case 135:
#line 1779 "ast_c_grammar.y"
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

  case 136:
#line 1791 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_node_1=(yyvsp[(1) - (1)].statement_val);
    (*anode).statement_list_node_1= 0;
    (yyval.statement_list_val) = anode;
}
    break;

  case 137:
#line 1799 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_list_node_1=(yyvsp[(1) - (2)].statement_list_val);
    (*anode).statement_node_1=(yyvsp[(2) - (2)].statement_val);
    (yyval.statement_list_val) = anode;
}
    break;

  case 138:
#line 1809 "ast_c_grammar.y"
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

  case 139:
#line 1822 "ast_c_grammar.y"
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

  case 140:
#line 1836 "ast_c_grammar.y"
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

  case 141:
#line 1851 "ast_c_grammar.y"
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

  case 142:
#line 1867 "ast_c_grammar.y"
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

  case 143:
#line 1883 "ast_c_grammar.y"
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

  case 144:
#line 1899 "ast_c_grammar.y"
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

  case 145:
#line 1915 "ast_c_grammar.y"
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

  case 146:
#line 1931 "ast_c_grammar.y"
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

  case 147:
#line 1948 "ast_c_grammar.y"
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

  case 148:
#line 1964 "ast_c_grammar.y"
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

  case 149:
#line 1981 "ast_c_grammar.y"
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

  case 150:
#line 1998 "ast_c_grammar.y"
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

  case 151:
#line 2019 "ast_c_grammar.y"
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

  case 152:
#line 2029 "ast_c_grammar.y"
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

  case 153:
#line 2039 "ast_c_grammar.y"
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

  case 154:
#line 2049 "ast_c_grammar.y"
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

  case 155:
#line 2059 "ast_c_grammar.y"
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

  case 156:
#line 2071 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.expression_val) = anode;
}
    break;

  case 157:
#line 2080 "ast_c_grammar.y"
    {
     expression_node *anode;
anode = (expression_node*) malloc(sizeof(expression_node));
    (*anode).char_lit_1="','";
    (*anode).expression_node_1=(yyvsp[(1) - (3)].expression_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.expression_val) = anode;
}
    break;

  case 158:
#line 2091 "ast_c_grammar.y"
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

  case 159:
#line 2101 "ast_c_grammar.y"
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

  case 160:
#line 2113 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).char_lit_1="'='";
    (*anode).token_1= 0;
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 161:
#line 2121 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 162:
#line 2129 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 163:
#line 2137 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 164:
#line 2145 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 165:
#line 2153 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 166:
#line 2161 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 167:
#line 2169 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 168:
#line 2177 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 169:
#line 2185 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 170:
#line 2193 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 171:
#line 2203 "ast_c_grammar.y"
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

  case 172:
#line 2214 "ast_c_grammar.y"
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

  case 173:
#line 2227 "ast_c_grammar.y"
    {
     constant_expression_node *anode;
anode = (constant_expression_node*) malloc(sizeof(constant_expression_node));
    (*anode).conditional_expression_node_1=(yyvsp[(1) - (1)].conditional_expression_val);
    (yyval.constant_expression_val) = anode;
}
    break;

  case 174:
#line 2236 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (1)].logical_and_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_or_expression_node_1= 0;
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 175:
#line 2245 "ast_c_grammar.y"
    {
     logical_or_expression_node *anode;
anode = (logical_or_expression_node*) malloc(sizeof(logical_or_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_or_expression_node_1=(yyvsp[(1) - (3)].logical_or_expression_val);
    (*anode).logical_and_expression_node_1=(yyvsp[(3) - (3)].logical_and_expression_val);
    (yyval.logical_or_expression_val) = anode;
}
    break;

  case 176:
#line 2256 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (1)].inclusive_or_expression_val);
    (*anode).token_1= 0;
    (*anode).logical_and_expression_node_1= 0;
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 177:
#line 2265 "ast_c_grammar.y"
    {
     logical_and_expression_node *anode;
anode = (logical_and_expression_node*) malloc(sizeof(logical_and_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).logical_and_expression_node_1=(yyvsp[(1) - (3)].logical_and_expression_val);
    (*anode).inclusive_or_expression_node_1=(yyvsp[(3) - (3)].inclusive_or_expression_val);
    (yyval.logical_and_expression_val) = anode;
}
    break;

  case 178:
#line 2276 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (1)].exclusive_or_expression_val);
    (*anode).inclusive_or_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 179:
#line 2285 "ast_c_grammar.y"
    {
     inclusive_or_expression_node *anode;
anode = (inclusive_or_expression_node*) malloc(sizeof(inclusive_or_expression_node));
    (*anode).char_lit_1="'|'";
    (*anode).inclusive_or_expression_node_1=(yyvsp[(1) - (3)].inclusive_or_expression_val);
    (*anode).exclusive_or_expression_node_1=(yyvsp[(3) - (3)].exclusive_or_expression_val);
    (yyval.inclusive_or_expression_val) = anode;
}
    break;

  case 180:
#line 2296 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).and_expression_node_1=(yyvsp[(1) - (1)].and_expression_val);
    (*anode).char_lit_1= "";
    (*anode).exclusive_or_expression_node_1= 0;
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 181:
#line 2305 "ast_c_grammar.y"
    {
     exclusive_or_expression_node *anode;
anode = (exclusive_or_expression_node*) malloc(sizeof(exclusive_or_expression_node));
    (*anode).char_lit_1="'^'";
    (*anode).exclusive_or_expression_node_1=(yyvsp[(1) - (3)].exclusive_or_expression_val);
    (*anode).and_expression_node_1=(yyvsp[(3) - (3)].and_expression_val);
    (yyval.exclusive_or_expression_val) = anode;
}
    break;

  case 182:
#line 2316 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).equality_expression_node_1=(yyvsp[(1) - (1)].equality_expression_val);
    (*anode).and_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.and_expression_val) = anode;
}
    break;

  case 183:
#line 2325 "ast_c_grammar.y"
    {
     and_expression_node *anode;
anode = (and_expression_node*) malloc(sizeof(and_expression_node));
    (*anode).char_lit_1="'&'";
    (*anode).and_expression_node_1=(yyvsp[(1) - (3)].and_expression_val);
    (*anode).equality_expression_node_1=(yyvsp[(3) - (3)].equality_expression_val);
    (yyval.and_expression_val) = anode;
}
    break;

  case 184:
#line 2336 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).relational_expression_node_1=(yyvsp[(1) - (1)].relational_expression_val);
    (*anode).token_1= 0;
    (*anode).equality_expression_node_1= 0;
    (yyval.equality_expression_val) = anode;
}
    break;

  case 185:
#line 2345 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 186:
#line 2354 "ast_c_grammar.y"
    {
     equality_expression_node *anode;
anode = (equality_expression_node*) malloc(sizeof(equality_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).equality_expression_node_1=(yyvsp[(1) - (3)].equality_expression_val);
    (*anode).relational_expression_node_1=(yyvsp[(3) - (3)].relational_expression_val);
    (yyval.equality_expression_val) = anode;
}
    break;

  case 187:
#line 2365 "ast_c_grammar.y"
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

  case 188:
#line 2375 "ast_c_grammar.y"
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

  case 189:
#line 2385 "ast_c_grammar.y"
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

  case 190:
#line 2395 "ast_c_grammar.y"
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

  case 191:
#line 2405 "ast_c_grammar.y"
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

  case 192:
#line 2417 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).additive_expression_node_1=(yyvsp[(1) - (1)].additive_expression_val);
    (*anode).token_1= 0;
    (*anode).shift_expression_node_1= 0;
    (yyval.shift_expression_val) = anode;
}
    break;

  case 193:
#line 2426 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 194:
#line 2435 "ast_c_grammar.y"
    {
     shift_expression_node *anode;
anode = (shift_expression_node*) malloc(sizeof(shift_expression_node));
    (*anode).token_1=(yyvsp[(2) - (3)].sval);
    (*anode).shift_expression_node_1=(yyvsp[(1) - (3)].shift_expression_val);
    (*anode).additive_expression_node_1=(yyvsp[(3) - (3)].additive_expression_val);
    (yyval.shift_expression_val) = anode;
}
    break;

  case 195:
#line 2446 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (1)].multiplicative_expression_val);
    (*anode).additive_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.additive_expression_val) = anode;
}
    break;

  case 196:
#line 2455 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'+'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 197:
#line 2464 "ast_c_grammar.y"
    {
     additive_expression_node *anode;
anode = (additive_expression_node*) malloc(sizeof(additive_expression_node));
    (*anode).char_lit_1="'-'";
    (*anode).additive_expression_node_1=(yyvsp[(1) - (3)].additive_expression_val);
    (*anode).multiplicative_expression_node_1=(yyvsp[(3) - (3)].multiplicative_expression_val);
    (yyval.additive_expression_val) = anode;
}
    break;

  case 198:
#line 2475 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).cast_expression_node_1=(yyvsp[(1) - (1)].cast_expression_val);
    (*anode).multiplicative_expression_node_1= 0;
    (*anode).char_lit_1= "";
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 199:
#line 2484 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'*'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 200:
#line 2493 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'/'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 201:
#line 2502 "ast_c_grammar.y"
    {
     multiplicative_expression_node *anode;
anode = (multiplicative_expression_node*) malloc(sizeof(multiplicative_expression_node));
    (*anode).char_lit_1="'%'";
    (*anode).multiplicative_expression_node_1=(yyvsp[(1) - (3)].multiplicative_expression_val);
    (*anode).cast_expression_node_1=(yyvsp[(3) - (3)].cast_expression_val);
    (yyval.multiplicative_expression_val) = anode;
}
    break;

  case 202:
#line 2513 "ast_c_grammar.y"
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

  case 203:
#line 2524 "ast_c_grammar.y"
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

  case 204:
#line 2537 "ast_c_grammar.y"
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

  case 205:
#line 2551 "ast_c_grammar.y"
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

  case 206:
#line 2565 "ast_c_grammar.y"
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

  case 207:
#line 2579 "ast_c_grammar.y"
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

  case 208:
#line 2593 "ast_c_grammar.y"
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

  case 209:
#line 2607 "ast_c_grammar.y"
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

  case 210:
#line 2623 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'&'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 211:
#line 2630 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'*'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 212:
#line 2637 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'+'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 213:
#line 2644 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'-'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 214:
#line 2651 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'~'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 215:
#line 2658 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'!'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 216:
#line 2667 "ast_c_grammar.y"
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

  case 217:
#line 2681 "ast_c_grammar.y"
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

  case 218:
#line 2695 "ast_c_grammar.y"
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

  case 219:
#line 2709 "ast_c_grammar.y"
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

  case 220:
#line 2723 "ast_c_grammar.y"
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

  case 221:
#line 2737 "ast_c_grammar.y"
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

  case 222:
#line 2751 "ast_c_grammar.y"
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

  case 223:
#line 2765 "ast_c_grammar.y"
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

  case 224:
#line 2781 "ast_c_grammar.y"
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

  case 225:
#line 2793 "ast_c_grammar.y"
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

  case 226:
#line 2805 "ast_c_grammar.y"
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

  case 227:
#line 2817 "ast_c_grammar.y"
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

  case 228:
#line 2831 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).assignment_expression_node_1=(yyvsp[(1) - (1)].assignment_expression_val);
    (*anode).char_lit_1= "";
    (*anode).argument_expression_list_node_1= 0;
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 229:
#line 2840 "ast_c_grammar.y"
    {
     argument_expression_list_node *anode;
anode = (argument_expression_list_node*) malloc(sizeof(argument_expression_list_node));
    (*anode).char_lit_1="','";
    (*anode).argument_expression_list_node_1=(yyvsp[(1) - (3)].argument_expression_list_val);
    (*anode).assignment_expression_node_1=(yyvsp[(3) - (3)].assignment_expression_val);
    (yyval.argument_expression_list_val) = anode;
}
    break;

  case 230:
#line 2851 "ast_c_grammar.y"
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

  case 231:
#line 2862 "ast_c_grammar.y"
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

  case 232:
#line 2872 "ast_c_grammar.y"
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

  case 233:
#line 2882 "ast_c_grammar.y"
    {
     constant_node *anode;
anode = (constant_node*) malloc(sizeof(constant_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).int_token_1 = 0;
    (*anode).dec_token_1 = 0;
    (yyval.constant_val) = anode;
}
    break;

  case 234:
#line 2893 "ast_c_grammar.y"
    {
     string_node *anode;
anode = (string_node*) malloc(sizeof(string_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.string_val) = anode;
}
    break;

  case 235:
#line 2902 "ast_c_grammar.y"
    {
     identifier_node *anode;
anode = (identifier_node*) malloc(sizeof(identifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.identifier_val) = anode;
}
    break;


/* Line 1267 of yacc.c.  */
#line 5469 "y.tab.c"
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


#line 2911 "ast_c_grammar.y"


#include <stdio.h>

extern char yytext[];
extern int column;



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

/*
yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
*/

