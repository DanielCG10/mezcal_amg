/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "compiler/grammar.y" /* yacc.c:339  */

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);	
	void yyerror(char const *);

#line 80 "grammar.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y" /* yacc.c:355  */

	#include <string>

#line 114 "grammar.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    COLON = 259,
    RIGHT_ARROW = 260,
    LEFT_CURLY_BRACE = 261,
    RIGHT_CURLY_BRACE = 262,
    SEMICOLON = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    SINGLECOMMENT = 266,
    MULTILINECOMMENT = 267,
    QUOTES = 268,
    CHARACTERS_BLOCK = 269,
    INT = 270,
    INTEGER_VALUE = 271,
    DECIMAL_VALUE = 272,
    LOAD = 273,
    SHOW = 274,
    DOLLAR_SIGN = 275,
    INCREMENTO = 276,
    DECREMENTO = 277,
    DEC = 278,
    BLN = 279,
    SET = 280,
    TRU = 281,
    FLS = 282,
    ITOB = 283,
    LEFT_BRACKET = 284,
    RIGHT_BRACKET = 285,
    EQ = 286,
    LE = 287,
    LT = 288,
    GT = 289,
    GE = 290,
    NE = 291,
    IF = 292,
    ELSE = 293,
    COMMA = 294,
    PLUS = 295,
    SLASH = 296,
    MINUS = 297,
    DIVISION = 298,
    STR = 299,
    DOBLE_COLON = 300,
    WHILE = 301,
    ANSWER = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  std::string  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "grammar.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    31,    33,    37,    46,    50,    54,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    80,
      82,    84,    86,    91,    93,    96,    99,   102,   105,   110,
     112,   114,   116,   119,   124,   126,   128,   130,   132,   134,
     138,   140,   142,   144,   146,   148,   150,   152,   154,   157,
     159,   161,   164,   167,   169,   171,   173,   175,   177,   179,
     182,   185,   187,   189,   191,   195,   199,   203,   207,   209,
     213,   217,   219,   221,   223,   225,   227,   229,   231,   233,
     235,   239,   241,   245,   249,   253,   255,   257,   259,   261,
     263,   265,   269,   273,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "COLON", "RIGHT_ARROW",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SINGLECOMMENT", "MULTILINECOMMENT", "QUOTES",
  "CHARACTERS_BLOCK", "INT", "INTEGER_VALUE", "DECIMAL_VALUE", "LOAD",
  "SHOW", "DOLLAR_SIGN", "INCREMENTO", "DECREMENTO", "DEC", "BLN", "SET",
  "TRU", "FLS", "ITOB", "LEFT_BRACKET", "RIGHT_BRACKET", "EQ", "LE", "LT",
  "GT", "GE", "NE", "IF", "ELSE", "COMMA", "PLUS", "SLASH", "MINUS",
  "DIVISION", "STR", "DOBLE_COLON", "WHILE", "ANSWER", "$accept", "input",
  "function_list", "function", "statements", "statement", "bifurcation",
  "loop", "logical_eval", "comp_operator", "assignment", "integer_value",
  "integer_value2", "decimal_value", "unitaryOperations", "std_input",
  "definition", "identifiers", "ids", "std_output", "expression",
  "characters_block", "name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -80

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-80)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,   -80,    17,    37,   -41,   -80,   -80,    37,    -4,   -80,
      20,    25,    31,    51,    44,    73,    76,   -80,    10,   -80,
     -80,    80,    81,   -80,   -80,    57,    58,    35,   113,    78,
     110,   -80,   -80,   -80,   114,   121,   122,   123,    14,   124,
     127,    43,    37,    -9,    37,    37,   -80,   -80,   -80,    37,
      91,   111,   132,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
      96,   134,   134,    37,   162,   -80,   -80,    72,   138,   133,
     135,   -80,   -80,    37,   137,   115,   -80,   -80,    37,    37,
     185,   -23,   -80,   -80,   -80,   -80,   -80,   -80,   134,     4,
     240,    37,   134,   -80,   -80,   119,   -80,   -80,    37,   -80,
     -80,   -80,   -80,   -80,   -80,   108,    37,   130,    42,   -80,
     -80,   -80,    37,    37,   125,   144,    37,   143,   145,    45,
     276,   129,   161,   -80,    37,   128,   -80,   136,    37,   -80,
     134,    27,   134,    37,   147,   155,   157,    55,   -80,    37,
      37,    37,   -80,   -80,   -80,   186,   -80,   150,   174,   134,
     193,   169,    74,   134,   134,   170,   163,    77,   187,     5,
      37,   -80,   166,   171,   181,   -80,   300,   -80,   324,   192,
      37,   183,    -7,   -80,    37,   195,   -80,   -80,   -80,    84,
     -80,    37,   206,    37,    89,   134,   -80,   203,   223,   111,
     -80,   348,   -80,    37,   111,   -80,   -80,   -80,   -80,   209,
     -80,    37,   210,   211,   -80,   214,    37,   -80,   -80,    37,
     -80,   230,   -80,   111,    98,   -80,   224,   -80,   -80,   -80,
     226,   -80,    37,   134,    37,   212,   -80,   237,   231,   225,
     227,    37,    37,   245,    37,    37,   263,   241,    37,   266,
     277,   260,   -80,   253,   265,   269,    37,   -80,    37,    37,
     -30,   246,     1,   134,   134,   134,   134,   134,   262,   271,
     272,   274,   278,   244,   247,   250,   264,   267,   303,   309,
     310,   311,   319,   -80,   -80,   -80,   -80,   -80,   372,   396,
     420,   444,   468,   -80,   -80,   -80,   -80,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    94,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     8,     0,    17,
      16,     0,     0,    82,    82,     0,     0,     0,     0,     0,
       0,     7,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,    68,    69,    82,    82,    65,     0,
       0,     0,     0,     8,    82,     5,    11,    12,    13,    14,
       0,     0,     0,     0,     0,    15,    18,     0,     0,     0,
       0,    70,    93,     0,     0,    85,    81,    83,    80,    75,
       0,     0,    34,    35,    36,    37,    38,    39,     0,     0,
       0,    79,     0,    45,    64,     0,    76,    67,     0,    77,
      63,    62,    42,    43,    44,     0,     0,     0,     0,    40,
      41,    92,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    20,     0,     0,    46,
       0,    47,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,    30,     8,    19,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    87,     0,    31,     0,     8,     0,     0,
       0,     0,     0,    71,     0,     0,    50,    61,    72,     0,
      66,     0,     0,     0,     0,     0,    90,     0,     0,     0,
      21,     0,    23,     0,     0,    49,    78,    74,    73,     0,
      57,     0,     0,     0,    53,     0,     0,    52,    51,     0,
      88,     0,    22,     0,     0,    58,     0,    56,    55,    48,
      60,    91,     0,     0,     0,     0,    54,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     8,     8,     8,     8,     0,     0,
       0,     0,     0,    24,    25,    28,    26,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   299,   328,   -47,   213,   -80,   -80,   -80,   -79,
     -80,    19,   -80,   270,   -80,   -80,   -80,    22,   117,   -80,
     -80,   -62,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,    18,    31,    32,    33,    50,    88,
      34,    51,   182,   103,    35,    36,    37,    44,    38,    39,
      40,    75,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,   119,   104,     4,     8,    72,    90,     4,   196,   184,
     253,    73,   254,     1,   120,   121,   197,     5,    60,    74,
      48,    19,    20,   122,   124,    10,   185,    52,    21,    22,
      12,    23,    24,    25,    26,    61,    62,   198,     1,    27,
       1,   256,    71,   257,    77,    77,    45,    67,    28,    80,
      11,    48,    68,    63,    29,    49,   152,    30,    48,    64,
      13,    48,   133,    77,    69,   141,    14,   153,    78,    79,
     154,    48,    70,   115,    15,   160,    91,    16,    77,    77,
      93,    94,    17,   102,    42,    43,   109,   105,    48,    97,
      48,    77,   106,   180,   174,   107,   166,   181,    77,   168,
      48,   108,    46,    47,   201,    48,   131,   123,   125,   206,
     211,   127,   135,   136,    48,   214,   138,    55,   224,    53,
     191,    81,    56,    54,   147,    92,   210,   134,    77,    57,
      58,    59,    65,   156,   223,    66,    89,   130,   142,   163,
     164,   165,    82,    83,    84,    85,    86,    87,   111,   151,
      48,   155,   -86,   112,   117,   113,   161,   116,   128,   132,
      77,    76,    76,   139,   137,   140,   145,   146,   171,   148,
     194,   175,   176,   177,    77,   149,    72,    96,    48,    97,
      95,   203,    98,   205,   158,    99,   157,   159,   100,   101,
     114,   169,   167,   213,   170,    76,    76,   172,   202,   173,
     178,   216,   179,   207,   208,   187,   220,   183,    76,    77,
     188,   189,   193,   195,   118,   129,    82,    83,    84,    85,
      86,    87,   228,   209,   230,   200,   278,   279,   280,   281,
     282,   236,   237,   225,   239,   240,   204,    72,   243,   215,
     217,   218,   229,     1,   219,   150,   250,   126,   251,   252,
     222,    19,    20,   231,   226,   227,   162,   232,    21,    22,
     233,    23,    24,    25,    26,   238,   234,   241,   235,    27,
     244,   242,   258,   259,   260,   261,   262,   186,    28,     1,
     246,   245,   143,   247,    29,   248,   255,    19,    20,   249,
     268,   199,   263,   269,    21,    22,   270,    23,    24,    25,
      26,   264,   265,     1,   266,    27,     9,   190,   267,   273,
     271,    19,    20,   272,    28,   274,   275,   276,    21,    22,
      29,    23,    24,    25,    26,   277,   221,     1,     3,    27,
       0,   192,     0,   144,     0,    19,    20,   110,    28,     0,
       0,     0,    21,    22,    29,    23,    24,    25,    26,     0,
       0,     1,     0,    27,     0,   212,     0,     0,     0,    19,
      20,     0,    28,     0,     0,     0,    21,    22,    29,    23,
      24,    25,    26,     0,     0,     1,     0,    27,     0,   283,
       0,     0,     0,    19,    20,     0,    28,     0,     0,     0,
      21,    22,    29,    23,    24,    25,    26,     0,     0,     1,
       0,    27,     0,   284,     0,     0,     0,    19,    20,     0,
      28,     0,     0,     0,    21,    22,    29,    23,    24,    25,
      26,     0,     0,     1,     0,    27,     0,   285,     0,     0,
       0,    19,    20,     0,    28,     0,     0,     0,    21,    22,
      29,    23,    24,    25,    26,     0,     0,     1,     0,    27,
       0,   286,     0,     0,     0,    19,    20,     0,    28,     0,
       0,     0,    21,    22,    29,    23,    24,    25,    26,     0,
       0,     1,     0,    27,     0,   287,     0,     0,     0,    19,
      20,     0,    28,     0,     0,     0,    21,    22,    29,    23,
      24,    25,    26,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       0,    80,    64,     3,    45,    14,    53,     7,    15,     4,
      40,    20,    42,     3,    37,    38,    23,     0,     4,    28,
      16,    11,    12,    46,    20,    29,    21,    27,    18,    19,
       5,    21,    22,    23,    24,    21,    22,    44,     3,    29,
       3,    40,    42,    42,    44,    45,    24,     4,    38,    49,
      30,    16,     9,    39,    44,    20,    29,    47,    16,    45,
      29,    16,    20,    63,    21,    20,    15,    40,    46,    47,
      43,    16,    29,    73,    30,    20,    54,     4,    78,    79,
      61,    62,     6,    64,     4,     4,    67,    15,    16,    17,
      16,    91,    20,    16,    20,    23,   143,    20,    98,   146,
      16,    29,    45,    45,    20,    16,   106,    88,    89,    20,
     189,    92,   112,   113,    16,   194,   116,     7,    20,     6,
     167,    30,     8,    45,   124,    29,   188,   108,   128,     8,
       8,     8,     8,   133,   213,     8,     4,    29,   119,   139,
     140,   141,    31,    32,    33,    34,    35,    36,    10,   130,
      16,   132,     8,    20,    39,    20,   137,    20,    39,    29,
     160,    44,    45,    20,    39,    20,    37,     6,   149,    41,
     170,   152,   153,   154,   174,    39,    14,    15,    16,    17,
      63,   181,    20,   183,    29,    23,    39,    30,    26,    27,
      73,    41,     6,   193,    20,    78,    79,     4,   179,    30,
      30,   201,    39,   184,   185,    39,   206,    20,    91,   209,
      39,    30,    20,    30,    29,    98,    31,    32,    33,    34,
      35,    36,   222,    20,   224,    30,   273,   274,   275,   276,
     277,   231,   232,   214,   234,   235,    30,    14,   238,    30,
      30,    30,   223,     3,    30,   128,   246,     7,   248,   249,
      20,    11,    12,    41,    30,    29,   139,    20,    18,    19,
      29,    21,    22,    23,    24,    20,    41,     4,    41,    29,
       4,    30,   253,   254,   255,   256,   257,   160,    38,     3,
      20,     4,     6,    30,    44,    20,    40,    11,    12,    20,
      46,   174,    30,    46,    18,    19,    46,    21,    22,    23,
      24,    30,    30,     3,    30,    29,     7,     7,    30,     6,
      46,    11,    12,    46,    38,     6,     6,     6,    18,    19,
      44,    21,    22,    23,    24,     6,   209,     3,     0,    29,
      -1,     7,    -1,   120,    -1,    11,    12,    67,    38,    -1,
      -1,    -1,    18,    19,    44,    21,    22,    23,    24,    -1,
      -1,     3,    -1,    29,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,    38,    -1,    -1,    -1,    18,    19,    44,    21,
      22,    23,    24,    -1,    -1,     3,    -1,    29,    -1,     7,
      -1,    -1,    -1,    11,    12,    -1,    38,    -1,    -1,    -1,
      18,    19,    44,    21,    22,    23,    24,    -1,    -1,     3,
      -1,    29,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,
      38,    -1,    -1,    -1,    18,    19,    44,    21,    22,    23,
      24,    -1,    -1,     3,    -1,    29,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    38,    -1,    -1,    -1,    18,    19,
      44,    21,    22,    23,    24,    -1,    -1,     3,    -1,    29,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    38,    -1,
      -1,    -1,    18,    19,    44,    21,    22,    23,    24,    -1,
      -1,     3,    -1,    29,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,    38,    -1,    -1,    -1,    18,    19,    44,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    51,    70,     0,    50,    51,    45,    50,
      29,    30,     5,    29,    15,    30,     4,     6,    52,    11,
      12,    18,    19,    21,    22,    23,    24,    29,    38,    44,
      47,    53,    54,    55,    58,    62,    63,    64,    66,    67,
      68,    70,     4,     4,    65,    65,    45,    45,    16,    20,
      56,    59,    70,     6,    45,     7,     8,     8,     8,     8,
       4,    21,    22,    39,    45,     8,     8,     4,     9,    21,
      29,    70,    14,    20,    28,    69,    66,    70,    65,    65,
      70,    30,    31,    32,    33,    34,    35,    36,    57,     4,
      52,    65,    29,    59,    59,    66,    15,    17,    20,    23,
      26,    27,    59,    61,    69,    15,    20,    23,    29,    59,
      61,    10,    20,    20,    66,    70,    20,    39,    29,    57,
      37,    38,    46,    59,    20,    59,     7,    59,    39,    66,
      29,    70,    29,    20,    59,    70,    70,    39,    70,    20,
      20,    20,    59,     6,    53,    37,     6,    70,    41,    39,
      66,    59,    29,    40,    43,    59,    70,    39,    29,    30,
      20,    59,    66,    70,    70,    70,    52,     6,    52,    41,
      20,    59,     4,    30,    20,    59,    59,    59,    30,    39,
      16,    20,    60,    20,     4,    21,    66,    39,    39,    30,
       7,    52,     7,    20,    70,    30,    15,    23,    44,    66,
      30,    20,    59,    70,    30,    70,    20,    59,    59,    20,
      69,    57,     7,    70,    57,    30,    70,    30,    30,    30,
      70,    66,    20,    57,    20,    59,    30,    29,    70,    59,
      70,    41,    20,    29,    41,    41,    70,    70,    20,    70,
      70,     4,    30,    70,     4,     4,    20,    30,    20,    20,
      70,    70,    70,    40,    42,    40,    40,    42,    59,    59,
      59,    59,    59,    30,    30,    30,    30,    30,    46,    46,
      46,    46,    46,     6,     6,     6,     6,     6,    52,    52,
      52,    52,    52,     7,     7,     7,     7,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    60,    61,    62,    62,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    69,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,    13,     0,     2,     0,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     5,
       4,     7,     8,     7,    21,    21,    22,    22,    22,     3,
       4,     5,     9,    13,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     8,     7,
       6,     7,     7,     7,     9,     8,     8,     7,     8,    12,
       8,     6,     3,     3,     3,     1,     1,     1,     2,     2,
       3,     6,     6,     7,     7,     3,     3,     3,     7,     3,
       3,     2,     0,     1,     5,     3,     4,     6,     8,     6,
       7,     9,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 27 "compiler/grammar.y" /* yacc.c:1646  */
    { result = std::string("#include <cstdio>\n #include <iostream>\n using namespace std;\n") + (yyvsp[-1]) + (yyvsp[0]); }
#line 1487 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]) + (yyvsp[0]); }
#line 1493 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1499 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "compiler/grammar.y" /* yacc.c:1646  */
    { 
		if((yyvsp[-12]) == "main"){
			(yyval) = "int main(int argc, char *argv[]){\n" + (yyvsp[-2]) + "\n}\n";
		}else{
			(yyval) = std::string("\n void ") + "_" + (yyvsp[-12]) + "()" + "{\n" + (yyvsp[-2]) + "\n}\n";
		} 
	}
#line 1511 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1517 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "compiler/grammar.y" /* yacc.c:1646  */
    { 
				(yyval) = (yyvsp[-1]) + (yyvsp[0]);
				}
#line 1525 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1531 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1537 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1543 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1549 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1555 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1561 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1567 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1573 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1579 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1585 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1591 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "if(" + (yyvsp[-3]) + "){\n" + (yyvsp[0]) + "}\n"; }
#line 1597 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "else{\n" + (yyvsp[-1]) + "}\n";}
#line 1603 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "if(" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1609 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "else if(" + (yyvsp[-6]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1615 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "while(" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) 		+"}\n"; }
#line 1621 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 94 "compiler/grammar.y" /* yacc.c:1646  */
    {(yyval) = "for(int " + (yyvsp[-19]) + "=" + (yyvsp[-17]) +  ";" + (yyvsp[-14]) + (yyvsp[-13]) + (yyvsp[-12]) +";" + (yyvsp[-10]) + "=" + (yyvsp[-7]) + "+" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1627 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "compiler/grammar.y" /* yacc.c:1646  */
    {(yyval) = "for(int " + (yyvsp[-19]) + "=" + (yyvsp[-17]) +  ";" + (yyvsp[-14]) + (yyvsp[-13]) + (yyvsp[-12]) +";" + (yyvsp[-10]) + "=" + (yyvsp[-7]) + "-" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1633 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 100 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "for(int " + (yyvsp[-20]) + "=" + (yyvsp[-18]) +  ";" + (yyvsp[-15]) + (yyvsp[-14]) + (yyvsp[-12]) + ";" + (yyvsp[-10]) + "=" + (yyvsp[-7]) + "+" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1639 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "for(int " + (yyvsp[-20]) + "=" + (yyvsp[-18]) +  ";" + (yyvsp[-15]) + (yyvsp[-14]) + (yyvsp[-12]) + ";" + (yyvsp[-10]) + "=" + (yyvsp[-7]) + "-" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1645 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "for(int " + (yyvsp[-20]) + "=" + (yyvsp[-17]) +  ";" + (yyvsp[-14]) + (yyvsp[-13]) + (yyvsp[-12]) + ";" + (yyvsp[-10]) + "=" + (yyvsp[-7]) + "+" + (yyvsp[-5]) + "){\n" + (yyvsp[-1]) + "}\n"; }
#line 1651 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 110 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]); }
#line 1657 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]); }
#line 1663 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[0]); }
#line 1669 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 117 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "[" + (yyvsp[-4]) + "]" + (yyvsp[-2]) + (yyvsp[0]); }
#line 1675 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 120 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-11]) + "[" + (yyvsp[-8]) + "]" + (yyvsp[-6]) + (yyvsp[-4]) + "[" + (yyvsp[-1]) + "]"; }
#line 1681 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "=="; }
#line 1687 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "<="; }
#line 1693 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 128 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "<"; }
#line 1699 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ">"; }
#line 1705 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ">="; }
#line 1711 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "!="; }
#line 1717 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 138 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=" + (yyvsp[0]) + ";\n";}
#line 1723 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 140 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=" + (yyvsp[0]) + ";\n";}
#line 1729 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=" + (yyvsp[0]) + ";\n";}
#line 1735 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=" + (yyvsp[0]) + ";\n";}
#line 1741 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "compiler/grammar.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]) + "=" + (yyvsp[0]) + ";\n";}
#line 1747 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "+=" + (yyvsp[0]) + ";\n";}
#line 1753 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]) + "=" + (yyvsp[0]) + ";\n";}
#line 1759 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]) + "=" + (yyvsp[0]) + ";\n";}
#line 1765 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "+=" + (yyvsp[-4]) + "[" + (yyvsp[-1]) + "]" + ";\n"; }
#line 1771 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 157 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-6]) + "[" + (yyvsp[-3]) + "]=" + (yyvsp[-1]) + ";\n";}
#line 1777 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 159 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-5]) + "=" + (yyvsp[-2]) + "+" + (yyvsp[0]) + ";\n";}
#line 1783 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 162 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-6]) + "[" + (yyvsp[-3]) + "]" + "+=" + (yyvsp[0]) + ";\n"; }
#line 1789 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 165 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-6]) + "[" + (yyvsp[-3]) + "]" + "=" + (yyvsp[0]) + ";\n"; }
#line 1795 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 167 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-6]) + "[" + (yyvsp[-3]) + "]" + "=" + (yyvsp[-1]) + ";\n"; }
#line 1801 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 169 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-8]) + "[" + (yyvsp[-4]) + "]" + "=" + (yyvsp[-1]) + ";\n"; }
#line 1807 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 171 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "[" + (yyvsp[-4]) + "]" + "=" + (yyvsp[-1]) + ";\n"; }
#line 1813 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 173 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "[" + (yyvsp[-3]) + "]" + "=" + (yyvsp[-1]) + ";\n"; }
#line 1819 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-6]) + "=" + (yyvsp[-3]) + "[" + (yyvsp[-1]) + "]" + ";\n"; }
#line 1825 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 177 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "=" + (yyvsp[-4]) + "[" + (yyvsp[-1]) + "]" + ";\n"; }
#line 1831 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-11]) + "[" + (yyvsp[-8]) + "]" + "=" + (yyvsp[-4]) + "[" + (yyvsp[-1]) + "]" + ";\n"; }
#line 1837 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-7]) + "[" + (yyvsp[-4]) + "]" + "=" + (yyvsp[0]) + ";\n"; }
#line 1843 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 185 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-5]) + "=" + (yyvsp[-2]) + "/" + (yyvsp[0]) + ";\n"; }
#line 1849 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=false; \n"; }
#line 1855 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 189 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "=true; \n"; }
#line 1861 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 191 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + "-=" + (yyvsp[0]) + ";\n";}
#line 1867 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 195 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = std::string(yytext); }
#line 1873 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 199 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = std::string(yytext); }
#line 1879 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 203 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = std::string(yytext); }
#line 1885 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 207 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) + "++;\n";}
#line 1891 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 209 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) + "--;\n";}
#line 1897 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 213 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t cin >> " + (yyvsp[0]) + ";\n"; }
#line 1903 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 217 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "int " + (yyvsp[-5]) + "[" + (yyvsp[-1]) + "];\n";	}
#line 1909 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "float " + (yyvsp[-5]) + "[" + (yyvsp[-1]) + "];\n";	}
#line 1915 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 221 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t string " + (yyvsp[-6]) + "," + (yyvsp[-4]) + "," + (yyvsp[-2]) + ";\n"; }
#line 1921 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 223 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t float " + (yyvsp[-6]) + "," + (yyvsp[-4]) + "," + (yyvsp[-2]) + ";\n"; }
#line 1927 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 225 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t bool " + (yyvsp[-1]) + ";\n"; }
#line 1933 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t int " + (yyvsp[-2]) + ";\n"; }
#line 1939 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 229 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t float " + (yyvsp[-2]) + ";\n"; }
#line 1945 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t int " + (yyvsp[-6]) + "," + (yyvsp[-4]) + "," + (yyvsp[-2]) + ";\n"; }
#line 1951 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 233 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t string " + (yyvsp[-1]) + ";\n";}
#line 1957 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 235 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t float " + (yyvsp[-1]) + ";\n";}
#line 1963 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 239 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]) + (yyvsp[0]); }
#line 1969 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 241 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = ""; }
#line 1975 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 245 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1981 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 249 "compiler/grammar.y" /* yacc.c:1646  */
    { 
					(yyval) = "cout << ((" + (yyvsp[0]) + "==1) ? \"true\" : \"false\") << endl;"; 
					}
#line 1989 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 253 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "\t cout << " + (yyvsp[0]) + " << endl;\n"; }
#line 1995 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 255 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[0]) + " << endl;"; }
#line 2001 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 257 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[-3]) + " << " + (yyvsp[0]) + " << endl;"; }
#line 2007 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 259 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[-5]) + " << " + (yyvsp[-2]) + " << " + (yyvsp[0]) + " << endl;"; }
#line 2013 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 261 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[-2]) + "[" + (yyvsp[0]) + "]  << endl;\n"; }
#line 2019 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 263 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[-3]) + "["+ (yyvsp[0]) + "]" + "<< endl;\n"; }
#line 2025 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 265 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = "cout << " + (yyvsp[-6]) + "<<" + (yyvsp[-3]) + "["+ (yyvsp[0]) + "]" + "<< endl;\n"; }
#line 2031 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 269 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = std::string("\t _") + (yyvsp[-2]) + "();\n"; }
#line 2037 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 273 "compiler/grammar.y" /* yacc.c:1646  */
    { (yyval) = std::string(yytext); }
#line 2043 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 277 "compiler/grammar.y" /* yacc.c:1646  */
    {  
		(yyval) = std::string(yytext);
		}
#line 2051 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2055 "grammar.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 282 "compiler/grammar.y" /* yacc.c:1906  */


void yyerror (char const *x){
	printf ("Error %s \n", x);
	exit(1);
}
