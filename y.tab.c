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

struct declNode{
  char* id;
  unsigned int specs;
  int lineno;
  declNode* next;
};

 

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
#line 23 "test_c_grammar.y"
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
#line 254 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 267 "y.tab.c"

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
#define YYLAST   1549

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNRULES -- Number of states.  */
#define YYNSTATES  386

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
       0,     0,     3,     5,     8,    10,    12,    13,    17,    18,
      23,    24,    29,    30,    36,    39,    43,    45,    48,    50,
      53,    55,    58,    60,    63,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      95,    97,    99,   101,   107,   112,   115,   117,   119,   121,
     124,   126,   130,   132,   133,   138,   142,   144,   147,   149,
     152,   154,   158,   160,   163,   167,   172,   178,   181,   183,
     187,   189,   190,   195,   197,   200,   202,   206,   210,   215,
     219,   220,   226,   231,   233,   236,   239,   243,   245,   248,
     250,   254,   256,   260,   263,   265,   268,   270,   274,   276,
     280,   285,   287,   291,   293,   296,   298,   300,   303,   307,
     310,   314,   318,   323,   326,   330,   334,   339,   341,   342,
     345,   347,   349,   351,   353,   357,   362,   366,   368,   371,
     374,   378,   382,   387,   389,   392,   398,   406,   412,   418,
     426,   433,   441,   449,   458,   466,   475,   484,   494,   498,
     501,   504,   507,   511,   513,   517,   519,   523,   525,   527,
     529,   531,   533,   535,   537,   539,   541,   543,   545,   547,
     553,   555,   557,   561,   563,   567,   569,   573,   575,   579,
     581,   585,   587,   591,   595,   597,   601,   605,   609,   613,
     615,   619,   623,   625,   629,   633,   635,   639,   643,   647,
     649,   654,   656,   659,   662,   665,   668,   673,   675,   677,
     679,   681,   683,   685,   687,   692,   696,   701,   705,   709,
     712,   715,   717,   719,   721,   725,   727,   731,   733,   735,
     737,   739,   741
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    90,    91,    -1,    92,    -1,
      97,    -1,    -1,   117,    93,   135,    -1,    -1,   117,    98,
      94,   135,    -1,    -1,    99,   117,    95,   135,    -1,    -1,
      99,   117,    98,    96,   135,    -1,    99,    65,    -1,    99,
     106,    65,    -1,    97,    -1,    98,    97,    -1,   100,    -1,
     100,    99,    -1,   101,    -1,   101,    99,    -1,   102,    -1,
     102,    99,    -1,    35,    -1,    36,    -1,    34,    -1,    33,
      -1,    32,    -1,    47,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    43,    -1,    44,    -1,    41,    -1,    42,
      -1,   103,    -1,   113,    -1,    31,    -1,    45,    -1,    46,
      -1,   104,   163,    66,   105,    67,    -1,   104,    66,   105,
      67,    -1,   104,   163,    -1,    48,    -1,    49,    -1,   109,
      -1,   105,   109,    -1,   107,    -1,   106,    68,   107,    -1,
     117,    -1,    -1,   117,    69,   108,   126,    -1,   110,   111,
      65,    -1,   101,    -1,   101,   110,    -1,   102,    -1,   102,
     110,    -1,   112,    -1,   111,    68,   112,    -1,   117,    -1,
      70,   144,    -1,   117,    70,   144,    -1,    50,    66,   114,
      67,    -1,    50,   163,    66,   114,    67,    -1,    50,   163,
      -1,   115,    -1,   114,    68,   115,    -1,   163,    -1,    -1,
     163,    69,   116,   144,    -1,   118,    -1,   120,   118,    -1,
     163,    -1,    71,   117,    72,    -1,   118,    73,    74,    -1,
     118,    73,   144,    74,    -1,   118,    71,    72,    -1,    -1,
     118,    71,   119,   122,    72,    -1,   118,    71,   125,    72,
      -1,    75,    -1,    75,   121,    -1,    75,   120,    -1,    75,
     121,   120,    -1,   102,    -1,   121,   102,    -1,   123,    -1,
     123,    68,    51,    -1,   124,    -1,   123,    68,   124,    -1,
      99,   117,    -1,    99,    -1,    99,   129,    -1,   163,    -1,
     125,    68,   163,    -1,   141,    -1,    66,   127,    67,    -1,
      66,   127,    68,    67,    -1,   126,    -1,   127,    68,   126,
      -1,   110,    -1,   110,   129,    -1,   120,    -1,   130,    -1,
     120,   130,    -1,    71,   129,    72,    -1,    73,    74,    -1,
      73,   144,    74,    -1,   130,    73,    74,    -1,   130,    73,
     144,    74,    -1,    71,    72,    -1,    71,   122,    72,    -1,
     130,    71,    72,    -1,   130,    71,   122,    72,    -1,   133,
      -1,    -1,   132,   135,    -1,   134,    -1,   137,    -1,   138,
      -1,   139,    -1,   163,    70,   131,    -1,    53,   144,    70,
     131,    -1,    54,    70,   131,    -1,    65,    -1,   140,    65,
      -1,    66,    67,    -1,    66,   136,    67,    -1,    66,    98,
      67,    -1,    66,    98,   136,    67,    -1,   131,    -1,   136,
     131,    -1,    55,    71,   140,    72,   131,    -1,    55,    71,
     140,    72,   131,    56,   131,    -1,    57,    71,   140,    72,
     131,    -1,    58,    71,   140,    72,   131,    -1,    59,   131,
      58,    71,   140,    72,    65,    -1,    60,    71,    65,    65,
      72,   131,    -1,    60,    71,    65,    65,   140,    72,   131,
      -1,    60,    71,    65,   140,    65,    72,   131,    -1,    60,
      71,    65,   140,    65,   140,    72,   131,    -1,    60,    71,
     140,    65,    65,    72,   131,    -1,    60,    71,   140,    65,
      65,   140,    72,   131,    -1,    60,    71,   140,    65,   140,
      65,    72,   131,    -1,    60,    71,   140,    65,   140,    65,
     140,    72,   131,    -1,    61,   163,    65,    -1,    62,    65,
      -1,    63,    65,    -1,    64,    65,    -1,    64,   140,    65,
      -1,   141,    -1,   140,    68,   141,    -1,   143,    -1,   156,
     142,   141,    -1,    69,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,   145,    -1,   145,    76,   140,
      70,   143,    -1,   143,    -1,   146,    -1,   145,    20,   146,
      -1,   147,    -1,   146,    19,   147,    -1,   148,    -1,   147,
      77,   148,    -1,   149,    -1,   148,    78,   149,    -1,   150,
      -1,   149,    79,   150,    -1,   151,    -1,   150,    17,   151,
      -1,   150,    18,   151,    -1,   152,    -1,   151,    80,   152,
      -1,   151,    81,   152,    -1,   151,    15,   152,    -1,   151,
      16,   152,    -1,   153,    -1,   152,    13,   153,    -1,   152,
      14,   153,    -1,   154,    -1,   153,    82,   154,    -1,   153,
      83,   154,    -1,   155,    -1,   154,    75,   155,    -1,   154,
      84,   155,    -1,   154,    85,   155,    -1,   156,    -1,    71,
     128,    72,   155,    -1,   158,    -1,    11,   156,    -1,    12,
     156,    -1,   157,   155,    -1,     9,   156,    -1,     9,    71,
     128,    72,    -1,    79,    -1,    75,    -1,    82,    -1,    83,
      -1,    86,    -1,    87,    -1,   159,    -1,   158,    73,   140,
      74,    -1,   158,    71,    72,    -1,   158,    71,   160,    72,
      -1,   158,    88,   163,    -1,   158,    10,   163,    -1,   158,
      11,    -1,   158,    12,    -1,   163,    -1,   161,    -1,   162,
      -1,    71,   140,    72,    -1,   141,    -1,   160,    68,   141,
      -1,     4,    -1,     6,    -1,     5,    -1,     7,    -1,     8,
      -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    70,    74,    75,    80,    80,    81,    81,
      82,    82,    83,    83,    88,    90,   113,   114,   123,   148,
     174,   232,   289,   303,   320,   321,   322,   323,   324,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   338,   339,
     340,   344,   345,   351,   352,   353,   357,   358,   362,   363,
     368,   369,   374,   375,   375,   379,   383,   384,   385,   386,
     390,   391,   395,   396,   397,   401,   402,   403,   407,   408,
     412,   413,   413,   419,   420,   429,   434,   437,   442,   446,
     451,   451,   457,   466,   467,   468,   469,   473,   474,   478,
     479,   483,   484,   488,   489,   490,   494,   498,   507,   508,
     509,   513,   514,   518,   519,   523,   524,   525,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   541,   542,   542,
     543,   544,   545,   546,   550,   551,   552,   556,   557,   561,
     562,   563,   564,   568,   569,   573,   574,   575,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   592,   593,
     594,   595,   596,   600,   601,   605,   606,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   625,   626,
     630,   634,   635,   639,   640,   644,   645,   649,   650,   654,
     655,   659,   660,   661,   665,   666,   667,   668,   669,   673,
     674,   675,   679,   680,   681,   685,   686,   687,   688,   692,
     693,   697,   698,   699,   700,   701,   702,   706,   707,   708,
     709,   710,   711,   715,   716,   717,   718,   719,   720,   721,
     722,   726,   727,   728,   729,   733,   734,   738,   739,   740,
     741,   745,   749
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
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "@3", "@4", "declaration", "declaration_list",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "type_qualifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "@5", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "@6", "declarator", "direct_declarator",
  "@7", "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@8", "labeled_statement",
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
       0,    89,    90,    90,    91,    91,    93,    92,    94,    92,
      95,    92,    96,    92,    97,    97,    98,    98,    99,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   108,   107,   109,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   116,   115,   117,   117,   118,   118,   118,   118,   118,
     119,   118,   118,   120,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   125,   125,   126,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   131,   132,   131,
     131,   131,   131,   131,   133,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   139,   139,
     139,   139,   139,   140,   140,   141,   141,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   150,   151,   151,   151,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   156,   156,   156,   156,   157,   157,   157,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   160,   160,   161,   161,   161,
     161,   162,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     3,     0,     4,
       0,     4,     0,     5,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       1,     3,     1,     0,     4,     3,     1,     2,     1,     2,
       1,     3,     1,     2,     3,     4,     5,     2,     1,     3,
       1,     0,     4,     1,     2,     1,     3,     3,     4,     3,
       0,     5,     4,     1,     2,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     2,     1,     3,     1,     3,
       4,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     0,     2,
       1,     1,     1,     1,     3,     4,     3,     1,     2,     2,
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
       0,   232,    40,    28,    27,    26,    24,    25,    30,    31,
      32,    33,    36,    37,    34,    35,    41,    42,    29,    46,
      47,     0,     0,    83,     0,     2,     4,     5,     0,    18,
      20,    22,    38,     0,    39,     6,    73,     0,    75,     0,
      67,     0,    87,    85,    84,     1,     3,    14,     0,    50,
      52,    19,    21,    23,     0,    45,     0,    16,     8,     0,
      80,     0,    74,     0,    68,    70,     0,    76,    88,    86,
      15,     0,    53,     0,    12,    56,    58,     0,    48,     0,
       0,   118,     7,     0,    17,    52,    79,     0,     0,    96,
     227,   229,   228,   230,   231,     0,     0,     0,     0,    77,
     208,   207,   209,   210,   211,   212,   170,     0,   168,   171,
     173,   175,   177,   179,   181,   184,   189,   192,   195,   199,
       0,   201,   213,   222,   223,   221,    65,     0,    71,     0,
      51,     0,    11,     0,    57,    59,    44,    49,     0,     0,
      60,    62,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,   127,   129,   118,   133,     0,   117,
     120,   118,   121,   122,   123,     0,   153,   155,   199,   221,
       9,    94,     0,    89,    91,     0,    82,     0,   205,     0,
     202,   203,   103,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,   219,   220,     0,
       0,     0,    69,     0,    66,     0,    54,    98,    13,    63,
      55,     0,     0,    43,     0,   118,     0,     0,     0,     0,
       0,     0,   149,   150,   151,     0,   131,   118,   119,   130,
     134,   128,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   157,     0,   118,     0,     0,    93,   105,
      95,   106,    81,     0,    97,     0,     0,   105,   104,     0,
     224,   172,     0,   174,   176,   178,   180,   182,   183,   187,
     188,   185,   186,   190,   191,   193,   194,   196,   197,   198,
     218,   215,   225,     0,     0,   217,    72,   101,     0,    61,
      64,   118,   126,     0,     0,     0,     0,     0,     0,   148,
     152,   132,   154,   156,   124,   113,     0,     0,   109,     0,
     107,     0,     0,    90,    92,   206,   200,     0,     0,   216,
     214,    99,     0,   125,   118,   118,   118,     0,     0,     0,
       0,   114,   108,   110,   115,     0,   111,     0,   169,   226,
     100,   102,   135,   137,   138,     0,   118,     0,     0,     0,
       0,   116,   112,   118,     0,   140,   118,   118,     0,   118,
       0,     0,   136,   139,   141,   142,   118,   144,   118,   118,
       0,   143,   145,   146,   118,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    56,    83,    73,   133,    57,    58,
      59,    29,    30,    31,    32,    33,    77,    48,    49,   131,
      78,    79,   139,   140,    34,    63,    64,   213,    35,    36,
      87,    37,    44,   316,   173,   174,    88,   216,   298,   183,
     317,   261,   157,   158,   159,   160,    82,   161,   162,   163,
     164,   165,   166,   254,   167,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   168,   120,   121,
     122,   293,   123,   124,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -210
static const yytype_int16 yypact[] =
{
    1312,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,    10,    15,    56,  1243,  -210,  -210,  -210,   108,  1499,
    1499,  1499,  -210,    17,  -210,  1499,    87,    39,  -210,    26,
     -23,    63,  -210,  -210,    56,  -210,  -210,  -210,    30,  -210,
    1377,  -210,  -210,  -210,   415,     7,    86,  -210,  1499,   108,
       6,   321,    87,   209,  -210,   111,    26,  -210,  -210,  -210,
    -210,    15,  -210,    86,  1499,   415,   415,  1410,  -210,    71,
     415,   436,  -210,    86,  -210,   132,  -210,  1499,    41,  -210,
    -210,  -210,  -210,  -210,  -210,  1166,  1176,  1176,   606,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,   146,    24,   224,
     175,   180,   187,    89,    52,   271,   204,   -20,  -210,  -210,
    1186,   222,  -210,  -210,  -210,  -210,  -210,    26,  -210,   221,
    -210,   800,  -210,    86,  -210,  -210,  -210,  -210,  1186,    57,
    -210,   210,  1441,  1186,   212,   219,   223,   233,   776,   236,
      26,   227,   235,   813,  -210,  -210,   521,  -210,    86,  -210,
    -210,   654,  -210,  -210,  -210,   142,  -210,  -210,   316,   238,
    -210,   141,   239,   244,  -210,    26,  -210,   606,  -210,  1186,
    -210,  -210,   101,   241,    51,  -210,  1186,  1186,  1186,  1186,
    1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,  1186,
    1186,  1186,  1186,  1186,  1186,  -210,    26,  -210,  -210,   898,
    1186,    26,  -210,  1186,  -210,   800,  -210,  -210,  -210,  -210,
    -210,    71,  1186,  -210,   245,   776,  1186,  1186,  1186,   256,
     911,   251,  -210,  -210,  -210,   186,  -210,   691,  -210,  -210,
    -210,  -210,  1186,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  1186,   776,  1263,   921,  -210,     4,
    -210,    95,  -210,  1478,  -210,   247,  1332,   157,  -210,  1186,
    -210,   224,    60,   175,   180,   187,    89,    52,    52,   271,
     271,   271,   271,   204,   204,   -20,   -20,  -210,  -210,  -210,
    -210,  -210,  -210,    75,   -12,  -210,  -210,  -210,   229,  -210,
    -210,   776,  -210,    83,   109,   136,   246,   934,   205,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,   248,   249,  -210,   257,
      95,  1168,   944,  -210,  -210,  -210,  -210,  1186,  1186,  -210,
    -210,  -210,   786,  -210,   776,   776,   776,  1186,  1029,   206,
    1042,  -210,  -210,  -210,  -210,   275,  -210,   274,  -210,  -210,
    -210,  -210,   293,  -210,  -210,   151,   776,   154,  1055,  1068,
     207,  -210,  -210,   776,   285,  -210,   776,   776,   172,   776,
     173,  1081,  -210,  -210,  -210,  -210,   776,  -210,   776,   776,
     174,  -210,  -210,  -210,   776,  -210
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,   327,  -210,  -210,  -210,  -210,  -210,    11,   -27,
       1,  -210,   -28,    28,  -210,  -210,   272,  -210,   282,  -210,
     -58,   -60,  -210,   133,  -210,   291,   231,  -210,   -18,   -32,
    -210,   -17,  -210,   -85,  -210,    96,  -210,  -203,  -210,   183,
    -168,  -209,    54,  -210,  -210,  -210,   -37,   208,  -210,  -210,
    -210,   -90,   -97,  -210,   -44,   -98,  -210,   176,   177,   179,
     171,   181,   106,    66,   104,   105,   -40,    -4,  -210,  -210,
    -210,  -210,  -210,  -210,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -11
static const yytype_int16 yytable[] =
{
      38,    28,   172,   260,    41,    62,    43,     1,   184,     1,
      50,    27,   297,     1,   268,   134,   135,   106,     1,   137,
       1,    40,    38,    74,    38,    28,    75,    69,    38,     1,
      51,    52,    53,    55,   217,    27,   132,    38,   182,    65,
     219,    85,     1,    66,   186,   224,   170,    75,    75,    75,
     320,    42,    75,    85,   156,   202,   242,   119,   320,    38,
      89,   141,   330,   235,   203,   204,    65,   194,   195,    84,
      75,    38,    68,    80,     1,   256,    39,   257,    86,    38,
     205,   169,    76,    54,   137,    84,    22,   184,   171,   184,
      23,   178,   180,   181,   106,    70,   218,   272,    71,   106,
     187,    16,    17,    76,    76,    76,   192,   193,    76,   175,
      22,     1,   292,   176,    75,   296,   119,   182,   217,   242,
     294,   238,   220,   270,   300,   221,    76,    65,   242,   351,
     327,    23,   196,   197,   119,    67,   303,   304,   305,   119,
     308,   138,    22,   328,     1,   312,    23,   329,   169,    75,
     231,   242,    81,   258,   259,   334,   169,   313,    60,   319,
      61,   169,   287,   288,   289,   267,   321,    84,   322,   106,
      76,    38,   266,    47,   257,   264,    23,   242,   106,    22,
     128,   335,   119,    23,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,    72,   229,   141,   242,    76,   290,   241,   336,   119,
     242,   295,   256,   106,   257,   240,    23,   339,   119,   242,
     185,    38,   242,   364,   347,   169,   366,    62,   266,   326,
     257,   349,   206,   207,   208,   217,   345,   169,    41,   259,
     242,   242,   242,   188,   376,   378,   384,   355,   357,   267,
     360,   310,   189,   119,   242,   169,    38,   171,   190,    38,
     279,   280,   281,   282,   171,   119,   191,   171,   368,   370,
     340,   358,   371,   242,   242,   242,   126,   127,   106,   302,
     222,   380,   225,   348,   198,   199,   200,   201,   214,   127,
     226,   240,   232,   209,   227,   210,   331,   332,   277,   278,
     233,   169,   283,   284,   228,   285,   286,   230,   255,   314,
     211,   262,   263,   269,   306,   301,   309,   337,   119,   325,
     341,   342,   171,   119,     1,    90,    91,    92,    93,    94,
      95,   343,    96,    97,   169,   169,   169,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   361,   362,   363,
     373,    46,   142,   130,   299,   333,   169,   129,   212,   324,
     265,   275,   271,   169,   237,   273,   169,   169,   274,   169,
       0,     0,   276,     0,     0,     0,   169,     0,   169,   169,
       0,     0,     0,     0,   169,   253,     0,     0,   352,   353,
     354,     0,    98,     0,     0,    99,   100,     0,     0,     0,
     101,     0,     0,   102,   103,     0,     0,   104,   105,     0,
     365,     0,     0,     0,     0,     0,     0,   372,     0,     0,
     374,   375,     0,   377,     0,     0,     0,     0,     0,     0,
     381,     0,   382,   383,     0,     0,     0,     0,   385,     1,
      90,    91,    92,    93,    94,    95,     2,    96,    97,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,     0,     0,     0,    98,     0,     0,
       0,   100,     0,     0,     0,   101,     0,     0,   102,   103,
       0,     0,   104,   105,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,   143,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   236,     0,
       0,     0,    98,     0,     0,     0,   100,     0,     0,     0,
     101,     0,     0,   102,   103,     0,     0,   104,   105,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,   100,     0,     0,     0,   101,     0,     0,   102,   103,
       0,     0,   104,   105,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,   143,   144,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   154,
       0,   239,     0,     0,     0,    98,     0,     0,     0,   100,
       0,     0,     0,   101,     0,     0,   102,   103,     0,     0,
     104,   105,     0,     0,   143,   144,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,   311,     0,
       0,     0,    98,     0,     0,     0,   100,     0,     0,     0,
     101,     0,     0,   102,   103,     0,     0,   104,   105,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,     0,     0,     0,     0,     0,    98,     0,     0,
       0,   100,   215,   350,     0,   101,     0,    98,   102,   103,
       0,   100,   104,   105,     0,   101,   215,     0,   102,   103,
       0,    98,   104,   105,     0,   100,     0,     0,   234,   101,
       0,     0,   102,   103,    98,     0,   104,   105,   100,     0,
       0,     0,   101,     0,     0,   102,   103,     0,     0,   104,
     105,     1,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
     291,     0,     0,   100,     0,     0,   307,   101,     0,     0,
     102,   103,    98,     0,   104,   105,   100,     0,     0,     0,
     101,     0,    98,   102,   103,   318,   100,   104,   105,   338,
     101,     0,     0,   102,   103,    98,     0,   104,   105,   100,
       0,     0,     0,   101,     0,    98,   102,   103,   346,   100,
     104,   105,     0,   101,     0,     0,   102,   103,     0,     0,
     104,   105,     1,    90,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,     0,     1,    90,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
       0,     1,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     0,     0,     0,
      98,   356,     0,     0,   100,     0,     0,   359,   101,     0,
       0,   102,   103,    98,     0,   104,   105,   100,     0,     0,
       0,   101,     0,     0,   102,   103,    98,   367,   104,   105,
     100,     0,     0,     0,   101,     0,     0,   102,   103,    98,
     369,   104,   105,   100,     0,     0,     0,   101,     0,     0,
     102,   103,    98,   379,   104,   105,   100,     0,     0,     0,
     101,     0,     0,   102,   103,     0,     0,   104,   105,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     1,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,     0,
     344,   100,     0,    45,     0,   101,     1,   179,   102,   103,
       0,   100,   104,   105,     0,   101,     0,    98,   102,   103,
       0,   100,   104,   105,     0,   101,     1,     0,   102,   103,
       0,     0,   104,   105,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     1,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   256,   315,   257,     0,    23,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   266,   315,   257,     0,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,   -10,     0,     0,    72,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   136,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   323,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,     0,    87,   171,    22,    37,    23,     3,    98,     3,
      28,     0,   215,     3,   182,    75,    76,    61,     3,    77,
       3,    21,    22,    50,    24,    24,    54,    44,    28,     3,
      29,    30,    31,    33,   131,    24,    73,    37,    98,    39,
     138,    59,     3,    66,    20,   143,    83,    75,    76,    77,
     259,    23,    80,    71,    81,    75,    68,    61,   267,    59,
      60,    79,    74,   153,    84,    85,    66,    15,    16,    58,
      98,    71,    44,    66,     3,    71,    66,    73,    72,    79,
     120,    81,    54,    66,   142,    74,    71,   177,    87,   179,
      75,    95,    96,    97,   138,    65,   133,   187,    68,   143,
      76,    45,    46,    75,    76,    77,    17,    18,    80,    68,
      71,     3,   209,    72,   142,   213,   120,   177,   215,    68,
     210,   158,    65,    72,   222,    68,    98,   127,    68,   332,
      70,    75,    80,    81,   138,    72,   226,   227,   228,   143,
     230,    70,    71,    68,     3,   242,    75,    72,   148,   177,
     150,    68,    66,   171,   171,    72,   156,   254,    71,   257,
      73,   161,   202,   203,   204,   182,    71,   156,    73,   213,
     142,   171,    71,    65,    73,   175,    75,    68,   222,    71,
      69,    72,   186,    75,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    69,   148,   221,    68,   177,   206,    65,    72,   213,
      68,   211,    71,   257,    73,   161,    75,   307,   222,    68,
      74,   221,    68,    72,   322,   225,    72,   259,    71,   269,
      73,   328,    10,    11,    12,   332,   321,   237,   256,   256,
      68,    68,    68,    19,    72,    72,    72,   337,   338,   266,
     340,    65,    77,   257,    68,   255,   256,   256,    78,   259,
     194,   195,   196,   197,   263,   269,    79,   266,   358,   359,
      65,    65,    65,    68,    68,    68,    67,    68,   322,   225,
      70,   371,    70,   327,    13,    14,    82,    83,    67,    68,
      71,   237,    65,    71,    71,    73,    67,    68,   192,   193,
      65,   301,   198,   199,    71,   200,   201,    71,    70,   255,
      88,    72,    68,    72,    58,    70,    65,    71,   322,    72,
      72,    72,   321,   327,     3,     4,     5,     6,     7,     8,
       9,    74,    11,    12,   334,   335,   336,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    72,    74,    56,
      65,    24,    80,    71,   221,   301,   356,    66,   127,   263,
     177,   190,   186,   363,   156,   188,   366,   367,   189,   369,
      -1,    -1,   191,    -1,    -1,    -1,   376,    -1,   378,   379,
      -1,    -1,    -1,    -1,   384,    69,    -1,    -1,   334,   335,
     336,    -1,    71,    -1,    -1,    74,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,    -1,
     356,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,
     366,   367,    -1,   369,    -1,    -1,    -1,    -1,    -1,    -1,
     376,    -1,   378,   379,    -1,    -1,    -1,    -1,   384,     3,
       4,     5,     6,     7,     8,     9,    31,    11,    12,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    66,    67,    -1,    79,    -1,    71,    82,    83,
      -1,    75,    86,    87,    -1,    79,    66,    -1,    82,    83,
      -1,    71,    86,    87,    -1,    75,    -1,    -1,    65,    79,
      -1,    -1,    82,    83,    71,    -1,    86,    87,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    65,    79,    -1,    -1,
      82,    83,    71,    -1,    86,    87,    75,    -1,    -1,    -1,
      79,    -1,    71,    82,    83,    74,    75,    86,    87,    65,
      79,    -1,    -1,    82,    83,    71,    -1,    86,    87,    75,
      -1,    -1,    -1,    79,    -1,    71,    82,    83,    74,    75,
      86,    87,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,
      86,    87,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    -1,    65,    79,    -1,
      -1,    82,    83,    71,    -1,    86,    87,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    71,    72,    86,    87,
      75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,    71,
      72,    86,    87,    75,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,    71,    72,    86,    87,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      72,    75,    -1,     0,    -1,    79,     3,    71,    82,    83,
      -1,    75,    86,    87,    -1,    79,    -1,    71,    82,    83,
      -1,    75,    86,    87,    -1,    79,     3,    -1,    82,    83,
      -1,    -1,    86,    87,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    71,     3,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    71,    -1,    -1,    -1,    75,    -1,    -1,
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
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    71,    75,    90,    91,    92,    97,    99,   100,
     101,   102,   103,   104,   113,   117,   118,   120,   163,    66,
     163,   117,   102,   120,   121,     0,    91,    65,   106,   107,
     117,    99,    99,    99,    66,   163,    93,    97,    98,    99,
      71,    73,   118,   114,   115,   163,    66,    72,   102,   120,
      65,    68,    69,    95,    98,   101,   102,   105,   109,   110,
      66,    66,   135,    94,    97,   117,    72,   119,   125,   163,
       4,     5,     6,     7,     8,     9,    11,    12,    71,    74,
      75,    79,    82,    83,    86,    87,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   161,   162,   163,    67,    68,    69,   114,
     107,   108,   135,    96,   110,   110,    67,   109,    70,   111,
     112,   117,   105,    53,    54,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    98,   131,   132,   133,
     134,   136,   137,   138,   139,   140,   141,   143,   156,   163,
     135,    99,   122,   123,   124,    68,    72,    71,   156,    71,
     156,   156,   110,   128,   140,    74,    20,    76,    19,    77,
      78,    79,    17,    18,    15,    16,    80,    81,    13,    14,
      82,    83,    75,    84,    85,   155,    10,    11,    12,    71,
      73,    88,   115,   116,    67,    66,   126,   141,   135,   144,
      65,    68,    70,    67,   144,    70,    71,    71,    71,   131,
      71,   163,    65,    65,    65,   140,    67,   136,   135,    67,
     131,    65,    68,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    69,   142,    70,    71,    73,   117,   120,
     129,   130,    72,    68,   163,   128,    71,   120,   129,    72,
      72,   146,   140,   147,   148,   149,   150,   151,   151,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     163,    72,   141,   160,   140,   163,   144,   126,   127,   112,
     144,    70,   131,   140,   140,   140,    58,    65,   140,    65,
      65,    67,   141,   141,   131,    72,   122,   129,    74,   144,
     130,    71,    73,    51,   124,    72,   155,    70,    68,    72,
      74,    67,    68,   131,    72,    72,    72,    71,    65,   140,
      65,    72,    72,    74,    72,   122,    74,   144,   143,   141,
      67,   126,   131,   131,   131,   140,    72,   140,    65,    65,
     140,    72,    74,    56,    72,   131,    72,    72,   140,    72,
     140,    65,   131,    65,   131,   131,    72,   131,    72,    72,
     140,   131,   131,   131,    72,   131
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
        case 6:
#line 80 "test_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 80 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 8:
#line 81 "test_c_grammar.y"
    {st.push();}
    break;

  case 9:
#line 81 "test_c_grammar.y"
    {st.pop();}
    break;

  case 10:
#line 82 "test_c_grammar.y"
    {st.push();}
    break;

  case 11:
#line 82 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 12:
#line 83 "test_c_grammar.y"
    {st.push();}
    break;

  case 13:
#line 83 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 15:
#line 91 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (3)].declval);
  SymbolContent *sc = st.searchAll((*(yyvsp[(2) - (3)].declval)).id);
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
      std::cout<<dn.next<<std::endl;
      st.update((*(yyvsp[(2) - (3)].declval)).id,newsc);
    }
  SymbolContent *sn = st.searchAll((*(yyvsp[(2) - (3)].declval)).id);
 }
    break;

  case 16:
#line 113 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 17:
#line 114 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (2)].declval);
  dn.next = (yyvsp[(1) - (2)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 18:
#line 123 "test_c_grammar.y"
    {
  declNode dn;
  dn.specs = 0;
  if((yyvsp[(1) - (1)].sval)=="AUTO")
    {
      dn.specs |= xAUTO;
    }
  else if((yyvsp[(1) - (1)].sval) == "REGISTER")
    {
      dn.specs |= xREGISTER;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "STATIC")
    {
      dn.specs |= xSTATIC;
    }
  else if((yyvsp[(1) - (1)].sval) == "EXTERN")
    {
      dn.specs |= xEXTERN;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "TYPEDEF")
    {   
      dn.specs |= xTYPEDEF;
    }
    (yyval.declval) = &dn;
 }
    break;

  case 19:
#line 149 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (2)].declval);
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

  case 20:
#line 175 "test_c_grammar.y"
    {
  declNode dn;
  dn.specs = 0;
  if((yyvsp[(1) - (1)].sval) == "VOID")
    {
      dn.specs |= xVOID;
    }
  else if((yyvsp[(1) - (1)].sval) == "CHAR")
    {
      dn.specs |= xCHAR;
    }
  else if((yyvsp[(1) - (1)].sval) == "SHORT")
    {
      dn.specs |= xSHORT;
    }
  else if((yyvsp[(1) - (1)].sval) == "INT")
    {
      dn.specs |= xINT;
      }
  else if((yyvsp[(1) - (1)].sval) == "LONG")
    {
      dn.specs |= xLONG;
    }
  else if((yyvsp[(1) - (1)].sval) == "FLOAT")
    {
      dn.specs |= xFLOAT;
    }
  else if((yyvsp[(1) - (1)].sval) == "DOUBLE")
    {
      dn.specs |= xDOUBLE;
    }
  else if((yyvsp[(1) - (1)].sval) == "SIGNED")
    {
      dn.specs  |= xSIGNED;
    }
  else if((yyvsp[(1) - (1)].sval) == "UNSIGNED")
    {
      dn.specs |= xUNSIGNED; 
    }
  else if((yyvsp[(1) - (1)].sval) == "STRUCT")
    {
      dn.specs |= xSTRUCT;
    }
  else if((yyvsp[(1) - (1)].sval) == "UNION" )
    {
      dn.specs |= xUNION;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "ENUM")
    {
      dn.specs  |= xENUM;
    }
  else if((yyvsp[(1) - (1)].sval) == "TYPEDEF_NAME")
    {
      dn.specs |=  xTYPEDEF_NAME;
      }
(yyval.declval)=&dn;
}
    break;

  case 21:
#line 233 "test_c_grammar.y"
    {
     declNode dn = *(yyvsp[(2) - (2)].declval);
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
 (yyval.declval) = &dn;
 }
    break;

  case 22:
#line 290 "test_c_grammar.y"
    {
  declNode dn;
  dn.specs = 0;
  if((yyvsp[(1) - (1)].sval) == "CONST")
    {
      dn.specs |= xCONST;
    }
  else if((yyvsp[(1) - (1)].sval) == "VOLATILE")
    {
      dn.specs |= xVOLATILE;
    }
  (yyval.declval) = &dn;
}
    break;

  case 23:
#line 304 "test_c_grammar.y"
    {
  declNode dn  = *(yyvsp[(2) - (2)].declval);
  if((yyvsp[(1) - (2)].sval) == "CONST")
    {
      dn.specs  |= xCONST;
    }
  else if((yyvsp[(1) - (2)].sval) == "VOLATILE")
    {
      dn.specs |= xVOLATILE;
      }
  (yyval.declval) = &dn;

}
    break;

  case 24:
#line 320 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "AUTO";}
    break;

  case 25:
#line 321 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "REGISTER";}
    break;

  case 26:
#line 322 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "STATIC";}
    break;

  case 27:
#line 323 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "EXTERN";}
    break;

  case 28:
#line 324 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "TYPEDEF";}
    break;

  case 29:
#line 328 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOID";}
    break;

  case 30:
#line 329 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CHAR";}
    break;

  case 31:
#line 330 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SHORT";}
    break;

  case 32:
#line 331 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "INT";}
    break;

  case 33:
#line 332 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "LONG";}
    break;

  case 34:
#line 333 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "FLOAT";}
    break;

  case 35:
#line 334 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "DOUBLE";}
    break;

  case 36:
#line 335 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SIGNED";}
    break;

  case 37:
#line 336 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "UNSIGNED";}
    break;

  case 38:
#line 338 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "NEED TO FIGURE OUT";}
    break;

  case 39:
#line 339 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "Same!";}
    break;

  case 40:
#line 340 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 41:
#line 344 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CONST";}
    break;

  case 42:
#line 345 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOLATILE";}
    break;

  case 46:
#line 357 "test_c_grammar.y"
    {(yyval.sval) = "STRUCT";}
    break;

  case 47:
#line 358 "test_c_grammar.y"
    {(yyval.sval) = "UNION";}
    break;

  case 50:
#line 368 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 51:
#line 369 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(3) - (3)].declval);}
    break;

  case 52:
#line 374 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval) ;}
    break;

  case 53:
#line 375 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 54:
#line 375 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (4)].declval);}
    break;

  case 71:
#line 413 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 73:
#line 419 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 74:
#line 420 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (2)].declval);
  dn.specs |= xPOINTER;
  (yyval.declval) = &dn;
 }
    break;

  case 75:
#line 429 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (1)].declval);
  dn.next = 0;
  (yyval.declval) = &dn;
 }
    break;

  case 76:
#line 434 "test_c_grammar.y"
    {
  (yyval.declval) = (yyvsp[(2) - (3)].declval);}
    break;

  case 77:
#line 437 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.specs |= xARRAY;
  (yyval.declval)=&dn;}
    break;

  case 78:
#line 442 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (4)].declval);
  dn.specs |= xARRAY;
  (yyval.declval)=&dn;}
    break;

  case 79:
#line 446 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.specs |= xFUNCTION;
  (yyval.declval)=&dn;
st.push();}
    break;

  case 80:
#line 451 "test_c_grammar.y"
    {st.push();}
    break;

  case 81:
#line 452 "test_c_grammar.y"
    {
 declNode dn = *(yyvsp[(1) - (5)].declval);
 dn.specs |= xFUNCTION;
 (yyval.declval)=&dn;
}
    break;

  case 82:
#line 458 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (4)].declval);
  dn.specs |= xFUNCTION;
  (yyval.declval)=&dn;
}
    break;

  case 96:
#line 494 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (1)].declval);
  (yyval.declval) = &dn;
 }
    break;

  case 97:
#line 499 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.next = (yyvsp[(3) - (3)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 118:
#line 542 "test_c_grammar.y"
    {st.push();}
    break;

  case 119:
#line 542 "test_c_grammar.y"
    {st.pop();}
    break;

  case 157:
#line 611 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 158:
#line 612 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 159:
#line 613 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 160:
#line 614 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 161:
#line 615 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 162:
#line 616 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 163:
#line 617 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 164:
#line 618 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 165:
#line 619 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 166:
#line 620 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 167:
#line 621 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 232:
#line 749 "test_c_grammar.y"
    {
  declNode dn;
  dn.id = (yyvsp[(1) - (1)].sval);
  (yyval.declval) = &dn;
 }
    break;


/* Line 1267 of yacc.c.  */
#line 2688 "y.tab.c"
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


#line 755 "test_c_grammar.y"


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

