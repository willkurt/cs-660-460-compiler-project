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
     RETURN = 319
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




/* Copy the first part of user declarations.  */
#line 3 "test_c_grammar.y"

#include "c_grammar.h"
#include <stdio.h>
  /* #include "SymbolTable.hpp" */
extern SymbolTable st;
extern bool parseDebug;
extern std::ofstream parseDebugOut;
extern int lineCount;
/*for declaration or not*/
extern bool declMode;

 

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
#line 16 "test_c_grammar.y"
{
  char* sval;
  float dval;
  int ival;
  char cval;
  /*right now I don't know how to put structs in, so we'll fake it*/
  SymbolContent* scptrval;
 }
/* Line 187 of yacc.c.  */
#line 246 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 259 "y.tab.c"

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
#define YYLAST   1585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNRULES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    85,    79,     2,
      71,    72,    75,    82,    68,    83,    88,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    65,
      80,    69,    81,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    77,    67,    86,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    19,    23,
      28,    31,    35,    37,    40,    42,    45,    47,    50,    52,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      99,   104,   107,   109,   111,   113,   116,   118,   122,   124,
     128,   132,   134,   137,   139,   142,   144,   148,   150,   153,
     157,   162,   168,   171,   173,   177,   179,   183,   185,   188,
     190,   194,   198,   203,   207,   212,   217,   219,   222,   225,
     229,   231,   234,   236,   240,   242,   246,   249,   251,   254,
     256,   260,   262,   266,   271,   273,   277,   279,   282,   284,
     286,   289,   293,   296,   300,   304,   309,   312,   316,   320,
     325,   327,   329,   331,   333,   335,   337,   341,   346,   350,
     352,   355,   358,   362,   366,   371,   373,   376,   382,   390,
     396,   402,   410,   417,   425,   433,   442,   450,   459,   468,
     478,   482,   485,   488,   491,   495,   497,   501,   503,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   537,   539,   541,   545,   547,   551,   553,   557,
     559,   563,   565,   569,   571,   575,   579,   581,   585,   589,
     593,   597,   599,   603,   607,   609,   613,   617,   619,   623,
     627,   631,   633,   638,   640,   643,   646,   649,   652,   657,
     659,   661,   663,   665,   667,   669,   671,   676,   680,   685,
     689,   693,   696,   699,   701,   703,   705,   709,   711,   715,
     717,   719,   721,   723,   725
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    90,    91,    -1,    92,    -1,
      93,    -1,   111,   127,    -1,   111,    94,   127,    -1,    95,
     111,   127,    -1,    95,   111,    94,   127,    -1,    95,    65,
      -1,    95,   102,    65,    -1,    93,    -1,    94,    93,    -1,
      96,    -1,    96,    95,    -1,    97,    -1,    97,    95,    -1,
      98,    -1,    98,    95,    -1,    35,    -1,    36,    -1,    34,
      -1,    33,    -1,    32,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,    99,    -1,   108,    -1,    31,    -1,    45,
      -1,    46,    -1,   100,   155,    66,   101,    67,    -1,   100,
      66,   101,    67,    -1,   100,   155,    -1,    48,    -1,    49,
      -1,   104,    -1,   101,   104,    -1,   103,    -1,   102,    68,
     103,    -1,   111,    -1,   111,    69,   119,    -1,   105,   106,
      65,    -1,    97,    -1,    97,   105,    -1,    98,    -1,    98,
     105,    -1,   107,    -1,   106,    68,   107,    -1,   111,    -1,
      70,   136,    -1,   111,    70,   136,    -1,    50,    66,   109,
      67,    -1,    50,   155,    66,   109,    67,    -1,    50,   155,
      -1,   110,    -1,   109,    68,   110,    -1,   155,    -1,   155,
      69,   136,    -1,   112,    -1,   113,   112,    -1,   155,    -1,
      71,   111,    72,    -1,   112,    73,    74,    -1,   112,    73,
     136,    74,    -1,   112,    71,    72,    -1,   112,    71,   115,
      72,    -1,   112,    71,   118,    72,    -1,    75,    -1,    75,
     114,    -1,    75,   113,    -1,    75,   114,   113,    -1,    98,
      -1,   114,    98,    -1,   116,    -1,   116,    68,    51,    -1,
     117,    -1,   116,    68,   117,    -1,    95,   111,    -1,    95,
      -1,    95,   122,    -1,   155,    -1,   118,    68,   155,    -1,
     133,    -1,    66,   120,    67,    -1,    66,   120,    68,    67,
      -1,   119,    -1,   120,    68,   119,    -1,   105,    -1,   105,
     122,    -1,   113,    -1,   123,    -1,   113,   123,    -1,    71,
     122,    72,    -1,    73,    74,    -1,    73,   136,    74,    -1,
     123,    73,    74,    -1,   123,    73,   136,    74,    -1,    71,
      72,    -1,    71,   115,    72,    -1,   123,    71,    72,    -1,
     123,    71,   115,    72,    -1,   125,    -1,   127,    -1,   126,
      -1,   129,    -1,   130,    -1,   131,    -1,   155,    70,   124,
      -1,    53,   136,    70,   124,    -1,    54,    70,   124,    -1,
      65,    -1,   132,    65,    -1,    66,    67,    -1,    66,   128,
      67,    -1,    66,    94,    67,    -1,    66,    94,   128,    67,
      -1,   124,    -1,   128,   124,    -1,    55,    71,   132,    72,
     124,    -1,    55,    71,   132,    72,   124,    56,   124,    -1,
      57,    71,   132,    72,   124,    -1,    58,    71,   132,    72,
     124,    -1,    59,   124,    58,    71,   132,    72,    65,    -1,
      60,    71,    65,    65,    72,   124,    -1,    60,    71,    65,
      65,   132,    72,   124,    -1,    60,    71,    65,   132,    65,
      72,   124,    -1,    60,    71,    65,   132,    65,   132,    72,
     124,    -1,    60,    71,   132,    65,    65,    72,   124,    -1,
      60,    71,   132,    65,    65,   132,    72,   124,    -1,    60,
      71,   132,    65,   132,    65,    72,   124,    -1,    60,    71,
     132,    65,   132,    65,   132,    72,   124,    -1,    61,   155,
      65,    -1,    62,    65,    -1,    63,    65,    -1,    64,    65,
      -1,    64,   132,    65,    -1,   133,    -1,   132,    68,   133,
      -1,   135,    -1,   148,   134,   133,    -1,    69,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,   137,
      -1,   137,    76,   132,    70,   135,    -1,   135,    -1,   138,
      -1,   137,    20,   138,    -1,   139,    -1,   138,    19,   139,
      -1,   140,    -1,   139,    77,   140,    -1,   141,    -1,   140,
      78,   141,    -1,   142,    -1,   141,    79,   142,    -1,   143,
      -1,   142,    17,   143,    -1,   142,    18,   143,    -1,   144,
      -1,   143,    80,   144,    -1,   143,    81,   144,    -1,   143,
      15,   144,    -1,   143,    16,   144,    -1,   145,    -1,   144,
      13,   145,    -1,   144,    14,   145,    -1,   146,    -1,   145,
      82,   146,    -1,   145,    83,   146,    -1,   147,    -1,   146,
      75,   147,    -1,   146,    84,   147,    -1,   146,    85,   147,
      -1,   148,    -1,    71,   121,    72,   147,    -1,   150,    -1,
      11,   148,    -1,    12,   148,    -1,   149,   147,    -1,     9,
     148,    -1,     9,    71,   121,    72,    -1,    79,    -1,    75,
      -1,    82,    -1,    83,    -1,    86,    -1,    87,    -1,   151,
      -1,   150,    73,   132,    74,    -1,   150,    71,    72,    -1,
     150,    71,   152,    72,    -1,   150,    88,   155,    -1,   150,
      10,   155,    -1,   150,    11,    -1,   150,    12,    -1,   155,
      -1,   153,    -1,   154,    -1,    71,   132,    72,    -1,   133,
      -1,   152,    68,   133,    -1,     4,    -1,     6,    -1,     5,
      -1,     7,    -1,     8,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    61,    62,    66,    67,    68,    69,
      73,    74,    78,    79,    83,    84,    85,    86,    87,    88,
      92,    93,    94,    95,    96,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   115,   116,   120,
     121,   122,   126,   127,   131,   132,   136,   137,   141,   142,
     146,   150,   151,   152,   153,   157,   158,   162,   163,   164,
     168,   169,   170,   174,   175,   179,   180,   184,   185,   189,
     190,   191,   192,   193,   194,   195,   199,   200,   201,   202,
     206,   207,   211,   212,   216,   217,   221,   222,   223,   227,
     228,   232,   233,   234,   238,   239,   243,   244,   248,   249,
     250,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     266,   267,   268,   269,   270,   271,   275,   276,   277,   281,
     282,   286,   287,   288,   289,   293,   294,   298,   299,   300,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     317,   318,   319,   320,   321,   325,   326,   330,   331,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     349,   350,   354,   358,   359,   363,   364,   368,   369,   373,
     374,   378,   379,   383,   384,   385,   389,   390,   391,   392,
     393,   397,   398,   399,   403,   404,   405,   409,   410,   411,
     412,   416,   417,   421,   422,   423,   424,   425,   426,   430,
     431,   432,   433,   434,   435,   439,   440,   441,   442,   443,
     444,   445,   446,   450,   451,   452,   453,   457,   458,   462,
     463,   464,   465,   469,   473
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
  "GOTO", "CONTINUE", "BREAK", "RETURN", "';'", "'{'", "'}'", "','", "'='",
  "':'", "'('", "')'", "'['", "']'", "'*'", "'?'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_list",
  "selection_statement", "iteration_statement", "jump_statement",
  "expression", "assignment_expression", "assignment_operator",
  "conditional_expression", "constant_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "unary_operator", "postfix_expression", "primary_expression",
  "argument_expression_list", "constant", "string", "identifier", 0
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
     315,   316,   317,   318,   319,    59,   123,   125,    44,    61,
      58,    40,    41,    91,    93,    42,    63,   124,    94,    38,
      60,    62,    43,    45,    47,    37,   126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   105,   105,   105,   105,   106,   106,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   153,
     153,   153,   153,   154,   155
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     3,     4,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     1,     3,     1,     3,
       3,     1,     2,     1,     2,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     4,     3,     4,     4,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     4,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     2,     3,     3,     4,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     7,     8,     7,     8,     8,     9,
       3,     2,     2,     2,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   224,    36,    24,    23,    22,    20,    21,    26,    27,
      28,    29,    32,    33,    30,    31,    37,    38,    25,    42,
      43,     0,     0,    76,     0,     2,     4,     5,     0,    14,
      16,    18,    34,     0,    35,     0,    67,     0,    69,     0,
      62,     0,    80,    78,    77,     1,     3,    10,     0,    46,
      48,    15,    17,    19,     0,    41,     0,    12,     0,     0,
       6,     0,     0,    68,     0,    63,    65,     0,    70,    81,
      79,    11,     0,     0,     0,     8,    51,    53,     0,    44,
       0,     0,   219,   221,   220,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   121,     0,   200,   199,   201,   202,   203,   204,
       0,   125,   110,   112,   111,     0,   113,   114,   115,     0,
     145,   147,   160,   163,   165,   167,   169,   171,   173,   176,
     181,   184,   187,   191,     0,   193,   205,   214,   215,   213,
      13,     7,    48,    73,    87,     0,    82,    84,     0,    89,
      71,   162,     0,   191,   213,    60,     0,     0,     0,    47,
       0,    49,    91,     9,    52,    54,    40,    45,     0,     0,
      55,    57,     0,     0,   197,     0,   194,   195,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,     0,
      96,     0,     0,   123,     0,   122,   126,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   149,     0,
     196,     0,   211,   212,     0,     0,     0,     0,     0,     0,
      86,    98,    88,    99,    74,     0,     0,    75,    72,    64,
      66,    61,    94,     0,    58,    50,     0,     0,    39,     0,
       0,   118,     0,     0,     0,     0,     0,     0,   140,   144,
       0,    98,    97,     0,   216,   124,   146,   164,     0,   166,
     168,   170,   172,   174,   175,   179,   180,   177,   178,   182,
     183,   185,   186,   188,   189,   190,   148,   210,   207,   217,
       0,     0,   209,   116,   106,     0,     0,   102,     0,   100,
       0,     0,    83,    85,    90,    92,     0,    56,    59,   198,
     117,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,   208,   206,   107,   101,   103,   108,     0,   104,     0,
      93,    95,   127,   129,   130,     0,     0,     0,     0,     0,
       0,   161,   218,   109,   105,     0,     0,   132,     0,     0,
       0,     0,     0,     0,   128,   131,   133,   134,     0,   136,
       0,     0,     0,   135,   137,   138,     0,   139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    57,    58,    59,    29,    30,    31,
      32,    33,    78,    48,    49,    79,    80,   169,   170,    34,
      64,    65,    35,    36,    37,    44,   305,   146,   147,   148,
     161,   253,   191,   306,   243,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   229,   121,   152,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   300,   137,   138,   154
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -234
static const yytype_int16 yypact[] =
{
    1264,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,    12,    62,   -29,  1195,  -234,  -234,  -234,    55,  1535,
    1535,  1535,  -234,    37,  -234,  1478,    63,    15,  -234,    16,
     -52,     2,  -234,  -234,   -29,  -234,  -234,  -234,   121,  -234,
    1377,  -234,  -234,  -234,   537,    48,   388,  -234,  1478,    55,
    -234,  1312,   331,    63,    39,  -234,    78,    16,  -234,  -234,
    -234,  -234,    62,   752,  1478,  -234,   537,   537,  1410,  -234,
      70,   537,  -234,  -234,  -234,  -234,  -234,  1118,  1128,  1128,
    1138,     1,    57,    82,    96,   728,   109,    16,   127,   136,
     765,  -234,  -234,   558,  -234,  -234,  -234,  -234,  -234,  -234,
     473,  -234,  -234,  -234,  -234,   606,  -234,  -234,  -234,   141,
    -234,  -234,    11,   192,   137,   140,   156,   236,   135,   250,
     194,   -30,  -234,   472,  1138,   112,  -234,  -234,  -234,   170,
    -234,  -234,   176,  -234,   122,   187,   206,  -234,   -45,  -234,
    -234,  -234,   204,  -234,  -234,  -234,    16,  1138,   216,  -234,
     752,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  1138,   142,
    -234,   235,  1441,   558,  -234,  1138,  -234,  -234,   238,   728,
    1138,  1138,  1138,   256,   850,   253,  -234,  -234,  -234,   154,
     -23,   252,    -8,  -234,   643,  -234,  -234,  -234,  1138,  1138,
    1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,
    1138,  1138,  1138,  1138,  1138,  1138,  1138,  1138,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  1138,
    -234,    16,  -234,  -234,   863,  1138,    16,   728,  1215,   873,
    -234,     6,  -234,    88,  -234,  1514,    16,  -234,  -234,  -234,
    -234,  -234,  -234,   243,  -234,  -234,    70,  1138,  -234,   255,
     728,  -234,    21,    28,    59,   254,   886,   174,  -234,  -234,
    1332,   152,  -234,  1138,  -234,  -234,  -234,   192,   203,   137,
     140,   156,   236,   135,   135,   250,   250,   250,   250,   194,
     194,   -30,   -30,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
      74,    -6,  -234,  -234,  -234,   257,   260,  -234,   259,    88,
    1120,   896,  -234,  -234,  -234,  -234,   738,  -234,  -234,  -234,
    -234,   728,   728,   728,  1138,   981,   184,   994,  -234,  1138,
    1138,  -234,  -234,  -234,  -234,  -234,  -234,   269,  -234,   273,
    -234,  -234,   272,  -234,  -234,    86,   728,   116,  1007,  1020,
     200,  -234,  -234,  -234,  -234,   728,   283,  -234,   728,   728,
     119,   728,   130,  1033,  -234,  -234,  -234,  -234,   728,  -234,
     728,   728,   131,  -234,  -234,  -234,   728,  -234
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,   325,  -234,    25,    42,     5,  -234,   -34,    40,
    -234,  -234,   270,  -234,   278,   -68,    -1,  -234,    97,  -234,
     285,   198,    29,   -36,   -12,  -234,   -59,  -234,   111,  -234,
    -148,  -234,   189,  -137,  -233,   -89,  -234,  -234,   146,   247,
    -234,  -234,  -234,   -18,   -69,  -234,   -49,   -87,  -234,   164,
     163,   165,   162,   168,   107,    20,   105,   106,  -104,    87,
    -234,  -234,  -234,  -234,  -234,  -234,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      38,    63,   145,   178,   162,    28,   183,   242,   309,     1,
     167,    43,   252,   151,    67,     1,    16,    17,     1,     1,
      76,    40,    38,   246,    38,    27,   196,   247,    38,    28,
     230,   199,    70,    55,    51,    52,    53,    38,   309,    66,
       1,   151,    76,    76,    76,   215,    23,    76,   270,    27,
     239,    41,    23,   272,   216,   217,   139,    50,     1,    38,
     198,   149,   198,    42,   274,     1,   144,    66,   332,    76,
     250,   179,    38,     1,    68,   164,   165,   238,    39,   239,
      38,   254,   189,   140,    69,   192,    22,   200,   142,   198,
     261,   162,    74,   321,    77,   139,   198,   185,   110,   140,
     322,   142,   190,    54,   167,   196,   155,   156,   151,   171,
     139,   293,   294,   295,    81,   139,    77,    77,    77,   151,
      47,    77,   231,   232,   233,     1,    22,   198,   180,   276,
      23,   323,   241,    22,    61,   140,    62,    23,    76,    76,
     168,    22,   330,    77,    38,    23,   331,   157,   303,   153,
     207,   208,   308,   181,   198,   192,    66,   192,   356,   310,
     296,   311,   262,   263,   264,   299,   267,   182,   341,   328,
     318,   320,   190,   240,   174,   176,   177,   153,   271,   139,
     184,    60,   278,   234,   198,   235,    71,   198,   358,    72,
     151,   368,   186,   238,   139,   239,    75,    23,   198,   198,
     236,   187,   370,   376,   141,    63,   197,   255,   151,   198,
     256,   201,    77,    77,   202,   209,   210,   301,   203,   269,
     163,   153,   198,   270,   339,   239,   241,   285,   286,   287,
     288,   297,   342,   343,   344,   204,   302,   139,    38,   327,
     237,    38,   198,   144,   153,    73,   314,   162,   326,   348,
     144,   337,   198,   205,   206,   153,    38,   357,   271,   244,
     139,   352,   151,   211,   212,   363,   364,    41,   198,   366,
     367,   198,   369,   329,   245,   144,   213,   214,   248,   373,
     351,   374,   375,   251,   156,   171,   153,   377,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   257,   345,   347,   260,   350,
     315,   316,   283,   284,   265,   144,   289,   290,   268,   291,
     292,   139,   139,   139,   273,   324,   153,   319,   355,   333,
     360,   362,   334,   335,     1,    82,    83,    84,    85,    86,
      87,   353,    88,    89,   153,   372,   139,   354,   365,    46,
     159,   172,   158,   317,   249,   139,   313,   194,   139,   139,
     153,   139,   259,   277,   279,   281,     0,   280,   139,     0,
     139,   139,   282,     0,     0,     0,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    82,    83,    84,    85,    86,    87,   153,    88,
      89,     0,   103,     0,     0,   150,   104,     0,     0,     0,
     105,     0,     0,   106,   107,     0,   153,   108,   109,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    56,   102,     0,     0,     0,   103,
       0,     0,     0,   104,     0,     0,     0,   105,     0,     0,
     106,   107,     0,     0,   108,   109,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,    90,    91,    92,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    56,
     193,   228,     0,     0,   103,     0,     0,     0,   104,     0,
       0,     0,   105,     0,     0,   106,   107,     0,     0,   108,
     109,     1,    82,    83,    84,    85,    86,    87,     2,    88,
      89,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     2,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,   104,     0,     0,     0,   105,     0,     0,
     106,   107,     0,     0,   108,   109,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,    90,
      91,    92,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    56,   195,     0,     0,     0,   103,     0,     0,
       0,   104,     0,     0,     0,   105,     0,     0,   106,   107,
       0,     0,   108,   109,     0,     0,    90,    91,    92,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    56,
     275,     0,     0,     0,   103,     0,     0,     0,   104,     0,
       0,     0,   105,     0,     0,   106,   107,     0,     0,   108,
     109,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     0,     0,     0,     0,     1,    82,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    56,     0,     0,     0,     0,   103,
       0,     0,     0,   104,   160,   340,     0,   105,     0,   103,
     106,   107,     0,   104,   108,   109,     0,   105,   160,     0,
     106,   107,     0,   103,   108,   109,     0,   104,     0,     0,
     188,   105,     0,     0,   106,   107,   103,     0,   108,   109,
     104,     0,     0,     0,   105,     0,     0,   106,   107,     0,
       0,   108,   109,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     0,     0,     0,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,     0,     0,   266,     0,     0,     0,     0,
       0,   103,     0,     0,     0,   104,     0,     0,     0,   105,
       0,     0,   106,   107,   103,   298,   108,   109,   104,     0,
       0,     0,   105,     0,   103,   106,   107,   307,   104,   108,
     109,   325,   105,     0,     0,   106,   107,   103,     0,   108,
     109,   104,     0,     0,     0,   105,     0,   103,   106,   107,
     338,   104,   108,   109,     0,   105,     0,     0,   106,   107,
       0,     0,   108,   109,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     1,    82,    83,
      84,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       1,    82,    83,    84,    85,    86,    87,     0,    88,    89,
       0,     0,     0,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     0,     0,     0,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     0,
       0,     0,   103,   346,     0,     0,   104,     0,     0,   349,
     105,     0,     0,   106,   107,   103,     0,   108,   109,   104,
       0,     0,     0,   105,     0,     0,   106,   107,   103,   359,
     108,   109,   104,     0,     0,     0,   105,     0,     0,   106,
     107,   103,   361,   108,   109,   104,     0,     0,     0,   105,
       0,     0,   106,   107,   103,   371,   108,   109,   104,     0,
       0,     0,   105,     0,     0,   106,   107,     0,     0,   108,
     109,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   173,
       0,     0,   336,   104,     0,    45,     0,   105,     1,   175,
     106,   107,     0,   104,   108,   109,     0,   105,     0,   103,
     106,   107,     0,   104,   108,   109,     0,   105,     1,     0,
     106,   107,     0,     0,   108,   109,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     1,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,   304,   239,     0,
      23,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    23,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,   304,   239,     0,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,    56,     0,     0,    73,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   166,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   312,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    37,    61,    90,    73,     0,    95,   144,   241,     3,
      78,    23,   160,    62,    66,     3,    45,    46,     3,     3,
      54,    21,    22,    68,    24,     0,   115,    72,    28,    24,
     134,    20,    44,    33,    29,    30,    31,    37,   271,    39,
       3,    90,    76,    77,    78,    75,    75,    81,    71,    24,
      73,    22,    75,   190,    84,    85,    56,    28,     3,    59,
      68,    61,    68,    23,    72,     3,    61,    67,    74,   103,
     157,    70,    72,     3,    72,    76,    77,    71,    66,    73,
      80,   168,   100,    58,    44,   103,    71,    76,    59,    68,
     179,   160,    50,    72,    54,    95,    68,    97,    56,    74,
      72,    72,   103,    66,   172,   194,    67,    68,   157,    80,
     110,   215,   216,   217,    66,   115,    76,    77,    78,   168,
      65,    81,    10,    11,    12,     3,    71,    68,    71,   198,
      75,    72,   144,    71,    71,   110,    73,    75,   172,   173,
      70,    71,    68,   103,   144,    75,    72,    69,   237,    62,
      15,    16,   239,    71,    68,   173,   156,   175,    72,    71,
     229,    73,   180,   181,   182,   234,   184,    71,   316,   273,
     257,   260,   173,   144,    87,    88,    89,    90,   190,   179,
      71,    35,   200,    71,    68,    73,    65,    68,    72,    68,
     239,    72,    65,    71,   194,    73,    50,    75,    68,    68,
      88,    65,    72,    72,    58,   241,    65,    65,   257,    68,
      68,    19,   172,   173,    77,    80,    81,   235,    78,    65,
      74,   134,    68,    71,   311,    73,   238,   207,   208,   209,
     210,   231,   321,   322,   323,    79,   236,   237,   238,    65,
      70,   241,    68,   238,   157,    69,   246,   316,   266,    65,
     245,   310,    68,    17,    18,   168,   256,   346,   270,    72,
     260,   330,   311,    13,    14,    65,   355,   238,    68,   358,
     359,    68,   361,    70,    68,   270,    82,    83,    74,   368,
     329,   370,   371,    67,    68,   256,   199,   376,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,    70,   324,   325,    70,   327,
      67,    68,   205,   206,    58,   310,   211,   212,    65,   213,
     214,   321,   322,   323,    72,    71,   239,    72,    56,    72,
     348,   349,    72,    74,     3,     4,     5,     6,     7,     8,
       9,    72,    11,    12,   257,   363,   346,    74,    65,    24,
      72,    81,    67,   256,   156,   355,   245,   110,   358,   359,
     273,   361,   173,   199,   201,   203,    -1,   202,   368,    -1,
     370,   371,   204,    -1,    -1,    -1,   376,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,   311,    11,
      12,    -1,    71,    -1,    -1,    74,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,   329,    86,    87,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,    -1,    -1,    86,    87,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    69,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,     3,     4,     5,     6,     7,     8,     9,    31,    11,
      12,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,    -1,    -1,    86,    87,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    75,    66,    67,    -1,    79,    -1,    71,
      82,    83,    -1,    75,    86,    87,    -1,    79,    66,    -1,
      82,    83,    -1,    71,    86,    87,    -1,    75,    -1,    -1,
      65,    79,    -1,    -1,    82,    83,    71,    -1,    86,    87,
      75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    86,    87,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    71,    72,    86,    87,    75,    -1,
      -1,    -1,    79,    -1,    71,    82,    83,    74,    75,    86,
      87,    65,    79,    -1,    -1,    82,    83,    71,    -1,    86,
      87,    75,    -1,    -1,    -1,    79,    -1,    71,    82,    83,
      74,    75,    86,    87,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    -1,    65,
      79,    -1,    -1,    82,    83,    71,    -1,    86,    87,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    71,    72,
      86,    87,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,
      83,    71,    72,    86,    87,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    71,    72,    86,    87,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    72,    75,    -1,     0,    -1,    79,     3,    71,
      82,    83,    -1,    75,    86,    87,    -1,    79,    -1,    71,
      82,    83,    -1,    75,    86,    87,    -1,    79,     3,    -1,
      82,    83,    -1,    -1,    86,    87,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    71,     3,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    75,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    66,    -1,    -1,    69,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    67,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    71,    75,    90,    91,    92,    93,    95,    96,
      97,    98,    99,   100,   108,   111,   112,   113,   155,    66,
     155,   111,    98,   113,   114,     0,    91,    65,   102,   103,
     111,    95,    95,    95,    66,   155,    66,    93,    94,    95,
     127,    71,    73,   112,   109,   110,   155,    66,    72,    98,
     113,    65,    68,    69,    94,   127,    97,    98,   101,   104,
     105,    66,     4,     5,     6,     7,     8,     9,    11,    12,
      53,    54,    55,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    67,    71,    75,    79,    82,    83,    86,    87,
      94,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   135,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   153,   154,   155,
      93,   127,   111,    72,    95,   115,   116,   117,   118,   155,
      74,   135,   136,   148,   155,    67,    68,    69,   109,   103,
      66,   119,   133,   127,   105,   105,    67,   104,    70,   106,
     107,   111,   101,    71,   148,    71,   148,   148,   136,    70,
      71,    71,    71,   124,    71,   155,    65,    65,    65,   132,
     105,   121,   132,    67,   128,    67,   124,    65,    68,    20,
      76,    19,    77,    78,    79,    17,    18,    15,    16,    80,
      81,    13,    14,    82,    83,    75,    84,    85,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    69,   134,
     147,    10,    11,    12,    71,    73,    88,    70,    71,    73,
     111,   113,   122,   123,    72,    68,    68,    72,    74,   110,
     136,    67,   119,   120,   136,    65,    68,    70,    67,   121,
      70,   124,   132,   132,   132,    58,    65,   132,    65,    65,
      71,   113,   122,    72,    72,    67,   133,   138,   132,   139,
     140,   141,   142,   143,   143,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   133,   155,    72,   133,
     152,   132,   155,   124,    72,   115,   122,    74,   136,   123,
      71,    73,    51,   117,   155,    67,    68,   107,   136,    72,
     124,    72,    72,    72,    71,    65,   132,    65,   147,    70,
      68,    72,    74,    72,    72,    74,    72,   115,    74,   136,
      67,   119,   124,   124,   124,   132,    72,   132,    65,    65,
     132,   135,   133,    72,    74,    56,    72,   124,    72,    72,
     132,    72,   132,    65,   124,    65,   124,   124,    72,   124,
      72,    72,   132,   124,   124,   124,    72,   124
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
        case 224:
#line 473 "test_c_grammar.y"
    {
  if(!declMode)
    {
      (yyval.scptrval) = st.searchAll((yyvsp[(1) - (1)].sval));
    }}
    break;


/* Line 1267 of yacc.c.  */
#line 2093 "y.tab.c"
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


#line 479 "test_c_grammar.y"


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

