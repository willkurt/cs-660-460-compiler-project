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
#define YYLAST   1528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  233
/* YYNRULES -- Number of states.  */
#define YYNSTATES  388

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
      23,    24,    25,    31,    32,    38,    41,    45,    47,    50,
      52,    55,    57,    60,    62,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      95,    97,    99,   101,   103,   109,   114,   117,   119,   121,
     123,   126,   128,   132,   134,   135,   140,   144,   146,   149,
     151,   154,   156,   160,   162,   165,   169,   174,   180,   183,
     185,   189,   191,   192,   197,   199,   202,   204,   208,   212,
     217,   221,   222,   228,   233,   235,   238,   241,   245,   247,
     250,   252,   256,   258,   262,   265,   267,   270,   272,   276,
     278,   282,   287,   289,   293,   295,   298,   300,   302,   305,
     309,   312,   316,   320,   325,   328,   332,   336,   341,   343,
     344,   347,   349,   351,   353,   355,   359,   364,   368,   370,
     373,   376,   380,   384,   389,   391,   394,   400,   408,   414,
     420,   428,   435,   443,   451,   460,   468,   477,   486,   496,
     500,   503,   506,   509,   513,   515,   519,   521,   525,   527,
     529,   531,   533,   535,   537,   539,   541,   543,   545,   547,
     549,   555,   557,   559,   563,   565,   569,   571,   575,   577,
     581,   583,   587,   589,   593,   597,   599,   603,   607,   611,
     615,   617,   621,   625,   627,   631,   635,   637,   641,   645,
     649,   651,   656,   658,   661,   664,   667,   670,   675,   677,
     679,   681,   683,   685,   687,   689,   694,   698,   703,   707,
     711,   714,   717,   719,   721,   723,   727,   729,   733,   735,
     737,   739,   741,   743
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    90,    91,    -1,    92,    -1,
      98,    -1,    -1,   118,    93,   136,    -1,    -1,   118,    99,
      94,   136,    -1,    -1,    -1,   100,    95,   118,    96,   136,
      -1,    -1,   100,   118,    99,    97,   136,    -1,   100,    65,
      -1,   100,   107,    65,    -1,    98,    -1,    99,    98,    -1,
     101,    -1,   101,   100,    -1,   102,    -1,   102,   100,    -1,
     103,    -1,   103,   100,    -1,    35,    -1,    36,    -1,    34,
      -1,    33,    -1,    32,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,   104,    -1,   114,    -1,    31,    -1,    45,
      -1,    46,    -1,   105,   164,    66,   106,    67,    -1,   105,
      66,   106,    67,    -1,   105,   164,    -1,    48,    -1,    49,
      -1,   110,    -1,   106,   110,    -1,   108,    -1,   107,    68,
     108,    -1,   118,    -1,    -1,   118,    69,   109,   127,    -1,
     111,   112,    65,    -1,   102,    -1,   102,   111,    -1,   103,
      -1,   103,   111,    -1,   113,    -1,   112,    68,   113,    -1,
     118,    -1,    70,   145,    -1,   118,    70,   145,    -1,    50,
      66,   115,    67,    -1,    50,   164,    66,   115,    67,    -1,
      50,   164,    -1,   116,    -1,   115,    68,   116,    -1,   164,
      -1,    -1,   164,    69,   117,   145,    -1,   119,    -1,   121,
     119,    -1,   164,    -1,    71,   118,    72,    -1,   119,    73,
      74,    -1,   119,    73,   145,    74,    -1,   119,    71,    72,
      -1,    -1,   119,    71,   120,   123,    72,    -1,   119,    71,
     126,    72,    -1,    75,    -1,    75,   122,    -1,    75,   121,
      -1,    75,   122,   121,    -1,   103,    -1,   122,   103,    -1,
     124,    -1,   124,    68,    51,    -1,   125,    -1,   124,    68,
     125,    -1,   100,   118,    -1,   100,    -1,   100,   130,    -1,
     164,    -1,   126,    68,   164,    -1,   142,    -1,    66,   128,
      67,    -1,    66,   128,    68,    67,    -1,   127,    -1,   128,
      68,   127,    -1,   111,    -1,   111,   130,    -1,   121,    -1,
     131,    -1,   121,   131,    -1,    71,   130,    72,    -1,    73,
      74,    -1,    73,   145,    74,    -1,   131,    73,    74,    -1,
     131,    73,   145,    74,    -1,    71,    72,    -1,    71,   123,
      72,    -1,   131,    71,    72,    -1,   131,    71,   123,    72,
      -1,   134,    -1,    -1,   133,   136,    -1,   135,    -1,   138,
      -1,   139,    -1,   140,    -1,   164,    70,   132,    -1,    53,
     145,    70,   132,    -1,    54,    70,   132,    -1,    65,    -1,
     141,    65,    -1,    66,    67,    -1,    66,   137,    67,    -1,
      66,    99,    67,    -1,    66,    99,   137,    67,    -1,   132,
      -1,   137,   132,    -1,    55,    71,   141,    72,   132,    -1,
      55,    71,   141,    72,   132,    56,   132,    -1,    57,    71,
     141,    72,   132,    -1,    58,    71,   141,    72,   132,    -1,
      59,   132,    58,    71,   141,    72,    65,    -1,    60,    71,
      65,    65,    72,   132,    -1,    60,    71,    65,    65,   141,
      72,   132,    -1,    60,    71,    65,   141,    65,    72,   132,
      -1,    60,    71,    65,   141,    65,   141,    72,   132,    -1,
      60,    71,   141,    65,    65,    72,   132,    -1,    60,    71,
     141,    65,    65,   141,    72,   132,    -1,    60,    71,   141,
      65,   141,    65,    72,   132,    -1,    60,    71,   141,    65,
     141,    65,   141,    72,   132,    -1,    61,   164,    65,    -1,
      62,    65,    -1,    63,    65,    -1,    64,    65,    -1,    64,
     141,    65,    -1,   142,    -1,   141,    68,   142,    -1,   144,
      -1,   157,   143,   142,    -1,    69,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,   146,    -1,   146,
      76,   141,    70,   144,    -1,   144,    -1,   147,    -1,   146,
      20,   147,    -1,   148,    -1,   147,    19,   148,    -1,   149,
      -1,   148,    77,   149,    -1,   150,    -1,   149,    78,   150,
      -1,   151,    -1,   150,    79,   151,    -1,   152,    -1,   151,
      17,   152,    -1,   151,    18,   152,    -1,   153,    -1,   152,
      80,   153,    -1,   152,    81,   153,    -1,   152,    15,   153,
      -1,   152,    16,   153,    -1,   154,    -1,   153,    13,   154,
      -1,   153,    14,   154,    -1,   155,    -1,   154,    82,   155,
      -1,   154,    83,   155,    -1,   156,    -1,   155,    75,   156,
      -1,   155,    84,   156,    -1,   155,    85,   156,    -1,   157,
      -1,    71,   129,    72,   156,    -1,   159,    -1,    11,   157,
      -1,    12,   157,    -1,   158,   156,    -1,     9,   157,    -1,
       9,    71,   129,    72,    -1,    79,    -1,    75,    -1,    82,
      -1,    83,    -1,    86,    -1,    87,    -1,   160,    -1,   159,
      73,   141,    74,    -1,   159,    71,    72,    -1,   159,    71,
     161,    72,    -1,   159,    88,   164,    -1,   159,    10,   164,
      -1,   159,    11,    -1,   159,    12,    -1,   164,    -1,   162,
      -1,   163,    -1,    71,   141,    72,    -1,   142,    -1,   161,
      68,   142,    -1,     4,    -1,     6,    -1,     5,    -1,     7,
      -1,     8,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    70,    74,    75,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    88,    90,   112,   113,   122,
     147,   173,   231,   288,   302,   319,   320,   321,   322,   323,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   337,
     338,   339,   343,   344,   350,   351,   352,   356,   357,   361,
     362,   367,   369,   378,   379,   379,   383,   387,   388,   389,
     390,   394,   395,   399,   400,   401,   405,   406,   407,   411,
     412,   416,   417,   417,   423,   424,   433,   438,   442,   447,
     451,   456,   456,   462,   471,   472,   473,   474,   478,   479,
     483,   484,   488,   489,   493,   494,   495,   499,   503,   513,
     514,   515,   519,   520,   524,   525,   529,   530,   531,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   547,   548,
     548,   549,   550,   551,   552,   556,   557,   558,   562,   563,
     567,   568,   569,   570,   574,   575,   579,   580,   581,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   598,
     599,   600,   601,   602,   606,   607,   611,   612,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   631,
     632,   636,   640,   641,   645,   646,   650,   651,   655,   656,
     660,   661,   665,   666,   667,   671,   672,   673,   674,   675,
     679,   680,   681,   685,   686,   687,   691,   692,   693,   694,
     698,   699,   703,   704,   705,   706,   707,   708,   712,   713,
     714,   715,   716,   717,   721,   722,   723,   724,   725,   726,
     727,   728,   732,   733,   734,   735,   739,   740,   744,   745,
     746,   747,   751,   755
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
  "@2", "@3", "@4", "@5", "declaration", "declaration_list",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "type_qualifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "@6", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "@7", "declarator", "direct_declarator",
  "@8", "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "@9", "labeled_statement",
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
      95,    96,    92,    97,    92,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   109,   108,   110,   111,   111,   111,
     111,   112,   112,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   117,   116,   118,   118,   119,   119,   119,   119,
     119,   120,   119,   119,   121,   121,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     132,   132,   132,   132,   132,   134,   134,   134,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   152,   152,   152,   152,   152,
     153,   153,   153,   154,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   162,   162,
     162,   162,   163,   164
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     3,     0,     4,
       0,     0,     5,     0,     5,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     1,     1,     1,
       2,     1,     3,     1,     0,     4,     3,     1,     2,     1,
       2,     1,     3,     1,     2,     3,     4,     5,     2,     1,
       3,     1,     0,     4,     1,     2,     1,     3,     3,     4,
       3,     0,     5,     4,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     2,     1,     3,     1,
       3,     4,     1,     3,     1,     2,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     1,     0,
       2,     1,     1,     1,     1,     3,     4,     3,     1,     2,
       2,     3,     3,     4,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     7,     8,     7,     8,     8,     9,     3,
       2,     2,     2,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     4,     3,     3,
       2,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   233,    41,    29,    28,    27,    25,    26,    31,    32,
      33,    34,    37,    38,    35,    36,    42,    43,    30,    47,
      48,     0,     0,    84,     0,     2,     4,     5,     0,    19,
      21,    23,    39,     0,    40,     6,    74,     0,    76,     0,
      68,     0,    88,    86,    85,     1,     3,    15,     0,     0,
      51,    53,    20,    22,    24,     0,    46,     0,    17,     8,
       0,    81,     0,    75,     0,    69,    71,     0,    77,    89,
      87,    11,    16,     0,    54,    13,    57,    59,     0,    49,
       0,     0,   119,     7,     0,    18,    53,    80,     0,     0,
      97,   228,   230,   229,   231,   232,     0,     0,     0,     0,
      78,   209,   208,   210,   211,   212,   213,   171,     0,   169,
     172,   174,   176,   178,   180,   182,   185,   190,   193,   196,
     200,     0,   202,   214,   223,   224,   222,    66,     0,    72,
       0,     0,    52,     0,     0,    58,    60,    45,    50,     0,
       0,    61,    63,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,   128,   130,   119,   134,     0,
     118,   121,   119,   122,   123,   124,     0,   154,   156,   200,
     222,     9,    95,     0,    90,    92,     0,    83,     0,   206,
       0,   203,   204,   104,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,   220,   221,
       0,     0,     0,    70,     0,    67,    12,     0,    55,    99,
      14,    64,    56,     0,     0,    44,     0,   119,     0,     0,
       0,     0,     0,     0,   150,   151,   152,     0,   132,   119,
     120,   131,   135,   129,     0,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   158,     0,   119,     0,     0,
      94,   106,    96,   107,    82,     0,    98,     0,     0,   106,
     105,     0,   225,   173,     0,   175,   177,   179,   181,   183,
     184,   188,   189,   186,   187,   191,   192,   194,   195,   197,
     198,   199,   219,   216,   226,     0,     0,   218,    73,   102,
       0,    62,    65,   119,   127,     0,     0,     0,     0,     0,
       0,   149,   153,   133,   155,   157,   125,   114,     0,     0,
     110,     0,   108,     0,     0,    91,    93,   207,   201,     0,
       0,   217,   215,   100,     0,   126,   119,   119,   119,     0,
       0,     0,     0,   115,   109,   111,   116,     0,   112,     0,
     170,   227,   101,   103,   136,   138,   139,     0,   119,     0,
       0,     0,     0,   117,   113,   119,     0,   141,   119,   119,
       0,   119,     0,     0,   137,   140,   142,   143,   119,   145,
     119,   119,     0,   144,   146,   147,   119,   148
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    57,    84,    48,   131,   134,    58,
      59,    60,    29,    30,    31,    32,    33,    78,    49,    50,
     133,    79,    80,   140,   141,    34,    64,    65,   214,    35,
      36,    88,    37,    44,   318,   174,   175,    89,   218,   300,
     184,   319,   263,   158,   159,   160,   161,    83,   162,   163,
     164,   165,   166,   167,   256,   168,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   169,   121,
     122,   123,   295,   124,   125,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -244
static const yytype_int16 yypact[] =
{
    1291,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,    41,    62,    84,  1222,  -244,  -244,  -244,    12,  1478,
    1478,  1478,  -244,    50,  -244,  1478,   189,     7,  -244,    39,
       5,    28,  -244,  -244,    84,  -244,  -244,  -244,    62,    -2,
    -244,  1356,  -244,  -244,  -244,   448,    66,    86,  -244,  1478,
      12,     4,   744,   189,   -55,  -244,    87,    39,  -244,  -244,
    -244,  -244,  -244,    62,  -244,  1478,   448,   448,  1389,  -244,
      35,   448,   384,  -244,    86,  -244,    94,  -244,  1478,   -10,
    -244,  -244,  -244,  -244,  -244,  -244,  1124,  1134,  1134,   554,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   104,    -4,
     166,   169,   137,   150,    32,   167,   241,   207,    90,  -244,
    -244,  1144,   221,  -244,  -244,  -244,  -244,  -244,    39,  -244,
     243,    86,  -244,   758,    86,  -244,  -244,  -244,  -244,  1144,
      43,  -244,   203,  1420,  1144,   214,   220,   227,   237,   724,
     251,    39,   258,   260,   843,  -244,  -244,   469,  -244,    86,
    -244,  -244,   602,  -244,  -244,  -244,    93,  -244,  -244,   325,
     232,  -244,    51,   255,   261,  -244,    39,  -244,   554,  -244,
    1144,  -244,  -244,    72,   256,    55,  -244,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  -244,    39,  -244,  -244,
     856,  1144,    39,  -244,  1144,  -244,  -244,   758,  -244,  -244,
    -244,  -244,  -244,    35,  1144,  -244,   262,   724,  1144,  1144,
    1144,   272,   869,   266,  -244,  -244,  -244,   112,  -244,   639,
    -244,  -244,  -244,  -244,  1144,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  1144,   724,  1242,   879,
    -244,    26,  -244,   206,  -244,  1457,  -244,   263,  1311,   209,
    -244,  1144,  -244,   166,   231,   169,   137,   150,    32,   167,
     167,   241,   241,   241,   241,   207,   207,    90,    90,  -244,
    -244,  -244,  -244,  -244,  -244,    76,   -27,  -244,  -244,  -244,
     245,  -244,  -244,   724,  -244,    82,   101,   136,   268,   892,
     138,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   269,   270,
    -244,   259,   206,  1126,   977,  -244,  -244,  -244,  -244,  1144,
    1144,  -244,  -244,  -244,   734,  -244,   724,   724,   724,  1144,
     990,   170,  1003,  -244,  -244,  -244,  -244,   271,  -244,   282,
    -244,  -244,  -244,  -244,   278,  -244,  -244,   145,   724,   152,
    1016,  1029,   199,  -244,  -244,   724,   275,  -244,   724,   724,
     154,   724,   162,  1114,  -244,  -244,  -244,  -244,   724,  -244,
     724,   724,   168,  -244,  -244,  -244,   724,  -244
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,   320,  -244,  -244,  -244,  -244,  -244,  -244,    11,
     -46,     1,  -244,    36,   219,  -244,  -244,   264,  -244,   284,
    -244,   -64,   -25,  -244,   140,  -244,   292,   233,  -244,    -5,
     -33,  -244,   -17,  -244,   -86,  -244,    95,  -244,  -214,  -244,
     186,  -126,  -243,   -93,  -244,  -244,  -244,   -50,   210,  -244,
    -244,  -244,   -90,  -125,  -244,   -43,   -99,  -244,   179,   181,
     182,   183,   184,   121,   109,   117,   118,  -101,    -3,  -244,
    -244,  -244,  -244,  -244,  -244,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      38,    28,   173,   299,    63,    75,    43,     1,   219,   185,
       1,    27,   127,   128,   138,     1,   187,    41,   322,   107,
     206,    40,    38,    51,    38,    28,   322,    70,    38,     1,
      52,    53,    54,    56,   171,    27,   157,    38,     1,    66,
     221,   244,     1,    71,     1,   226,   262,   332,    38,   193,
     194,   135,   136,     1,     1,    86,   231,   270,   176,   120,
      38,    90,   177,    72,   237,     1,    73,    66,    86,   242,
      85,    67,   188,    38,   183,   142,    87,    47,    22,   138,
      38,   216,   170,    22,   220,   294,    85,    23,   185,   172,
     185,    76,   219,   179,   181,   182,   107,   258,   274,   259,
      68,   107,   289,   290,   291,   139,    22,    39,   222,   240,
      23,   223,    76,    76,    76,   298,    55,    76,   120,   314,
     353,   296,   258,   244,   259,   302,    23,   272,    66,    16,
      17,   315,    81,    22,   304,    76,   120,    23,   305,   306,
     307,   120,   310,   268,   330,   259,   242,    23,   331,   170,
     244,   233,    82,   183,   336,   261,   129,   170,   243,    23,
     321,   244,   170,    74,   316,   203,   269,   260,    85,   244,
     328,   107,    38,   337,   204,   205,   266,   312,   186,    76,
     244,   107,   195,   196,   120,   189,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   342,   244,   351,   244,   292,   338,   219,
     335,   120,   297,   244,    76,   191,   107,   366,   142,   341,
     244,   120,   244,    38,   368,   349,   378,   170,    63,   192,
     244,   207,   208,   209,   380,   360,   244,   347,   244,   170,
     386,   261,    42,   354,   355,   356,   190,   197,   198,   357,
     359,   269,   362,    41,   199,   200,   120,   170,    38,   172,
      61,    38,    62,    69,   373,   367,   172,   244,   120,   172,
     370,   372,   374,   224,    77,   376,   377,   323,   379,   324,
     268,   107,   259,   382,   227,   383,   350,   384,   385,   201,
     202,   228,   210,   387,   211,    77,    77,    77,   229,   244,
      77,   329,   257,   170,   281,   282,   283,   284,   230,   212,
     215,   128,   333,   334,   279,   280,   285,   286,    77,   287,
     288,   120,   232,   234,   172,   235,   120,   264,   271,   265,
     308,   311,   303,   345,   365,   327,   170,   170,   170,   339,
     375,   343,   344,   363,    46,   143,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   364,   132,   170,   130,
     326,   213,    77,   301,   267,   170,   273,   239,   170,   170,
     275,   170,   276,     0,   277,     0,   278,     0,   170,     0,
     170,   170,     0,     0,     0,     0,   170,     1,    91,    92,
      93,    94,    95,    96,   255,    97,    98,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   154,   155,
       0,   156,     0,     0,     0,    99,     0,     0,     0,   101,
       0,     0,     0,   102,     0,     0,   103,   104,     0,     0,
     105,   106,     1,    91,    92,    93,    94,    95,    96,     2,
      97,    98,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,   144,   145,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,   238,     0,     0,     0,
      99,     0,     0,     0,   101,     0,     0,     0,   102,     0,
       0,   103,   104,     0,     0,   105,   106,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     1,    91,    92,    93,    94,
      95,    96,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,   101,
       0,     0,     0,   102,     0,     0,   103,   104,     0,     0,
     105,   106,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,   144,   145,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   154,   155,     0,   241,
       0,     0,     0,    99,     0,     0,     0,   101,     0,     0,
       0,   102,     0,     0,   103,   104,     0,     0,   105,   106,
       0,     0,   144,   145,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,   313,     0,     0,     0,
      99,     0,     0,     0,   101,     0,     0,     0,   102,     0,
       0,   103,   104,     0,     0,   105,   106,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       0,     1,    91,    92,    93,    94,    95,    96,     0,    97,
      98,     0,     0,     0,     0,     0,     0,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   154,   155,
       0,     0,     0,     0,     0,    99,     0,     0,     0,   101,
     217,   352,     0,   102,     0,    99,   103,   104,     0,   101,
     105,   106,     0,   102,     0,    99,   103,   104,   100,   101,
     105,   106,     0,   102,   217,     0,   103,   104,     0,    99,
     105,   106,     0,   101,     0,     0,     0,   102,     0,     0,
     103,   104,     0,     0,   105,   106,     1,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     1,
      91,    92,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     1,    91,    92,    93,    94,
      95,    96,     0,    97,    98,     0,     0,     0,   236,     0,
       0,     0,     0,     0,    99,     0,     0,     0,   101,     0,
       0,     0,   102,     0,     0,   103,   104,    99,   293,   105,
     106,   101,     0,     0,   309,   102,     0,     0,   103,   104,
      99,     0,   105,   106,   101,     0,     0,     0,   102,     0,
      99,   103,   104,   320,   101,   105,   106,   340,   102,     0,
       0,   103,   104,    99,     0,   105,   106,   101,     0,     0,
       0,   102,     0,     0,   103,   104,     0,     0,   105,   106,
       1,    91,    92,    93,    94,    95,    96,     0,    97,    98,
       0,     0,     0,     1,    91,    92,    93,    94,    95,    96,
       0,    97,    98,     0,     0,     0,     1,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     1,
      91,    92,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   348,   101,     0,     0,     0,   102,     0,     0,   103,
     104,    99,   358,   105,   106,   101,     0,     0,   361,   102,
       0,     0,   103,   104,    99,     0,   105,   106,   101,     0,
       0,     0,   102,     0,     0,   103,   104,    99,   369,   105,
     106,   101,     0,     0,     0,   102,     0,     0,   103,   104,
      99,   371,   105,   106,   101,     0,     0,     0,   102,     0,
       0,   103,   104,     0,     0,   105,   106,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   381,     0,     0,   101,
       0,     0,     0,   102,     0,   178,   103,   104,   346,   101,
     105,   106,     0,   102,     0,   180,   103,   104,     0,   101,
     105,   106,     0,   102,     0,    99,   103,   104,     0,   101,
     105,   106,    45,   102,     0,     1,   103,   104,     0,     0,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     1,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   317,   259,     0,    23,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,   317,   259,     0,    23,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,    74,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   137,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   325,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,     0,    88,   217,    37,    51,    23,     3,   133,    99,
       3,     0,    67,    68,    78,     3,    20,    22,   261,    62,
     121,    21,    22,    28,    24,    24,   269,    44,    28,     3,
      29,    30,    31,    33,    84,    24,    82,    37,     3,    39,
     139,    68,     3,    48,     3,   144,   172,    74,    48,    17,
      18,    76,    77,     3,     3,    60,   149,   183,    68,    62,
      60,    61,    72,    65,   154,     3,    68,    67,    73,   162,
      59,    66,    76,    73,    99,    80,    72,    65,    71,   143,
      80,   131,    82,    71,   134,   210,    75,    75,   178,    88,
     180,    55,   217,    96,    97,    98,   139,    71,   188,    73,
      72,   144,   203,   204,   205,    70,    71,    66,    65,   159,
      75,    68,    76,    77,    78,   214,    66,    81,   121,   244,
     334,   211,    71,    68,    73,   224,    75,    72,   128,    45,
      46,   256,    66,    71,   227,    99,   139,    75,   228,   229,
     230,   144,   232,    71,    68,    73,   239,    75,    72,   149,
      68,   151,    66,   178,    72,   172,    69,   157,    65,    75,
     259,    68,   162,    69,   257,    75,   183,   172,   157,    68,
     271,   214,   172,    72,    84,    85,   176,    65,    74,   143,
      68,   224,    15,    16,   187,    19,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    65,    68,   330,    68,   207,    72,   334,
     303,   214,   212,    68,   178,    78,   259,    72,   223,   309,
      68,   224,    68,   223,    72,   324,    72,   227,   261,    79,
      68,    10,    11,    12,    72,    65,    68,   323,    68,   239,
      72,   258,    23,   336,   337,   338,    77,    80,    81,   339,
     340,   268,   342,   258,    13,    14,   259,   257,   258,   258,
      71,   261,    73,    44,    65,   358,   265,    68,   271,   268,
     360,   361,   365,    70,    55,   368,   369,    71,   371,    73,
      71,   324,    73,   373,    70,   378,   329,   380,   381,    82,
      83,    71,    71,   386,    73,    76,    77,    78,    71,    68,
      81,    70,    70,   303,   195,   196,   197,   198,    71,    88,
      67,    68,    67,    68,   193,   194,   199,   200,    99,   201,
     202,   324,    71,    65,   323,    65,   329,    72,    72,    68,
      58,    65,    70,    74,    56,    72,   336,   337,   338,    71,
      65,    72,    72,    72,    24,    81,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    74,    73,   358,    67,
     265,   128,   143,   223,   178,   365,   187,   157,   368,   369,
     189,   371,   190,    -1,   191,    -1,   192,    -1,   378,    -1,
     380,   381,    -1,    -1,    -1,    -1,   386,     3,     4,     5,
       6,     7,     8,     9,    69,    11,    12,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,
      86,    87,     3,     4,     5,     6,     7,     8,     9,    31,
      11,    12,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    87,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,
      86,    87,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    87,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,
      66,    67,    -1,    79,    -1,    71,    82,    83,    -1,    75,
      86,    87,    -1,    79,    -1,    71,    82,    83,    74,    75,
      86,    87,    -1,    79,    66,    -1,    82,    83,    -1,    71,
      86,    87,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,    -1,    -1,    86,    87,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    71,    72,    86,
      87,    75,    -1,    -1,    65,    79,    -1,    -1,    82,    83,
      71,    -1,    86,    87,    75,    -1,    -1,    -1,    79,    -1,
      71,    82,    83,    74,    75,    86,    87,    65,    79,    -1,
      -1,    82,    83,    71,    -1,    86,    87,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,
      83,    71,    72,    86,    87,    75,    -1,    -1,    65,    79,
      -1,    -1,    82,    83,    71,    -1,    86,    87,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    71,    72,    86,
      87,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      71,    72,    86,    87,    75,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    87,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    79,    -1,    71,    82,    83,    72,    75,
      86,    87,    -1,    79,    -1,    71,    82,    83,    -1,    75,
      86,    87,    -1,    79,    -1,    71,    82,    83,    -1,    75,
      86,    87,     0,    79,    -1,     3,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    71,     3,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    75,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    69,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    67,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    31,    32,
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
      49,    50,    71,    75,    90,    91,    92,    98,   100,   101,
     102,   103,   104,   105,   114,   118,   119,   121,   164,    66,
     164,   118,   103,   121,   122,     0,    91,    65,    95,   107,
     108,   118,   100,   100,   100,    66,   164,    93,    98,    99,
     100,    71,    73,   119,   115,   116,   164,    66,    72,   103,
     121,   118,    65,    68,    69,    99,   102,   103,   106,   110,
     111,    66,    66,   136,    94,    98,   118,    72,   120,   126,
     164,     4,     5,     6,     7,     8,     9,    11,    12,    71,
      74,    75,    79,    82,    83,    86,    87,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   162,   163,   164,    67,    68,    69,
     115,    96,   108,   109,    97,   111,   111,    67,   110,    70,
     112,   113,   118,   106,    53,    54,    55,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    67,    99,   132,   133,
     134,   135,   137,   138,   139,   140,   141,   142,   144,   157,
     164,   136,   100,   123,   124,   125,    68,    72,    71,   157,
      71,   157,   157,   111,   129,   141,    74,    20,    76,    19,
      77,    78,    79,    17,    18,    15,    16,    80,    81,    13,
      14,    82,    83,    75,    84,    85,   156,    10,    11,    12,
      71,    73,    88,   116,   117,    67,   136,    66,   127,   142,
     136,   145,    65,    68,    70,    67,   145,    70,    71,    71,
      71,   132,    71,   164,    65,    65,    65,   141,    67,   137,
     136,    67,   132,    65,    68,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    69,   143,    70,    71,    73,
     118,   121,   130,   131,    72,    68,   164,   129,    71,   121,
     130,    72,    72,   147,   141,   148,   149,   150,   151,   152,
     152,   153,   153,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   164,    72,   142,   161,   141,   164,   145,   127,
     128,   113,   145,    70,   132,   141,   141,   141,    58,    65,
     141,    65,    65,    67,   142,   142,   132,    72,   123,   130,
      74,   145,   131,    71,    73,    51,   125,    72,   156,    70,
      68,    72,    74,    67,    68,   132,    72,    72,    72,    71,
      65,   141,    65,    72,    72,    74,    72,   123,    74,   145,
     144,   142,    67,   127,   132,   132,   132,   141,    72,   141,
      65,    65,   141,    72,    74,    56,    72,   132,    72,    72,
     141,    72,   141,    65,   132,    65,   132,   132,    72,   132,
      72,    72,   141,   132,   132,   132,    72,   132
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
#line 79 "test_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 79 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 8:
#line 80 "test_c_grammar.y"
    {st.push();}
    break;

  case 9:
#line 80 "test_c_grammar.y"
    {st.pop();}
    break;

  case 10:
#line 81 "test_c_grammar.y"
    {declMode = false; }
    break;

  case 11:
#line 81 "test_c_grammar.y"
    {st.push();}
    break;

  case 12:
#line 81 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 13:
#line 82 "test_c_grammar.y"
    {st.push();}
    break;

  case 14:
#line 82 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 16:
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
      st.update((*(yyvsp[(2) - (3)].declval)).id,newsc);
    }
  SymbolContent *sn = st.searchAll((*(yyvsp[(2) - (3)].declval)).id);
 }
    break;

  case 17:
#line 112 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 18:
#line 113 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (2)].declval);
  dn.next = (yyvsp[(1) - (2)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 19:
#line 122 "test_c_grammar.y"
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

  case 20:
#line 148 "test_c_grammar.y"
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

  case 21:
#line 174 "test_c_grammar.y"
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

  case 22:
#line 232 "test_c_grammar.y"
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

  case 23:
#line 289 "test_c_grammar.y"
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

  case 24:
#line 303 "test_c_grammar.y"
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

  case 25:
#line 319 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "AUTO";}
    break;

  case 26:
#line 320 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "REGISTER";}
    break;

  case 27:
#line 321 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "STATIC";}
    break;

  case 28:
#line 322 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "EXTERN";}
    break;

  case 29:
#line 323 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "TYPEDEF";}
    break;

  case 30:
#line 327 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOID";}
    break;

  case 31:
#line 328 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CHAR";}
    break;

  case 32:
#line 329 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SHORT";}
    break;

  case 33:
#line 330 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "INT";}
    break;

  case 34:
#line 331 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "LONG";}
    break;

  case 35:
#line 332 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "FLOAT";}
    break;

  case 36:
#line 333 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "DOUBLE";}
    break;

  case 37:
#line 334 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SIGNED";}
    break;

  case 38:
#line 335 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "UNSIGNED";}
    break;

  case 39:
#line 337 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "NEED TO FIGURE OUT";}
    break;

  case 40:
#line 338 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "Same!";}
    break;

  case 41:
#line 339 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 42:
#line 343 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CONST";}
    break;

  case 43:
#line 344 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOLATILE";}
    break;

  case 47:
#line 356 "test_c_grammar.y"
    {(yyval.sval) = "STRUCT";}
    break;

  case 48:
#line 357 "test_c_grammar.y"
    {(yyval.sval) = "UNION";}
    break;

  case 51:
#line 367 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);
  }
    break;

  case 52:
#line 369 "test_c_grammar.y"
    {
  //to do!
  
  std::cout <<(*(yyvsp[(1) - (3)].declval)).id<<"->"<< (*(yyvsp[(3) - (3)].declval)).id <<std::endl;
  }
    break;

  case 53:
#line 378 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval) ;}
    break;

  case 54:
#line 379 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 55:
#line 379 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (4)].declval);}
    break;

  case 72:
#line 417 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 74:
#line 423 "test_c_grammar.y"
    {(yyval.declval) = (yyvsp[(1) - (1)].declval);}
    break;

  case 75:
#line 424 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (2)].declval);
  dn.specs |= xPOINTER;
  (yyval.declval) = &dn;
 }
    break;

  case 76:
#line 433 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (1)].declval);
  dn.next = 0;
  (yyval.declval) = &dn;
 }
    break;

  case 77:
#line 438 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(2) - (3)].declval);
  (yyval.declval) = &dn;}
    break;

  case 78:
#line 442 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.specs |= xARRAY;
  (yyval.declval)=&dn;}
    break;

  case 79:
#line 447 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (4)].declval);
  dn.specs |= xARRAY;
  (yyval.declval)=&dn;}
    break;

  case 80:
#line 451 "test_c_grammar.y"
    { 
  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.specs |= xFUNCTION;
  (yyval.declval)=&dn;
st.push();}
    break;

  case 81:
#line 456 "test_c_grammar.y"
    {st.push();}
    break;

  case 82:
#line 457 "test_c_grammar.y"
    {
 declNode dn = *(yyvsp[(1) - (5)].declval);
 dn.specs |= xFUNCTION;
 (yyval.declval)=&dn;
}
    break;

  case 83:
#line 463 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (4)].declval);
  dn.specs |= xFUNCTION;
  (yyval.declval)=&dn;
}
    break;

  case 97:
#line 499 "test_c_grammar.y"
    {
  declNode dn = *(yyvsp[(1) - (1)].declval);
  (yyval.declval) = &dn;
 }
    break;

  case 98:
#line 504 "test_c_grammar.y"
    {

  declNode dn = *(yyvsp[(1) - (3)].declval);
  dn.next = (yyvsp[(3) - (3)].declval);
  (yyval.declval) = &dn;
}
    break;

  case 119:
#line 548 "test_c_grammar.y"
    {st.push();}
    break;

  case 120:
#line 548 "test_c_grammar.y"
    {st.pop();}
    break;

  case 158:
#line 617 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 159:
#line 618 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 160:
#line 619 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 161:
#line 620 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 162:
#line 621 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 163:
#line 622 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 164:
#line 623 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 165:
#line 624 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 166:
#line 625 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 167:
#line 626 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 168:
#line 627 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 233:
#line 755 "test_c_grammar.y"
    {
  declNode dn;
  dn.id = (yyvsp[(1) - (1)].sval);
  (yyval.declval) = &dn;
 }
    break;


/* Line 1267 of yacc.c.  */
#line 2695 "y.tab.c"
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


#line 761 "test_c_grammar.y"


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

