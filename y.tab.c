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
#define YYLAST   1548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNRULES -- Number of states.  */
#define YYNSTATES  385

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
     310,   314,   318,   323,   326,   330,   334,   339,   341,   343,
     345,   347,   349,   351,   355,   360,   364,   366,   369,   372,
     376,   380,   385,   387,   390,   396,   404,   410,   416,   424,
     431,   439,   447,   456,   464,   473,   482,   492,   496,   499,
     502,   505,   509,   511,   515,   517,   521,   523,   525,   527,
     529,   531,   533,   535,   537,   539,   541,   543,   545,   551,
     553,   555,   559,   561,   565,   567,   571,   573,   577,   579,
     583,   585,   589,   593,   595,   599,   603,   607,   611,   613,
     617,   621,   623,   627,   631,   633,   637,   641,   645,   647,
     652,   654,   657,   660,   663,   666,   671,   673,   675,   677,
     679,   681,   683,   685,   690,   694,   699,   703,   707,   710,
     713,   715,   717,   719,   723,   725,   729,   731,   733,   735,
     737,   739
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    90,    91,    -1,    92,    -1,
      97,    -1,    -1,   117,    93,   134,    -1,    -1,   117,    98,
      94,   134,    -1,    -1,    99,   117,    95,   134,    -1,    -1,
      99,   117,    98,    96,   134,    -1,    99,    65,    -1,    99,
     106,    65,    -1,    97,    -1,    98,    97,    -1,   100,    -1,
     100,    99,    -1,   101,    -1,   101,    99,    -1,   102,    -1,
     102,    99,    -1,    35,    -1,    36,    -1,    34,    -1,    33,
      -1,    32,    -1,    47,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    43,    -1,    44,    -1,    41,    -1,    42,
      -1,   103,    -1,   113,    -1,    31,    -1,    45,    -1,    46,
      -1,   104,   162,    66,   105,    67,    -1,   104,    66,   105,
      67,    -1,   104,   162,    -1,    48,    -1,    49,    -1,   109,
      -1,   105,   109,    -1,   107,    -1,   106,    68,   107,    -1,
     117,    -1,    -1,   117,    69,   108,   126,    -1,   110,   111,
      65,    -1,   101,    -1,   101,   110,    -1,   102,    -1,   102,
     110,    -1,   112,    -1,   111,    68,   112,    -1,   117,    -1,
      70,   143,    -1,   117,    70,   143,    -1,    50,    66,   114,
      67,    -1,    50,   162,    66,   114,    67,    -1,    50,   162,
      -1,   115,    -1,   114,    68,   115,    -1,   162,    -1,    -1,
     162,    69,   116,   143,    -1,   118,    -1,   120,   118,    -1,
     162,    -1,    71,   117,    72,    -1,   118,    73,    74,    -1,
     118,    73,   143,    74,    -1,   118,    71,    72,    -1,    -1,
     118,    71,   119,   122,    72,    -1,   118,    71,   125,    72,
      -1,    75,    -1,    75,   121,    -1,    75,   120,    -1,    75,
     121,   120,    -1,   102,    -1,   121,   102,    -1,   123,    -1,
     123,    68,    51,    -1,   124,    -1,   123,    68,   124,    -1,
      99,   117,    -1,    99,    -1,    99,   129,    -1,   162,    -1,
     125,    68,   162,    -1,   140,    -1,    66,   127,    67,    -1,
      66,   127,    68,    67,    -1,   126,    -1,   127,    68,   126,
      -1,   110,    -1,   110,   129,    -1,   120,    -1,   130,    -1,
     120,   130,    -1,    71,   129,    72,    -1,    73,    74,    -1,
      73,   143,    74,    -1,   130,    73,    74,    -1,   130,    73,
     143,    74,    -1,    71,    72,    -1,    71,   122,    72,    -1,
     130,    71,    72,    -1,   130,    71,   122,    72,    -1,   132,
      -1,   134,    -1,   133,    -1,   136,    -1,   137,    -1,   138,
      -1,   162,    70,   131,    -1,    53,   143,    70,   131,    -1,
      54,    70,   131,    -1,    65,    -1,   139,    65,    -1,    66,
      67,    -1,    66,   135,    67,    -1,    66,    98,    67,    -1,
      66,    98,   135,    67,    -1,   131,    -1,   135,   131,    -1,
      55,    71,   139,    72,   131,    -1,    55,    71,   139,    72,
     131,    56,   131,    -1,    57,    71,   139,    72,   131,    -1,
      58,    71,   139,    72,   131,    -1,    59,   131,    58,    71,
     139,    72,    65,    -1,    60,    71,    65,    65,    72,   131,
      -1,    60,    71,    65,    65,   139,    72,   131,    -1,    60,
      71,    65,   139,    65,    72,   131,    -1,    60,    71,    65,
     139,    65,   139,    72,   131,    -1,    60,    71,   139,    65,
      65,    72,   131,    -1,    60,    71,   139,    65,    65,   139,
      72,   131,    -1,    60,    71,   139,    65,   139,    65,    72,
     131,    -1,    60,    71,   139,    65,   139,    65,   139,    72,
     131,    -1,    61,   162,    65,    -1,    62,    65,    -1,    63,
      65,    -1,    64,    65,    -1,    64,   139,    65,    -1,   140,
      -1,   139,    68,   140,    -1,   142,    -1,   155,   141,   140,
      -1,    69,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,   144,    -1,   144,    76,   139,    70,   142,
      -1,   142,    -1,   145,    -1,   144,    20,   145,    -1,   146,
      -1,   145,    19,   146,    -1,   147,    -1,   146,    77,   147,
      -1,   148,    -1,   147,    78,   148,    -1,   149,    -1,   148,
      79,   149,    -1,   150,    -1,   149,    17,   150,    -1,   149,
      18,   150,    -1,   151,    -1,   150,    80,   151,    -1,   150,
      81,   151,    -1,   150,    15,   151,    -1,   150,    16,   151,
      -1,   152,    -1,   151,    13,   152,    -1,   151,    14,   152,
      -1,   153,    -1,   152,    82,   153,    -1,   152,    83,   153,
      -1,   154,    -1,   153,    75,   154,    -1,   153,    84,   154,
      -1,   153,    85,   154,    -1,   155,    -1,    71,   128,    72,
     154,    -1,   157,    -1,    11,   155,    -1,    12,   155,    -1,
     156,   154,    -1,     9,   155,    -1,     9,    71,   128,    72,
      -1,    79,    -1,    75,    -1,    82,    -1,    83,    -1,    86,
      -1,    87,    -1,   158,    -1,   157,    73,   139,    74,    -1,
     157,    71,    72,    -1,   157,    71,   159,    72,    -1,   157,
      88,   162,    -1,   157,    10,   162,    -1,   157,    11,    -1,
     157,    12,    -1,   162,    -1,   160,    -1,   161,    -1,    71,
     139,    72,    -1,   140,    -1,   159,    68,   140,    -1,     4,
      -1,     6,    -1,     5,    -1,     7,    -1,     8,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    93,    94,    99,    99,   100,   100,
     101,   101,   102,   102,   107,   109,   128,   129,   134,   156,
     187,   242,   303,   315,   336,   337,   338,   339,   340,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   354,   355,
     356,   360,   361,   365,   366,   367,   371,   372,   376,   377,
     382,   383,   388,   389,   389,   393,   397,   398,   399,   400,
     404,   405,   409,   410,   411,   415,   416,   417,   421,   422,
     426,   427,   427,   433,   434,   439,   440,   441,   442,   443,
     444,   444,   445,   449,   450,   451,   452,   456,   457,   461,
     462,   466,   467,   471,   472,   473,   477,   478,   482,   483,
     484,   488,   489,   493,   494,   498,   499,   500,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   516,   517,   518,
     519,   520,   521,   525,   526,   527,   531,   532,   536,   537,
     538,   539,   543,   544,   548,   549,   550,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   567,   568,   569,
     570,   571,   575,   576,   580,   581,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   600,   601,   605,
     609,   610,   614,   615,   619,   620,   624,   625,   629,   630,
     634,   635,   636,   640,   641,   642,   643,   644,   648,   649,
     650,   654,   655,   656,   660,   661,   662,   663,   667,   668,
     672,   673,   674,   675,   676,   677,   681,   682,   683,   684,
     685,   686,   690,   691,   692,   693,   694,   695,   696,   697,
     701,   702,   703,   704,   708,   709,   713,   714,   715,   716,
     720,   724
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
     130,   130,   130,   130,   130,   130,   130,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     161,   162
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
       3,     3,     4,     2,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     1,     2,     2,     3,
       3,     4,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     7,     8,     7,     8,     8,     9,     3,     2,     2,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   231,    40,    28,    27,    26,    24,    25,    30,    31,
      32,    33,    36,    37,    34,    35,    41,    42,    29,    46,
      47,     0,     0,    83,     0,     2,     4,     5,     0,    18,
      20,    22,    38,     0,    39,     6,    73,     0,    75,     0,
      67,     0,    87,    85,    84,     1,     3,    14,     0,    50,
      52,    19,    21,    23,     0,    45,     0,    16,     8,     0,
      80,     0,    74,     0,    68,    70,     0,    76,    88,    86,
      15,     0,    53,     0,    12,    56,    58,     0,    48,     0,
       0,     0,     7,     0,    17,    52,    79,     0,     0,    96,
     226,   228,   227,   229,   230,     0,     0,     0,     0,    77,
     207,   206,   208,   209,   210,   211,   169,     0,   167,   170,
     172,   174,   176,   178,   180,   183,   188,   191,   194,   198,
       0,   200,   212,   221,   222,   220,    65,     0,    71,     0,
      51,     0,    11,     0,    57,    59,    44,    49,     0,     0,
      60,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   128,     0,   132,   117,   119,
     118,     0,   120,   121,   122,     0,   152,   154,   198,   220,
       9,    94,     0,    89,    91,     0,    82,     0,   204,     0,
     201,   202,   103,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,   218,   219,     0,
       0,     0,    69,     0,    66,     0,    54,    98,    13,    63,
      55,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,     0,   130,     0,   129,   133,
     127,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   156,     0,     0,     0,     0,    93,   105,    95,
     106,    81,     0,    97,     0,     0,   105,   104,     0,   223,
     171,     0,   173,   175,   177,   179,   181,   182,   186,   187,
     184,   185,   189,   190,   192,   193,   195,   196,   197,   217,
     214,   224,     0,     0,   216,    72,   101,     0,    61,    64,
       0,   125,     0,     0,     0,     0,     0,     0,   147,   151,
     131,   153,   155,   123,   113,     0,     0,   109,     0,   107,
       0,     0,    90,    92,   205,   199,     0,     0,   215,   213,
      99,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     114,   108,   110,   115,     0,   111,     0,   168,   225,   100,
     102,   134,   136,   137,     0,     0,     0,     0,     0,     0,
     116,   112,     0,     0,   139,     0,     0,     0,     0,     0,
       0,   135,   138,   140,   141,     0,   143,     0,     0,     0,
     142,   144,   145,     0,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    56,    83,    73,   133,    57,    58,
      59,    29,    30,    31,    32,    33,    77,    48,    49,   131,
      78,    79,   139,   140,    34,    63,    64,   213,    35,    36,
      87,    37,    44,   315,   173,   174,    88,   216,   297,   183,
     316,   260,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   253,   167,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   168,   120,   121,   122,
     292,   123,   124,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -232
static const yytype_int16 yypact[] =
{
    1311,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,    12,    42,    97,  1242,  -232,  -232,  -232,    82,  1498,
    1498,  1498,  -232,    52,  -232,  1498,    23,     9,  -232,    17,
     -26,   -16,  -232,  -232,    97,  -232,  -232,  -232,   -27,  -232,
    1376,  -232,  -232,  -232,   414,    46,    66,  -232,  1498,    82,
      11,   320,    23,   176,  -232,    -2,    17,  -232,  -232,  -232,
    -232,    42,  -232,    66,  1498,   414,   414,  1409,  -232,    40,
     414,   435,  -232,    66,  -232,     7,  -232,  1498,    34,  -232,
    -232,  -232,  -232,  -232,  -232,  1165,  1175,  1175,   605,  -232,
    -232,  -232,  -232,  -232,  -232,  -232,  -232,    72,    -3,   133,
      96,   173,   141,   264,    49,   270,   204,    39,  -232,  -232,
    1185,   157,  -232,  -232,  -232,  -232,  -232,    17,  -232,   221,
    -232,   799,  -232,    66,  -232,  -232,  -232,  -232,  1185,    -7,
    -232,   113,  1440,  1185,   202,   205,   219,   232,   775,   233,
      17,   240,   241,   812,  -232,  -232,   520,  -232,  -232,  -232,
    -232,   653,  -232,  -232,  -232,    76,  -232,  -232,   316,   237,
    -232,   106,   238,   243,  -232,    17,  -232,   605,  -232,  1185,
    -232,  -232,   105,   242,    53,  -232,  1185,  1185,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  -232,    17,  -232,  -232,   897,
    1185,    17,  -232,  1185,  -232,   799,  -232,  -232,  -232,  -232,
    -232,    40,  1185,  -232,   239,   775,  1185,  1185,  1185,   254,
     910,   248,  -232,  -232,  -232,   166,  -232,   690,  -232,  -232,
    -232,  1185,  -232,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,  1185,   775,  1262,   920,  -232,     4,  -232,
      87,  -232,  1477,  -232,   244,  1331,   188,  -232,  1185,  -232,
     133,   207,    96,   173,   141,   264,    49,    49,   270,   270,
     270,   270,   204,   204,    39,    39,  -232,  -232,  -232,  -232,
    -232,  -232,    63,   -22,  -232,  -232,  -232,   226,  -232,  -232,
     775,  -232,    83,    91,   135,   247,   933,   185,  -232,  -232,
    -232,  -232,  -232,  -232,  -232,   258,   275,  -232,   245,    87,
    1167,   943,  -232,  -232,  -232,  -232,  1185,  1185,  -232,  -232,
    -232,   785,  -232,   775,   775,   775,  1185,  1028,   192,  1041,
    -232,  -232,  -232,  -232,   276,  -232,   246,  -232,  -232,  -232,
    -232,   259,  -232,  -232,   142,   775,   145,  1054,  1067,   197,
    -232,  -232,   775,   284,  -232,   775,   775,   154,   775,   161,
    1080,  -232,  -232,  -232,  -232,   775,  -232,   775,   775,   164,
    -232,  -232,  -232,   775,  -232
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,   326,  -232,  -232,  -232,  -232,  -232,    10,   -31,
       1,  -232,   194,    28,  -232,  -232,   271,  -232,   281,  -232,
     -73,   -28,  -232,   132,  -232,   290,   230,  -232,   -17,   -34,
    -232,    30,  -232,   -85,  -232,    98,  -232,  -209,  -232,   181,
    -153,  -231,    54,  -232,  -232,   -47,   203,  -232,  -232,  -232,
     -90,  -108,  -232,   -48,   -94,  -232,   175,   179,   174,   180,
     178,   104,    45,   100,   101,  -104,    -4,  -232,  -232,  -232,
    -232,  -232,  -232,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -11
static const yytype_int16 yytable[] =
{
      38,    28,   172,    62,   137,    41,   296,     1,   184,    82,
      27,    50,     1,   106,     1,     1,   205,   186,   259,    74,
       1,    40,    38,   217,    38,    28,   132,   319,    38,   267,
      51,    52,    53,    55,    27,   319,   170,    38,    70,    65,
      66,    71,    85,     1,   219,     1,   241,   134,   135,   224,
     156,    42,   329,    43,    85,     1,    67,   119,   220,    38,
      89,   221,   141,   235,   194,   195,    65,   128,    84,   137,
     182,    38,    68,   187,    69,   255,    72,   256,    39,    38,
      22,   169,    76,    86,    84,     1,   218,   184,   171,   184,
     106,   178,   180,   181,    60,   106,    61,   271,   286,   287,
     288,   291,   175,    76,    76,    76,   176,   217,    76,     1,
     138,    22,    80,    22,   202,    23,   119,    23,    54,   295,
     293,   241,   350,   203,   204,   269,    76,    65,   299,   196,
     197,   327,    81,   311,   119,   328,   302,   303,   304,   119,
     307,   240,    16,    17,   241,   312,   185,    47,   169,   182,
     231,   241,   188,    22,   257,   333,   169,    23,   320,   241,
     321,   169,   318,   334,   325,   106,    84,   206,   207,   208,
      76,    38,    23,   189,   106,   263,   265,   255,   256,   256,
      23,    23,   119,   222,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   258,   229,   241,   141,    76,   289,   335,   106,   119,
     241,   294,   266,   241,   363,   239,   338,   365,   119,   348,
     191,    38,   241,   217,    62,   169,   375,   346,   209,   241,
     210,   309,   241,   377,   241,   344,   383,   169,    41,   278,
     279,   280,   281,   126,   127,   211,   354,   356,    75,   359,
     339,   190,   119,   241,   169,    38,   171,   357,    38,   265,
     241,   256,   370,   171,   119,   241,   171,   367,   369,    75,
      75,    75,   225,   106,    75,   241,   226,   326,   347,   301,
     379,   192,   193,   198,   199,   258,   200,   201,   214,   127,
     227,   239,    75,   330,   331,   266,   276,   277,   282,   283,
     169,   284,   285,   228,   230,   232,   233,   254,   313,   300,
     261,   262,   305,   308,   268,   362,   324,   119,   336,   342,
     361,   171,   119,     1,    90,    91,    92,    93,    94,    95,
     340,    96,    97,   169,   169,   169,    75,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   341,   360,   372,
      46,   142,   130,   298,   332,   169,   129,   212,   264,   237,
     323,   270,   169,   273,     0,   169,   169,   272,   169,   275,
     274,    75,     0,     0,     0,   169,     0,   169,   169,     0,
       0,     0,     0,   169,     0,   252,     0,   351,   352,   353,
       0,    98,     0,     0,    99,   100,     0,     0,     0,   101,
       0,     0,   102,   103,     0,     0,   104,   105,     0,   364,
       0,     0,     0,     0,     0,     0,   371,     0,     0,   373,
     374,     0,   376,     0,     0,     0,     0,     0,     0,   380,
       0,   381,   382,     0,     0,     0,     0,   384,     1,    90,
      91,    92,    93,    94,    95,     2,    96,    97,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    81,   155,     0,     0,     0,    98,     0,     0,     0,
     100,     0,     0,     0,   101,     0,     0,   102,   103,     0,
       0,   104,   105,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,   143,   144,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    81,   236,     0,     0,
       0,    98,     0,     0,     0,   100,     0,     0,     0,   101,
       0,     0,   102,   103,     0,     0,   104,   105,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
     100,     0,     0,     0,   101,     0,     0,   102,   103,     0,
       0,   104,   105,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,   143,   144,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    81,
     238,     0,     0,     0,    98,     0,     0,     0,   100,     0,
       0,     0,   101,     0,     0,   102,   103,     0,     0,   104,
     105,     0,     0,   143,   144,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    81,   310,     0,     0,
       0,    98,     0,     0,     0,   100,     0,     0,     0,   101,
       0,     0,   102,   103,     0,     0,   104,   105,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,     0,
       0,     0,     1,    90,    91,    92,    93,    94,    95,     0,
      96,    97,     0,     0,     0,     1,    90,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,   143,   144,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    81,     0,     0,     0,     0,    98,     0,     0,     0,
     100,   215,   349,     0,   101,     0,    98,   102,   103,     0,
     100,   104,   105,     0,   101,   215,     0,   102,   103,     0,
      98,   104,   105,     0,   100,     0,     0,   234,   101,     0,
       0,   102,   103,    98,     0,   104,   105,   100,     0,     0,
       0,   101,     0,     0,   102,   103,     0,     0,   104,   105,
       1,    90,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,     0,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     1,    90,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,   290,
       0,     0,   100,     0,     0,   306,   101,     0,     0,   102,
     103,    98,     0,   104,   105,   100,     0,     0,     0,   101,
       0,    98,   102,   103,   317,   100,   104,   105,   337,   101,
       0,     0,   102,   103,    98,     0,   104,   105,   100,     0,
       0,     0,   101,     0,    98,   102,   103,   345,   100,   104,
     105,     0,   101,     0,     0,   102,   103,     0,     0,   104,
     105,     1,    90,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     1,    90,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     1,    90,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       1,    90,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,     0,     1,    90,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,    98,
     355,     0,     0,   100,     0,     0,   358,   101,     0,     0,
     102,   103,    98,     0,   104,   105,   100,     0,     0,     0,
     101,     0,     0,   102,   103,    98,   366,   104,   105,   100,
       0,     0,     0,   101,     0,     0,   102,   103,    98,   368,
     104,   105,   100,     0,     0,     0,   101,     0,     0,   102,
     103,    98,   378,   104,   105,   100,     0,     0,     0,   101,
       0,     0,   102,   103,     0,     0,   104,   105,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     1,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,   343,
     100,     0,    45,     0,   101,     1,   179,   102,   103,     0,
     100,   104,   105,     0,   101,     0,    98,   102,   103,     0,
     100,   104,   105,     0,   101,     1,     0,   102,   103,     0,
       0,   104,   105,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     1,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   314,   256,     0,    23,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   265,   314,   256,     0,    23,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,   -10,     0,     0,    72,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   136,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   322,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,     0,    87,    37,    77,    22,   215,     3,    98,    56,
       0,    28,     3,    61,     3,     3,   120,    20,   171,    50,
       3,    21,    22,   131,    24,    24,    73,   258,    28,   182,
      29,    30,    31,    33,    24,   266,    83,    37,    65,    39,
      66,    68,    59,     3,   138,     3,    68,    75,    76,   143,
      81,    23,    74,    23,    71,     3,    72,    61,    65,    59,
      60,    68,    79,   153,    15,    16,    66,    69,    58,   142,
      98,    71,    44,    76,    44,    71,    69,    73,    66,    79,
      71,    81,    54,    72,    74,     3,   133,   177,    87,   179,
     138,    95,    96,    97,    71,   143,    73,   187,   202,   203,
     204,   209,    68,    75,    76,    77,    72,   215,    80,     3,
      70,    71,    66,    71,    75,    75,   120,    75,    66,   213,
     210,    68,   331,    84,    85,    72,    98,   127,   222,    80,
      81,    68,    66,   241,   138,    72,   226,   227,   228,   143,
     230,    65,    45,    46,    68,   253,    74,    65,   148,   177,
     150,    68,    19,    71,   171,    72,   156,    75,    71,    68,
      73,   161,   256,    72,   268,   213,   156,    10,    11,    12,
     142,   171,    75,    77,   222,   175,    71,    71,    73,    73,
      75,    75,   186,    70,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   171,   148,    68,   221,   177,   206,    72,   256,   213,
      68,   211,   182,    68,    72,   161,   306,    72,   222,   327,
      79,   221,    68,   331,   258,   225,    72,   321,    71,    68,
      73,    65,    68,    72,    68,   320,    72,   237,   255,   194,
     195,   196,   197,    67,    68,    88,   336,   337,    54,   339,
      65,    78,   256,    68,   254,   255,   255,    65,   258,    71,
      68,    73,    65,   262,   268,    68,   265,   357,   358,    75,
      76,    77,    70,   321,    80,    68,    71,    70,   326,   225,
     370,    17,    18,    13,    14,   255,    82,    83,    67,    68,
      71,   237,    98,    67,    68,   265,   192,   193,   198,   199,
     300,   200,   201,    71,    71,    65,    65,    70,   254,    70,
      72,    68,    58,    65,    72,    56,    72,   321,    71,    74,
      74,   320,   326,     3,     4,     5,     6,     7,     8,     9,
      72,    11,    12,   333,   334,   335,   142,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    72,    72,    65,
      24,    80,    71,   221,   300,   355,    66,   127,   177,   156,
     262,   186,   362,   189,    -1,   365,   366,   188,   368,   191,
     190,   177,    -1,    -1,    -1,   375,    -1,   377,   378,    -1,
      -1,    -1,    -1,   383,    -1,    69,    -1,   333,   334,   335,
      -1,    71,    -1,    -1,    74,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    87,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,    -1,   365,
     366,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,   375,
      -1,   377,   378,    -1,    -1,    -1,    -1,   383,     3,     4,
       5,     6,     7,     8,     9,    31,    11,    12,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    86,    87,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,    -1,    82,    83,    -1,
      -1,    86,    87,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    66,    67,    -1,    79,    -1,    71,    82,    83,    -1,
      75,    86,    87,    -1,    79,    66,    -1,    82,    83,    -1,
      71,    86,    87,    -1,    75,    -1,    -1,    65,    79,    -1,
      -1,    82,    83,    71,    -1,    86,    87,    75,    -1,    -1,
      -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,    87,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    -1,    65,    79,    -1,    -1,    82,
      83,    71,    -1,    86,    87,    75,    -1,    -1,    -1,    79,
      -1,    71,    82,    83,    74,    75,    86,    87,    65,    79,
      -1,    -1,    82,    83,    71,    -1,    86,    87,    75,    -1,
      -1,    -1,    79,    -1,    71,    82,    83,    74,    75,    86,
      87,    -1,    79,    -1,    -1,    82,    83,    -1,    -1,    86,
      87,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    65,    79,    -1,    -1,
      82,    83,    71,    -1,    86,    87,    75,    -1,    -1,    -1,
      79,    -1,    -1,    82,    83,    71,    72,    86,    87,    75,
      -1,    -1,    -1,    79,    -1,    -1,    82,    83,    71,    72,
      86,    87,    75,    -1,    -1,    -1,    79,    -1,    -1,    82,
      83,    71,    72,    86,    87,    75,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    87,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    72,
      75,    -1,     0,    -1,    79,     3,    71,    82,    83,    -1,
      75,    86,    87,    -1,    79,    -1,    71,    82,    83,    -1,
      75,    86,    87,    -1,    79,     3,    -1,    82,    83,    -1,
      -1,    86,    87,    31,    32,    33,    34,    35,    36,    37,
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
      31,    -1,    66,    -1,    -1,    69,    37,    38,    39,    40,
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
      49,    50,    71,    75,    90,    91,    92,    97,    99,   100,
     101,   102,   103,   104,   113,   117,   118,   120,   162,    66,
     162,   117,   102,   120,   121,     0,    91,    65,   106,   107,
     117,    99,    99,    99,    66,   162,    93,    97,    98,    99,
      71,    73,   118,   114,   115,   162,    66,    72,   102,   120,
      65,    68,    69,    95,    98,   101,   102,   105,   109,   110,
      66,    66,   134,    94,    97,   117,    72,   119,   125,   162,
       4,     5,     6,     7,     8,     9,    11,    12,    71,    74,
      75,    79,    82,    83,    86,    87,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   160,   161,   162,    67,    68,    69,   114,
     107,   108,   134,    96,   110,   110,    67,   109,    70,   111,
     112,   117,   105,    53,    54,    55,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    98,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   142,   155,   162,
     134,    99,   122,   123,   124,    68,    72,    71,   155,    71,
     155,   155,   110,   128,   139,    74,    20,    76,    19,    77,
      78,    79,    17,    18,    15,    16,    80,    81,    13,    14,
      82,    83,    75,    84,    85,   154,    10,    11,    12,    71,
      73,    88,   115,   116,    67,    66,   126,   140,   134,   143,
      65,    68,    70,    67,   143,    70,    71,    71,    71,   131,
      71,   162,    65,    65,    65,   139,    67,   135,    67,   131,
      65,    68,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    69,   141,    70,    71,    73,   117,   120,   129,
     130,    72,    68,   162,   128,    71,   120,   129,    72,    72,
     145,   139,   146,   147,   148,   149,   150,   150,   151,   151,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   162,
      72,   140,   159,   139,   162,   143,   126,   127,   112,   143,
      70,   131,   139,   139,   139,    58,    65,   139,    65,    65,
      67,   140,   140,   131,    72,   122,   129,    74,   143,   130,
      71,    73,    51,   124,    72,   154,    70,    68,    72,    74,
      67,    68,   131,    72,    72,    72,    71,    65,   139,    65,
      72,    72,    74,    72,   122,    74,   143,   142,   140,    67,
     126,   131,   131,   131,   139,    72,   139,    65,    65,   139,
      72,    74,    56,    72,   131,    72,    72,   139,    72,   139,
      65,   131,    65,   131,   131,    72,   131,    72,    72,   139,
     131,   131,   131,    72,   131
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
#line 99 "test_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 99 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 8:
#line 100 "test_c_grammar.y"
    {st.push();}
    break;

  case 9:
#line 100 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 10:
#line 101 "test_c_grammar.y"
    {st.push();}
    break;

  case 11:
#line 101 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 12:
#line 102 "test_c_grammar.y"
    {st.push();}
    break;

  case 13:
#line 102 "test_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 15:
#line 110 "test_c_grammar.y"
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

  case 16:
#line 128 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 18:
#line 134 "test_c_grammar.y"
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

  case 19:
#line 157 "test_c_grammar.y"
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

  case 20:
#line 188 "test_c_grammar.y"
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

  case 21:
#line 243 "test_c_grammar.y"
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

  case 22:
#line 304 "test_c_grammar.y"
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

  case 23:
#line 316 "test_c_grammar.y"
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

  case 24:
#line 336 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "AUTO";}
    break;

  case 25:
#line 337 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "REGISTER";}
    break;

  case 26:
#line 338 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "STATIC";}
    break;

  case 27:
#line 339 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "EXTERN";}
    break;

  case 28:
#line 340 "test_c_grammar.y"
    {declMode = true;(yyval.sval) = "TYPEDEF";}
    break;

  case 29:
#line 344 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOID";}
    break;

  case 30:
#line 345 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CHAR";}
    break;

  case 31:
#line 346 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SHORT";}
    break;

  case 32:
#line 347 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "INT";}
    break;

  case 33:
#line 348 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "LONG";}
    break;

  case 34:
#line 349 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "FLOAT";}
    break;

  case 35:
#line 350 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "DOUBLE";}
    break;

  case 36:
#line 351 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "SIGNED";}
    break;

  case 37:
#line 352 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "UNSIGNED";}
    break;

  case 38:
#line 354 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "NEED TO FIGURE OUT";}
    break;

  case 39:
#line 355 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "Same!";}
    break;

  case 40:
#line 356 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 41:
#line 360 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "CONST";}
    break;

  case 42:
#line 361 "test_c_grammar.y"
    {declMode = true; (yyval.sval) = "VOLATILE";}
    break;

  case 46:
#line 371 "test_c_grammar.y"
    {(yyval.sval) = "STRUCT";}
    break;

  case 47:
#line 372 "test_c_grammar.y"
    {(yyval.sval) = "UNION";}
    break;

  case 50:
#line 382 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 51:
#line 383 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(3) - (3)].sval);}
    break;

  case 52:
#line 388 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval) ;}
    break;

  case 53:
#line 389 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 54:
#line 389 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 71:
#line 427 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 73:
#line 433 "test_c_grammar.y"
    {std::cout << "id at dec =>" << (yyvsp[(1) - (1)].sval) <<std::endl;}
    break;

  case 74:
#line 434 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(2) - (2)].sval);}
    break;

  case 75:
#line 439 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval); std::cout << "id at dd =>" << (yyvsp[(1) - (1)].sval) <<std::endl;}
    break;

  case 76:
#line 440 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(2) - (3)].sval);}
    break;

  case 77:
#line 441 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (3)].sval);}
    break;

  case 78:
#line 442 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 79:
#line 443 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (3)].sval);st.push();}
    break;

  case 80:
#line 444 "test_c_grammar.y"
    {st.push();}
    break;

  case 81:
#line 444 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (5)].sval);std::cout<<"I think I should push";}
    break;

  case 82:
#line 445 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 156:
#line 586 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 157:
#line 587 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 158:
#line 588 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 159:
#line 589 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 160:
#line 590 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 161:
#line 591 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 162:
#line 592 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 163:
#line 593 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 164:
#line 594 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 165:
#line 595 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 166:
#line 596 "test_c_grammar.y"
    {declMode = false;}
    break;

  case 231:
#line 724 "test_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;


/* Line 1267 of yacc.c.  */
#line 2641 "y.tab.c"
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


#line 726 "test_c_grammar.y"


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

