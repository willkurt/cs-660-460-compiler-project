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
  //consider making this a string pointer
  char* sval;
  float dval;
  int ival;
  char cval;
  /* barrayval is for all the possible specifies
     here is the key:
     * --storage
     * 0-AUTO
     * 1-REGISTER
     * 2-STATIC
     * 3-EXTERN
     * 4-TYPEDEF
     * --Types
     * 5-VOID
     * 6-CHAR
     * 7-SHORT
     * 8-INT
     * 9-LONG
     *10-FLOAT
     *11-DOUBLE
     *12-SIGNED
     *13-UNSIGNED
     *14-STRUCT
     *15-UNION
     *16-ENUM no idea what I'm doing with this!
     *17-TYPEDEF_NAME
     *---type qualifiers
     *18-CONST
     *19-VOLATILE
   */
  bool barrayval[20];

 }
/* Line 187 of yacc.c.  */
#line 273 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 286 "y.tab.c"

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
#define YYLAST   1608

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  380

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
     125,   130,   134,   136,   139,   141,   144,   146,   150,   152,
     155,   159,   164,   170,   173,   175,   179,   181,   182,   187,
     189,   192,   194,   198,   202,   207,   211,   216,   221,   223,
     226,   229,   233,   235,   238,   240,   244,   246,   250,   253,
     255,   258,   260,   264,   266,   270,   275,   277,   281,   283,
     286,   288,   290,   293,   297,   300,   304,   308,   313,   316,
     320,   324,   329,   331,   333,   335,   337,   339,   341,   345,
     350,   354,   356,   359,   362,   366,   370,   375,   377,   380,
     386,   394,   400,   406,   414,   421,   429,   437,   446,   454,
     463,   472,   482,   486,   489,   492,   495,   499,   501,   505,
     507,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   533,   535,   541,   543,   545,   549,   551,   555,
     557,   561,   563,   567,   569,   573,   575,   579,   583,   585,
     589,   593,   597,   601,   603,   607,   611,   613,   617,   621,
     623,   627,   631,   635,   637,   642,   644,   647,   650,   653,
     656,   661,   663,   665,   667,   669,   671,   673,   675,   680,
     684,   689,   693,   697,   700,   703,   705,   707,   709,   713,
     715,   719,   721,   723,   725,   727,   729
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    90,    91,    -1,    92,    -1,
      93,    -1,   113,   129,    -1,   113,    94,   129,    -1,    95,
     113,   129,    -1,    95,   113,    94,   129,    -1,    95,    65,
      -1,    95,   102,    65,    -1,    93,    -1,    94,    93,    -1,
      96,    -1,    96,    95,    -1,    97,    -1,    97,    95,    -1,
      98,    -1,    98,    95,    -1,    35,    -1,    36,    -1,    34,
      -1,    33,    -1,    32,    -1,    47,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,    43,    -1,    44,    -1,    41,
      -1,    42,    -1,    99,    -1,   109,    -1,    31,    -1,    45,
      -1,    46,    -1,   100,   157,    66,   101,    67,    -1,   100,
      66,   101,    67,    -1,   100,   157,    -1,    48,    -1,    49,
      -1,   105,    -1,   101,   105,    -1,   103,    -1,   102,    68,
     103,    -1,   113,    -1,    -1,   113,    69,   104,   121,    -1,
     106,   107,    65,    -1,    97,    -1,    97,   106,    -1,    98,
      -1,    98,   106,    -1,   108,    -1,   107,    68,   108,    -1,
     113,    -1,    70,   138,    -1,   113,    70,   138,    -1,    50,
      66,   110,    67,    -1,    50,   157,    66,   110,    67,    -1,
      50,   157,    -1,   111,    -1,   110,    68,   111,    -1,   157,
      -1,    -1,   157,    69,   112,   138,    -1,   114,    -1,   115,
     114,    -1,   157,    -1,    71,   113,    72,    -1,   114,    73,
      74,    -1,   114,    73,   138,    74,    -1,   114,    71,    72,
      -1,   114,    71,   117,    72,    -1,   114,    71,   120,    72,
      -1,    75,    -1,    75,   116,    -1,    75,   115,    -1,    75,
     116,   115,    -1,    98,    -1,   116,    98,    -1,   118,    -1,
     118,    68,    51,    -1,   119,    -1,   118,    68,   119,    -1,
      95,   113,    -1,    95,    -1,    95,   124,    -1,   157,    -1,
     120,    68,   157,    -1,   135,    -1,    66,   122,    67,    -1,
      66,   122,    68,    67,    -1,   121,    -1,   122,    68,   121,
      -1,   106,    -1,   106,   124,    -1,   115,    -1,   125,    -1,
     115,   125,    -1,    71,   124,    72,    -1,    73,    74,    -1,
      73,   138,    74,    -1,   125,    73,    74,    -1,   125,    73,
     138,    74,    -1,    71,    72,    -1,    71,   117,    72,    -1,
     125,    71,    72,    -1,   125,    71,   117,    72,    -1,   127,
      -1,   129,    -1,   128,    -1,   131,    -1,   132,    -1,   133,
      -1,   157,    70,   126,    -1,    53,   138,    70,   126,    -1,
      54,    70,   126,    -1,    65,    -1,   134,    65,    -1,    66,
      67,    -1,    66,   130,    67,    -1,    66,    94,    67,    -1,
      66,    94,   130,    67,    -1,   126,    -1,   130,   126,    -1,
      55,    71,   134,    72,   126,    -1,    55,    71,   134,    72,
     126,    56,   126,    -1,    57,    71,   134,    72,   126,    -1,
      58,    71,   134,    72,   126,    -1,    59,   126,    58,    71,
     134,    72,    65,    -1,    60,    71,    65,    65,    72,   126,
      -1,    60,    71,    65,    65,   134,    72,   126,    -1,    60,
      71,    65,   134,    65,    72,   126,    -1,    60,    71,    65,
     134,    65,   134,    72,   126,    -1,    60,    71,   134,    65,
      65,    72,   126,    -1,    60,    71,   134,    65,    65,   134,
      72,   126,    -1,    60,    71,   134,    65,   134,    65,    72,
     126,    -1,    60,    71,   134,    65,   134,    65,   134,    72,
     126,    -1,    61,   157,    65,    -1,    62,    65,    -1,    63,
      65,    -1,    64,    65,    -1,    64,   134,    65,    -1,   135,
      -1,   134,    68,   135,    -1,   137,    -1,   150,   136,   135,
      -1,    69,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,   139,    -1,   139,    76,   134,    70,   137,
      -1,   137,    -1,   140,    -1,   139,    20,   140,    -1,   141,
      -1,   140,    19,   141,    -1,   142,    -1,   141,    77,   142,
      -1,   143,    -1,   142,    78,   143,    -1,   144,    -1,   143,
      79,   144,    -1,   145,    -1,   144,    17,   145,    -1,   144,
      18,   145,    -1,   146,    -1,   145,    80,   146,    -1,   145,
      81,   146,    -1,   145,    15,   146,    -1,   145,    16,   146,
      -1,   147,    -1,   146,    13,   147,    -1,   146,    14,   147,
      -1,   148,    -1,   147,    82,   148,    -1,   147,    83,   148,
      -1,   149,    -1,   148,    75,   149,    -1,   148,    84,   149,
      -1,   148,    85,   149,    -1,   150,    -1,    71,   123,    72,
     149,    -1,   152,    -1,    11,   150,    -1,    12,   150,    -1,
     151,   149,    -1,     9,   150,    -1,     9,    71,   123,    72,
      -1,    79,    -1,    75,    -1,    82,    -1,    83,    -1,    86,
      -1,    87,    -1,   153,    -1,   152,    73,   134,    74,    -1,
     152,    71,    72,    -1,   152,    71,   154,    72,    -1,   152,
      88,   157,    -1,   152,    10,   157,    -1,   152,    11,    -1,
     152,    12,    -1,   157,    -1,   155,    -1,   156,    -1,    71,
     134,    72,    -1,   135,    -1,   154,    68,   135,    -1,     4,
      -1,     6,    -1,     5,    -1,     7,    -1,     8,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    93,    94,    98,    99,   100,   101,
     106,   108,   127,   128,   133,   155,   186,   241,   302,   314,
     335,   336,   337,   338,   339,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   353,   354,   355,   359,   360,   364,
     365,   366,   370,   371,   375,   376,   381,   382,   387,   388,
     388,   392,   396,   397,   398,   399,   403,   404,   408,   409,
     410,   414,   415,   416,   420,   421,   425,   426,   426,   432,
     433,   438,   439,   440,   441,   442,   443,   444,   448,   449,
     450,   451,   455,   456,   460,   461,   465,   466,   470,   471,
     472,   476,   477,   481,   482,   483,   487,   488,   492,   493,
     497,   498,   499,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   515,   516,   517,   518,   519,   520,   524,   525,
     526,   530,   531,   535,   536,   537,   538,   542,   543,   547,
     548,   549,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   566,   567,   568,   569,   570,   574,   575,   579,
     580,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   599,   600,   604,   608,   609,   613,   614,   618,
     619,   623,   624,   628,   629,   633,   634,   635,   639,   640,
     641,   642,   643,   647,   648,   649,   653,   654,   655,   659,
     660,   661,   662,   666,   667,   671,   672,   673,   674,   675,
     676,   680,   681,   682,   683,   684,   685,   689,   690,   691,
     692,   693,   694,   695,   696,   700,   701,   702,   703,   707,
     708,   712,   713,   714,   715,   719,   723
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
  "@1", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "@2", "declarator", "direct_declarator",
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
      99,    99,   100,   100,   101,   101,   102,   102,   103,   104,
     103,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   112,   111,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   145,   146,   146,   146,   147,   147,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   150,   150,   150,
     150,   151,   151,   151,   151,   151,   151,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   154,
     154,   155,   155,   155,   155,   156,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     3,     4,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     1,     3,     1,     0,
       4,     3,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     0,     4,     1,
       2,     1,     3,     3,     4,     3,     4,     4,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     4,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     1,     2,     2,     3,     3,     4,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     7,     8,     7,     8,
       8,     9,     3,     2,     2,     2,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   226,    36,    24,    23,    22,    20,    21,    26,    27,
      28,    29,    32,    33,    30,    31,    37,    38,    25,    42,
      43,     0,     0,    78,     0,     2,     4,     5,     0,    14,
      16,    18,    34,     0,    35,     0,    69,     0,    71,     0,
      63,     0,    82,    80,    79,     1,     3,    10,     0,    46,
      48,    15,    17,    19,     0,    41,     0,    12,     0,     0,
       6,     0,     0,    70,     0,    64,    66,     0,    72,    83,
      81,    11,     0,    49,     0,     8,    52,    54,     0,    44,
       0,     0,   221,   223,   222,   224,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   123,     0,   202,   201,   203,   204,   205,   206,
       0,   127,   112,   114,   113,     0,   115,   116,   117,     0,
     147,   149,   162,   165,   167,   169,   171,   173,   175,   178,
     183,   186,   189,   193,     0,   195,   207,   216,   217,   215,
      13,     7,    48,    75,    89,     0,    84,    86,     0,    91,
      73,   164,     0,   193,   215,    61,     0,    67,     0,    47,
       0,     9,    53,    55,    40,    45,     0,     0,    56,    58,
       0,     0,   199,     0,   196,   197,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   144,   145,     0,    98,     0,
       0,   125,     0,   124,   128,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   151,     0,   198,     0,
     213,   214,     0,     0,     0,     0,     0,     0,    88,   100,
      90,   101,    76,     0,     0,    77,    74,    65,     0,    62,
       0,    50,    93,    59,    51,     0,     0,    39,     0,     0,
     120,     0,     0,     0,     0,     0,     0,   142,   146,     0,
     100,    99,     0,   218,   126,   148,   166,     0,   168,   170,
     172,   174,   176,   177,   181,   182,   179,   180,   184,   185,
     187,   188,   190,   191,   192,   150,   212,   209,   219,     0,
       0,   211,   118,   108,     0,     0,   104,     0,   102,     0,
       0,    85,    87,    92,    68,    96,     0,    57,    60,   200,
     119,     0,     0,     0,     0,     0,     0,     0,   194,     0,
       0,   210,   208,   109,   103,   105,   110,     0,   106,     0,
      94,     0,   129,   131,   132,     0,     0,     0,     0,     0,
       0,   163,   220,   111,   107,    95,    97,     0,     0,   134,
       0,     0,     0,     0,     0,     0,   130,   133,   135,   136,
       0,   138,     0,     0,     0,   137,   139,   140,     0,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    57,    58,    59,    29,    30,    31,
      32,    33,    78,    48,    49,   160,    79,    80,   167,   168,
      34,    64,    65,   248,    35,    36,    37,    44,   304,   146,
     147,   148,   251,   316,   189,   305,   241,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   227,   121,   152,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   299,   137,   138,   154
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -250
static const yytype_int16 yypact[] =
{
    1287,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,    45,    52,    19,  1218,  -250,  -250,  -250,    37,  1558,
    1558,  1558,  -250,    54,  -250,  1501,    97,    16,  -250,    15,
     -43,     6,  -250,  -250,    19,  -250,  -250,  -250,   -52,  -250,
    1400,  -250,  -250,  -250,   360,   -36,   381,  -250,  1501,    37,
    -250,  1335,   741,    97,    95,  -250,    44,    15,  -250,  -250,
    -250,  -250,    52,  -250,  1501,  -250,   360,   360,  1433,  -250,
      46,   360,  -250,  -250,  -250,  -250,  -250,  1120,  1130,  1130,
    1140,    36,    47,    53,    58,   721,    69,    15,    81,   104,
     754,  -250,  -250,   551,  -250,  -250,  -250,  -250,  -250,  -250,
     466,  -250,  -250,  -250,  -250,   599,  -250,  -250,  -250,    80,
    -250,  -250,    38,   162,   156,   150,   175,   170,    -4,   265,
     198,    68,  -250,   326,  1140,    -3,  -250,  -250,  -250,   197,
    -250,  -250,   217,  -250,    57,   212,   224,  -250,    87,  -250,
    -250,  -250,   227,  -250,  -250,  -250,    15,  -250,   215,  -250,
     839,  -250,  -250,  -250,  -250,  -250,  1140,    86,  -250,   225,
    1464,   551,  -250,  1140,  -250,  -250,   234,   721,  1140,  1140,
    1140,   247,   852,   242,  -250,  -250,  -250,    92,   105,   240,
     111,  -250,   636,  -250,  -250,  -250,  1140,  1140,  1140,  1140,
    1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,
    1140,  1140,  1140,  1140,  1140,  1140,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  1140,  -250,    15,
    -250,  -250,   865,  1140,    15,   721,  1238,   875,  -250,    28,
    -250,   172,  -250,  1537,    15,  -250,  -250,  -250,  1140,  -250,
     839,  -250,  -250,  -250,  -250,    46,  1140,  -250,   243,   721,
    -250,   118,   151,   152,   248,   888,   129,  -250,  -250,  1355,
     204,  -250,  1140,  -250,  -250,  -250,   162,     3,   156,   150,
     175,   170,    -4,    -4,   265,   265,   265,   265,   198,   198,
      68,    68,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   159,
     -42,  -250,  -250,  -250,   252,   253,  -250,   254,   172,  1122,
     973,  -250,  -250,  -250,  -250,  -250,   221,  -250,  -250,  -250,
    -250,   721,   721,   721,  1140,   986,   131,   999,  -250,  1140,
    1140,  -250,  -250,  -250,  -250,  -250,  -250,   255,  -250,   257,
    -250,   731,   270,  -250,  -250,   174,   721,   188,  1012,  1025,
     157,  -250,  -250,  -250,  -250,  -250,  -250,   721,   264,  -250,
     721,   721,   193,   721,   194,  1110,  -250,  -250,  -250,  -250,
     721,  -250,   721,   721,   196,  -250,  -250,  -250,   721,  -250
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,   308,  -250,    51,    83,     5,  -250,   -34,   262,
    -250,  -250,   256,  -250,   261,  -250,   -72,   -24,  -250,    79,
    -250,   268,   180,  -250,   -18,   -22,    -6,  -250,   -59,  -250,
     101,  -250,  -249,  -250,   191,   -39,  -139,   -70,  -250,  -250,
      84,   235,  -250,  -250,  -250,    -7,  -146,  -250,   -16,   -63,
    -250,   167,   160,   166,   168,   165,    93,    64,    89,    98,
    -131,     1,  -250,  -250,  -250,  -250,  -250,  -250,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      38,   315,   145,   228,    41,    28,   165,   229,   230,   231,
      50,   205,   206,    71,   252,    63,    72,    43,     1,     1,
      76,    40,    38,    67,    38,   181,   196,   176,    38,    28,
      81,     1,   332,    55,    51,    52,    53,    38,    70,    66,
       1,   142,    76,    76,    76,   194,   151,    76,     1,     1,
     275,    27,   162,   163,   142,     1,   139,     1,   197,    38,
       1,   149,   169,   153,    16,    17,   144,    66,   232,    76,
     233,   196,    38,   329,   151,    27,   207,   208,    68,   188,
      38,   295,   292,   293,   294,   234,   298,    22,   172,   174,
     175,   153,   356,   187,    23,   139,   190,   183,   165,   236,
     308,   237,    47,   253,   252,   240,   177,   260,    22,   140,
     139,    39,    23,   157,   198,   139,   166,    22,   178,    60,
      54,    23,   194,    22,   179,   140,   238,    23,   236,   180,
     237,   308,    23,    74,    75,   153,    76,    76,   239,   110,
     182,   328,   141,   213,    38,   195,   184,   188,   196,   271,
     151,   254,   214,   215,   255,   244,    66,   268,   161,   245,
     196,   140,   155,   156,   190,   302,   190,   153,    61,   185,
      62,   261,   262,   263,   307,   266,   269,   139,   237,   196,
      23,   199,   270,   273,   352,   314,   196,   203,   204,   320,
     321,   277,   139,   318,   327,   252,   348,   196,   153,   196,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,    63,    41,   196,
     196,   151,   365,   322,   323,   196,   300,   330,   201,   296,
     239,   331,   151,   200,   301,   139,    38,   169,   153,    38,
     151,   144,   196,   309,   313,   310,   358,   339,   144,   153,
     337,   342,   343,   344,   202,    38,   196,   153,   326,   139,
     360,   196,   196,   270,   196,   370,   372,   235,   378,   284,
     285,   286,   287,   153,   144,   269,   359,   237,   209,   210,
     211,   212,   249,   156,   242,    42,    73,   366,   340,   341,
     368,   369,   243,   371,   151,   256,   282,   283,   288,   289,
     375,   246,   376,   377,   259,   264,    69,   267,   379,   290,
     291,   153,   272,   351,   144,   319,    77,   345,   347,   324,
     350,   139,   139,   139,   333,   334,   357,   353,   335,   367,
     153,   354,    46,   159,   317,   158,   247,   170,    77,    77,
      77,   362,   364,    77,   312,   192,   139,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   139,   374,   278,
     139,   139,   258,   139,   276,    77,   279,   281,     0,   280,
     139,     0,   139,   139,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,     1,    82,    83,    84,    85,    86,
      87,     2,    88,    89,     0,   226,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    77,    77,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    56,   102,     0,
       0,     0,   103,     0,     0,     0,   104,     0,     0,     0,
     105,     0,     0,   106,   107,     0,     0,   108,   109,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,    90,
      91,    92,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    56,   191,     0,     0,     0,   103,     0,     0,
       0,   104,     0,     0,     0,   105,     0,     0,   106,   107,
       0,     0,   108,   109,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   104,     0,     0,     0,
     105,     0,     0,   106,   107,     0,     0,   108,   109,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,    90,    91,    92,     0,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    56,   193,     0,     0,     0,
     103,     0,     0,     0,   104,     0,     0,     0,   105,     0,
       0,   106,   107,     0,     0,   108,   109,     0,     0,    90,
      91,    92,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    56,   274,     0,     0,     0,   103,     0,     0,
       0,   104,     0,     0,     0,   105,     0,     0,   106,   107,
       0,     0,   108,   109,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     1,    82,    83,    84,    85,    86,
      87,     0,    88,    89,     0,     0,     0,     1,    82,    83,
      84,    85,    86,    87,     0,    88,    89,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    56,     0,     0,
       0,     0,   103,     0,     0,     0,   104,   250,   355,     0,
     105,     0,   103,   106,   107,     0,   104,   108,   109,     0,
     105,     0,   103,   106,   107,   150,   104,   108,   109,   186,
     105,     0,     0,   106,   107,   103,     0,   108,   109,   104,
       0,     0,     0,   105,     0,     0,   106,   107,     0,     0,
     108,   109,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     1,    82,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,     1,    82,    83,    84,    85,    86,    87,     0,    88,
      89,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     103,     0,     0,     0,   104,     0,     0,   265,   105,     0,
       0,   106,   107,   103,     0,   108,   109,   104,     0,     0,
       0,   105,     0,     0,   106,   107,   103,   297,   108,   109,
     104,     0,     0,     0,   105,     0,   103,   106,   107,   306,
     104,   108,   109,   325,   105,     0,     0,   106,   107,   103,
       0,   108,   109,   104,     0,     0,     0,   105,     0,     0,
     106,   107,     0,     0,   108,   109,     1,    82,    83,    84,
      85,    86,    87,     0,    88,    89,     0,     0,     0,     1,
      82,    83,    84,    85,    86,    87,     0,    88,    89,     0,
       0,     0,     1,    82,    83,    84,    85,    86,    87,     0,
      88,    89,     0,     0,     0,     1,    82,    83,    84,    85,
      86,    87,     0,    88,    89,     0,     0,     0,     1,    82,
      83,    84,    85,    86,    87,     0,    88,    89,     0,     0,
       0,     0,     0,     0,   103,     0,     0,   338,   104,     0,
       0,     0,   105,     0,     0,   106,   107,   103,   346,   108,
     109,   104,     0,     0,   349,   105,     0,     0,   106,   107,
     103,     0,   108,   109,   104,     0,     0,     0,   105,     0,
       0,   106,   107,   103,   361,   108,   109,   104,     0,     0,
       0,   105,     0,     0,   106,   107,   103,   363,   108,   109,
     104,     0,     0,     0,   105,     0,     0,   106,   107,     0,
       0,   108,   109,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     1,    82,    83,    84,    85,    86,    87,
       0,    88,    89,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   373,     0,     0,   104,     0,     0,     0,   105,
       0,   171,   106,   107,   336,   104,   108,   109,     0,   105,
       0,   173,   106,   107,     0,   104,   108,   109,     0,   105,
       0,   103,   106,   107,     0,   104,   108,   109,    45,   105,
       0,     1,   106,   107,     0,     0,   108,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       1,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     303,   237,     0,    23,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,    23,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,   303,   237,     0,
      23,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,    56,     0,     0,    73,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     164,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   311,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   250,    61,   134,    22,     0,    78,    10,    11,    12,
      28,    15,    16,    65,   160,    37,    68,    23,     3,     3,
      54,    21,    22,    66,    24,    95,    68,    90,    28,    24,
      66,     3,    74,    33,    29,    30,    31,    37,    44,    39,
       3,    59,    76,    77,    78,   115,    62,    81,     3,     3,
     196,     0,    76,    77,    72,     3,    56,     3,    20,    59,
       3,    61,    80,    62,    45,    46,    61,    67,    71,   103,
      73,    68,    72,    70,    90,    24,    80,    81,    72,   103,
      80,   227,   213,   214,   215,    88,   232,    71,    87,    88,
      89,    90,   341,   100,    75,    95,   103,    97,   170,    71,
     239,    73,    65,   166,   250,   144,    70,   177,    71,    58,
     110,    66,    75,    69,    76,   115,    70,    71,    71,    35,
      66,    75,   192,    71,    71,    74,   144,    75,    71,    71,
      73,   270,    75,    50,    50,   134,   170,   171,   144,    56,
      71,   272,    58,    75,   144,    65,    65,   171,    68,   188,
     166,    65,    84,    85,    68,    68,   156,    65,    74,    72,
      68,   110,    67,    68,   171,   235,   173,   166,    71,    65,
      73,   178,   179,   180,   237,   182,    71,   177,    73,    68,
      75,    19,   188,    72,   330,   248,    68,    17,    18,   259,
      72,   198,   192,   256,    65,   341,    65,    68,   197,    68,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   239,   236,    68,
      68,   237,    65,    72,    72,    68,   233,    68,    78,   229,
     236,    72,   248,    77,   234,   235,   236,   255,   237,   239,
     256,   236,    68,    71,   244,    73,    72,   310,   243,   248,
     309,   321,   322,   323,    79,   255,    68,   256,   265,   259,
      72,    68,    68,   269,    68,    72,    72,    70,    72,   205,
     206,   207,   208,   272,   269,    71,   346,    73,    13,    14,
      82,    83,    67,    68,    72,    23,    69,   357,    67,    68,
     360,   361,    68,   363,   310,    70,   203,   204,   209,   210,
     370,    74,   372,   373,    70,    58,    44,    65,   378,   211,
     212,   310,    72,   329,   309,    72,    54,   324,   325,    71,
     327,   321,   322,   323,    72,    72,    56,    72,    74,    65,
     329,    74,    24,    72,   255,    67,   156,    81,    76,    77,
      78,   348,   349,    81,   243,   110,   346,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   357,   365,   199,
     360,   361,   171,   363,   197,   103,   200,   202,    -1,   201,
     370,    -1,   372,   373,    -1,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    31,    11,    12,    -1,    69,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   170,   171,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    75,    66,    67,    -1,
      79,    -1,    71,    82,    83,    -1,    75,    86,    87,    -1,
      79,    -1,    71,    82,    83,    74,    75,    86,    87,    65,
      79,    -1,    -1,    82,    83,    71,    -1,    86,    87,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,
      86,    87,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    65,    79,    -1,
      -1,    82,    83,    71,    -1,    86,    87,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    71,    72,    86,    87,
      75,    -1,    -1,    -1,    79,    -1,    71,    82,    83,    74,
      75,    86,    87,    65,    79,    -1,    -1,    82,    83,    71,
      -1,    86,    87,    75,    -1,    -1,    -1,    79,    -1,    -1,
      82,    83,    -1,    -1,    86,    87,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    71,    72,    86,
      87,    75,    -1,    -1,    65,    79,    -1,    -1,    82,    83,
      71,    -1,    86,    87,    75,    -1,    -1,    -1,    79,    -1,
      -1,    82,    83,    71,    72,    86,    87,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    71,    72,    86,    87,
      75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    86,    87,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    79,
      -1,    71,    82,    83,    72,    75,    86,    87,    -1,    79,
      -1,    71,    82,    83,    -1,    75,    86,    87,    -1,    79,
      -1,    71,    82,    83,    -1,    75,    86,    87,     0,    79,
      -1,     3,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    71,
       3,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      75,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    66,    -1,    -1,    69,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      67,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    31,    32,
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
      49,    50,    71,    75,    90,    91,    92,    93,    95,    96,
      97,    98,    99,   100,   109,   113,   114,   115,   157,    66,
     157,   113,    98,   115,   116,     0,    91,    65,   102,   103,
     113,    95,    95,    95,    66,   157,    66,    93,    94,    95,
     129,    71,    73,   114,   110,   111,   157,    66,    72,    98,
     115,    65,    68,    69,    94,   129,    97,    98,   101,   105,
     106,    66,     4,     5,     6,     7,     8,     9,    11,    12,
      53,    54,    55,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    67,    71,    75,    79,    82,    83,    86,    87,
      94,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   137,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   155,   156,   157,
      93,   129,   113,    72,    95,   117,   118,   119,   120,   157,
      74,   137,   138,   150,   157,    67,    68,    69,   110,   103,
     104,   129,   106,   106,    67,   105,    70,   107,   108,   113,
     101,    71,   150,    71,   150,   150,   138,    70,    71,    71,
      71,   126,    71,   157,    65,    65,    65,   134,   106,   123,
     134,    67,   130,    67,   126,    65,    68,    20,    76,    19,
      77,    78,    79,    17,    18,    15,    16,    80,    81,    13,
      14,    82,    83,    75,    84,    85,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    69,   136,   149,    10,
      11,    12,    71,    73,    88,    70,    71,    73,   113,   115,
     124,   125,    72,    68,    68,    72,    74,   111,   112,    67,
      66,   121,   135,   138,    65,    68,    70,    67,   123,    70,
     126,   134,   134,   134,    58,    65,   134,    65,    65,    71,
     115,   124,    72,    72,    67,   135,   140,   134,   141,   142,
     143,   144,   145,   145,   146,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   135,   157,    72,   135,   154,
     134,   157,   126,    72,   117,   124,    74,   138,   125,    71,
      73,    51,   119,   157,   138,   121,   122,   108,   138,    72,
     126,    72,    72,    72,    71,    65,   134,    65,   149,    70,
      68,    72,    74,    72,    72,    74,    72,   117,    74,   138,
      67,    68,   126,   126,   126,   134,    72,   134,    65,    65,
     134,   137,   135,    72,    74,    67,   121,    56,    72,   126,
      72,    72,   134,    72,   134,    65,   126,    65,   126,   126,
      72,   126,    72,    72,   134,   126,   126,   126,    72,   126
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
        case 11:
#line 109 "test_c_grammar.y"
    {
  SymbolContent * sc = st.searchAll((yyvsp[(2) - (3)].sval));
  if(sc == 0)
    {
      //make this an error later
      std::cout<<"Warning! trying to use a variable not declared"<<std::endl;
    }
  else
    {
      (*sc).specifiers = &(yyvsp[(1) - (3)].barrayval)[0];
    }
  std::cout << (yyvsp[(2) - (3)].sval) << std::endl;
  std::cout <<"oooo:"<< (*sc).specifiers[8] << std::endl;

}
    break;

  case 12:
#line 127 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 14:
#line 133 "test_c_grammar.y"
    {
  if((yyvsp[(1) - (1)].sval)=="AUTO")
    {
      (yyval.barrayval)[0] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "REGISTER")
    {
      (yyval.barrayval)[1] = true;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "STATIC")
    {
      (yyval.barrayval)[2] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "EXTERN")
    {
      (yyval.barrayval)[3] = true;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "TYPEDEF")
    {   
      (yyval.barrayval)[4] = true;
    }
}
    break;

  case 15:
#line 156 "test_c_grammar.y"
    {

  int asize = sizeof((yyval.barrayval))/sizeof((yyval.barrayval)[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      (yyval.barrayval)[i] = (yyvsp[(2) - (2)].barrayval)[i];
    }
  if((yyvsp[(1) - (2)].sval)=="AUTO")
    {
      (yyval.barrayval)[0] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "REGISTER")
    {
      (yyval.barrayval)[1] = true;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "STATIC")
    {
      (yyval.barrayval)[2] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "EXTERN")
    {
      (yyval.barrayval)[3] = true;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "TYPEDEF")
    {   
      (yyval.barrayval)[4] = true;
    }
  std::cout<<"this should be 11-> "<<(yyval.barrayval)[0]<<(yyval.barrayval)[8]<<std::endl;
}
    break;

  case 16:
#line 187 "test_c_grammar.y"
    {std::cout<<"YO TS HERE!\n";
  if((yyvsp[(1) - (1)].sval) == "VOID")
    {
      (yyval.barrayval)[5] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "CHAR")
    {
      (yyval.barrayval)[6] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "SHORT")
    {
      (yyval.barrayval)[7] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "INT")
    {
      (yyval.barrayval)[8] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "LONG")
    {
      (yyval.barrayval)[9] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "FLOAT")
    {
      (yyval.barrayval)[10] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "DOUBLE")
    {
      (yyval.barrayval)[11] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "SIGNED")
    {
      (yyval.barrayval)[12] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "UNSIGNED")
    {
      (yyval.barrayval)[13] = true; 
    }
  else if((yyvsp[(1) - (1)].sval) == "STRUCT")
    {
      (yyval.barrayval)[14] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "UNION" )
    {
      (yyval.barrayval)[15] = true;
    }
  else if((yyvsp[(1) - (1)].sval) ==  "ENUM")
    {
      (yyval.barrayval)[16] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "TYPEDEF_NAME")
    {
      (yyval.barrayval)[17] =  true;
    }
}
    break;

  case 17:
#line 242 "test_c_grammar.y"
    {
  int asize = sizeof((yyval.barrayval))/sizeof((yyval.barrayval)[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      (yyval.barrayval)[i] = (yyvsp[(2) - (2)].barrayval)[i];
    }
 if((yyvsp[(1) - (2)].sval) == "VOID")
    {
      (yyval.barrayval)[5] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "CHAR")
    {
      (yyval.barrayval)[6] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "SHORT")
    {
      (yyval.barrayval)[7] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "INT")
    {
      (yyval.barrayval)[8] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "LONG")
    {
      (yyval.barrayval)[9] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "FLOAT")
    {
      (yyval.barrayval)[10] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "DOUBLE")
    {
      (yyval.barrayval)[11] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "SIGNED")
    {
      (yyval.barrayval)[12] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "UNSIGNED")
    {
      (yyval.barrayval)[13] = true; 
    }
  else if((yyvsp[(1) - (2)].sval) == "STRUCT")
    {
      (yyval.barrayval)[14] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "UNION" )
    {
      (yyval.barrayval)[15] = true;
    }
  else if((yyvsp[(1) - (2)].sval) ==  "ENUM")
    {
      (yyval.barrayval)[16] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "TYPEDEF_NAME")
    {
      (yyval.barrayval)[17] =  true;
    }
}
    break;

  case 18:
#line 303 "test_c_grammar.y"
    {
  if((yyvsp[(1) - (1)].sval) == "CONST")
    {
      (yyval.barrayval)[18] = true;
    }
  else if((yyvsp[(1) - (1)].sval) == "VOLATILE")
    {
      (yyval.barrayval)[19] = true;
    }

}
    break;

  case 19:
#line 315 "test_c_grammar.y"
    {
  int asize = sizeof((yyval.barrayval))/sizeof((yyval.barrayval)[0]);
  int i;
  for(i = 0;i < asize;i++)
    {
      (yyval.barrayval)[i] = (yyvsp[(2) - (2)].barrayval)[i];
    }
 if((yyvsp[(1) - (2)].sval) == "CONST")
    {
      (yyval.barrayval)[18] = true;
    }
  else if((yyvsp[(1) - (2)].sval) == "VOLATILE")
    {
      (yyval.barrayval)[19] = true;
    }

}
    break;

  case 20:
#line 335 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "AUTO";}
    break;

  case 21:
#line 336 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "REGISTER";}
    break;

  case 22:
#line 337 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "STATIC";}
    break;

  case 23:
#line 338 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "EXTERN";}
    break;

  case 24:
#line 339 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "TYPEDEF";}
    break;

  case 25:
#line 343 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOID";}
    break;

  case 26:
#line 344 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CHAR";}
    break;

  case 27:
#line 345 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SHORT";}
    break;

  case 28:
#line 346 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "INT";}
    break;

  case 29:
#line 347 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "LONG";}
    break;

  case 30:
#line 348 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "FLOAT";}
    break;

  case 31:
#line 349 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "DOUBLE";}
    break;

  case 32:
#line 350 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SIGNED";}
    break;

  case 33:
#line 351 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "UNSIGNED";}
    break;

  case 34:
#line 353 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "NEED TO FIGURE OUT";}
    break;

  case 35:
#line 354 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "Same!";}
    break;

  case 36:
#line 355 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 37:
#line 359 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CONST";}
    break;

  case 38:
#line 360 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOLATILE";}
    break;

  case 42:
#line 370 "test_c_grammar.y"
    {(yyval.sval) = "STRUCT";}
    break;

  case 43:
#line 371 "test_c_grammar.y"
    {(yyval.sval) = "UNION";}
    break;

  case 46:
#line 381 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 47:
#line 382 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(3) - (3)].sval);}
    break;

  case 48:
#line 387 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval) ;}
    break;

  case 49:
#line 388 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 50:
#line 388 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 67:
#line 426 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 69:
#line 432 "test_c_grammar.y"
    {std::cout << "id at dec =>" << (yyvsp[(1) - (1)].sval) <<std::endl;}
    break;

  case 70:
#line 433 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(2) - (2)].sval);}
    break;

  case 71:
#line 438 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval); std::cout << "id at dd =>" << (yyvsp[(1) - (1)].sval) <<std::endl;}
    break;

  case 72:
#line 439 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(2) - (3)].sval);}
    break;

  case 73:
#line 440 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (3)].sval);}
    break;

  case 74:
#line 441 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 75:
#line 442 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (3)].sval);}
    break;

  case 76:
#line 443 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);std::cout<<"I think I should push";}
    break;

  case 77:
#line 444 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 151:
#line 585 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 152:
#line 586 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 153:
#line 587 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 154:
#line 588 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 155:
#line 589 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 156:
#line 590 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 157:
#line 591 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 158:
#line 592 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 159:
#line 593 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 160:
#line 594 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 161:
#line 595 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 226:
#line 723 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;


/* Line 1267 of yacc.c.  */
#line 2598 "y.tab.c"
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


#line 725 "test_c_grammar.y"


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

