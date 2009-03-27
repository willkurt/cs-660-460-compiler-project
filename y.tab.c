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
#line 47 "new_c_grammar.y"
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
#line 307 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 320 "y.tab.c"

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
#define YYLAST   1406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNRULES -- Number of states.  */
#define YYNSTATES  394

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
      53,    54,    59,    64,    65,    66,    68,    71,    73,    76,
      78,    81,    83,    85,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   125,   130,   133,   135,   137,   139,   142,   144,   148,
     150,   154,   158,   160,   163,   165,   168,   170,   174,   176,
     179,   183,   188,   194,   197,   199,   203,   205,   209,   211,
     214,   216,   220,   224,   229,   233,   234,   240,   245,   247,
     250,   253,   257,   259,   262,   264,   268,   270,   274,   277,
     279,   282,   284,   288,   290,   294,   299,   301,   305,   307,
     310,   312,   314,   317,   321,   324,   328,   332,   337,   340,
     344,   348,   353,   355,   357,   359,   361,   363,   365,   369,
     374,   378,   380,   383,   386,   390,   394,   399,   401,   404,
     410,   418,   424,   430,   438,   445,   453,   461,   470,   478,
     487,   496,   506,   510,   513,   516,   519,   523,   525,   529,
     531,   535,   537,   539,   541,   543,   545,   547,   549,   551,
     553,   555,   557,   559,   565,   567,   569,   573,   575,   579,
     581,   585,   587,   591,   593,   597,   599,   603,   607,   609,
     613,   617,   621,   625,   627,   631,   635,   637,   641,   645,
     647,   651,   655,   659,   661,   666,   668,   671,   674,   677,
     680,   685,   687,   689,   691,   693,   695,   697,   699,   704,
     708,   713,   717,   721,   724,   727,   729,   731,   733,   737,
     739,   743,   745,   747,   749,   751,   753,   755
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    93,    -1,
     102,    -1,    -1,    -1,   123,    94,   140,    95,    -1,    -1,
      -1,   123,   103,    96,   140,    97,    -1,    -1,    -1,   107,
     123,    98,   140,    99,    -1,    -1,    -1,   107,   123,   103,
     100,   140,   101,    -1,   107,    66,   169,    -1,   107,   114,
     169,    66,    -1,    -1,   105,   102,   106,   104,    -1,   103,
     105,   102,   106,    -1,    -1,    -1,   108,    -1,   108,   107,
      -1,   109,    -1,   109,   107,    -1,   110,    -1,   110,   107,
      -1,    35,    -1,    36,    -1,    34,    -1,    33,    -1,    32,
      -1,    47,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    43,    -1,    44,    -1,    41,    -1,    42,    -1,   111,
      -1,   120,    -1,    31,    -1,    45,    -1,    46,    -1,   112,
     168,    67,   113,    68,    -1,   112,    67,   113,    68,    -1,
     112,   168,    -1,    48,    -1,    49,    -1,   116,    -1,   113,
     116,    -1,   115,    -1,   114,    69,   115,    -1,   123,    -1,
     123,    70,   132,    -1,   117,   118,    66,    -1,   109,    -1,
     109,   117,    -1,   110,    -1,   110,   117,    -1,   119,    -1,
     118,    69,   119,    -1,   123,    -1,    71,   149,    -1,   123,
      71,   149,    -1,    50,    67,   121,    68,    -1,    50,   168,
      67,   121,    68,    -1,    50,   168,    -1,   122,    -1,   121,
      69,   122,    -1,   168,    -1,   168,    70,   149,    -1,   124,
      -1,   126,   124,    -1,   168,    -1,    72,   123,    73,    -1,
     124,    74,    75,    -1,   124,    74,   149,    75,    -1,   124,
      72,    73,    -1,    -1,   124,    72,   125,   128,    73,    -1,
     124,    72,   131,    73,    -1,    76,    -1,    76,   127,    -1,
      76,   126,    -1,    76,   127,   126,    -1,   110,    -1,   127,
     110,    -1,   129,    -1,   129,    69,    51,    -1,   130,    -1,
     129,    69,   130,    -1,   107,   123,    -1,   107,    -1,   107,
     135,    -1,   168,    -1,   131,    69,   168,    -1,   146,    -1,
      67,   133,    68,    -1,    67,   133,    69,    68,    -1,   132,
      -1,   133,    69,   132,    -1,   117,    -1,   117,   135,    -1,
     126,    -1,   136,    -1,   126,   136,    -1,    72,   135,    73,
      -1,    74,    75,    -1,    74,   149,    75,    -1,   136,    74,
      75,    -1,   136,    74,   149,    75,    -1,    72,    73,    -1,
      72,   128,    73,    -1,   136,    72,    73,    -1,   136,    72,
     128,    73,    -1,   138,    -1,   140,    -1,   139,    -1,   142,
      -1,   143,    -1,   144,    -1,   168,    71,   137,    -1,    53,
     149,    71,   137,    -1,    54,    71,   137,    -1,    66,    -1,
     145,    66,    -1,    67,    68,    -1,    67,   141,    68,    -1,
      67,   103,    68,    -1,    67,   103,   141,    68,    -1,   137,
      -1,   141,   137,    -1,    55,    72,   145,    73,   137,    -1,
      55,    72,   145,    73,   137,    56,   137,    -1,    57,    72,
     145,    73,   137,    -1,    58,    72,   145,    73,   137,    -1,
      59,   137,    58,    72,   145,    73,    66,    -1,    60,    72,
      66,    66,    73,   137,    -1,    60,    72,    66,    66,   145,
      73,   137,    -1,    60,    72,    66,   145,    66,    73,   137,
      -1,    60,    72,    66,   145,    66,   145,    73,   137,    -1,
      60,    72,   145,    66,    66,    73,   137,    -1,    60,    72,
     145,    66,    66,   145,    73,   137,    -1,    60,    72,   145,
      66,   145,    66,    73,   137,    -1,    60,    72,   145,    66,
     145,    66,   145,    73,   137,    -1,    61,   168,    66,    -1,
      62,    66,    -1,    63,    66,    -1,    64,    66,    -1,    64,
     145,    66,    -1,   146,    -1,   145,    69,   146,    -1,   148,
      -1,   161,   147,   146,    -1,    70,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,   150,    -1,   150,
      77,   145,    71,   148,    -1,   148,    -1,   151,    -1,   150,
      20,   151,    -1,   152,    -1,   151,    19,   152,    -1,   153,
      -1,   152,    78,   153,    -1,   154,    -1,   153,    79,   154,
      -1,   155,    -1,   154,    80,   155,    -1,   156,    -1,   155,
      17,   156,    -1,   155,    18,   156,    -1,   157,    -1,   156,
      81,   157,    -1,   156,    82,   157,    -1,   156,    15,   157,
      -1,   156,    16,   157,    -1,   158,    -1,   157,    13,   158,
      -1,   157,    14,   158,    -1,   159,    -1,   158,    83,   159,
      -1,   158,    84,   159,    -1,   160,    -1,   159,    76,   160,
      -1,   159,    85,   160,    -1,   159,    86,   160,    -1,   161,
      -1,    72,   134,    73,   160,    -1,   163,    -1,    11,   161,
      -1,    12,   161,    -1,   162,   160,    -1,     9,   161,    -1,
       9,    72,   134,    73,    -1,    80,    -1,    76,    -1,    83,
      -1,    84,    -1,    87,    -1,    88,    -1,   164,    -1,   163,
      74,   145,    75,    -1,   163,    72,    73,    -1,   163,    72,
     165,    73,    -1,   163,    89,   168,    -1,   163,    10,   168,
      -1,   163,    11,    -1,   163,    12,    -1,   168,    -1,   166,
      -1,   167,    -1,    72,   145,    73,    -1,   146,    -1,   165,
      69,   146,    -1,     4,    -1,     6,    -1,     5,    -1,     7,
      -1,     8,    -1,     3,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   120,   126,   129,   135,   135,   135,   138,
     138,   138,   141,   141,   141,   144,   144,   144,   150,   154,
     160,   160,   163,   169,   173,   177,   201,   232,   289,   352,
     365,   387,   391,   395,   399,   403,   410,   414,   418,   455,
     586,   655,   673,   711,   715,   720,   724,   728,   734,   738,
     745,   748,   751,   757,   761,   768,   771,   777,   781,   788,
     792,   798,   804,   807,   810,   813,   819,   822,   828,   831,
     834,   840,   843,   846,   852,   855,   861,   864,   871,   875,
     883,   887,   891,   895,   899,   904,   904,   908,   915,   918,
     921,   924,   930,   933,   939,   942,   948,   951,   957,   960,
     963,   969,   972,   978,   981,   984,   990,   993,   999,  1002,
    1008,  1011,  1014,  1020,  1023,  1026,  1029,  1032,  1035,  1038,
    1041,  1044,  1050,  1053,  1056,  1059,  1062,  1065,  1071,  1074,
    1077,  1083,  1086,  1092,  1095,  1098,  1101,  1107,  1110,  1116,
    1119,  1122,  1128,  1131,  1134,  1137,  1140,  1143,  1146,  1149,
    1152,  1155,  1161,  1164,  1167,  1170,  1173,  1179,  1182,  1188,
    1191,  1197,  1200,  1203,  1206,  1209,  1212,  1215,  1218,  1221,
    1224,  1227,  1233,  1236,  1242,  1248,  1251,  1257,  1260,  1266,
    1269,  1275,  1278,  1284,  1287,  1293,  1296,  1299,  1305,  1308,
    1311,  1314,  1317,  1323,  1326,  1329,  1335,  1338,  1341,  1347,
    1350,  1353,  1356,  1362,  1365,  1371,  1374,  1377,  1380,  1383,
    1386,  1392,  1395,  1398,  1401,  1404,  1407,  1413,  1416,  1419,
    1422,  1425,  1428,  1431,  1434,  1440,  1443,  1446,  1449,  1455,
    1458,  1464,  1467,  1470,  1473,  1479,  1485,  1495
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
  "declaration", "declaration_list", "@9", "start_decl", "end_decl",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "type_qualifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "@10", "pointer", "type_qualifier_list", "parameter_type_list",
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
  "argument_expression_list", "constant", "string", "identifier",
  "identifier_flag_clear", 0
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
      97,    93,    98,    99,    93,   100,   101,    93,   102,   102,
     104,   103,   103,   105,   106,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   117,   117,   117,   117,   118,   118,   119,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   124,   125,   124,   124,   126,   126,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     130,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   148,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   155,   155,   155,   156,   156,
     156,   156,   156,   157,   157,   157,   158,   158,   158,   159,
     159,   159,   159,   160,   160,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   164,   164,   165,
     165,   166,   166,   166,   166,   167,   168,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     3,     4,
       0,     4,     4,     0,     0,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     1,     3,     1,
       3,     3,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     4,     3,     0,     5,     4,     1,     2,
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
       3,     1,     1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   236,    47,    35,    34,    33,    31,    32,    37,    38,
      39,    40,    43,    44,    41,    42,    48,    49,    36,    53,
      54,     0,     0,    88,     0,     2,     4,     5,     0,    25,
      27,    29,    45,     0,    46,    23,    78,     0,    80,     0,
      73,     0,    92,    90,    89,     1,     3,   237,   237,    57,
      23,    26,    28,    30,     0,    52,     0,    23,     0,    85,
       0,    79,     0,    74,    76,     0,    81,    93,    91,    18,
       0,     0,     0,     0,    23,    62,    64,     0,    55,     0,
       0,    23,     7,     0,     0,    24,     0,    84,     0,     0,
     101,   231,   233,   232,   234,   235,     0,     0,     0,     0,
      82,   212,   211,   213,   214,   215,   216,   174,     0,   172,
     175,   177,   179,   181,   183,   185,   188,   193,   196,   199,
     203,     0,   205,   217,   226,   227,   225,    71,     0,     0,
       0,    58,    59,    19,     0,    60,   103,   159,   203,    13,
       0,    63,    65,    51,    56,     0,     0,    66,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   133,    23,   137,   122,   124,   123,     0,   125,
     126,   127,     0,   157,   225,     8,    10,    24,    20,    99,
       0,    94,    96,     0,    87,     0,   209,     0,   206,   207,
     108,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,   223,   224,     0,     0,     0,
      75,    77,    72,   106,     0,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   161,     0,    14,    16,    69,
      61,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   153,   154,   155,     0,   135,     0,   134,   138,
     132,     0,     0,    11,    22,    21,     0,     0,    98,   110,
     100,   111,    86,     0,   102,     0,     0,   110,   109,     0,
     228,   176,     0,   178,   180,   182,   184,   186,   187,   191,
     192,   189,   190,   194,   195,   197,   198,   200,   201,   202,
     222,   219,   229,     0,     0,   221,   104,     0,   160,    17,
      67,    70,     0,   130,     0,     0,     0,     0,     0,     0,
     152,   156,   136,   158,   128,   118,     0,     0,   114,     0,
     112,     0,     0,    95,    97,   210,   204,     0,     0,   220,
     218,   105,   107,   129,     0,     0,     0,     0,     0,     0,
       0,   119,   113,   115,   120,     0,   116,     0,   173,   230,
     139,   141,   142,     0,     0,     0,     0,     0,     0,   121,
     117,     0,     0,   144,     0,     0,     0,     0,     0,     0,
     140,   143,   145,   146,     0,   148,     0,     0,     0,   147,
     149,   150,     0,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    56,   175,    83,   263,    73,   237,
     140,   309,    27,    57,   265,    58,   178,   179,    29,    30,
      31,    32,    33,    77,    48,    49,    78,    79,   146,   147,
      34,    62,    63,    35,    36,    88,    37,    44,   326,   181,
     182,    89,   135,   224,   191,   327,   271,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   236,   137,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   138,   121,   122,   123,   303,   124,   125,   126,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -198
static const yytype_int16 yypact[] =
{
    1231,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,    38,    54,    73,  1136,  -198,  -198,  -198,    55,  1356,
    1356,  1356,  -198,    48,  -198,   -50,     4,    26,  -198,    20,
     -12,    15,  -198,  -198,    73,  -198,  -198,  -198,     2,  -198,
     105,  -198,  -198,  -198,   425,    40,    86,    92,  1356,    10,
     750,     4,    28,  -198,   106,    20,  -198,  -198,  -198,  -198,
      54,    63,   764,    86,   100,   425,   425,  1156,  -198,    66,
     425,   494,  -198,    86,  1356,  -198,    55,  -198,  1356,    97,
    -198,  -198,  -198,  -198,  -198,  -198,  1057,  1143,  1143,   446,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   111,    -2,
     191,   182,   156,   166,   130,    51,   259,   201,    59,  -198,
    -198,  1153,    34,  -198,  -198,  -198,  -198,  -198,    20,  1153,
     219,  -198,   198,  -198,   764,  -198,  -198,  -198,   281,  -198,
      86,  -198,  -198,  -198,  -198,  1153,   122,  -198,   205,  1297,
    1153,   243,   244,   245,   248,   740,   249,    20,   256,   257,
     777,  -198,  -198,   532,  -198,  -198,  -198,  -198,   618,  -198,
    -198,  -198,   149,  -198,   253,  -198,  -198,  -198,  -198,    37,
     242,   258,  -198,    20,  -198,   446,  -198,  1153,  -198,  -198,
      84,   252,   108,  -198,  1153,  1153,  1153,  1153,  1153,  1153,
    1153,  1153,  1153,  1153,  1153,  1153,  1153,  1153,  1153,  1153,
    1153,  1153,  1153,  -198,    20,  -198,  -198,   863,  1153,    20,
    -198,  -198,  -198,  -198,   221,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  1153,  -198,  -198,  -198,
    -198,    66,  1153,  -198,   255,   740,  1153,  1153,  1153,   271,
     876,   264,  -198,  -198,  -198,   170,  -198,   654,  -198,  -198,
    -198,  1153,   740,  -198,  -198,  -198,  1211,   886,  -198,    13,
    -198,   168,  -198,  1335,  -198,   268,  1277,   193,  -198,  1153,
    -198,   191,    65,   182,   156,   166,   130,    51,    51,   259,
     259,   259,   259,   201,   201,    59,    59,  -198,  -198,  -198,
    -198,  -198,  -198,   109,    41,  -198,  -198,   331,  -198,  -198,
    -198,  -198,   740,  -198,   116,   144,   147,   260,   899,   181,
    -198,  -198,  -198,  -198,  -198,  -198,   274,   275,  -198,   277,
     168,   601,   909,  -198,  -198,  -198,  -198,  1153,  1153,  -198,
    -198,  -198,  -198,  -198,   740,   740,   740,  1153,   922,   187,
    1008,  -198,  -198,  -198,  -198,   276,  -198,   278,  -198,  -198,
     294,  -198,  -198,   152,   740,   157,  1021,  1034,   192,  -198,
    -198,   740,   265,  -198,   740,   740,   158,   740,   159,  1047,
    -198,  -198,  -198,  -198,   740,  -198,   740,   740,   164,  -198,
    -198,  -198,   740,  -198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,   330,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,   -24,    62,  -198,   -49,   178,    19,  -198,   -45,
     220,  -198,  -198,   279,  -198,   286,   -65,   -61,  -198,   117,
    -198,   292,   232,   -18,   -35,  -198,   -17,  -198,   -87,  -198,
      88,  -198,  -127,  -198,   177,  -117,  -197,    56,  -198,  -198,
     -20,   200,  -198,  -198,  -198,   -96,   -52,  -198,   -55,  -103,
    -198,   171,   174,   169,   175,   173,    91,    76,    87,    90,
    -110,    -4,  -198,  -198,  -198,  -198,  -198,  -198,     0,   319
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int16 yytable[] =
{
      38,   180,    61,   192,    41,   107,    43,   223,    84,    75,
      50,   213,   144,     1,   141,   142,     1,    -6,   194,    28,
     136,    40,    38,     1,    38,    84,   221,    68,    38,     1,
      75,    75,    75,    55,    85,    75,    82,    38,   190,    64,
       1,     1,   239,    28,   214,   215,   216,   244,    51,    52,
      53,     1,   132,   139,    75,    65,   120,     1,     1,    90,
     177,   148,   270,   176,   255,    64,   202,   203,   132,     1,
      38,    70,   330,   278,   107,   195,    59,    86,    60,    38,
     330,   174,   136,    87,   144,   266,    38,   267,    66,   192,
     107,   192,   186,   188,   189,   107,   127,   128,    22,   282,
     297,   298,   299,    86,    75,    39,   217,    80,   218,   266,
     261,   267,    74,    23,    84,    54,   340,   120,    16,    17,
     238,    47,   304,   219,   190,   120,    22,    22,    64,   133,
      23,    23,   204,   205,   261,   210,   337,   145,    22,   311,
      75,   120,    23,   163,   211,   212,   120,   200,   201,    23,
     314,   315,   316,    81,   319,   174,   276,   251,   267,    -9,
      23,   268,   269,   174,   329,   302,   183,   -15,   174,   336,
     184,   -59,   -12,   277,   -59,    72,   129,   261,   338,    38,
     342,   280,   339,   274,   308,   261,   193,   107,   240,   344,
     120,   241,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   323,
     196,   249,   107,   261,   300,   260,   261,   345,   261,   305,
     346,   261,   349,   148,   259,   372,   261,   261,   261,   357,
     374,   384,   386,   261,    61,   198,   321,   392,   120,   261,
     331,    38,   332,    42,   355,   174,   199,   350,    41,   269,
     261,   363,   365,   366,   368,   136,   261,   174,   379,   277,
     197,   261,   174,   120,    67,   276,    38,   267,    72,    38,
     376,   378,   206,   207,    76,   120,   242,   107,   289,   290,
     291,   292,   358,   388,   208,   209,   359,   222,   128,   306,
     307,   287,   288,   293,   294,    76,    76,    76,   295,   296,
      76,   313,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   174,   259,   245,   272,   246,   247,   324,    76,
     248,   250,   252,   253,   262,   279,   312,   273,   120,   317,
     320,   381,   347,   120,     1,    91,    92,    93,    94,    95,
      96,   335,    97,    98,   174,   174,   174,   351,   352,   369,
     371,   235,   353,   370,    46,   264,   131,   130,   310,   149,
     220,   334,   275,   257,   174,   281,   284,    71,   343,    76,
     283,   174,   286,   285,   174,   174,     0,   174,     0,     0,
       0,     0,     0,     0,   174,     0,   174,   174,     0,     0,
       0,     0,   174,     0,     0,     0,     0,     0,   134,   341,
     360,   361,   362,    99,     0,    76,     0,   101,     0,     0,
       0,   102,     0,     0,   103,   104,     0,     0,   105,   106,
     373,     0,     0,     0,     0,     0,     0,   380,     0,     0,
     382,   383,     0,   385,     0,     0,     0,     0,     0,     0,
     389,     0,   390,   391,     0,     0,     0,     0,   393,     1,
      91,    92,    93,    94,    95,    96,     2,    97,    98,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     2,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,   101,     0,     0,     0,   102,     0,     0,   103,
     104,     0,     0,   105,   106,     1,    91,    92,    93,    94,
      95,    96,     0,    97,    98,     0,     0,   150,   151,   152,
       0,   153,   154,   155,   156,   157,   158,   159,   160,     0,
     161,    81,   162,     0,     0,     0,    99,     0,     0,     0,
     101,     0,     0,     0,   102,     0,     0,   103,   104,     0,
       0,   105,   106,     0,     0,   150,   151,   152,     0,   153,
     154,   155,   156,   157,   158,   159,   160,     0,   161,    81,
     256,     0,     0,     0,    99,     0,     0,     0,   101,     0,
       0,     0,   102,     0,     0,   103,   104,     0,     0,   105,
     106,     1,    91,    92,    93,    94,    95,    96,     0,    97,
      98,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       0,   150,   151,   152,   354,   153,   154,   155,   156,   157,
     158,   159,   160,     0,   161,    81,   258,     0,     0,     0,
      99,     0,     0,     0,   101,     0,     0,     0,   102,     0,
       0,   103,   104,     0,     0,   105,   106,   150,   151,   152,
       0,   153,   154,   155,   156,   157,   158,   159,   160,     0,
     161,    81,   322,     0,     0,     0,    99,     0,     0,     0,
     101,     0,     0,     0,   102,     0,     0,   103,   104,     0,
       0,   105,   106,     1,    91,    92,    93,    94,    95,    96,
       0,    97,    98,     1,    91,    92,    93,    94,    95,    96,
       0,    97,    98,     0,     0,     0,     0,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       1,    91,    92,    93,    94,    95,    96,     0,    97,    98,
       0,     0,     0,   150,   151,   152,     0,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   161,    81,     0,     0,
       0,     0,    99,     0,     0,     0,   101,     0,     0,     0,
     102,     0,    99,   103,   104,   100,   101,   105,   106,     0,
     102,   134,     0,   103,   104,     0,    99,   105,   106,     0,
     101,     0,     0,   254,   102,     0,     0,   103,   104,    99,
       0,   105,   106,   101,     0,     0,     0,   102,     0,     0,
     103,   104,     0,     0,   105,   106,     1,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     0,     0,     0,     1,
      91,    92,    93,    94,    95,    96,     0,    97,    98,     1,
      91,    92,    93,    94,    95,    96,     0,    97,    98,     0,
       0,     0,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     1,    91,    92,    93,    94,    95,    96,     0,
      97,    98,     0,     0,     0,     1,    91,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   301,     0,     0,   101,
       0,     0,   318,   102,     0,     0,   103,   104,    99,     0,
     105,   106,   101,     0,     0,     0,   102,     0,    99,   103,
     104,   328,   101,   105,   106,   348,   102,     0,     0,   103,
     104,    99,     0,   105,   106,   101,     0,     0,     0,   102,
       0,    99,   103,   104,   356,   101,   105,   106,     0,   102,
       0,     0,   103,   104,    99,   364,   105,   106,   101,     0,
       0,     0,   102,     0,     0,   103,   104,     0,     0,   105,
     106,     1,    91,    92,    93,    94,    95,    96,     0,    97,
      98,     0,     0,     0,     1,    91,    92,    93,    94,    95,
      96,     0,    97,    98,     0,     0,     0,     1,    91,    92,
      93,    94,    95,    96,     0,    97,    98,     0,     0,     0,
       1,    91,    92,    93,    94,    95,    96,     0,    97,    98,
       1,    91,    92,    93,    94,    95,    96,     0,    97,    98,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
      99,     0,     0,     0,   101,     0,     0,     0,   102,     0,
       0,   103,   104,    99,   375,   105,   106,   101,     0,     0,
       0,   102,     0,     0,   103,   104,    99,   377,   105,   106,
     101,     0,     0,     0,   102,     0,     0,   103,   104,    99,
     387,   105,   106,   101,     0,     0,     0,   102,     0,   185,
     103,   104,     0,   101,   105,   106,    45,   102,     0,     1,
     103,   104,     0,     0,   105,   106,     1,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     1,    91,    92,    93,
      94,    95,    96,     0,    97,    98,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     2,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,     0,    23,     0,     1,   187,     0,     0,     0,   101,
       0,     0,     0,   102,   143,    99,   103,   104,     0,   101,
     105,   106,     0,   102,     1,     0,   103,   104,     0,     0,
     105,   106,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,   266,   325,   267,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     2,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,   276,
     325,   267,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   333,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    88,    37,    99,    22,    60,    23,   134,    57,    54,
      28,   121,    77,     3,    75,    76,     3,    67,    20,     0,
      72,    21,    22,     3,    24,    74,   129,    44,    28,     3,
      75,    76,    77,    33,    58,    80,    56,    37,    99,    39,
       3,     3,   145,    24,    10,    11,    12,   150,    29,    30,
      31,     3,    70,    73,    99,    67,    60,     3,     3,    59,
      84,    79,   179,    83,   160,    65,    15,    16,    86,     3,
      70,    69,   269,   190,   129,    77,    72,    58,    74,    79,
     277,    81,   134,    73,   149,    72,    86,    74,    73,   185,
     145,   187,    96,    97,    98,   150,    68,    69,    72,   195,
     210,   211,   212,    84,   149,    67,    72,    67,    74,    72,
      69,    74,    50,    76,   163,    67,    75,   121,    45,    46,
     140,    66,   218,    89,   185,   129,    72,    72,   128,    66,
      76,    76,    81,    82,    69,    76,    71,    71,    72,   242,
     185,   145,    76,    81,    85,    86,   150,    17,    18,    76,
     246,   247,   248,    67,   250,   155,    72,   157,    74,    67,
      76,   179,   179,   163,   267,   217,    69,    67,   168,   279,
      73,    66,    67,   190,    69,    70,    70,    69,    69,   179,
     307,    73,    73,   183,   236,    69,    75,   242,    66,    73,
     194,    69,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   261,
      19,   155,   267,    69,   214,    66,    69,    73,    69,   219,
      73,    69,   318,   241,   168,    73,    69,    69,    69,   332,
      73,    73,    73,    69,   269,    79,    66,    73,   242,    69,
      72,   241,    74,    23,   331,   245,    80,    66,   266,   266,
      69,   347,   348,    66,   350,   307,    69,   257,    66,   276,
      78,    69,   262,   267,    44,    72,   266,    74,    70,   269,
     366,   367,    13,    14,    54,   279,    71,   332,   202,   203,
     204,   205,   337,   379,    83,    84,   338,    68,    69,    68,
      69,   200,   201,   206,   207,    75,    76,    77,   208,   209,
      80,   245,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   312,   257,    71,    73,    72,    72,   262,    99,
      72,    72,    66,    66,    71,    73,    71,    69,   332,    58,
      66,    66,    72,   337,     3,     4,     5,     6,     7,     8,
       9,    73,    11,    12,   344,   345,   346,    73,    73,    73,
      56,    70,    75,    75,    24,   177,    70,    65,   241,    80,
     128,   273,   185,   163,   364,   194,   197,    48,   312,   149,
     196,   371,   199,   198,   374,   375,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,   386,   387,    -1,    -1,
      -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,    67,    68,
     344,   345,   346,    72,    -1,   185,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,    88,
     364,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
     374,   375,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,   386,   387,    -1,    -1,    -1,    -1,   392,     3,
       4,     5,     6,     7,     8,     9,    31,    11,    12,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    -1,    -1,    87,    88,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,    -1,    -1,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    53,    54,    55,    73,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      -1,    83,    84,    -1,    -1,    87,    88,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    72,    83,    84,    75,    76,    87,    88,    -1,
      80,    67,    -1,    83,    84,    -1,    72,    87,    88,    -1,
      76,    -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,
      -1,    87,    88,    76,    -1,    -1,    -1,    80,    -1,    -1,
      83,    84,    -1,    -1,    87,    88,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    72,    73,    -1,    -1,    76,
      -1,    -1,    66,    80,    -1,    -1,    83,    84,    72,    -1,
      87,    88,    76,    -1,    -1,    -1,    80,    -1,    72,    83,
      84,    75,    76,    87,    88,    66,    80,    -1,    -1,    83,
      84,    72,    -1,    87,    88,    76,    -1,    -1,    -1,    80,
      -1,    72,    83,    84,    75,    76,    87,    88,    -1,    80,
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
      49,    50,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    76,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    31,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    72,    76,    91,    92,    93,   102,   107,   108,
     109,   110,   111,   112,   120,   123,   124,   126,   168,    67,
     168,   123,   110,   126,   127,     0,    92,    66,   114,   115,
     123,   107,   107,   107,    67,   168,    94,   103,   105,    72,
      74,   124,   121,   122,   168,    67,    73,   110,   126,   169,
      69,   169,    70,    98,   103,   109,   110,   113,   116,   117,
      67,    67,   140,    96,   105,   102,   107,    73,   125,   131,
     168,     4,     5,     6,     7,     8,     9,    11,    12,    72,
      75,    76,    80,    83,    84,    87,    88,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   166,   167,   168,    68,    69,    70,
     121,   115,   123,    66,    67,   132,   146,   148,   161,   140,
     100,   117,   117,    68,   116,    71,   118,   119,   123,   113,
      53,    54,    55,    57,    58,    59,    60,    61,    62,    63,
      64,    66,    68,   103,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   168,    95,   140,   102,   106,   107,
     128,   129,   130,    69,    73,    72,   161,    72,   161,   161,
     117,   134,   145,    75,    20,    77,    19,    78,    79,    80,
      17,    18,    15,    16,    81,    82,    13,    14,    83,    84,
      76,    85,    86,   160,    10,    11,    12,    72,    74,    89,
     122,   149,    68,   132,   133,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    70,   147,    99,   140,   149,
      66,    69,    71,    68,   149,    71,    72,    72,    72,   137,
      72,   168,    66,    66,    66,   145,    68,   141,    68,   137,
      66,    69,    71,    97,   106,   104,    72,    74,   123,   126,
     135,   136,    73,    69,   168,   134,    72,   126,   135,    73,
      73,   151,   145,   152,   153,   154,   155,   156,   156,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   160,
     168,    73,   146,   165,   145,   168,    68,    69,   146,   101,
     119,   149,    71,   137,   145,   145,   145,    58,    66,   145,
      66,    66,    68,   146,   137,    73,   128,   135,    75,   149,
     136,    72,    74,    51,   130,    73,   160,    71,    69,    73,
      75,    68,   132,   137,    73,    73,    73,    72,    66,   145,
      66,    73,    73,    75,    73,   128,    75,   149,   148,   146,
     137,   137,   137,   145,    73,   145,    66,    66,   145,    73,
      75,    56,    73,   137,    73,    73,   145,    73,   145,    66,
     137,    66,   137,   137,    73,   137,    73,    73,   145,   137,
     137,   137,    73,   137
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
#line 118 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "translation_unit <- external_declaration\n";}}
    break;

  case 3:
#line 121 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "translation_unit <- translation_unit external_declaration\n";}}
    break;

  case 4:
#line 127 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "external_declaration <- function_definition\n";}}
    break;

  case 5:
#line 130 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "external_declaration <- declaration\n";}}
    break;

  case 6:
#line 135 "new_c_grammar.y"
    {st.push();}
    break;

  case 7:
#line 135 "new_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 8:
#line 136 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "function_definition <- declarator compound_statement\n";}}
    break;

  case 9:
#line 138 "new_c_grammar.y"
    {st.push();}
    break;

  case 10:
#line 138 "new_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 11:
#line 139 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declarator declaration_list compound_statement\n";}}
    break;

  case 12:
#line 141 "new_c_grammar.y"
    {st.push();}
    break;

  case 13:
#line 141 "new_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 14:
#line 142 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator compound_statement\n";}}
    break;

  case 15:
#line 144 "new_c_grammar.y"
    {st.push();}
    break;

  case 16:
#line 144 "new_c_grammar.y"
    {st.pop();st.pop();}
    break;

  case 17:
#line 145 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "function_definition <- declaration_specifiers declarator declaration_list compound_statement\n";}}
    break;

  case 18:
#line 152 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers ';'\n";}}
    break;

  case 19:
#line 155 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration <- declaration_specifiers init_declarator_list ';'\n";}}
    break;

  case 20:
#line 160 "new_c_grammar.y"
    {/*$$ = $1;*/}
    break;

  case 21:
#line 161 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration\n";}}
    break;

  case 22:
#line 164 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_list <- declaration_list declaration\n";}}
    break;

  case 23:
#line 169 "new_c_grammar.y"
    {declMode = true;}
    break;

  case 24:
#line 173 "new_c_grammar.y"
    {declMode = false;}
    break;

  case 25:
#line 178 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier\n";}
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

  case 26:
#line 202 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- storage_class_specifier declaration_specifiers\n";}
    
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
 }
    break;

  case 27:
#line 233 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier\n";}
  
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

  case 28:
#line 290 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_specifier declaration_specifiers\n";}
  
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

  case 29:
#line 353 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier\n";}
  
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

  case 30:
#line 366 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "declaration_specifiers <- type_qualifier declaration_specifiers\n";}

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

  case 31:
#line 388 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- AUTO\n";}
    (yyval.sval) = "AUTO";}
    break;

  case 32:
#line 392 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- REGISTER\n";}
    (yyval.sval) = "REGISTER";}
    break;

  case 33:
#line 396 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- STATIC\n";}
    (yyval.sval) = "STATIC";}
    break;

  case 34:
#line 400 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- EXTERN\n";}
    (yyval.sval) = "EXTERN";}
    break;

  case 35:
#line 404 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "storage_class_specifier <- TYPEDEF\n";}
    (yyval.sval) = "TYPEDEF";}
    break;

  case 36:
#line 411 "new_c_grammar.y"
    {(yyval.sval) = "VOID";if(parseDebug)
    {parseDebugOut << "type_specifier <- VOID\n";}
    (yyval.sval) = "VOID";}
    break;

  case 37:
#line 415 "new_c_grammar.y"
    {if(parseDebug)
    {parseDebugOut << "type_specifier <- CHAR\n";}
    (yyval.sval) = "CHAR	";}
    break;

  case 38:
#line 419 "new_c_grammar.y"
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

  case 39:
#line 456 "new_c_grammar.y"
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

  case 40:
#line 587 "new_c_grammar.y"
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

  case 41:
#line 656 "new_c_grammar.y"
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

  case 42:
#line 674 "new_c_grammar.y"
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

  case 43:
#line 712 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- SIGNED\n";}
 	(yyval.sval) = "SIGNED";}
    break;

  case 44:
#line 716 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- UNSIGNED\n";}
 	(yyval.sval) = "UNSIGNED";
 	prevFlag = 12;}
    break;

  case 45:
#line 721 "new_c_grammar.y"
    {if(parseDebug)
  	{parseDebugOut << "type_specifier <- struct_or_union_specifier\n";}
  	(yyval.sval) = "!!STRUCT/UNION";}
    break;

  case 46:
#line 725 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_specifier <- enum_specifier\n";}
 	(yyval.sval) = "!!ENUM";}
    break;

  case 47:
#line 729 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_specifier <- TYPEDEF_NAME\n";}
	(yyval.sval) = "TYPEDEF_NAME";}
    break;

  case 48:
#line 735 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_qualifier <- CONST\n";}
	(yyval.sval) = "CONST";}
    break;

  case 49:
#line 739 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_qualifier <- VOLATILE\n";}
 	(yyval.sval) = "VOLATILE";}
    break;

  case 50:
#line 746 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier '{' struct_declaration_list '}'\n";}}
    break;

  case 51:
#line 749 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union '{' struct_declaration_list '}'\n";}}
    break;

  case 52:
#line 752 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union_specifier <- struct_or_union identifier\n";}}
    break;

  case 53:
#line 758 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_or_union <- STRUCT\n";}
	(yyval.sval) = "STRUCT";}
    break;

  case 54:
#line 762 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_or_union <- UNION\n";}
 	(yyval.sval) = "SIGNED";}
    break;

  case 55:
#line 769 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declaration_list <- struct_declaration\n";}}
    break;

  case 56:
#line 772 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "struct_declaration_list <- struct_declaration_list struct_declaration\n";}}
    break;

  case 57:
#line 778 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "init_declarator_list <- init_declarator\n";}
	(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 58:
#line 782 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "init_declarator_list <- init_declarator_list ',' init_declarator\n";}
 	(yyval.sval) = (yyvsp[(3) - (3)].sval);}
    break;

  case 59:
#line 789 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "init_declarator <- declarator\n";}
	(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 60:
#line 793 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "init_declarator <- declarator '=' initializer\n";}
 	(yyval.sval) = (yyvsp[(1) - (3)].sval);}
    break;

  case 61:
#line 799 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declaration <- specifier_qualifier_list struct_declarator_list ';'\n";}}
    break;

  case 62:
#line 805 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "specifier_qualifier_list <- type_specifier\n";}}
    break;

  case 63:
#line 808 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "specifier_qualifier_list <- type_specifier specifier_qualifier_list\n";}}
    break;

  case 64:
#line 811 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier\n";}}
    break;

  case 65:
#line 814 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "specifier_qualifier_list <- type_qualifier specifier_qualifier_list\n";}}
    break;

  case 66:
#line 820 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "struct_declarator_list <- struct_declarator\n";}}
    break;

  case 67:
#line 823 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator_list <- struct_declarator_list ',' struct_declarator\n";}}
    break;

  case 68:
#line 829 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator\n";}}
    break;

  case 69:
#line 832 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- ':' constant_expression\n";}}
    break;

  case 70:
#line 835 "new_c_grammar.y"
    {if(parseDebug)
	 {parseDebugOut << "struct_declarator <- declarator ':' constant_expression\n";}}
    break;

  case 71:
#line 841 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enum_specifier <- ENUM '{' enumerator_list '}'\n";}}
    break;

  case 72:
#line 844 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier '{' enumerator_list '}'\n";}}
    break;

  case 73:
#line 847 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enum_specifier <- ENUM identifier\n";}}
    break;

  case 74:
#line 853 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enumerator_list <- enumerator\n";}}
    break;

  case 75:
#line 856 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enumerator_list <- enumerator_list ',' enumerator\n";}}
    break;

  case 76:
#line 862 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "enumerator <- identifier\n";}}
    break;

  case 77:
#line 865 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "enumerator <- identifier '=' constant_expression\n";}}
    break;

  case 78:
#line 872 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "declarator <- direct_declarator\n";}
	(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 79:
#line 876 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "declarator <- pointer direct_declarator\n";}
 	(yyval.sval) = (yyvsp[(2) - (2)].sval);}
    break;

  case 80:
#line 884 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "direct_declarator <- identifier\n";}
	(yyval.sval) = (yyvsp[(1) - (1)].sval);}
    break;

  case 81:
#line 888 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- '(' declarator ')'\n";}
 	(yyval.sval) = (yyvsp[(2) - (3)].sval);}
    break;

  case 82:
#line 892 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' ']'\n";}
 	(yyval.sval) = (yyvsp[(1) - (3)].sval);}
    break;

  case 83:
#line 896 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '[' constant_expression ']'\n";}
 	(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 84:
#line 900 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' ')'\n";}
 	(yyval.sval) = (yyvsp[(1) - (3)].sval);
 	st.push();}
    break;

  case 85:
#line 904 "new_c_grammar.y"
    {st.push();}
    break;

  case 86:
#line 905 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' parameter_type_list ')'\n";}
 	(yyval.sval) = (yyvsp[(1) - (5)].sval);}
    break;

  case 87:
#line 909 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_declarator <- direct_declarator '(' identifier_list ')'\n";}
 	(yyval.sval) = (yyvsp[(1) - (4)].sval);}
    break;

  case 88:
#line 916 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "pointer <- '*'\n";}}
    break;

  case 89:
#line 919 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list\n";}}
    break;

  case 90:
#line 922 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' pointer\n";}}
    break;

  case 91:
#line 925 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "pointer <- '*' type_qualifier_list pointer\n";}}
    break;

  case 92:
#line 931 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_qualifier_list <- type_qualifier\n";}}
    break;

  case 93:
#line 934 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_qualifier_list <- type_qualifier_list type_qualifier\n";}}
    break;

  case 94:
#line 940 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_type_list <- parameter_list\n";}}
    break;

  case 95:
#line 943 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_type_list <- parameter_list ',' ELIPSIS\n";}}
    break;

  case 96:
#line 949 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_list <- parameter_declaration\n";}}
    break;

  case 97:
#line 952 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_list <- parameter_list ',' parameter_declaration\n";}}
    break;

  case 98:
#line 958 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "parameter_declaration <- declaration_specifiers declarator\n";}}
    break;

  case 99:
#line 961 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "parameter_declaration <- declaration_specifiers\n";}}
    break;

  case 100:
#line 964 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "parameter_declaration <- declaration_specifiers abstract_declarator\n";}}
    break;

  case 101:
#line 970 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "identifier_list <- identifier\n";}}
    break;

  case 102:
#line 973 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "identifier_list <- identifier_list ',' identifier\n";}}
    break;

  case 103:
#line 979 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "initializer <- assignment_expression\n";}}
    break;

  case 104:
#line 982 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "initializer <- '{' initializer_list '}'\n";}}
    break;

  case 105:
#line 985 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "initializer <- '{' initializer_list ',' '}'\n";}}
    break;

  case 106:
#line 991 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "initializer_list <- initializer\n";}}
    break;

  case 107:
#line 994 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "initializer_list <- initializer_list ',' initializer\n";}}
    break;

  case 108:
#line 1000 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "type_name <- specifier_qualifier_list\n";}}
    break;

  case 109:
#line 1003 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "type_name <- specifier_qualifier_list abstract_declarator\n";}}
    break;

  case 110:
#line 1009 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "abstract_declarator <- pointer\n";}}
    break;

  case 111:
#line 1012 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- direct_abstract_declarator\n";}}
    break;

  case 112:
#line 1015 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "abstract_declarator <- pointer direct_abstract_declarator\n";}}
    break;

  case 113:
#line 1021 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "direct_abstract_declarator <- '(' abstract_declarator ')'\n";}}
    break;

  case 114:
#line 1024 "new_c_grammar.y"
    {if(parseDebug)
 {parseDebugOut << "direct_abstract_declarator <- '[' ']'\n";}}
    break;

  case 115:
#line 1027 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '[' constant_expression ']'\n";}}
    break;

  case 116:
#line 1030 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' ']'\n";}}
    break;

  case 117:
#line 1033 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '[' constant_expression ']'\n";}}
    break;

  case 118:
#line 1036 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' ')'\n";}}
    break;

  case 119:
#line 1039 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- '(' parameter_type_list ')'\n";}}
    break;

  case 120:
#line 1042 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' ')'\n";}}
    break;

  case 121:
#line 1045 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "direct_abstract_declarator <- direct_abstract_declarator '(' parameter_type_list ')'\n";}}
    break;

  case 122:
#line 1051 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "statement <- labeled_statement\n";}}
    break;

  case 123:
#line 1054 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- compound_statement\n";}}
    break;

  case 124:
#line 1057 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- expression_statement\n";}}
    break;

  case 125:
#line 1060 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- selection_statement\n";}}
    break;

  case 126:
#line 1063 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- iteration_statement\n";}}
    break;

  case 127:
#line 1066 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement <- jump_statement\n";}}
    break;

  case 128:
#line 1072 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "labeled_statement <- identifier ':' statement\n";}}
    break;

  case 129:
#line 1075 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- CASE constant_expression ':' statement\n";}}
    break;

  case 130:
#line 1078 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "labeled_statement <- DEFAULT ':' statement\n";}}
    break;

  case 131:
#line 1084 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "expression_statement <- ';'\n";}}
    break;

  case 132:
#line 1087 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "expression_statement <- expression ';'\n";}}
    break;

  case 133:
#line 1093 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "compound_statement <- '{' '}'\n";}}
    break;

  case 134:
#line 1096 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' statement_list '}'\n";}}
    break;

  case 135:
#line 1099 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list '}'\n";}}
    break;

  case 136:
#line 1102 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "compound_statement <- '{' declaration_list statement_list '}'\n";}}
    break;

  case 137:
#line 1108 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "statement_list <- statement\n";}}
    break;

  case 138:
#line 1111 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "statement_list <- statement_list statement\n";}}
    break;

  case 139:
#line 1117 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement\n";}}
    break;

  case 140:
#line 1120 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "selection_statement <- IF '(' expression ')' statement ELSE statement\n";}}
    break;

  case 141:
#line 1123 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "selection_statement <- SWITCH '(' expression ')' statement\n";}}
    break;

  case 142:
#line 1129 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "iteration_statement <- WHILE '(' expression ')' statement\n";}}
    break;

  case 143:
#line 1132 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- DO statement WHILE '(' expression ')' ';'\n";}}
    break;

  case 144:
#line 1135 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' ')' statement\n";}}
    break;

  case 145:
#line 1138 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' ';' expression ')' statement\n";}}
    break;

  case 146:
#line 1141 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' ')' statement\n";}}
    break;

  case 147:
#line 1144 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' ';' expression ';' expression ')' statement\n";}}
    break;

  case 148:
#line 1147 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' ')' statement\n";}}
    break;

  case 149:
#line 1150 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' ';' expression ')' statement\n";}}
    break;

  case 150:
#line 1153 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' ')' statement\n";}}
    break;

  case 151:
#line 1156 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "iteration_statement <- FOR '(' expression ';' expression ';' expression ')' statement\n";}}
    break;

  case 152:
#line 1162 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "jump_statement <- GOTO identifier ';'\n";}}
    break;

  case 153:
#line 1165 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- CONTINUE ';'\n";}}
    break;

  case 154:
#line 1168 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- BREAK ';'\n";}}
    break;

  case 155:
#line 1171 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN ';'\n";}}
    break;

  case 156:
#line 1174 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "jump_statement <- RETURN expression ';'\n";}}
    break;

  case 157:
#line 1180 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "expression <- assignment_expression\n";}}
    break;

  case 158:
#line 1183 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "expression <- expression ',' assignment_expression\n";}}
    break;

  case 159:
#line 1189 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_expression <- conditional_expression\n";}}
    break;

  case 160:
#line 1192 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_expression <- unary_expression assignment_operator assignment_expression\n";}}
    break;

  case 161:
#line 1198 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_operator <- '='\n";}}
    break;

  case 162:
#line 1201 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MUL_ASSIGN\n";}}
    break;

  case 163:
#line 1204 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- DIV_ASSIGN\n";}}
    break;

  case 164:
#line 1207 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- MOD_ASSIGN\n";}}
    break;

  case 165:
#line 1210 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "assignment_operator <- ADD_ASSIGN\n";}}
    break;

  case 166:
#line 1213 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- SUB_ASSIGN\n";}}
    break;

  case 167:
#line 1216 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- LEFT_ASSIGN\n";}}
    break;

  case 168:
#line 1219 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- RIGHT_ASSIGN\n";}}
    break;

  case 169:
#line 1222 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- AND_ASSIGN\n";}}
    break;

  case 170:
#line 1225 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- XOR_ASSIGN\n";}}
    break;

  case 171:
#line 1228 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "assignment_operator <- OR_ASSIGN\n";}}
    break;

  case 172:
#line 1234 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "conditional_expression <- logical_or_expression\n";}}
    break;

  case 173:
#line 1237 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "conditional_expression <- logical_or_expression '?' expression ':' conditional_expression\n";}}
    break;

  case 174:
#line 1243 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "constant_expression <- conditional_expression\n";}}
    break;

  case 175:
#line 1249 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "logical_or_expression <- logical_and_expression\n";}}
    break;

  case 176:
#line 1252 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "logical_or_expression <- logical_or_expression OR_OP logical_and_expression\n";}}
    break;

  case 177:
#line 1258 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "logical_and_expression <- inclusive_or_expression\n";}}
    break;

  case 178:
#line 1261 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "logical_and_expression <- logical_and_expression AND_OP inclusive_or_expression\n";}}
    break;

  case 179:
#line 1267 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "inclusive_or_expression <- exclusive_or_expression\n";}}
    break;

  case 180:
#line 1270 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "inclusive_or_expression <- inclusive_or_expression '|' exclusive_or_expression\n";}}
    break;

  case 181:
#line 1276 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "exclusive_or_expression <- and_expression\n";}}
    break;

  case 182:
#line 1279 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "exclusive_or_expression <- exclusive_or_expression '^' and_expression\n";}}
    break;

  case 183:
#line 1285 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "and_expression <- equality_expression\n";}}
    break;

  case 184:
#line 1288 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "and_expression <- and_expression '&' equality_expression\n";}}
    break;

  case 185:
#line 1294 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "equality_expression <- relational_expression\n";}}
    break;

  case 186:
#line 1297 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression EQ_OP relational_expression\n";}}
    break;

  case 187:
#line 1300 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "equality_expression <- equality_expression NE_OP relational_expression\n";}}
    break;

  case 188:
#line 1306 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "relational_expression <- shift_expression\n";}}
    break;

  case 189:
#line 1309 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '<' shift_expression\n";}}
    break;

  case 190:
#line 1312 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression '>' shift_expression\n";}}
    break;

  case 191:
#line 1315 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression LE_OP shift_expression\n";}}
    break;

  case 192:
#line 1318 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "relational_expression <- relational_expression GE_OP shift_expression\n";}}
    break;

  case 193:
#line 1324 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "shift_expression <- additive_expression\n";}}
    break;

  case 194:
#line 1327 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "shift_expression <- shift_expression LEFT_OP additive_expression\n";}}
    break;

  case 195:
#line 1330 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "shift_expression <- shift_expression RIGHT_OP additive_expression\n";}}
    break;

  case 196:
#line 1336 "new_c_grammar.y"
    {if(parseDebug)
{parseDebugOut << "additive_expression <- multiplicative_expression\n";}}
    break;

  case 197:
#line 1339 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '+' multiplicative_expression\n";}}
    break;

  case 198:
#line 1342 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "additive_expression <- additive_expression '-' multiplicative_expression\n";}}
    break;

  case 199:
#line 1348 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "multiplicative_expression <- cast_expression\n";}}
    break;

  case 200:
#line 1351 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '*' cast_expression\n";}}
    break;

  case 201:
#line 1354 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '/' cast_expression\n";}}
    break;

  case 202:
#line 1357 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "multiplicative_expression <- multiplicative_expression '%' cast_expression\n";}}
    break;

  case 203:
#line 1363 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "cast_expression <- unary_expression\n";}}
    break;

  case 204:
#line 1366 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "cast_expression <- '(' type_name ')' cast_expression\n";}}
    break;

  case 205:
#line 1372 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "unary_expression <- postfix_expression\n";}}
    break;

  case 206:
#line 1375 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- INC_OP unary_expression\n";}}
    break;

  case 207:
#line 1378 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- DEC_OP unary_expression\n";}}
    break;

  case 208:
#line 1381 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- unary_operator cast_expression\n";}}
    break;

  case 209:
#line 1384 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF unary_expression\n";}}
    break;

  case 210:
#line 1387 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_expression <- SIZEOF '(' type_name ')'\n";}}
    break;

  case 211:
#line 1393 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "unary_operator <- '&'\n";}}
    break;

  case 212:
#line 1396 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '*'\n";}}
    break;

  case 213:
#line 1399 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '+'\n";}}
    break;

  case 214:
#line 1402 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '-'\n";}}
    break;

  case 215:
#line 1405 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '~'\n";}}
    break;

  case 216:
#line 1408 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "unary_operator <- '!'\n";}}
    break;

  case 217:
#line 1414 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "postfix_expression <- primary_expression\n";}}
    break;

  case 218:
#line 1417 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '[' expression ']'\n";}}
    break;

  case 219:
#line 1420 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' ')'\n";}}
    break;

  case 220:
#line 1423 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '(' argument_expression_list ')'\n";}}
    break;

  case 221:
#line 1426 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression '.' identifier\n";}}
    break;

  case 222:
#line 1429 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression PTR_OP identifier\n";}}
    break;

  case 223:
#line 1432 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression INC_OP\n";}}
    break;

  case 224:
#line 1435 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "postfix_expression <- postfix_expression DEC_OP\n";}}
    break;

  case 225:
#line 1441 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "primary_expression <- identifier\n";}}
    break;

  case 226:
#line 1444 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- constant\n";}}
    break;

  case 227:
#line 1447 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- string\n";}}
    break;

  case 228:
#line 1450 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "primary_expression <- '(' expression ')'\n";}}
    break;

  case 229:
#line 1456 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "argument_expression_list <- assignment_expression\n";}}
    break;

  case 230:
#line 1459 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "argument_expression_list <- argument_expression_list ',' assignment_expression\n";}}
    break;

  case 231:
#line 1465 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "constant <- INTEGER_CONSTANT\n";}}
    break;

  case 232:
#line 1468 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- CHARACTER_CONSTANT\n";}}
    break;

  case 233:
#line 1471 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- FLOATING_CONSTANT\n";}}
    break;

  case 234:
#line 1474 "new_c_grammar.y"
    {if(parseDebug)
 	{parseDebugOut << "constant <- ENUMERATION_CONSTANT\n";}}
    break;

  case 235:
#line 1480 "new_c_grammar.y"
    {if(parseDebug)
	{parseDebugOut << "string <- STRING_LITERAL\n";}}
    break;

  case 236:
#line 1486 "new_c_grammar.y"
    {(yyval.sval) = (yyvsp[(1) - (1)].sval);
	   if(parseDebug)
	     {parseDebugOut << "identifier  <- IDENTIFIER\n";}
	   if(undeclVar || redeclVar) 
	    	{return 1;}
	 }
    break;

  case 237:
#line 1495 "new_c_grammar.y"
    { prevFlag = 0;
	   }
    break;


/* Line 1267 of yacc.c.  */
#line 4033 "y.tab.c"
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


#line 1497 "new_c_grammar.y"


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

