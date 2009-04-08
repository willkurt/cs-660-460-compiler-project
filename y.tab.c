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
#define YYLAST   1584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNRULES -- Number of states.  */
#define YYNSTATES  393

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
      49,    50,    55,    57,    60,    62,    65,    67,    70,    72,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      95,    97,    99,   101,   103,   105,   107,   109,   111,   113,
     119,   124,   127,   129,   131,   133,   136,   138,   142,   144,
     148,   152,   154,   157,   159,   162,   164,   168,   170,   173,
     177,   182,   188,   191,   193,   197,   199,   203,   205,   208,
     210,   214,   218,   223,   224,   229,   230,   236,   237,   243,
     245,   248,   251,   255,   257,   260,   262,   266,   268,   272,
     275,   277,   280,   282,   286,   288,   292,   297,   299,   303,
     305,   308,   310,   312,   315,   319,   322,   326,   330,   335,
     338,   342,   346,   351,   353,   354,   355,   359,   361,   363,
     365,   367,   371,   376,   380,   382,   385,   388,   392,   396,
     401,   403,   406,   412,   420,   426,   432,   440,   447,   455,
     463,   472,   480,   489,   498,   508,   512,   515,   518,   521,
     525,   527,   531,   533,   537,   539,   541,   543,   545,   547,
     549,   551,   553,   555,   557,   559,   561,   567,   569,   571,
     575,   577,   581,   583,   587,   589,   593,   595,   599,   601,
     605,   609,   611,   615,   619,   623,   627,   629,   633,   637,
     639,   643,   647,   649,   653,   657,   661,   663,   668,   670,
     673,   676,   679,   682,   687,   689,   691,   693,   695,   697,
     699,   701,   706,   710,   715,   719,   723,   726,   729,   731,
     733,   735,   739,   741,   745,   747,   749,   751,   753,   755
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    -1,    94,
      93,    -1,   103,    -1,    -1,    -1,   122,    95,   143,    96,
      -1,    -1,    -1,   122,   105,    97,   143,    98,    -1,    -1,
      -1,   106,   122,    99,   143,   100,    -1,    -1,    -1,   106,
     122,   105,   101,   143,   102,    -1,   106,    66,    -1,    -1,
     106,   113,    66,   104,    -1,   103,    -1,   105,   103,    -1,
     107,    -1,   107,   106,    -1,   108,    -1,   108,   106,    -1,
     109,    -1,   109,   106,    -1,    35,    -1,    36,    -1,    34,
      -1,    33,    -1,    32,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,   110,    -1,   119,    -1,    31,    -1,    45,
      -1,    46,    -1,   111,   171,    67,   112,    68,    -1,   111,
      67,   112,    68,    -1,   111,   171,    -1,    48,    -1,    49,
      -1,   115,    -1,   112,   115,    -1,   114,    -1,   113,    69,
     114,    -1,   122,    -1,   122,    70,   133,    -1,   116,   117,
      66,    -1,   108,    -1,   108,   116,    -1,   109,    -1,   109,
     116,    -1,   118,    -1,   117,    69,   118,    -1,   122,    -1,
      71,   152,    -1,   122,    71,   152,    -1,    50,    67,   120,
      68,    -1,    50,   171,    67,   120,    68,    -1,    50,   171,
      -1,   121,    -1,   120,    69,   121,    -1,   171,    -1,   171,
      70,   152,    -1,   123,    -1,   127,   123,    -1,   171,    -1,
      72,   122,    73,    -1,   123,    74,    75,    -1,   123,    74,
     152,    75,    -1,    -1,   123,    72,   124,    73,    -1,    -1,
     123,    72,   125,   129,    73,    -1,    -1,   123,    72,   126,
     132,    73,    -1,    76,    -1,    76,   128,    -1,    76,   127,
      -1,    76,   128,   127,    -1,   109,    -1,   128,   109,    -1,
     130,    -1,   130,    69,    51,    -1,   131,    -1,   130,    69,
     131,    -1,   106,   122,    -1,   106,    -1,   106,   136,    -1,
     171,    -1,   132,    69,   171,    -1,   149,    -1,    67,   134,
      68,    -1,    67,   134,    69,    68,    -1,   133,    -1,   134,
      69,   133,    -1,   116,    -1,   116,   136,    -1,   127,    -1,
     137,    -1,   127,   137,    -1,    72,   136,    73,    -1,    74,
      75,    -1,    74,   152,    75,    -1,   137,    74,    75,    -1,
     137,    74,   152,    75,    -1,    72,    73,    -1,    72,   129,
      73,    -1,   137,    72,    73,    -1,   137,    72,   129,    73,
      -1,   141,    -1,    -1,    -1,   139,   143,   140,    -1,   142,
      -1,   145,    -1,   146,    -1,   147,    -1,   171,    71,   138,
      -1,    53,   152,    71,   138,    -1,    54,    71,   138,    -1,
      66,    -1,   148,    66,    -1,    67,    68,    -1,    67,   144,
      68,    -1,    67,   105,    68,    -1,    67,   105,   144,    68,
      -1,   138,    -1,   144,   138,    -1,    55,    72,   148,    73,
     138,    -1,    55,    72,   148,    73,   138,    56,   138,    -1,
      57,    72,   148,    73,   138,    -1,    58,    72,   148,    73,
     138,    -1,    59,   138,    58,    72,   148,    73,    66,    -1,
      60,    72,    66,    66,    73,   138,    -1,    60,    72,    66,
      66,   148,    73,   138,    -1,    60,    72,    66,   148,    66,
      73,   138,    -1,    60,    72,    66,   148,    66,   148,    73,
     138,    -1,    60,    72,   148,    66,    66,    73,   138,    -1,
      60,    72,   148,    66,    66,   148,    73,   138,    -1,    60,
      72,   148,    66,   148,    66,    73,   138,    -1,    60,    72,
     148,    66,   148,    66,   148,    73,   138,    -1,    61,   171,
      66,    -1,    62,    66,    -1,    63,    66,    -1,    64,    66,
      -1,    64,   148,    66,    -1,   149,    -1,   148,    69,   149,
      -1,   151,    -1,   164,   150,   149,    -1,    70,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,   153,
      -1,   153,    77,   148,    71,   151,    -1,   151,    -1,   154,
      -1,   153,    20,   154,    -1,   155,    -1,   154,    19,   155,
      -1,   156,    -1,   155,    78,   156,    -1,   157,    -1,   156,
      79,   157,    -1,   158,    -1,   157,    80,   158,    -1,   159,
      -1,   158,    17,   159,    -1,   158,    18,   159,    -1,   160,
      -1,   159,    81,   160,    -1,   159,    82,   160,    -1,   159,
      15,   160,    -1,   159,    16,   160,    -1,   161,    -1,   160,
      13,   161,    -1,   160,    14,   161,    -1,   162,    -1,   161,
      83,   162,    -1,   161,    84,   162,    -1,   163,    -1,   162,
      76,   163,    -1,   162,    85,   163,    -1,   162,    86,   163,
      -1,   164,    -1,    72,   135,    73,   163,    -1,   166,    -1,
      11,   164,    -1,    12,   164,    -1,   165,   163,    -1,     9,
     164,    -1,     9,    72,   135,    73,    -1,    80,    -1,    76,
      -1,    83,    -1,    84,    -1,    87,    -1,    88,    -1,   167,
      -1,   166,    74,   148,    75,    -1,   166,    72,    73,    -1,
     166,    72,   168,    73,    -1,   166,    89,   171,    -1,   166,
      10,   171,    -1,   166,    11,    -1,   166,    12,    -1,   171,
      -1,   169,    -1,   170,    -1,    72,   148,    73,    -1,   149,
      -1,   168,    69,   149,    -1,     4,    -1,     6,    -1,     5,
      -1,     7,    -1,     8,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   308,   308,   317,   327,   327,   335,   345,   345,   345,
     355,   355,   355,   365,   365,   365,   375,   375,   375,   387,
     398,   396,   624,   632,   642,   652,   662,   672,   682,   692,
     704,   711,   718,   725,   732,   741,   750,   759,   768,   777,
     786,   795,   804,   813,   822,   831,   840,   851,   858,   867,
     878,   889,   902,   909,   918,   926,   936,   945,   956,   965,
     976,   987,   996,  1005,  1014,  1025,  1034,  1045,  1054,  1063,
    1074,  1085,  1096,  1109,  1118,  1129,  1138,  1149,  1157,  1167,
    1181,  1195,  1209,  1223,  1223,  1237,  1237,  1251,  1251,  1267,
    1276,  1285,  1294,  1305,  1313,  1323,  1332,  1343,  1352,  1363,
    1372,  1381,  1392,  1401,  1412,  1423,  1434,  1447,  1456,  1467,
    1475,  1485,  1493,  1501,  1511,  1523,  1535,  1547,  1559,  1571,
    1583,  1595,  1607,  1621,  1633,  1633,  1633,  1645,  1657,  1669,
    1681,  1695,  1706,  1717,  1730,  1738,  1748,  1758,  1768,  1778,
    1790,  1798,  1808,  1821,  1835,  1850,  1866,  1882,  1898,  1914,
    1930,  1947,  1963,  1980,  1997,  2018,  2028,  2038,  2048,  2058,
    2070,  2079,  2090,  2100,  2112,  2120,  2128,  2136,  2144,  2152,
    2160,  2168,  2176,  2184,  2192,  2202,  2213,  2226,  2235,  2244,
    2255,  2264,  2275,  2284,  2295,  2304,  2315,  2324,  2335,  2344,
    2353,  2364,  2374,  2384,  2394,  2404,  2416,  2425,  2434,  2445,
    2454,  2463,  2474,  2483,  2492,  2501,  2512,  2523,  2536,  2550,
    2564,  2578,  2592,  2606,  2622,  2629,  2636,  2643,  2650,  2657,
    2666,  2680,  2694,  2708,  2722,  2736,  2750,  2764,  2780,  2792,
    2804,  2816,  2830,  2839,  2850,  2861,  2871,  2881,  2892,  2901
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
  "declaration", "@10", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "@11", "@12", "@13", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "initializer", "initializer_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "statement", "@14",
  "@15", "labeled_statement", "expression_statement", "compound_statement",
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
       0,    90,    91,    91,    93,    92,    92,    95,    96,    94,
      97,    98,    94,    99,   100,    94,   101,   102,    94,   103,
     104,   103,   105,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   124,   123,   125,   123,   126,   123,   127,
     127,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   138,   139,   140,   138,   138,   138,   138,
     138,   141,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   147,   147,   147,
     148,   148,   149,   149,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   151,   151,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     158,   159,   159,   159,   159,   159,   160,   160,   160,   161,
     161,   161,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   164,   164,   164,   165,   165,   165,   165,   165,   165,
     166,   166,   166,   166,   166,   166,   166,   166,   167,   167,
     167,   167,   168,   168,   169,   169,   169,   169,   170,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     0,     0,     4,
       0,     0,     5,     0,     0,     5,     0,     0,     6,     2,
       0,     4,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     1,     3,     1,     3,
       3,     1,     2,     1,     2,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     4,     0,     4,     0,     5,     0,     5,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     2,     1,     3,     1,     3,     4,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     0,     0,     3,     1,     1,     1,
       1,     3,     4,     3,     1,     2,     2,     3,     3,     4,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     7,
       8,     7,     8,     8,     9,     3,     2,     2,     2,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   239,    46,    34,    33,    32,    30,    31,    36,    37,
      38,    39,    42,    43,    40,    41,    47,    48,    35,    52,
      53,     0,     0,    89,     0,     2,     4,     6,     0,    24,
      26,    28,    44,     0,    45,     7,    77,     0,    79,     0,
      72,     0,    93,    91,    90,     1,     3,     5,    19,     0,
      56,    58,    25,    27,    29,     0,    51,     0,    22,    10,
       0,    85,     0,    78,     0,    73,    75,     0,    80,    94,
      92,    20,     0,     0,     0,    16,    61,    63,     0,    54,
       0,     0,   124,     8,     0,    23,    58,     0,     0,     0,
     234,   236,   235,   237,   238,     0,     0,     0,     0,    81,
     215,   214,   216,   217,   218,   219,   177,     0,   175,   178,
     180,   182,   184,   186,   188,   191,   196,   199,   202,   206,
       0,   208,   220,   229,   230,   228,    70,     0,     0,     0,
      21,    57,     0,    59,   104,   162,   206,    14,     0,    62,
      64,    50,    55,     0,     0,    65,    67,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,   134,
     136,   124,   140,     0,   123,   127,   124,   128,   129,   130,
       0,   160,   228,     9,    11,    84,   100,     0,    95,    97,
       0,   102,     0,   212,     0,   209,   210,   109,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,     0,   226,   227,     0,     0,     0,    74,    76,    71,
     107,     0,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   164,     0,    15,    17,    68,    60,     0,     0,
      49,     0,   124,     0,     0,     0,     0,     0,     0,   156,
     157,   158,     0,   138,   124,   125,   137,   141,   135,     0,
     124,    12,     0,     0,    99,   111,   101,   112,    86,     0,
       0,    88,     0,     0,   111,   110,     0,   231,   179,     0,
     181,   183,   185,   187,   189,   190,   194,   195,   192,   193,
     197,   198,   200,   201,   203,   204,   205,   225,   222,   232,
       0,     0,   224,   105,     0,   163,    18,    66,    69,   124,
     133,     0,     0,     0,     0,     0,     0,   155,   159,   139,
     126,   161,   131,   119,     0,     0,   115,     0,   113,     0,
       0,    96,    98,   103,   213,   207,     0,     0,   223,   221,
     106,   108,   132,   124,   124,   124,     0,     0,     0,     0,
     120,   114,   116,   121,     0,   117,     0,   176,   233,   142,
     144,   145,     0,   124,     0,     0,     0,     0,   122,   118,
     124,     0,   147,   124,   124,     0,   124,     0,     0,   143,
     146,   148,   149,   124,   151,   124,   124,     0,   150,   152,
     153,   124,   154
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    47,    26,    57,   173,    84,   261,    74,
     234,   138,   306,    58,   130,    59,    60,    29,    30,    31,
      32,    33,    78,    49,    50,    79,    80,   144,   145,    34,
      64,    65,    35,    36,    87,    88,    89,    37,    44,   324,
     178,   179,   180,   133,   221,   188,   325,   267,   162,   163,
     320,   164,   165,    83,   166,   167,   168,   169,   170,   171,
     233,   135,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   136,   120,   121,   122,   300,   123,
     124,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -200
static const yytype_int16 yypact[] =
{
    1343,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,     9,    38,    75,  1292,  -200,  -200,  -200,    53,  1534,
    1534,  1534,  -200,    41,  -200,  1534,    70,    29,  -200,    10,
     -49,   -42,  -200,  -200,    75,  -200,  -200,  -200,  -200,   -43,
    -200,  1409,  -200,  -200,  -200,   511,   -12,     1,  -200,  1534,
      53,     6,   810,    70,   153,  -200,   -20,    10,  -200,  -200,
    -200,  -200,    38,   824,     1,  1534,   511,   511,  1443,  -200,
      12,   511,   446,  -200,     1,  -200,    16,    24,  1534,    10,
    -200,  -200,  -200,  -200,  -200,  1193,  1203,  1203,   618,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,    31,    -6,    98,
      48,    78,    69,   229,    58,   266,   199,    92,  -200,  -200,
    1213,   152,  -200,  -200,  -200,  -200,  -200,    10,  1213,   219,
    -200,  -200,   824,  -200,  -200,  -200,   386,  -200,     1,  -200,
    -200,  -200,  -200,  1213,    65,  -200,   101,  1475,  1213,   157,
     158,   168,   185,   790,   187,    10,   200,   207,   910,  -200,
    -200,   532,  -200,     1,  -200,  -200,   666,  -200,  -200,  -200,
     105,  -200,   205,  -200,  -200,  -200,    56,   230,   233,  -200,
      -4,  -200,   618,  -200,  1213,  -200,  -200,    80,   232,    40,
    -200,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,
    1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,
    -200,    10,  -200,  -200,   923,  1213,    10,  -200,  -200,  -200,
    -200,   226,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  1213,  -200,  -200,  -200,  -200,    12,  1213,
    -200,   241,   790,  1213,  1213,  1213,   255,   936,   248,  -200,
    -200,  -200,   170,  -200,   704,  -200,  -200,  -200,  -200,  1213,
     790,  -200,  1271,   946,  -200,    61,  -200,   140,  -200,  1513,
      10,  -200,   242,  1363,   181,  -200,  1213,  -200,    98,   113,
      48,    78,    69,   229,    58,    58,   266,   266,   266,   266,
     199,   199,    92,    92,  -200,  -200,  -200,  -200,  -200,  -200,
      72,   -22,  -200,  -200,   800,  -200,  -200,  -200,  -200,   790,
    -200,    96,   110,   112,   244,   959,   182,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,   245,   246,  -200,   247,   140,  1195,
    1045,  -200,  -200,  -200,  -200,  -200,  1213,  1213,  -200,  -200,
    -200,  -200,  -200,   790,   790,   790,  1213,  1058,   195,  1071,
    -200,  -200,  -200,  -200,   250,  -200,   249,  -200,  -200,   264,
    -200,  -200,   136,   790,   144,  1084,  1097,   206,  -200,  -200,
     790,   260,  -200,   790,   790,   146,   790,   156,  1183,  -200,
    -200,  -200,  -200,   790,  -200,   790,   790,   164,  -200,  -200,
    -200,   790,  -200
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,   297,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,    19,  -200,   -31,     5,  -200,   208,    26,
    -200,  -200,   251,  -200,   256,   -70,   -60,  -200,    89,  -200,
     262,   203,   -18,   -30,  -200,  -200,  -200,   -17,  -200,   -86,
    -200,    64,  -200,  -129,  -200,   154,  -124,  -199,    57,  -200,
    -200,  -200,  -200,   -26,   174,  -200,  -200,  -200,   -97,   -27,
    -200,   -32,  -103,  -200,   147,   148,   143,   145,   150,    99,
      91,    97,   102,  -109,    -5,  -200,  -200,  -200,  -200,  -200,
    -200,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
      38,   189,   177,   220,    41,    28,    43,    63,   142,   -87,
      51,   210,     1,     1,   191,     1,   139,   140,    67,    27,
      75,    40,    38,    71,    38,   218,    72,    70,    38,    28,
     106,    68,     1,    56,    52,    53,    54,    38,   187,    66,
     236,     1,    86,    27,     1,   241,   134,   259,   137,    42,
     128,   161,   266,   339,    86,    81,     1,   119,   174,     1,
      38,   252,   146,   275,     1,   270,   328,    66,    82,   271,
      69,   192,    38,   199,   200,   328,    39,   142,    85,   -83,
      38,    77,   172,   143,    22,   189,    73,   189,    23,   181,
     183,   185,   186,   176,    85,   279,   106,   175,   294,   295,
     296,    22,    77,    77,    77,   134,   190,    77,    55,   259,
      22,   106,   235,   277,    23,   119,   106,   193,   301,    48,
      16,    17,   187,   119,    77,    22,   194,    66,   262,    23,
     263,   237,    23,   262,   238,   263,   308,   255,   119,   201,
     202,   337,    61,   119,    62,   338,   311,   312,   313,   196,
     316,    23,   273,   172,   263,   248,    23,   195,   264,   265,
     327,   172,   211,   212,   213,   259,   172,   335,   207,   343,
     274,   258,   239,    77,   259,   341,    38,   208,   209,   259,
      85,   259,   259,   344,   336,   345,   119,   299,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   259,   305,   106,    77,   371,
     246,   297,   329,   259,   330,   259,   302,   373,   348,   383,
     146,   126,   127,   257,   214,   259,   215,   356,   242,   385,
     243,   106,   321,   259,   119,    63,   318,   391,    38,   259,
     244,   216,   172,   354,    41,   265,   197,   198,   349,   362,
     364,   259,   367,   273,   172,   263,   274,   245,   119,   247,
     172,   365,    38,    76,   259,    38,   249,   176,   375,   377,
     333,   119,   378,   250,   176,   259,   260,   134,   176,   203,
     204,   387,   205,   206,    76,    76,    76,   219,   127,    76,
     286,   287,   288,   289,   303,   304,   284,   285,   106,   310,
     290,   291,   269,   268,   357,   276,    76,   292,   293,   172,
     358,   257,   309,   314,   317,   334,   346,   322,   350,   351,
     370,    46,   352,   368,   369,   119,   380,   307,   131,   129,
     217,   119,   147,   332,   176,   254,   272,   281,   278,     0,
     282,   280,     0,   172,   172,   172,   283,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,   342,     0,     0,     0,
     172,     0,     0,   172,   172,     0,   172,     0,     0,     0,
       0,     0,     0,   172,     0,   172,   172,     0,     0,     0,
      76,   172,     0,     0,     0,     0,     0,     0,     0,     0,
     359,   360,   361,     0,     0,     0,     0,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,   379,     0,     0,
     381,   382,     0,   384,     0,     0,     0,     0,     0,     0,
     388,     0,   389,   390,     0,     0,     0,     0,   392,     1,
      90,    91,    92,    93,    94,    95,   232,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,   148,
     149,   150,     0,   151,   152,   153,   154,   155,   156,   157,
     158,     0,   159,     0,   160,     0,     0,     0,    98,     0,
       0,     0,   100,     0,     0,     0,   101,     0,     0,   102,
     103,     0,     0,   104,   105,     1,    90,    91,    92,    93,
      94,    95,     2,    96,    97,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,   148,   149,   150,     0,   151,
     152,   153,   154,   155,   156,   157,   158,     0,   159,     0,
     253,     0,     0,     0,    98,     0,     0,     0,   100,     0,
       0,     0,   101,     0,     0,   102,   103,     0,     0,   104,
     105,     1,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,   100,     0,     0,     0,   101,     0,
       0,   102,   103,     0,     0,   104,   105,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,   148,
     149,   150,     0,   151,   152,   153,   154,   155,   156,   157,
     158,     0,   159,     0,   256,     0,     0,     0,    98,     0,
       0,     0,   100,     0,     0,     0,   101,     0,     0,   102,
     103,     0,     0,   104,   105,     0,     0,   148,   149,   150,
       0,   151,   152,   153,   154,   155,   156,   157,   158,     0,
     159,     0,   319,     0,     0,     0,    98,     0,     0,     0,
     100,     0,     0,     0,   101,     0,     0,   102,   103,     0,
       0,   104,   105,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       0,     0,     0,   148,   149,   150,     0,   151,   152,   153,
     154,   155,   156,   157,   158,     0,   159,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   100,   132,   340,     0,
     101,     0,    98,   102,   103,     0,   100,   104,   105,     0,
     101,     0,    98,   102,   103,    99,   100,   104,   105,     0,
     101,   132,     0,   102,   103,     0,    98,   104,   105,     0,
     100,     0,     0,     0,   101,     0,     0,   102,   103,     0,
       0,   104,   105,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     1,    90,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   100,     0,     0,     0,
     101,     0,     0,   102,   103,    98,   298,   104,   105,   100,
       0,     0,   315,   101,     0,     0,   102,   103,    98,     0,
     104,   105,   100,     0,     0,     0,   101,     0,    98,   102,
     103,   326,   100,   104,   105,   347,   101,     0,     0,   102,
     103,    98,     0,   104,   105,   100,     0,     0,     0,   101,
       0,     0,   102,   103,     0,     0,   104,   105,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
       0,     1,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       1,    90,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
     355,   100,     0,     0,     0,   101,     0,     0,   102,   103,
      98,   363,   104,   105,   100,     0,     0,   366,   101,     0,
       0,   102,   103,    98,     0,   104,   105,   100,     0,     0,
       0,   101,     0,     0,   102,   103,    98,   374,   104,   105,
     100,     0,     0,     0,   101,     0,     0,   102,   103,    98,
     376,   104,   105,   100,     0,     0,     0,   101,     0,     0,
     102,   103,     0,     0,   104,   105,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,   386,     0,     0,   100,
       0,     0,     0,   101,     0,   182,   102,   103,   353,   100,
     104,   105,     0,   101,     1,   184,   102,   103,     0,   100,
     104,   105,     0,   101,     0,    98,   102,   103,     0,   100,
     104,   105,    45,   101,     0,     1,   102,   103,     0,     0,
     104,   105,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   262,   323,   263,     1,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    22,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   323,   263,     0,    23,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,   -13,     0,     0,    73,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,   141,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   331,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    98,    88,   132,    22,     0,    23,    37,    78,     3,
      28,   120,     3,     3,    20,     3,    76,    77,    67,     0,
      51,    21,    22,    66,    24,   128,    69,    44,    28,    24,
      62,    73,     3,    33,    29,    30,    31,    37,    98,    39,
     143,     3,    60,    24,     3,   148,    73,    69,    74,    23,
      70,    82,   176,    75,    72,    67,     3,    62,    84,     3,
      60,   158,    80,   187,     3,    69,   265,    67,    67,    73,
      44,    77,    72,    15,    16,   274,    67,   147,    59,    73,
      80,    55,    82,    71,    72,   182,    70,   184,    76,    89,
      95,    96,    97,    88,    75,   192,   128,    73,   207,   208,
     209,    72,    76,    77,    78,   132,    75,    81,    67,    69,
      72,   143,   138,    73,    76,   120,   148,    19,   215,    66,
      45,    46,   182,   128,    98,    72,    78,   127,    72,    76,
      74,    66,    76,    72,    69,    74,   239,   163,   143,    81,
      82,    69,    72,   148,    74,    73,   243,   244,   245,    80,
     247,    76,    72,   153,    74,   155,    76,    79,   176,   176,
     263,   161,    10,    11,    12,    69,   166,   276,    76,    73,
     187,    66,    71,   147,    69,   304,   176,    85,    86,    69,
     161,    69,    69,    73,    71,    73,   191,   214,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    69,   233,   239,   182,    73,
     153,   211,    72,    69,    74,    69,   216,    73,   315,    73,
     238,    68,    69,   166,    72,    69,    74,   330,    71,    73,
      72,   263,   259,    69,   239,   265,    66,    73,   238,    69,
      72,    89,   242,   329,   262,   262,    17,    18,    66,   346,
     347,    69,   349,    72,   254,    74,   273,    72,   263,    72,
     260,    66,   262,    55,    69,   265,    66,   262,   365,   366,
     270,   276,    66,    66,   269,    69,    71,   304,   273,    13,
      14,   378,    83,    84,    76,    77,    78,    68,    69,    81,
     199,   200,   201,   202,    68,    69,   197,   198,   330,   242,
     203,   204,    69,    73,   336,    73,    98,   205,   206,   309,
     337,   254,    71,    58,    66,    73,    72,   260,    73,    73,
      56,    24,    75,    73,    75,   330,    66,   238,    72,    67,
     127,   336,    81,   269,   329,   161,   182,   194,   191,    -1,
     195,   193,    -1,   343,   344,   345,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   363,    -1,    -1,   309,    -1,    -1,    -1,
     370,    -1,    -1,   373,   374,    -1,   376,    -1,    -1,    -1,
      -1,    -1,    -1,   383,    -1,   385,   386,    -1,    -1,    -1,
     182,   391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     343,   344,   345,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
     363,    -1,    -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,
     373,   374,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,
     383,    -1,   385,   386,    -1,    -1,    -1,    -1,   391,     3,
       4,     5,     6,     7,     8,     9,    70,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    -1,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    -1,    -1,    87,    88,     3,     4,     5,     6,     7,
       8,     9,    31,    11,    12,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    -1,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    -1,    -1,    87,    88,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    -1,    68,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    67,    68,    -1,
      80,    -1,    72,    83,    84,    -1,    76,    87,    88,    -1,
      80,    -1,    72,    83,    84,    75,    76,    87,    88,    -1,
      80,    67,    -1,    83,    84,    -1,    72,    87,    88,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    72,    73,    87,    88,    76,
      -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,    -1,
      87,    88,    76,    -1,    -1,    -1,    80,    -1,    72,    83,
      84,    75,    76,    87,    88,    66,    80,    -1,    -1,    83,
      84,    72,    -1,    87,    88,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      72,    73,    87,    88,    76,    -1,    -1,    66,    80,    -1,
      -1,    83,    84,    72,    -1,    87,    88,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    72,    73,    87,    88,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    72,
      73,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    72,    83,    84,    73,    76,
      87,    88,    -1,    80,     3,    72,    83,    84,    -1,    76,
      87,    88,    -1,    80,    -1,    72,    83,    84,    -1,    76,
      87,    88,     0,    80,    -1,     3,    83,    84,    -1,    -1,
      87,    88,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    72,    73,    74,     3,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    67,    -1,    -1,    70,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    68,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    72,    76,    91,    92,    94,   103,   106,   107,
     108,   109,   110,   111,   119,   122,   123,   127,   171,    67,
     171,   122,   109,   127,   128,     0,    92,    93,    66,   113,
     114,   122,   106,   106,   106,    67,   171,    95,   103,   105,
     106,    72,    74,   123,   120,   121,   171,    67,    73,   109,
     127,    66,    69,    70,    99,   105,   108,   109,   112,   115,
     116,    67,    67,   143,    97,   103,   122,   124,   125,   126,
       4,     5,     6,     7,     8,     9,    11,    12,    72,    75,
      76,    80,    83,    84,    87,    88,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   169,   170,   171,    68,    69,    70,   120,
     104,   114,    67,   133,   149,   151,   164,   143,   101,   116,
     116,    68,   115,    71,   117,   118,   122,   112,    53,    54,
      55,    57,    58,    59,    60,    61,    62,    63,    64,    66,
      68,   105,   138,   139,   141,   142,   144,   145,   146,   147,
     148,   149,   171,    96,   143,    73,   106,   129,   130,   131,
     132,   171,    72,   164,    72,   164,   164,   116,   135,   148,
      75,    20,    77,    19,    78,    79,    80,    17,    18,    15,
      16,    81,    82,    13,    14,    83,    84,    76,    85,    86,
     163,    10,    11,    12,    72,    74,    89,   121,   152,    68,
     133,   134,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    70,   150,   100,   143,   152,    66,    69,    71,
      68,   152,    71,    72,    72,    72,   138,    72,   171,    66,
      66,    66,   148,    68,   144,   143,    68,   138,    66,    69,
      71,    98,    72,    74,   122,   127,   136,   137,    73,    69,
      69,    73,   135,    72,   127,   136,    73,    73,   154,   148,
     155,   156,   157,   158,   159,   159,   160,   160,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   171,    73,   149,
     168,   148,   171,    68,    69,   149,   102,   118,   152,    71,
     138,   148,   148,   148,    58,    66,   148,    66,    66,    68,
     140,   149,   138,    73,   129,   136,    75,   152,   137,    72,
      74,    51,   131,   171,    73,   163,    71,    69,    73,    75,
      68,   133,   138,    73,    73,    73,    72,    66,   148,    66,
      73,    73,    75,    73,   129,    75,   152,   151,   149,   138,
     138,   138,   148,    73,   148,    66,    66,   148,    73,    75,
      56,    73,   138,    73,    73,   148,    73,   148,    66,   138,
      66,   138,   138,    73,   138,    73,    73,   148,   138,   138,
     138,    73,   138
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
#line 327 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 5:
#line 328 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).function_definition_node_1=(yyvsp[(1) - (2)].function_definition_val);
    (*anode).declaration_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 6:
#line 336 "ast_c_grammar.y"
    {
     external_declaration_node *anode;
anode = (external_declaration_node*) malloc(sizeof(external_declaration_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).function_definition_node_1= 0;
    (yyval.external_declaration_val) = anode;
}
    break;

  case 7:
#line 345 "ast_c_grammar.y"
    {st.push();}
    break;

  case 8:
#line 345 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 9:
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

  case 10:
#line 355 "ast_c_grammar.y"
    {st.push();}
    break;

  case 11:
#line 355 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 12:
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

  case 13:
#line 365 "ast_c_grammar.y"
    {st.push();}
    break;

  case 14:
#line 365 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 15:
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

  case 16:
#line 375 "ast_c_grammar.y"
    {st.push();}
    break;

  case 17:
#line 375 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 18:
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

  case 19:
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

  case 20:
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

  case 21:
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

  case 22:
#line 625 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_node_1=(yyvsp[(1) - (1)].declaration_val);
    (*anode).declaration_list_node_1= 0;
    (yyval.declaration_list_val) = anode;
}
    break;

  case 23:
#line 633 "ast_c_grammar.y"
    {
     declaration_list_node *anode;
anode = (declaration_list_node*) malloc(sizeof(declaration_list_node));
    (*anode).declaration_list_node_1=(yyvsp[(1) - (2)].declaration_list_val);
    (*anode).declaration_node_1=(yyvsp[(2) - (2)].declaration_val);
    (yyval.declaration_list_val) = anode;
}
    break;

  case 24:
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

  case 25:
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

  case 26:
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

  case 27:
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

  case 28:
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

  case 29:
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

  case 30:
#line 705 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 31:
#line 712 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 32:
#line 719 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 33:
#line 726 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 34:
#line 733 "ast_c_grammar.y"
    {
     storage_class_specifier_node *anode;
anode = (storage_class_specifier_node*) malloc(sizeof(storage_class_specifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.storage_class_specifier_val) = anode;
}
    break;

  case 35:
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

  case 36:
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

  case 37:
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

  case 38:
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

  case 39:
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

  case 40:
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

  case 41:
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

  case 42:
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

  case 43:
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

  case 44:
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

  case 45:
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

  case 46:
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

  case 47:
#line 852 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 48:
#line 859 "ast_c_grammar.y"
    {
     type_qualifier_node *anode;
anode = (type_qualifier_node*) malloc(sizeof(type_qualifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.type_qualifier_val) = anode;
}
    break;

  case 49:
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

  case 50:
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

  case 51:
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

  case 52:
#line 903 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 53:
#line 910 "ast_c_grammar.y"
    {
     struct_or_union_node *anode;
anode = (struct_or_union_node*) malloc(sizeof(struct_or_union_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.struct_or_union_val) = anode;
}
    break;

  case 54:
#line 919 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_node_1=(yyvsp[(1) - (1)].struct_declaration_val);
    (*anode).struct_declaration_list_node_1= 0;
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 55:
#line 927 "ast_c_grammar.y"
    {
     struct_declaration_list_node *anode;
anode = (struct_declaration_list_node*) malloc(sizeof(struct_declaration_list_node));
    (*anode).struct_declaration_list_node_1=(yyvsp[(1) - (2)].struct_declaration_list_val);
    (*anode).struct_declaration_node_1=(yyvsp[(2) - (2)].struct_declaration_val);
    (yyval.struct_declaration_list_val) = anode;
}
    break;

  case 56:
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

  case 57:
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

  case 58:
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

  case 59:
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

  case 60:
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

  case 61:
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

  case 62:
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

  case 63:
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

  case 64:
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

  case 65:
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

  case 66:
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

  case 67:
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

  case 68:
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

  case 69:
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

  case 70:
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

  case 71:
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

  case 72:
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

  case 73:
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

  case 74:
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

  case 75:
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

  case 76:
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

  case 77:
#line 1150 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).direct_declarator_node_1=(yyvsp[(1) - (1)].direct_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.declarator_val) = anode;
}
    break;

  case 78:
#line 1158 "ast_c_grammar.y"
    {
     declarator_node *anode;
anode = (declarator_node*) malloc(sizeof(declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_declarator_node_1=(yyvsp[(2) - (2)].direct_declarator_val);
    (yyval.declarator_val) = anode;
}
    break;

  case 79:
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

  case 80:
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

  case 81:
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

  case 82:
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

  case 83:
#line 1223 "ast_c_grammar.y"
    {st.push();}
    break;

  case 84:
#line 1224 "ast_c_grammar.y"
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

  case 85:
#line 1237 "ast_c_grammar.y"
    {st.push();}
    break;

  case 86:
#line 1238 "ast_c_grammar.y"
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

  case 87:
#line 1251 "ast_c_grammar.y"
    {st.push();}
    break;

  case 88:
#line 1252 "ast_c_grammar.y"
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

  case 89:
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

  case 90:
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

  case 91:
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

  case 92:
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

  case 93:
#line 1306 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_node_1=(yyvsp[(1) - (1)].type_qualifier_val);
    (*anode).type_qualifier_list_node_1= 0;
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 94:
#line 1314 "ast_c_grammar.y"
    {
     type_qualifier_list_node *anode;
anode = (type_qualifier_list_node*) malloc(sizeof(type_qualifier_list_node));
    (*anode).type_qualifier_list_node_1=(yyvsp[(1) - (2)].type_qualifier_list_val);
    (*anode).type_qualifier_node_1=(yyvsp[(2) - (2)].type_qualifier_val);
    (yyval.type_qualifier_list_val) = anode;
}
    break;

  case 95:
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

  case 96:
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

  case 97:
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

  case 98:
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

  case 99:
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

  case 100:
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

  case 101:
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

  case 102:
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

  case 103:
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

  case 104:
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

  case 105:
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

  case 106:
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

  case 107:
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

  case 108:
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

  case 109:
#line 1468 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (1)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1= 0;
    (yyval.type_name_val) = anode;
}
    break;

  case 110:
#line 1476 "ast_c_grammar.y"
    {
     type_name_node *anode;
anode = (type_name_node*) malloc(sizeof(type_name_node));
    (*anode).specifier_qualifier_list_node_1=(yyvsp[(1) - (2)].specifier_qualifier_list_val);
    (*anode).abstract_declarator_node_1=(yyvsp[(2) - (2)].abstract_declarator_val);
    (yyval.type_name_val) = anode;
}
    break;

  case 111:
#line 1486 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (1)].pointer_val);
    (*anode).direct_abstract_declarator_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 112:
#line 1494 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(1) - (1)].direct_abstract_declarator_val);
    (*anode).pointer_node_1= 0;
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 113:
#line 1502 "ast_c_grammar.y"
    {
     abstract_declarator_node *anode;
anode = (abstract_declarator_node*) malloc(sizeof(abstract_declarator_node));
    (*anode).pointer_node_1=(yyvsp[(1) - (2)].pointer_val);
    (*anode).direct_abstract_declarator_node_1=(yyvsp[(2) - (2)].direct_abstract_declarator_val);
    (yyval.abstract_declarator_val) = anode;
}
    break;

  case 114:
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

  case 115:
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

  case 116:
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

  case 117:
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

  case 118:
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

  case 119:
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

  case 120:
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

  case 121:
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

  case 122:
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

  case 123:
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

  case 124:
#line 1633 "ast_c_grammar.y"
    {st.push();}
    break;

  case 125:
#line 1633 "ast_c_grammar.y"
    {st.pop();}
    break;

  case 126:
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

  case 127:
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

  case 128:
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

  case 129:
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

  case 130:
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

  case 131:
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

  case 132:
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

  case 133:
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

  case 134:
#line 1731 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1= 0;
    (yyval.expression_statement_val) = anode;
}
    break;

  case 135:
#line 1739 "ast_c_grammar.y"
    {
     expression_statement_node *anode;
anode = (expression_statement_node*) malloc(sizeof(expression_statement_node));
    (*anode).char_lit_1="';'";
    (*anode).expression_node_1=(yyvsp[(1) - (2)].expression_val);
    (yyval.expression_statement_val) = anode;
}
    break;

  case 136:
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

  case 137:
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

  case 138:
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

  case 139:
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

  case 140:
#line 1791 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_node_1=(yyvsp[(1) - (1)].statement_val);
    (*anode).statement_list_node_1= 0;
    (yyval.statement_list_val) = anode;
}
    break;

  case 141:
#line 1799 "ast_c_grammar.y"
    {
     statement_list_node *anode;
anode = (statement_list_node*) malloc(sizeof(statement_list_node));
    (*anode).statement_list_node_1=(yyvsp[(1) - (2)].statement_list_val);
    (*anode).statement_node_1=(yyvsp[(2) - (2)].statement_val);
    (yyval.statement_list_val) = anode;
}
    break;

  case 142:
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

  case 143:
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

  case 144:
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

  case 145:
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

  case 146:
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

  case 147:
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

  case 148:
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

  case 149:
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

  case 150:
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

  case 151:
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

  case 152:
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

  case 153:
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

  case 154:
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

  case 155:
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

  case 156:
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

  case 157:
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

  case 158:
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

  case 159:
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

  case 160:
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

  case 161:
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

  case 162:
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

  case 163:
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

  case 164:
#line 2113 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).char_lit_1="'='";
    (*anode).token_1= 0;
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 165:
#line 2121 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 166:
#line 2129 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 167:
#line 2137 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 168:
#line 2145 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 169:
#line 2153 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 170:
#line 2161 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 171:
#line 2169 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 172:
#line 2177 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 173:
#line 2185 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 174:
#line 2193 "ast_c_grammar.y"
    {
     assignment_operator_node *anode;
anode = (assignment_operator_node*) malloc(sizeof(assignment_operator_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (*anode).char_lit_1= "";
    (yyval.assignment_operator_val) = anode;
}
    break;

  case 175:
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

  case 176:
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

  case 177:
#line 2227 "ast_c_grammar.y"
    {
     constant_expression_node *anode;
anode = (constant_expression_node*) malloc(sizeof(constant_expression_node));
    (*anode).conditional_expression_node_1=(yyvsp[(1) - (1)].conditional_expression_val);
    (yyval.constant_expression_val) = anode;
}
    break;

  case 178:
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

  case 179:
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

  case 180:
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

  case 181:
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

  case 182:
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

  case 183:
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

  case 184:
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

  case 185:
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

  case 186:
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

  case 187:
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

  case 188:
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

  case 189:
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

  case 190:
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

  case 191:
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

  case 192:
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

  case 193:
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

  case 194:
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

  case 195:
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

  case 196:
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

  case 197:
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

  case 198:
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

  case 199:
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

  case 200:
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

  case 201:
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

  case 202:
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

  case 203:
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

  case 204:
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

  case 205:
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

  case 206:
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

  case 207:
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

  case 208:
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

  case 209:
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

  case 210:
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

  case 211:
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

  case 212:
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

  case 213:
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

  case 214:
#line 2623 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'&'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 215:
#line 2630 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'*'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 216:
#line 2637 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'+'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 217:
#line 2644 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'-'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 218:
#line 2651 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'~'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 219:
#line 2658 "ast_c_grammar.y"
    {
     unary_operator_node *anode;
anode = (unary_operator_node*) malloc(sizeof(unary_operator_node));
    (*anode).char_lit_1="'!'";
    (yyval.unary_operator_val) = anode;
}
    break;

  case 220:
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

  case 221:
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

  case 222:
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

  case 223:
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

  case 224:
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

  case 225:
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

  case 226:
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

  case 227:
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

  case 228:
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

  case 229:
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

  case 230:
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

  case 231:
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

  case 232:
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

  case 233:
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

  case 234:
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

  case 235:
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

  case 236:
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

  case 237:
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

  case 238:
#line 2893 "ast_c_grammar.y"
    {
     string_node *anode;
anode = (string_node*) malloc(sizeof(string_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.string_val) = anode;
}
    break;

  case 239:
#line 2902 "ast_c_grammar.y"
    {
     identifier_node *anode;
anode = (identifier_node*) malloc(sizeof(identifier_node));
    (*anode).token_1=(yyvsp[(1) - (1)].sval);
    (yyval.identifier_val) = anode;
}
    break;


/* Line 1267 of yacc.c.  */
#line 5501 "y.tab.c"
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

