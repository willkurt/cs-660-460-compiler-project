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
#line 1 "new_c_grammar.y"

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

 

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 54 "new_c_grammar.y"
{
  //consider making this a string pointer
  char* sval;
  float dval;
  int ival;
  long lval;
  char cval;
  struct declNode *declval;
 }
/* Line 187 of yacc.c.  */
#line 289 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 302 "y.tab.c"

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
#define YYLAST   1383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNRULES -- Number of states.  */
#define YYNSTATES  403

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
      20,    21,    27,    28,    29,    35,    36,    37,    44,    48,
      49,    55,    56,    61,    62,    68,    69,    70,    71,    74,
      75,    79,    80,    83,    84,    88,    90,    91,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   139,   144,
     147,   149,   151,   153,   156,   158,   162,   164,   168,   172,
     174,   177,   179,   182,   184,   188,   190,   193,   197,   202,
     208,   211,   213,   217,   219,   223,   225,   228,   230,   234,
     238,   243,   247,   248,   254,   259,   261,   264,   267,   271,
     273,   276,   278,   282,   284,   288,   291,   293,   296,   298,
     302,   304,   308,   313,   315,   319,   321,   324,   326,   328,
     331,   335,   338,   342,   346,   351,   354,   358,   362,   367,
     369,   370,   371,   375,   377,   379,   381,   383,   387,   392,
     396,   398,   401,   404,   408,   412,   417,   419,   422,   428,
     436,   442,   448,   456,   463,   471,   479,   488,   496,   505,
     514,   524,   528,   531,   534,   537,   541,   543,   547,   549,
     553,   555,   557,   559,   561,   563,   565,   567,   569,   571,
     573,   575,   577,   583,   585,   587,   591,   593,   597,   599,
     603,   605,   609,   611,   615,   617,   621,   625,   627,   631,
     635,   639,   643,   645,   649,   653,   655,   659,   663,   665,
     669,   673,   677,   679,   684,   686,   689,   692,   695,   698,
     703,   705,   707,   709,   711,   713,   715,   717,   722,   726,
     731,   735,   739,   742,   745,   747,   749,   751,   755,   757,
     761,   763,   765,   767,   769,   771,   773
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    93,    -1,
     102,    -1,    -1,    -1,   130,    94,   149,    95,    -1,    -1,
      -1,   130,   104,    96,   149,    97,    -1,    -1,    -1,   109,
     130,    98,   149,    99,    -1,    -1,    -1,   109,   130,   104,
     100,   149,   101,    -1,   109,    66,   178,    -1,    -1,   109,
     121,   178,    66,   103,    -1,    -1,   107,   102,   108,   105,
      -1,    -1,   104,   107,   102,   108,   106,    -1,    -1,    -1,
      -1,   115,   110,    -1,    -1,   115,   109,   111,    -1,    -1,
     116,   112,    -1,    -1,   116,   109,   113,    -1,   117,    -1,
      -1,   117,   109,   114,    -1,    35,    -1,    36,    -1,    34,
      -1,    33,    -1,    32,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,   118,    -1,   127,    -1,    31,    -1,    45,
      -1,    46,    -1,   119,   177,    67,   120,    68,    -1,   119,
      67,   120,    68,    -1,   119,   177,    -1,    48,    -1,    49,
      -1,   123,    -1,   120,   123,    -1,   122,    -1,   121,    69,
     122,    -1,   130,    -1,   130,    70,   139,    -1,   124,   125,
      66,    -1,   116,    -1,   116,   124,    -1,   117,    -1,   117,
     124,    -1,   126,    -1,   125,    69,   126,    -1,   130,    -1,
      71,   158,    -1,   130,    71,   158,    -1,    50,    67,   128,
      68,    -1,    50,   177,    67,   128,    68,    -1,    50,   177,
      -1,   129,    -1,   128,    69,   129,    -1,   177,    -1,   177,
      70,   158,    -1,   131,    -1,   133,   131,    -1,   177,    -1,
      72,   130,    73,    -1,   131,    74,    75,    -1,   131,    74,
     158,    75,    -1,   131,    72,    73,    -1,    -1,   131,    72,
     132,   135,    73,    -1,   131,    72,   138,    73,    -1,    76,
      -1,    76,   134,    -1,    76,   133,    -1,    76,   134,   133,
      -1,   117,    -1,   134,   117,    -1,   136,    -1,   136,    69,
      51,    -1,   137,    -1,   136,    69,   137,    -1,   109,   130,
      -1,   109,    -1,   109,   142,    -1,   177,    -1,   138,    69,
     177,    -1,   155,    -1,    67,   140,    68,    -1,    67,   140,
      69,    68,    -1,   139,    -1,   140,    69,   139,    -1,   124,
      -1,   124,   142,    -1,   133,    -1,   143,    -1,   133,   143,
      -1,    72,   142,    73,    -1,    74,    75,    -1,    74,   158,
      75,    -1,   143,    74,    75,    -1,   143,    74,   158,    75,
      -1,    72,    73,    -1,    72,   135,    73,    -1,   143,    72,
      73,    -1,   143,    72,   135,    73,    -1,   147,    -1,    -1,
      -1,   145,   149,   146,    -1,   148,    -1,   151,    -1,   152,
      -1,   153,    -1,   177,    71,   144,    -1,    53,   158,    71,
     144,    -1,    54,    71,   144,    -1,    66,    -1,   154,    66,
      -1,    67,    68,    -1,    67,   150,    68,    -1,    67,   104,
      68,    -1,    67,   104,   150,    68,    -1,   144,    -1,   150,
     144,    -1,    55,    72,   154,    73,   144,    -1,    55,    72,
     154,    73,   144,    56,   144,    -1,    57,    72,   154,    73,
     144,    -1,    58,    72,   154,    73,   144,    -1,    59,   144,
      58,    72,   154,    73,    66,    -1,    60,    72,    66,    66,
      73,   144,    -1,    60,    72,    66,    66,   154,    73,   144,
      -1,    60,    72,    66,   154,    66,    73,   144,    -1,    60,
      72,    66,   154,    66,   154,    73,   144,    -1,    60,    72,
     154,    66,    66,    73,   144,    -1,    60,    72,   154,    66,
      66,   154,    73,   144,    -1,    60,    72,   154,    66,   154,
      66,    73,   144,    -1,    60,    72,   154,    66,   154,    66,
     154,    73,   144,    -1,    61,   177,    66,    -1,    62,    66,
      -1,    63,    66,    -1,    64,    66,    -1,    64,   154,    66,
      -1,   155,    -1,   154,    69,   155,    -1,   157,    -1,   170,
     156,   155,    -1,    70,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,   159,    -1,   159,    77,   154,
      71,   157,    -1,   157,    -1,   160,    -1,   159,    20,   160,
      -1,   161,    -1,   160,    19,   161,    -1,   162,    -1,   161,
      78,   162,    -1,   163,    -1,   162,    79,   163,    -1,   164,
      -1,   163,    80,   164,    -1,   165,    -1,   164,    17,   165,
      -1,   164,    18,   165,    -1,   166,    -1,   165,    81,   166,
      -1,   165,    82,   166,    -1,   165,    15,   166,    -1,   165,
      16,   166,    -1,   167,    -1,   166,    13,   167,    -1,   166,
      14,   167,    -1,   168,    -1,   167,    83,   168,    -1,   167,
      84,   168,    -1,   169,    -1,   168,    76,   169,    -1,   168,
      85,   169,    -1,   168,    86,   169,    -1,   170,    -1,    72,
     141,    73,   169,    -1,   172,    -1,    11,   170,    -1,    12,
     170,    -1,   171,   169,    -1,     9,   170,    -1,     9,    72,
     141,    73,    -1,    80,    -1,    76,    -1,    83,    -1,    84,
      -1,    87,    -1,    88,    -1,   173,    -1,   172,    74,   154,
      75,    -1,   172,    72,    73,    -1,   172,    72,   174,    73,
      -1,   172,    89,   177,    -1,   172,    10,   177,    -1,   172,
      11,    -1,   172,    12,    -1,   177,    -1,   175,    -1,   176,
      -1,    72,   154,    73,    -1,   155,    -1,   174,    69,   155,
      -1,     4,    -1,     6,    -1,     5,    -1,     7,    -1,     8,
      -1,     3,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   103,   109,   112,   118,   118,   118,   121,
     121,   121,   124,   124,   124,   127,   127,   127,   133,   137,
     136,   160,   160,   164,   163,   175,   179,   184,   183,   213,
     212,   243,   242,   305,   304,   364,   378,   377,   397,   401,
     405,   409,   413,   420,   424,   428,   465,   596,   665,   683,
     721,   725,   730,   734,   738,   744,   748,   755,   758,   761,
     767,   771,   778,   781,   787,   791,   798,   802,   808,   814,
     817,   820,   823,   829,   832,   838,   841,   844,   850,   853,
     856,   862,   865,   871,   874,   881,   885,   896,   903,   910,
     917,   923,   930,   930,   937,   947,   950,   953,   956,   962,
     965,   971,   974,   980,   983,   989,   992,   995,  1001,  1008,
    1019,  1022,  1025,  1031,  1034,  1040,  1043,  1049,  1052,  1055,
    1061,  1064,  1067,  1070,  1073,  1076,  1079,  1082,  1085,  1091,
    1094,  1094,  1094,  1097,  1100,  1103,  1106,  1112,  1115,  1118,
    1124,  1127,  1133,  1136,  1139,  1142,  1148,  1151,  1157,  1160,
    1163,  1169,  1172,  1175,  1178,  1181,  1184,  1187,  1190,  1193,
    1196,  1202,  1205,  1208,  1211,  1214,  1220,  1223,  1229,  1232,
    1238,  1241,  1244,  1247,  1250,  1253,  1256,  1259,  1262,  1265,
    1268,  1274,  1277,  1283,  1289,  1292,  1298,  1301,  1307,  1310,
    1316,  1319,  1325,  1328,  1334,  1337,  1340,  1346,  1349,  1352,
    1355,  1358,  1364,  1367,  1370,  1376,  1379,  1382,  1388,  1391,
    1394,  1397,  1403,  1406,  1412,  1415,  1418,  1421,  1424,  1427,
    1433,  1436,  1439,  1442,  1445,  1448,  1454,  1457,  1460,  1463,
    1466,  1469,  1472,  1475,  1481,  1484,  1487,  1490,  1496,  1499,
    1505,  1508,  1511,  1514,  1520,  1526,  1539
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
  "declaration", "@9", "declaration_list", "@10", "@11", "start_decl",
  "end_decl", "declaration_specifiers", "@12", "@13", "@14", "@15", "@16",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "@17", "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@18", "@19",
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
  "identifier", "identifier_flag_clear", 0
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
     102,   105,   104,   106,   104,   107,   108,   110,   109,   111,
     109,   112,   109,   113,   109,   109,   114,   109,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   132,   131,   131,   133,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   138,   138,
     139,   139,   139,   140,   140,   141,   141,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     145,   146,   144,   144,   144,   144,   144,   147,   147,   147,
     148,   148,   149,   149,   149,   149,   150,   150,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   157,   157,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   164,   165,   165,   165,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   170,   170,   170,   170,   170,
     171,   171,   171,   171,   171,   171,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   174,   174,
     175,   175,   175,   175,   176,   177,   178
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     3,     0,
       5,     0,     4,     0,     5,     0,     0,     0,     2,     0,
       3,     0,     2,     0,     3,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     1,     3,     1,     3,     3,     1,
       2,     1,     2,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     2,     1,     3,     3,
       4,     3,     0,     5,     4,     1,     2,     2,     3,     1,
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
       1,     1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   245,    54,    42,    41,    40,    38,    39,    44,    45,
      46,    47,    50,    51,    48,    49,    55,    56,    43,    60,
      61,     0,     0,    95,     0,     2,     4,     5,     0,    27,
      31,    35,    52,     0,    53,    25,    85,     0,    87,     0,
      80,     0,    99,    97,    96,     1,     3,   246,   246,    64,
      25,    29,    28,    33,    32,    36,     0,    59,     0,    25,
       0,    92,     0,    86,     0,    81,    83,     0,    88,   100,
      98,    18,     0,     0,     0,     0,    25,    30,    34,    37,
      69,    71,     0,    62,     0,     0,    25,     7,     0,     0,
      26,     0,    91,     0,     0,   108,   240,   242,   241,   243,
     244,     0,     0,     0,     0,    89,   221,   220,   222,   223,
     224,   225,   183,     0,   181,   184,   186,   188,   190,   192,
     194,   197,   202,   205,   208,   212,     0,   214,   226,   235,
     236,   234,    78,     0,     0,     0,    65,    66,    19,     0,
      67,   110,   168,   212,    13,     0,    70,    72,    58,    63,
       0,     0,    73,    75,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,   140,   142,    25,   146,
       0,   129,   133,   130,   134,   135,   136,     0,   166,   234,
       8,    10,    26,    21,   106,     0,   101,   103,     0,    94,
       0,   218,     0,   215,   216,   115,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
     232,   233,     0,     0,     0,    82,    84,    79,    20,   113,
       0,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   170,     0,    14,    16,    76,    68,     0,     0,    57,
       0,   130,     0,     0,     0,     0,     0,     0,   162,   163,
     164,     0,   144,   130,   131,   143,   147,   141,     0,   130,
      11,    23,    22,     0,     0,   105,   117,   107,   118,    93,
       0,   109,     0,     0,   117,   116,     0,   237,   185,     0,
     187,   189,   191,   193,   195,   196,   200,   201,   198,   199,
     203,   204,   206,   207,   209,   210,   211,   231,   228,   238,
       0,     0,   230,   111,     0,   169,    17,    74,    77,   130,
     139,     0,     0,     0,     0,     0,     0,   161,   165,   145,
     132,   167,   137,    24,   125,     0,     0,   121,     0,   119,
       0,     0,   102,   104,   219,   213,     0,     0,   229,   227,
     112,   114,   138,   130,   130,   130,     0,     0,     0,     0,
     126,   120,   122,   127,     0,   123,     0,   182,   239,   148,
     150,   151,     0,   130,     0,     0,     0,     0,   128,   124,
     130,     0,   153,   130,   130,     0,   130,     0,     0,   149,
     152,   154,   155,   130,   157,   130,   130,     0,   156,   158,
     159,   130,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    58,   180,    88,   270,    75,   243,
     145,   316,    27,   228,    59,   272,   333,    60,   183,   184,
      52,    77,    54,    78,    79,    29,    30,    31,    32,    33,
      82,    48,    49,    83,    84,   151,   152,    34,    64,    65,
      35,    36,    93,    37,    44,   335,   186,   187,    94,   140,
     230,   196,   336,   278,   169,   170,   330,   171,   172,    87,
     173,   174,   175,   176,   177,   178,   242,   142,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     143,   126,   127,   128,   310,   129,   130,   131,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -226
static const yytype_int16 yypact[] =
{
    1246,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,    35,    51,   -28,  1195,  -226,  -226,  -226,    50,  1333,
    1333,  1333,  -226,    41,  -226,   -32,   -38,    43,  -226,    66,
      23,    26,  -226,  -226,   -28,  -226,  -226,  -226,    49,  -226,
     138,  -226,  -226,  -226,  -226,  -226,   378,   102,   107,   109,
    1333,     5,   713,   -38,   127,  -226,    40,    66,  -226,  -226,
    -226,  -226,    51,    93,   727,   107,   165,  -226,  -226,  -226,
     378,   378,   320,  -226,   121,   378,   447,  -226,   107,  1333,
    -226,    50,  -226,  1333,   -17,  -226,  -226,  -226,  -226,  -226,
    -226,  1096,  1106,  1106,   399,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,   146,    44,   163,   167,   164,   180,   278,
     174,   284,   220,    95,  -226,  -226,  1116,   216,  -226,  -226,
    -226,  -226,  -226,    66,  1116,   249,  -226,   202,  -226,   727,
    -226,  -226,  -226,   286,  -226,   107,  -226,  -226,  -226,  -226,
    1116,    92,  -226,   203,  1095,  1116,   210,   205,   211,   234,
     693,   260,    66,   268,   269,   813,  -226,  -226,   485,  -226,
     107,  -226,  -226,   571,  -226,  -226,  -226,   143,  -226,   265,
    -226,  -226,  -226,  -226,     9,   264,   270,  -226,    66,  -226,
     399,  -226,  1116,  -226,  -226,   157,   271,   -11,  -226,  1116,
    1116,  1116,  1116,  1116,  1116,  1116,  1116,  1116,  1116,  1116,
    1116,  1116,  1116,  1116,  1116,  1116,  1116,  1116,  -226,    66,
    -226,  -226,   826,  1116,    66,  -226,  -226,  -226,  -226,  -226,
     253,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  1116,  -226,  -226,  -226,  -226,   121,  1116,  -226,
     267,   693,  1116,  1116,  1116,   283,   839,   279,  -226,  -226,
    -226,   149,  -226,   607,  -226,  -226,  -226,  -226,  1116,   693,
    -226,  -226,  -226,  1174,   849,  -226,    57,  -226,    58,  -226,
    1312,  -226,   273,  1266,    65,  -226,  1116,  -226,   163,   -14,
     167,   164,   180,   278,   174,   174,   284,   284,   284,   284,
     220,   220,    95,    95,  -226,  -226,  -226,  -226,  -226,  -226,
      -3,   -46,  -226,  -226,   703,  -226,  -226,  -226,  -226,   693,
    -226,   133,   166,   171,   275,   862,   154,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,   276,   277,  -226,   296,    58,
     554,   948,  -226,  -226,  -226,  -226,  1116,  1116,  -226,  -226,
    -226,  -226,  -226,   693,   693,   693,  1116,   961,   168,   974,
    -226,  -226,  -226,  -226,   299,  -226,   300,  -226,  -226,   318,
    -226,  -226,   173,   693,   179,   987,  1000,   196,  -226,  -226,
     693,   310,  -226,   693,   693,   184,   693,   185,  1086,  -226,
    -226,  -226,  -226,   693,  -226,   693,   693,   206,  -226,  -226,
    -226,   693,  -226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,   328,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,   -44,  -226,   -36,  -226,  -226,   -49,   195,   170,
    -226,  -226,  -226,  -226,  -226,  -226,    32,    24,  -226,  -226,
     293,  -226,   307,   -75,   -55,  -226,   134,  -226,   315,   252,
      -9,   -35,  -226,   -12,  -226,   -90,  -226,   110,  -226,  -135,
    -226,   197,  -164,  -225,   -53,  -226,  -226,  -226,  -226,   -45,
     221,  -226,  -226,  -226,   -89,   -65,  -226,   -57,   -63,  -226,
     192,   191,   198,   194,   190,   118,    84,   114,   115,  -120,
     -61,  -226,  -226,  -226,  -226,  -226,  -226,     0,   350
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -131
static const yytype_int16 yytable[] =
{
      38,   125,    63,   185,   229,   112,   218,   149,     1,   141,
      89,    43,     1,    41,    76,   197,    90,    16,    17,    50,
     277,    40,    38,   268,    38,   146,   147,    89,    38,   349,
     144,   285,    70,    57,    61,    -6,    62,    38,     1,    66,
     191,   193,   194,   181,     1,   182,     1,    42,    23,   195,
     168,   339,   188,     1,     1,   268,   189,   346,   268,   339,
       1,    95,   287,   137,   199,   125,   347,    66,    69,     1,
     348,   226,    38,   125,   141,   153,   261,   112,    92,   149,
      81,   273,   137,   274,    38,    23,   179,   245,    80,   125,
      67,    38,   250,   112,   125,   304,   305,   306,   112,    68,
     244,   197,    39,   197,    81,    81,    81,   255,    56,    81,
     134,   289,    80,    80,    80,    22,    47,    80,    72,    89,
     266,   200,    22,    22,     1,   264,    23,    23,    81,   273,
     340,   274,   341,    66,   311,   195,    80,   283,   125,   274,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   309,   246,   138,
     179,   247,   257,   321,   322,   323,   345,   326,   179,    85,
      28,   215,   276,   179,    86,   275,    -9,   315,    81,   351,
     216,   217,   201,   284,    38,   318,    80,   125,   281,   207,
     208,   112,   150,    22,    28,   132,   133,    23,   320,    51,
      53,    55,   268,   331,   -66,   -12,   353,   -66,    74,   267,
     266,   338,   268,   125,    81,   328,   332,   112,   268,   307,
     359,   198,    80,   268,   312,   125,   219,   220,   221,   283,
      91,   274,   -15,    23,   375,   268,   358,   268,   153,   354,
     268,    63,   268,   203,   355,   202,   381,    38,   268,   141,
     364,   179,   383,   268,   268,   209,   210,   393,   395,    91,
     204,   276,   388,   179,    41,   268,   352,   372,   374,   179,
     377,   284,    74,    38,   248,   268,    38,   252,   366,   401,
     125,   251,   368,   253,   112,   125,   385,   387,   222,   367,
     223,   296,   297,   298,   299,   205,   206,   211,   212,   397,
     369,   370,   371,   213,   214,   224,   254,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   227,   133,   179,
     382,   313,   314,   294,   295,   300,   301,   389,   302,   303,
     391,   392,   256,   394,   258,   259,   269,   279,   319,   280,
     398,   324,   399,   400,   286,   327,   344,   356,   402,   360,
     361,     2,    46,   179,   179,   179,   241,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   362,   378,   179,   380,   379,   390,   271,   154,   136,
     179,   317,   135,   179,   179,   225,   179,   282,   148,   263,
     343,   288,   290,   179,   293,   179,   179,   292,    73,     0,
     291,   179,     1,    96,    97,    98,    99,   100,   101,     2,
     102,   103,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       2,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,     0,   106,     0,     0,     0,   107,
       0,     0,   108,   109,     0,     0,   110,   111,     1,    96,
      97,    98,    99,   100,   101,     0,   102,   103,     0,     0,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
     164,   165,     0,   166,  -130,   167,     0,     0,     0,   104,
       0,     0,     0,   106,     0,     0,     0,   107,     0,     0,
     108,   109,     0,     0,   110,   111,     0,     0,   155,   156,
     157,     0,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   166,  -130,   262,     0,     0,     0,   104,     0,     0,
       0,   106,     0,     0,     0,   107,     0,     0,   108,   109,
       0,     0,   110,   111,     1,    96,    97,    98,    99,   100,
     101,     0,   102,   103,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,   155,   156,   157,   363,   158,   159,
     160,   161,   162,   163,   164,   165,     0,   166,     0,   265,
       0,     0,     0,   104,     0,     0,     0,   106,     0,     0,
       0,   107,     0,     0,   108,   109,     0,     0,   110,   111,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
     164,   165,     0,   166,     0,   329,     0,     0,     0,   104,
       0,     0,     0,   106,     0,     0,     0,   107,     0,     0,
     108,   109,     0,     0,   110,   111,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     0,     0,     0,     0,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     0,     0,     0,   155,   156,   157,     0,
     158,   159,   160,   161,   162,   163,   164,   165,     0,   166,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   106,
     139,   350,     0,   107,     0,   104,   108,   109,     0,   106,
     110,   111,     0,   107,     0,   104,   108,   109,   105,   106,
     110,   111,     0,   107,   139,     0,   108,   109,     0,   104,
     110,   111,     0,   106,     0,     0,     0,   107,     0,     0,
     108,   109,     0,     0,   110,   111,     1,    96,    97,    98,
      99,   100,   101,     0,   102,   103,     0,     0,     0,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     0,
       0,     0,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     1,    96,    97,    98,    99,   100,   101,     0,
     102,   103,     0,     0,     0,     1,    96,    97,    98,    99,
     100,   101,     0,   102,   103,     0,     0,     0,     0,   260,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   106,
       0,     0,     0,   107,     0,     0,   108,   109,   104,   308,
     110,   111,   106,     0,     0,   325,   107,     0,     0,   108,
     109,   104,     0,   110,   111,   106,     0,     0,     0,   107,
       0,   104,   108,   109,   337,   106,   110,   111,   357,   107,
       0,     0,   108,   109,   104,     0,   110,   111,   106,     0,
       0,     0,   107,     0,     0,   108,   109,     0,     0,   110,
     111,     1,    96,    97,    98,    99,   100,   101,     0,   102,
     103,     0,     0,     0,     1,    96,    97,    98,    99,   100,
     101,     0,   102,   103,     0,     0,     0,     1,    96,    97,
      98,    99,   100,   101,     0,   102,   103,     0,     0,     0,
       1,    96,    97,    98,    99,   100,   101,     0,   102,   103,
       0,     0,     0,     1,    96,    97,    98,    99,   100,   101,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
     104,     0,     0,   365,   106,     0,     0,     0,   107,     0,
       0,   108,   109,   104,   373,   110,   111,   106,     0,     0,
     376,   107,     0,     0,   108,   109,   104,     0,   110,   111,
     106,     0,     0,     0,   107,     0,     0,   108,   109,   104,
     384,   110,   111,   106,     0,     0,     0,   107,     0,     0,
     108,   109,   104,   386,   110,   111,   106,     0,     0,     0,
     107,     0,     0,   108,   109,     0,     0,   110,   111,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     1,
      96,    97,    98,    99,   100,   101,     0,   102,   103,     1,
      96,    97,    98,    99,   100,   101,     2,   102,   103,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,   396,
       0,     0,   106,   249,     0,     0,   107,     0,   190,   108,
     109,     0,   106,   110,   111,     0,   107,     1,   192,   108,
     109,     0,   106,   110,   111,     0,   107,     0,   104,   108,
     109,     0,   106,   110,   111,    45,   107,     0,     1,   108,
     109,     0,     0,   110,   111,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   273,   334,   274,     1,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,   334,
     274,     0,    23,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   342,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    62,    37,    93,   139,    62,   126,    82,     3,    74,
      59,    23,     3,    22,    50,   104,    60,    45,    46,    28,
     184,    21,    22,    69,    24,    80,    81,    76,    28,    75,
      75,   195,    44,    33,    72,    67,    74,    37,     3,    39,
     101,   102,   103,    88,     3,    89,     3,    23,    76,   104,
      86,   276,    69,     3,     3,    69,    73,    71,    69,   284,
       3,    61,    73,    72,    20,   126,    69,    67,    44,     3,
      73,   134,    72,   134,   139,    84,   165,   134,    73,   154,
      56,    72,    91,    74,    84,    76,    86,   150,    56,   150,
      67,    91,   155,   150,   155,   215,   216,   217,   155,    73,
     145,   190,    67,   192,    80,    81,    82,   160,    67,    85,
      70,   200,    80,    81,    82,    72,    66,    85,    69,   168,
     173,    77,    72,    72,     3,   170,    76,    76,   104,    72,
      72,    74,    74,   133,   223,   190,   104,    72,   199,    74,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   222,    66,    66,
     160,    69,   162,   252,   253,   254,   286,   256,   168,    67,
       0,    76,   184,   173,    67,   184,    67,   242,   154,   314,
      85,    86,    19,   195,   184,   248,   154,   248,   188,    15,
      16,   248,    71,    72,    24,    68,    69,    76,   251,    29,
      30,    31,    69,   268,    66,    67,    73,    69,    70,    66,
     263,   274,    69,   274,   190,    66,   269,   274,    69,   219,
      66,    75,   190,    69,   224,   286,    10,    11,    12,    72,
      60,    74,    67,    76,    66,    69,   325,    69,   247,    73,
      69,   276,    69,    79,    73,    78,    73,   247,    69,   314,
     340,   251,    73,    69,    69,    81,    82,    73,    73,    89,
      80,   273,    66,   263,   273,    69,   319,   356,   357,   269,
     359,   283,    70,   273,    71,    69,   276,    72,   341,    73,
     341,    71,   347,    72,   341,   346,   375,   376,    72,   346,
      74,   207,   208,   209,   210,    17,    18,    13,    14,   388,
     353,   354,   355,    83,    84,    89,    72,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    68,    69,   319,
     373,    68,    69,   205,   206,   211,   212,   380,   213,   214,
     383,   384,    72,   386,    66,    66,    71,    73,    71,    69,
     393,    58,   395,   396,    73,    66,    73,    72,   401,    73,
      73,    31,    24,   353,   354,   355,    70,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    75,    73,   373,    56,    75,    66,   182,    85,    72,
     380,   247,    67,   383,   384,   133,   386,   190,    68,   168,
     280,   199,   201,   393,   204,   395,   396,   203,    48,    -1,
     202,   401,     3,     4,     5,     6,     7,     8,     9,    31,
      11,    12,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,
      -1,    -1,    87,    88,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    53,    54,    55,    73,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    66,    -1,    68,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      67,    68,    -1,    80,    -1,    72,    83,    84,    -1,    76,
      87,    88,    -1,    80,    -1,    72,    83,    84,    75,    76,
      87,    88,    -1,    80,    67,    -1,    83,    84,    -1,    72,
      87,    88,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    83,    84,    72,    73,
      87,    88,    76,    -1,    -1,    66,    80,    -1,    -1,    83,
      84,    72,    -1,    87,    88,    76,    -1,    -1,    -1,    80,
      -1,    72,    83,    84,    75,    76,    87,    88,    66,    80,
      -1,    -1,    83,    84,    72,    -1,    87,    88,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    72,    73,    87,    88,    76,    -1,    -1,
      66,    80,    -1,    -1,    83,    84,    72,    -1,    87,    88,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    72,
      73,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    72,    73,    87,    88,    76,    -1,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    31,    11,    12,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    76,    68,    -1,    -1,    80,    -1,    72,    83,
      84,    -1,    76,    87,    88,    -1,    80,     3,    72,    83,
      84,    -1,    76,    87,    88,    -1,    80,    -1,    72,    83,
      84,    -1,    76,    87,    88,     0,    80,    -1,     3,    83,
      84,    -1,    -1,    87,    88,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    72,    73,    74,     3,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    31,    32,    33,    34,    35,    36,    37,
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
      49,    50,    72,    76,    91,    92,    93,   102,   109,   115,
     116,   117,   118,   119,   127,   130,   131,   133,   177,    67,
     177,   130,   117,   133,   134,     0,    92,    66,   121,   122,
     130,   109,   110,   109,   112,   109,    67,   177,    94,   104,
     107,    72,    74,   131,   128,   129,   177,    67,    73,   117,
     133,   178,    69,   178,    70,    98,   104,   111,   113,   114,
     116,   117,   120,   123,   124,    67,    67,   149,    96,   107,
     102,   109,    73,   132,   138,   177,     4,     5,     6,     7,
       8,     9,    11,    12,    72,    75,    76,    80,    83,    84,
      87,    88,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   175,
     176,   177,    68,    69,    70,   128,   122,   130,    66,    67,
     139,   155,   157,   170,   149,   100,   124,   124,    68,   123,
      71,   125,   126,   130,   120,    53,    54,    55,    57,    58,
      59,    60,    61,    62,    63,    64,    66,    68,   104,   144,
     145,   147,   148,   150,   151,   152,   153,   154,   155,   177,
      95,   149,   102,   108,   109,   135,   136,   137,    69,    73,
      72,   170,    72,   170,   170,   124,   141,   154,    75,    20,
      77,    19,    78,    79,    80,    17,    18,    15,    16,    81,
      82,    13,    14,    83,    84,    76,    85,    86,   169,    10,
      11,    12,    72,    74,    89,   129,   158,    68,   103,   139,
     140,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    70,   156,    99,   149,   158,    66,    69,    71,    68,
     158,    71,    72,    72,    72,   144,    72,   177,    66,    66,
      66,   154,    68,   150,   149,    68,   144,    66,    69,    71,
      97,   108,   105,    72,    74,   130,   133,   142,   143,    73,
      69,   177,   141,    72,   133,   142,    73,    73,   160,   154,
     161,   162,   163,   164,   165,   165,   166,   166,   166,   166,
     167,   167,   168,   168,   169,   169,   169,   177,    73,   155,
     174,   154,   177,    68,    69,   155,   101,   126,   158,    71,
     144,   154,   154,   154,    58,    66,   154,    66,    66,    68,
     146,   155,   144,   106,    73,   135,   142,    75,   158,   143,
      72,    74,    51,   137,    73,   169,    71,    69,    73,    75,
      68,   139,   144,    73,    73,    73,    72,    66,   154,    66,
      73,    73,    75,    73,   135,    75,   158,   157,   155,   144,
     144,   144,   154,    73,   154,    66,    66,   154,    73,    75,
      56,    73,   144,    73,    73,   154,    73,   154,    66,   144,
      66,   144,   144,    73,   144,    73,    73,   154,   144,   144,
     144,    73,   144
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
#line 101 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "translation_unit <- external_declaration\n";}}
    break;

  case 3:
#line 104 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "translation_unit <- translation_unit external_declaration\n";}}
    break;

  case 4:
#line 110 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "external_declaration <- function_definition\n";}}
    break;

  case 5:
#line 113 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "external_declaration <- declaration\n";}}
    break;

  case 6:
#line 118 "new_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 118 "new_c_grammar.y"
    {st.pop();}
    break;

  case 8:
#line 119 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "function_definition <- declarator compound_statement\n";}}
    break;

  case 9:
#line 121 "new_c_grammar.y"
    {st.push();}
    break;

  case 10:
#line 121 "new_c_grammar.y"
    {st.pop();}
    break;

  case 11:
#line 122 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declarator declaration_list compound_statement\n";}}
    break;

  case 12:
#line 124 "new_c_grammar.y"
    {st.push();}
    break;

  case 13:
#line 124 "new_c_grammar.y"
    {st.pop();}
    break;

  case 14:
#line 125 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator compound_statement\n";}}
    break;

  case 15:
#line 127 "new_c_grammar.y"
    {st.push();}
    break;

  case 16:
#line 127 "new_c_grammar.y"
    {st.pop();}
    break;

  case 17:
#line 128 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator declaration_list compound_statement\n";}}
    break;

  case 18:
#line 134 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers ';'\n";}}
    break;

  case 19:
#line 137 "new_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (4)].declval);
  SymbolContent *sc = st.searchAll((*(yyvsp[(2) - (4)].declval)).id);
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
      st.update((*(yyvsp[(2) - (4)].declval)).id,newsc);
    }
  SymbolContent *sn = st.searchAll((*(yyvsp[(2) - (4)].declval)).id);
 }
    break;

  case 20:
#line 155 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers init_declarator_list ';'\n";}}
    break;

  case 21:
#line 160 "new_c_grammar.y"
    {(yyval.declval) = (yyvsp[(2) - (3)].declval);}
    break;

  case 22:
#line 161 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration\n";}}
    break;

  case 23:
#line 164 "new_c_grammar.y"
    {
  declNode dn = *(yyvsp[(3) - (4)].declval);
  dn.next = (yyvsp[(1) - (4)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 24:
#line 170 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration_list declaration\n";}}
    break;

  case 25:
#line 175 "new_c_grammar.y"
    {declMode = true;}
    break;

  case 26:
#line 179 "new_c_grammar.y"
    {declMode = false;}
    break;

  case 27:
#line 184 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier\n";}}
    break;

  case 28:
#line 186 "new_c_grammar.y"
    {
  declNode dn;
  dn.specs = 0;
  if((yyvsp[(1) - (2)].sval)=="AUTO")
    {
      dn.specs |= xAUTO;
    }
  else if((yyvsp[(1) - (2)].sval) == "REGISTER")
    {
      dn.specs |= xREGISTER;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "STATIC")
    {
      dn.specs |= xSTATIC;
    }
  else if((yyvsp[(1) - (2)].sval) == "EXTERN")
    {
      dn.specs |= xEXTERN;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "TYPEDEF")
    {   
      dn.specs |= xTYPEDEF;
    }
    (yyval.declval) = &dn;
 }
    break;

  case 29:
#line 213 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier declaration_specifiers\n";}
 }
    break;

  case 30:
#line 216 "new_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (3)].declval);
  if((yyvsp[(1) - (3)].sval)=="AUTO")
    {
      dn.specs |= xAUTO;
    }
  else if((yyvsp[(1) - (3)].sval) == "REGISTER")
    {
      dn.specs |= xREGISTER;
    }
  else if((yyvsp[(1) - (3)].sval) ==  "STATIC")
    {
      dn.specs |= xSTATIC;
    }
  else if((yyvsp[(1) - (3)].sval) == "EXTERN")
    {
      dn.specs |= xEXTERN;
    }
  else if((yyvsp[(1) - (3)].sval) ==  "TYPEDEF")
    {   
      dn.specs |= xTYPEDEF;
    }
    (yyval.declval) = &dn;
 
}
    break;

  case 31:
#line 243 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier\n";}
  }
    break;

  case 32:
#line 246 "new_c_grammar.y"
    {
  declNode dn;
  dn.specs = 0;
  if((yyvsp[(1) - (2)].sval) == "VOID")
    {
      dn.specs |= xVOID;
    }
  else if((yyvsp[(1) - (2)].sval) == "CHAR")
    {
      dn.specs |= xCHAR;
    }
  else if((yyvsp[(1) - (2)].sval) == "SHORT")
    {
      dn.specs |= xSHORT;
    }
  else if((yyvsp[(1) - (2)].sval) == "INT")
    {
      dn.specs |= xINT;
      }
  else if((yyvsp[(1) - (2)].sval) == "LONG")
    {
      dn.specs |= xLONG;
    }
  else if((yyvsp[(1) - (2)].sval) == "FLOAT")
    {
      dn.specs |= xFLOAT;
    }
  else if((yyvsp[(1) - (2)].sval) == "DOUBLE")
    {
      dn.specs |= xDOUBLE;
    }
  else if((yyvsp[(1) - (2)].sval) == "SIGNED")
    {
      dn.specs  |= xSIGNED;
    }
  else if((yyvsp[(1) - (2)].sval) == "UNSIGNED")
    {
      dn.specs |= xUNSIGNED; 
    }
  else if((yyvsp[(1) - (2)].sval) == "STRUCT")
    {
      dn.specs |= xSTRUCT;
    }
  else if((yyvsp[(1) - (2)].sval) == "UNION" )
    {
      dn.specs |= xUNION;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "ENUM")
    {
      dn.specs  |= xENUM;
    }
  else if((yyvsp[(1) - (2)].sval) == "TYPEDEF_NAME")
    {
      dn.specs |=  xTYPEDEF_NAME;
      }
(yyval.declval)=&dn;
}
    break;

  case 33:
#line 305 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier declaration_specifiers\n";}
 }
    break;

  case 34:
#line 308 "new_c_grammar.y"
    {
     declNode dn = *(yyvsp[(2) - (3)].declval);
 if((yyvsp[(1) - (3)].sval) == "VOID")
    {
      dn.specs |= xVOID;
    }
  else if((yyvsp[(1) - (3)].sval) == "CHAR")
    {
      dn.specs |= xCHAR;
    }
  else if((yyvsp[(1) - (3)].sval) == "SHORT")
    {
      dn.specs |= xSHORT;
    }
  else if((yyvsp[(1) - (3)].sval) == "INT")
    {
      dn.specs |= xINT;
    }
  else if((yyvsp[(1) - (3)].sval) == "LONG")
    {
      dn.specs |= xLONG;
    }
  else if((yyvsp[(1) - (3)].sval) == "FLOAT")
    {
      dn.specs |= xFLOAT;
    }
  else if((yyvsp[(1) - (3)].sval) == "DOUBLE")
    {
      dn.specs |= xDOUBLE;
    }
  else if((yyvsp[(1) - (3)].sval) == "SIGNED")
    {
      dn.specs  |= xSIGNED;
    }
  else if((yyvsp[(1) - (3)].sval) == "UNSIGNED")
    {
      dn.specs |= xUNSIGNED; 
    }
  else if((yyvsp[(1) - (3)].sval) == "STRUCT")
    {
      dn.specs |= xSTRUCT;
    }
  else if((yyvsp[(1) - (3)].sval) == "UNION" )
    {
      dn.specs |= xUNION;
    }
  else if((yyvsp[(1) - (3)].sval) ==  "ENUM")
    {
      dn.specs  |= xENUM;
    }
  else if((yyvsp[(1) - (3)].sval) == "TYPEDEF_NAME")
    {
      dn.specs |=  xTYPEDEF_NAME;
    }
 (yyval.declval) = &dn;
 }
    break;

  case 35:
#line 365 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier\n";}
  
  if((yyvsp[(1) - (1)].sval) == "CONST")
    {
      (yyval.declval)[18] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "VOLATILE")
    {
      (yyval.declval)[19] = true;
    }
}
    break;

  case 36:
#line 378 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier declaration_specifiers\n";}
}
    break;

  case 37:
#line 381 "new_c_grammar.y"
    {
  declNode dn  = *(yyvsp[(2) - (3)].declval);
  if((yyvsp[(1) - (3)].sval) == "CONST")
    {
      dn.specs  |= xCONST;
    }
  else if((yyvsp[(1) - (3)].sval) == "VOLATILE")
    {
      dn.specs |= xVOLATILE;
      }
  (yyval.declval) = &dn;

}
    break;

  case 38:
#line 398 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- AUTO\n";}
    (yyval.sval) = "AUTO";}
    break;

  case 39:
#line 402 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- REGISTER\n";}
    (yyval.sval) = "REGISTER";}
    break;

  case 40:
#line 406 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- STATIC\n";}
    (yyval.sval) = "STATIC";}
    break;

  case 41:
#line 410 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- EXTERN\n";}
    (yyval.sval) = "EXTERN";}
    break;

  case 42:
#line 414 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- TYPEDEF\n";}
    (yyval.sval) = "TYPEDEF";}
    break;

  case 43:
#line 421 "new_c_grammar.y"
    {(yyval.sval) = "VOID";if(parseDebug)
    {parseDebugOut << "type_specifier <- VOID\n";}
    (yyval.sval) = "VOID";}
    break;

  case 44:
#line 425 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "type_specifier <- CHAR\n";}
    (yyval.sval) = "CHAR	";}
    break;

  case 45:
#line 429 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "type_specifier <- SHORT\n";}
    (yyval.sval) = "SHORT";
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
    break;

  case 46:
#line 466 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "type_specifier <- INT\n";}
    (yyval.sval) = "INT";
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
    break;

  case 47:
#line 597 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_specifier <- LONG\n";}
	(yyval.sval) = "LONG";
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
    break;

  case 48:
#line 666 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_specifier <- FLOAT\n";}
	(yyval.sval) = "FLOAT";
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
    break;

  case 49:
#line 684 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- DOUBLE\n";}
 	(yyval.sval) = "DOUBLE";
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
    break;

  case 50:
#line 722 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- SIGNED\n";}
 	(yyval.sval) = "SIGNED";}
    break;

  case 51:
#line 726 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- UNSIGNED\n";}
 	(yyval.sval) = "UNSIGNED";
 	prevFlag = 12;}
    break;

  case 52:
#line 731 "new_c_grammar.y"
    {if(parseDebug)
  	{parseDebugOut << "type_specifier <- struct_or_union_specifier\n";}
  	(yyval.sval) = "!!STRUCT/UNION";}
    break;

  case 53:
#line 735 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- enum_specifier\n";}
 	(yyval.sval) = "!!ENUM";}
    break;

  case 54:
#line 739 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_specifier <- TYPEDEF_NAME\n";}
	(yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 55:
#line 745 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_qualifier <- CONST\n";}
	(yyval.sval) = "CONST";}
    break;

  case 56:
#line 749 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_qualifier <- VOLATILE\n";}
 	(yyval.sval) = "VOLATILE";}
    break;

  case 57:
#line 756 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier '{' struct_declaration_list '}'\n";}}
    break;

  case 58:
#line 759 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union '{' struct_declaration_list '}'\n";}}
    break;

  case 59:
#line 762 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier\n";}}
    break;

  case 60:
#line 768 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_or_union <- STRUCT\n";}
	(yyval.sval) = "STRUCT";}
    break;

  case 61:
#line 772 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union <- UNION\n";}
 	(yyval.sval) = "SIGNED";}
    break;

  case 62:
#line 779 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declaration_list <- struct_declaration\n";}}
    break;

  case 63:
#line 782 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_declaration_list <- struct_declaration_list struct_declaration\n";}}
    break;

  case 64:
#line 788 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "init_declarator_list <- init_declarator\n";}
	(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 65:
#line 792 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "init_declarator_list <- init_declarator_list ',' init_declarator\n";}
 	(yyval.declval) = (yyvsp[(3) - (3)].declval);}
    break;

  case 66:
#line 799 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "init_declarator <- declarator\n";}
	(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 67:
#line 803 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "init_declarator <- declarator '=' initializer\n";}
 	(yyval.declval) = (yyvsp[(1) - (3)].declval);}
    break;

  case 68:
#line 809 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declaration <- specifier_qualifier_list struct_declarator_list ';'\n";}}
    break;

  case 69:
#line 815 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "specifier_qualifier_list <- type_specifier\n";}}
    break;

  case 70:
#line 818 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "specifier_qualifier_list <- type_specifier specifier_qualifier_list\n";}}
    break;

  case 71:
#line 821 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier\n";}}
    break;

  case 72:
#line 824 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier specifier_qualifier_list\n";}}
    break;

  case 73:
#line 830 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declarator_list <- struct_declarator\n";}}
    break;

  case 74:
#line 833 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator_list <- struct_declarator_list ',' struct_declarator\n";}}
    break;

  case 75:
#line 839 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator\n";}}
    break;

  case 76:
#line 842 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- ':' constant_expression\n";}}
    break;

  case 77:
#line 845 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator ':' constant_expression\n";}}
    break;

  case 78:
#line 851 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enum_specifier <- ENUM '{' enumerator_list '}'\n";}}
    break;

  case 79:
#line 854 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier '{' enumerator_list '}'\n";}}
    break;

  case 80:
#line 857 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier\n";}}
    break;

  case 81:
#line 863 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enumerator_list <- enumerator\n";}}
    break;

  case 82:
#line 866 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enumerator_list <- enumerator_list ',' enumerator\n";}}
    break;

  case 83:
#line 872 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enumerator <- identifier\n";}}
    break;

  case 84:
#line 875 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enumerator <- identifier '=' constant_expression\n";}}
    break;

  case 85:
#line 882 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "declarator <- direct_declarator\n";}
	(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 86:
#line 886 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "declarator <- pointer direct_declarator\n";}
        declNode dn = *(yyvsp[(2) - (2)].declval);
	dn.specs |= xPOINTER;
	(yyval.declval) = &dn;
        }
    break;

  case 87:
#line 897 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "direct_declarator <- identifier\n";}
	declNode dn = *(yyvsp[(1) - (1)].declval);
	dn.next = 0;
	(yyval.declval) = &dn;
}
    break;

  case 88:
#line 904 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- '(' declarator ')'\n";}
 	 declNode dn = *(yyvsp[(2) - (3)].declval);
	 (yyval.declval) = &dn;
}
    break;

  case 89:
#line 911 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' ']'\n";}
 	 declNode dn = *(yyvsp[(1) - (3)].declval);
	 dn.specs |= xARRAY;
	 (yyval.declval)=&dn;
}
    break;

  case 90:
#line 918 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' constant_expression ']'\n";}
        declNode dn = *(yyvsp[(1) - (4)].declval);
	dn.specs |= xARRAY;
	(yyval.declval)=&dn;}
    break;

  case 91:
#line 924 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' ')'\n";}
 	 declNode dn = *(yyvsp[(1) - (3)].declval);
	 dn.specs |= xFUNCTION;
	 (yyval.declval)=&dn;
 	st.push();}
    break;

  case 92:
#line 930 "new_c_grammar.y"
    {st.push();}
    break;

  case 93:
#line 931 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' parameter_type_list ')'\n";}
   declNode dn = *(yyvsp[(1) - (5)].declval);
   dn.specs |= xFUNCTION;
   (yyval.declval)=&dn;
}
    break;

  case 94:
#line 938 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' identifier_list ')'\n";}
  declNode dn = *(yyvsp[(1) - (4)].declval);
  dn.specs |= xFUNCTION;
  (yyval.declval)=&dn;
}
    break;

  case 95:
#line 948 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "pointer <- '*'\n";}}
    break;

  case 96:
#line 951 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list\n";}}
    break;

  case 97:
#line 954 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' pointer\n";}}
    break;

  case 98:
#line 957 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list pointer\n";}}
    break;

  case 99:
#line 963 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_qualifier_list <- type_qualifier\n";}}
    break;

  case 100:
#line 966 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_qualifier_list <- type_qualifier_list type_qualifier\n";}}
    break;

  case 101:
#line 972 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_type_list <- parameter_list\n";}}
    break;

  case 102:
#line 975 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_type_list <- parameter_list ',' ELIPSIS\n";}}
    break;

  case 103:
#line 981 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_list <- parameter_declaration\n";}}
    break;

  case 104:
#line 984 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_list <- parameter_list ',' parameter_declaration\n";}}
    break;

  case 105:
#line 990 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_declaration <- declaration_specifiers declarator\n";}}
    break;

  case 106:
#line 993 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_declaration <- declaration_specifiers\n";}}
    break;

  case 107:
#line 996 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "parameter_declaration <- declaration_specifiers abstract_declarator\n";}}
    break;

  case 108:
#line 1002 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "identifier_list <- identifier\n";}

 declNode dn = *(yyvsp[(1) - (1)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 109:
#line 1009 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "identifier_list <- identifier_list ',' identifier\n";}

   declNode dn = *(yyvsp[(1) - (3)].declval);
   dn.next = (yyvsp[(3) - (3)].declval);
   (yyval.declval) = &dn;
}
    break;

  case 110:
#line 1020 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "initializer <- assignment_expression\n";}}
    break;

  case 111:
#line 1023 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "initializer <- '{' initializer_list '}'\n";}}
    break;

  case 112:
#line 1026 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "initializer <- '{' initializer_list ',' '}'\n";}}
    break;

  case 113:
#line 1032 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "initializer_list <- initializer\n";}}
    break;

  case 114:
#line 1035 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "initializer_list <- initializer_list ',' initializer\n";}}
    break;

  case 115:
#line 1041 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_name <- specifier_qualifier_list\n";}}
    break;

  case 116:
#line 1044 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_name <- specifier_qualifier_list abstract_declarator\n";}}
    break;

  case 117:
#line 1050 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "abstract_declarator <- pointer\n";}}
    break;

  case 118:
#line 1053 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- direct_abstract_declarator\n";}}
    break;

  case 119:
#line 1056 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- pointer direct_abstract_declarator\n";}}
    break;

  case 120:
#line 1062 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "direct_abstract_declarator <- '(' abstract_declarator ')'\n";}}
    break;

  case 121:
#line 1065 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "direct_abstract_declarator <- '[' ']'\n";}}
    break;

  case 122:
#line 1068 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '[' constant_expression ']'\n";}}
    break;

  case 123:
#line 1071 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' ']'\n";}}
    break;

  case 124:
#line 1074 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' constant_expression ']'\n";}}
    break;

  case 125:
#line 1077 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' ')'\n";}}
    break;

  case 126:
#line 1080 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' parameter_type_list ')'\n";}}
    break;

  case 127:
#line 1083 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' ')'\n";}}
    break;

  case 128:
#line 1086 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' parameter_type_list ')'\n";}}
    break;

  case 129:
#line 1092 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "statement <- labeled_statement\n";}}
    break;

  case 130:
#line 1094 "new_c_grammar.y"
    {st.push();}
    break;

  case 131:
#line 1094 "new_c_grammar.y"
    {st.pop();}
    break;

  case 132:
#line 1095 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- compound_statement\n";}}
    break;

  case 133:
#line 1098 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- expression_statement\n";}}
    break;

  case 134:
#line 1101 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- selection_statement\n";}}
    break;

  case 135:
#line 1104 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- iteration_statement\n";}}
    break;

  case 136:
#line 1107 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- jump_statement\n";}}
    break;

  case 137:
#line 1113 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "labeled_statement <- identifier ':' statement\n";}}
    break;

  case 138:
#line 1116 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- CASE constant_expression ':' statement\n";}}
    break;

  case 139:
#line 1119 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- DEFAULT ':' statement\n";}}
    break;

  case 140:
#line 1125 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "expression_statement <- ';'\n";}}
    break;

  case 141:
#line 1128 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "expression_statement <- expression ';'\n";}}
    break;

  case 142:
#line 1134 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "compound_statement <- '{' '}'\n";}}
    break;

  case 143:
#line 1137 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' statement_list '}'\n";}}
    break;

  case 144:
#line 1140 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list '}'\n";}}
    break;

  case 145:
#line 1143 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list statement_list '}'\n";}}
    break;

  case 146:
#line 1149 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "statement_list <- statement\n";}}
    break;

  case 147:
#line 1152 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement_list <- statement_list statement\n";}}
    break;

  case 148:
#line 1158 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement\n";}}
    break;

  case 149:
#line 1161 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement ELSE statement\n";}}
    break;

  case 150:
#line 1164 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "selection_statement <- SWITCH '(' expression ')' statement\n";}}
    break;

  case 151:
#line 1170 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "iteration_statement <- WHILE '(' expression ')' statement\n";}}
    break;

  case 152:
#line 1173 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- DO statement WHILE '(' expression ')' ';'\n";}}
    break;

  case 153:
#line 1176 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' ')' statement\n";}}
    break;

  case 154:
#line 1179 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' expression ')' statement\n";}}
    break;

  case 155:
#line 1182 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' ')' statement\n";}}
    break;

  case 156:
#line 1185 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' expression ')' statement\n";}}
    break;

  case 157:
#line 1188 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' ')' statement\n";}}
    break;

  case 158:
#line 1191 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' expression ')' statement\n";}}
    break;

  case 159:
#line 1194 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' ')' statement\n";}}
    break;

  case 160:
#line 1197 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' expression ')' statement\n";}}
    break;

  case 161:
#line 1203 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "jump_statement <- GOTO identifier ';'\n";}}
    break;

  case 162:
#line 1206 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- CONTINUE ';'\n";}}
    break;

  case 163:
#line 1209 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- BREAK ';'\n";}}
    break;

  case 164:
#line 1212 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN ';'\n";}}
    break;

  case 165:
#line 1215 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN expression ';'\n";}}
    break;

  case 166:
#line 1221 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "expression <- assignment_expression\n";}}
    break;

  case 167:
#line 1224 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "expression <- expression ',' assignment_expression\n";}}
    break;

  case 168:
#line 1230 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_expression <- conditional_expression\n";}}
    break;

  case 169:
#line 1233 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_expression <- unary_expression assignment_operator assignment_expression\n";}}
    break;

  case 170:
#line 1239 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_operator <- '='\n";}}
    break;

  case 171:
#line 1242 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MUL_ASSIGN\n";}}
    break;

  case 172:
#line 1245 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- DIV_ASSIGN\n";}}
    break;

  case 173:
#line 1248 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MOD_ASSIGN\n";}}
    break;

  case 174:
#line 1251 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_operator <- ADD_ASSIGN\n";}}
    break;

  case 175:
#line 1254 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- SUB_ASSIGN\n";}}
    break;

  case 176:
#line 1257 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- LEFT_ASSIGN\n";}}
    break;

  case 177:
#line 1260 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- RIGHT_ASSIGN\n";}}
    break;

  case 178:
#line 1263 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- AND_ASSIGN\n";}}
    break;

  case 179:
#line 1266 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- XOR_ASSIGN\n";}}
    break;

  case 180:
#line 1269 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- OR_ASSIGN\n";}}
    break;

  case 181:
#line 1275 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "conditional_expression <- logical_or_expression\n";}}
    break;

  case 182:
#line 1278 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "conditional_expression <- logical_or_expression '?' expression ':' conditional_expression\n";}}
    break;

  case 183:
#line 1284 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "constant_expression <- conditional_expression\n";}}
    break;

  case 184:
#line 1290 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "logical_or_expression <- logical_and_expression\n";}}
    break;

  case 185:
#line 1293 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "logical_or_expression <- logical_or_expression OR_OP logical_and_expression\n";}}
    break;

  case 186:
#line 1299 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "logical_and_expression <- inclusive_or_expression\n";}}
    break;

  case 187:
#line 1302 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "logical_and_expression <- logical_and_expression AND_OP inclusive_or_expression\n";}}
    break;

  case 188:
#line 1308 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "inclusive_or_expression <- exclusive_or_expression\n";}}
    break;

  case 189:
#line 1311 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "inclusive_or_expression <- inclusive_or_expression '|' exclusive_or_expression\n";}}
    break;

  case 190:
#line 1317 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "exclusive_or_expression <- and_expression\n";}}
    break;

  case 191:
#line 1320 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "exclusive_or_expression <- exclusive_or_expression '^' and_expression\n";}}
    break;

  case 192:
#line 1326 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "and_expression <- equality_expression\n";}}
    break;

  case 193:
#line 1329 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "and_expression <- and_expression '&' equality_expression\n";}}
    break;

  case 194:
#line 1335 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "equality_expression <- relational_expression\n";}}
    break;

  case 195:
#line 1338 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression EQ_OP relational_expression\n";}}
    break;

  case 196:
#line 1341 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression NE_OP relational_expression\n";}}
    break;

  case 197:
#line 1347 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "relational_expression <- shift_expression\n";}}
    break;

  case 198:
#line 1350 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '<' shift_expression\n";}}
    break;

  case 199:
#line 1353 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '>' shift_expression\n";}}
    break;

  case 200:
#line 1356 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression LE_OP shift_expression\n";}}
    break;

  case 201:
#line 1359 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression GE_OP shift_expression\n";}}
    break;

  case 202:
#line 1365 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "shift_expression <- additive_expression\n";}}
    break;

  case 203:
#line 1368 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "shift_expression <- shift_expression LEFT_OP additive_expression\n";}}
    break;

  case 204:
#line 1371 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "shift_expression <- shift_expression RIGHT_OP additive_expression\n";}}
    break;

  case 205:
#line 1377 "new_c_grammar.y"
    {if(parseDebug)
{parseDebugOut << "additive_expression <- multiplicative_expression\n";}}
    break;

  case 206:
#line 1380 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '+' multiplicative_expression\n";}}
    break;

  case 207:
#line 1383 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '-' multiplicative_expression\n";}}
    break;

  case 208:
#line 1389 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "multiplicative_expression <- cast_expression\n";}}
    break;

  case 209:
#line 1392 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '*' cast_expression\n";}}
    break;

  case 210:
#line 1395 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '/' cast_expression\n";}}
    break;

  case 211:
#line 1398 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '%' cast_expression\n";}}
    break;

  case 212:
#line 1404 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "cast_expression <- unary_expression\n";}}
    break;

  case 213:
#line 1407 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "cast_expression <- '(' type_name ')' cast_expression\n";}}
    break;

  case 214:
#line 1413 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "unary_expression <- postfix_expression\n";}}
    break;

  case 215:
#line 1416 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- INC_OP unary_expression\n";}}
    break;

  case 216:
#line 1419 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- DEC_OP unary_expression\n";}}
    break;

  case 217:
#line 1422 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- unary_operator cast_expression\n";}}
    break;

  case 218:
#line 1425 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF unary_expression\n";}}
    break;

  case 219:
#line 1428 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF '(' type_name ')'\n";}}
    break;

  case 220:
#line 1434 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "unary_operator <- '&'\n";}}
    break;

  case 221:
#line 1437 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '*'\n";}}
    break;

  case 222:
#line 1440 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '+'\n";}}
    break;

  case 223:
#line 1443 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '-'\n";}}
    break;

  case 224:
#line 1446 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '~'\n";}}
    break;

  case 225:
#line 1449 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '!'\n";}}
    break;

  case 226:
#line 1455 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "postfix_expression <- primary_expression\n";}}
    break;

  case 227:
#line 1458 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '[' expression ']'\n";}}
    break;

  case 228:
#line 1461 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' ')'\n";}}
    break;

  case 229:
#line 1464 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' argument_expression_list ')'\n";}}
    break;

  case 230:
#line 1467 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '.' identifier\n";}}
    break;

  case 231:
#line 1470 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression PTR_OP identifier\n";}}
    break;

  case 232:
#line 1473 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression INC_OP\n";}}
    break;

  case 233:
#line 1476 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression DEC_OP\n";}}
    break;

  case 234:
#line 1482 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "primary_expression <- identifier\n";}}
    break;

  case 235:
#line 1485 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- constant\n";}}
    break;

  case 236:
#line 1488 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- string\n";}}
    break;

  case 237:
#line 1491 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- '(' expression ')'\n";}}
    break;

  case 238:
#line 1497 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "argument_expression_list <- assignment_expression\n";}}
    break;

  case 239:
#line 1500 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "argument_expression_list <- argument_expression_list ',' assignment_expression\n";}}
    break;

  case 240:
#line 1506 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "constant <- INTEGER_CONSTANT\n";}}
    break;

  case 241:
#line 1509 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- CHARACTER_CONSTANT\n";}}
    break;

  case 242:
#line 1512 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- FLOATING_CONSTANT\n";}}
    break;

  case 243:
#line 1515 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- ENUMERATION_CONSTANT\n";}}
    break;

  case 244:
#line 1521 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "string <- STRING_LITERAL\n";}}
    break;

  case 245:
#line 1527 "new_c_grammar.y"
    {
	   declNode dn;
	   dn.id = (yyvsp[(1) - (1)].sval);
	   (yyval.declval) = &dn;
	   if(parseDebug)
	     {parseDebugOut << "identifier  <- IDENTIFIER\n";}
	   if(undeclVar || redeclVar) 
	    	{return 1;}
	 }
    break;

  case 246:
#line 1539 "new_c_grammar.y"
    { prevFlag = 0;
	   }
    break;


/* Line 1267 of yacc.c.  */
#line 4118 "y.tab.c"
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


#line 1541 "new_c_grammar.y"


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

