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
#line 1 "part3.ypp" /* yacc.c:339  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <iostream>
  #include <sstream>
  #include <fstream>
	#include "Register.hpp"
  #include "buffer.hpp"
	#include "SymbolTable.hpp"
	#include "StructTable.hpp"
  #include "attributes.hpp"
  #include "Function.hpp"
  
  extern char* yytext;
  extern int yylineno;

  extern 	FILE *yyin;
  extern 	int yylex();
  extern void yylex_destroy();
  extern int yyparse (void);
  //void yylex_destroy();
  //int yylex (void);
  void yyerror (const char*);
  void semanticError(string s);
  void Debug(string s);
  void assignStructs(int leftOffset, const list<Entry>& leftStruct , int rightOffset);
  
  SymbolTable symbol_table;
  StructTable struct_table;
  FunctionTable function_table;
  string curr_function;
  bool isMain;
  Buffer g_buff;

#line 101 "part3.tab.cpp" /* yacc.c:339  */

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
   by #include "part3.tab.hpp".  */
#ifndef YY_YY_PART3_TAB_HPP_INCLUDED
# define YY_YY_PART3_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    ID = 259,
    STRING = 260,
    REAL_TOK = 261,
    INT_TOK = 262,
    WRITE_TOK = 263,
    READ_TOK = 264,
    WHILE_TOK = 265,
    DO_TOK = 266,
    IF_TOK = 267,
    THEN_TOK = 268,
    ELSE_TOK = 269,
    MAIN_TOK = 270,
    VAR_TOK = 271,
    CALL_TOK = 272,
    RETURN_TOK = 273,
    DEFSTRUCT_TOK = 274,
    EXTERN_TOK = 275,
    COM = 276,
    SC = 277,
    COL = 278,
    ASSIGN_OP = 279,
    OR_OP = 280,
    AND_OP = 281,
    REL_OP = 282,
    ADD_OP = 283,
    MUL_OP = 284,
    NOT_OP = 285,
    LP = 286,
    RP = 287,
    LC = 288,
    RC = 289,
    LS = 290,
    RS = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PART3_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "part3.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,   148,   175,   179,   179,   217,   247,   252,
     256,   263,   272,   280,   280,   290,   294,   313,   328,   333,
     337,   342,   357,   373,   391,   396,   402,   407,   413,   415,
     420,   423,   425,   428,   431,   443,   456,   473,   493,   542,
     561,   582,   597,   603,   612,   619,   627,   633,   691,   699,
     722,   745,   750,   765,   797,   828,   840,   847,   893,   932,
    1005,  1009,  1013,  1022,  1033,  1038,  1045
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "STRING", "REAL_TOK",
  "INT_TOK", "WRITE_TOK", "READ_TOK", "WHILE_TOK", "DO_TOK", "IF_TOK",
  "THEN_TOK", "ELSE_TOK", "MAIN_TOK", "VAR_TOK", "CALL_TOK", "RETURN_TOK",
  "DEFSTRUCT_TOK", "EXTERN_TOK", "COM", "SC", "COL", "ASSIGN_OP", "OR_OP",
  "AND_OP", "REL_OP", "ADD_OP", "MUL_OP", "NOT_OP", "LP", "RP", "LC", "RC",
  "LS", "RS", "$accept", "PROGRAM", "TDEFS", "FDEFS", "$@1",
  "FUNC_ARGLIST_FULL", "FUNC_ARGLIST", "MAIN_FUNCTION", "$@2", "BLK",
  "DECLARATIONS", "DECLARLIST", "DCL", "TYPE", "LIST", "STMT",
  "STMT_RETURN", "WRITE", "READ", "ASSN", "LVAL", "CNTRL", "BEXP", "EXP",
  "STREF", "CALL", "CALL_ARGS_FULL", "CALL_ARGS", "M", "N", "M1", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -71

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-71)))

#define YYTABLE_NINF -67

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -71,     5,   -11,   -71,   -71,    -6,    17,   -17,   -71,   -71,
      72,    21,     6,    35,    37,    15,   -71,   -71,   116,     8,
      33,    29,    35,    49,    35,   101,   102,    98,   -71,    35,
     110,   109,   -71,   -71,   -71,    89,   -71,   -71,   -71,   121,
     -71,   113,   -71,    35,    35,   -71,   -71,   122,    49,   -71,
      35,   -71,   -71,   -71,    18,   111,   117,   118,   -71,    70,
     119,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   123,   -71,
     120,   147,    80,   148,    70,   -71,   111,   149,    70,    50,
      73,    66,   120,   -71,    85,    85,   150,   124,   125,    65,
      99,   126,    -8,   128,   -71,   129,    78,    97,   -71,   -71,
     -71,    85,    85,    85,   104,    90,   127,   -71,   134,   106,
     140,   142,   -71,    85,    85,   -71,   -71,   105,    70,    70,
     112,   136,   -71,   144,   -71,   -71,   -71,   -71,   -71,   105,
     112,   135,   151,   -71,   154,   143,   -71,   -71,   -71,   -71,
      85,   -71,   112,   -71,   105,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    65,     1,     8,     0,    64,     0,    25,    24,
       0,     0,    15,     0,     0,     0,    13,     2,     0,     0,
       0,     0,    10,    18,     0,     0,     0,     0,    20,    10,
       0,     9,    12,    66,    14,     0,    23,    22,    21,     0,
      19,     0,     5,     0,     0,    27,     3,     0,    18,    11,
      17,    64,     7,     6,    18,    39,     0,     0,    64,     0,
       0,    16,    33,    26,    32,    31,    30,    28,     0,    29,
      40,     0,     0,     0,     0,    55,    53,     0,     0,     0,
       0,     0,    54,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,    64,    64,
      64,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       0,     0,    64,    61,     0,    48,    51,    18,     0,     0,
      47,    49,    50,     0,    38,    58,    36,    35,    37,    18,
      62,     0,    60,    52,    42,    44,    45,    34,    43,    59,
       0,    65,    63,    64,    18,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,   -71,   -71,   141,   -71,   -71,   -71,   -19,
     -71,   130,    16,    52,   -71,   -54,   -71,   -71,   -71,   -71,
     100,   -71,   -68,   -70,   -53,   -71,   -71,   -71,   -51,    30,
     145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,    48,    30,    31,    17,    23,    62,
      35,    19,    20,    95,    51,    63,    64,    65,    66,    67,
      68,    69,    80,    81,    82,    83,   131,   132,    12,     4,
       5
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    70,    90,   112,    34,     3,    92,    74,   -66,    97,
      94,    96,    18,     7,   104,   105,    13,    99,   100,   109,
      70,    16,    55,     8,     9,    15,    56,    57,    58,    53,
      59,   120,   121,   122,    33,    27,    60,    10,    32,    18,
      36,    21,    26,   130,   133,    32,    22,   117,   118,   119,
     135,   136,    61,    75,    76,    28,     8,     9,    11,    49,
      29,   129,    14,   134,    70,    33,    27,    77,    75,    76,
     142,     8,     9,    75,    76,   138,    70,    38,     8,     9,
      78,    79,    77,    75,    76,    88,    98,    77,    75,    76,
     145,    70,   144,   101,   102,   103,    89,    77,    99,   100,
      78,    79,    77,    99,   100,    37,    39,     8,     9,    55,
     115,    89,   124,    56,    57,    58,    89,    59,   102,   103,
      40,    33,    45,    60,   101,   102,   103,   102,   103,   116,
      43,   110,   102,   103,   102,   103,   123,    24,   116,    25,
     102,   103,    42,    46,    52,    47,    71,    85,    72,    73,
      84,    87,    55,    93,   106,    86,   126,   108,   111,   113,
     107,   114,   127,   125,   128,   103,   137,   139,   141,   100,
      41,   143,   140,    91,    50,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
      51,    54,    72,    11,    23,     0,    74,    58,    19,    79,
      78,    79,     4,    19,    84,    85,    33,    25,    26,    89,
      73,    15,     4,     6,     7,     4,     8,     9,    10,    48,
      12,   101,   102,   103,    16,    19,    18,    20,    22,     4,
      24,     4,    34,   113,   114,    29,    31,    98,    99,   100,
     118,   119,    34,     3,     4,    22,     6,     7,     6,    43,
      31,   112,    10,   117,   117,    16,    50,    17,     3,     4,
     140,     6,     7,     3,     4,   129,   129,    25,     6,     7,
      30,    31,    17,     3,     4,     5,    13,    17,     3,     4,
     144,   144,   143,    27,    28,    29,    31,    17,    25,    26,
      30,    31,    17,    25,    26,     4,     4,     6,     7,     4,
      32,    31,    22,     8,     9,    10,    31,    12,    28,    29,
      22,    16,    33,    18,    27,    28,    29,    28,    29,    32,
      21,    32,    28,    29,    28,    29,    32,    21,    32,    23,
      28,    29,    32,    22,    22,    32,    35,    24,    31,    31,
      31,     4,     4,     4,     4,    35,    22,    32,    32,    31,
      36,    32,    22,    36,    22,    29,    22,    32,    14,    26,
      29,   141,    21,    73,    44,    -1,    -1,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,    66,    67,    40,    19,     6,     7,
      20,    50,    65,    33,    50,     4,    15,    44,     4,    48,
      49,     4,    31,    45,    21,    23,    34,    49,    22,    31,
      42,    43,    49,    16,    46,    47,    49,     4,    50,     4,
      22,    42,    32,    21,    67,    33,    22,    32,    41,    49,
      48,    51,    22,    46,    65,     4,     8,     9,    10,    12,
      18,    34,    46,    52,    53,    54,    55,    56,    57,    58,
      61,    35,    31,    31,    65,     3,     4,    17,    30,    31,
      59,    60,    61,    62,    31,    24,    35,     4,     5,    31,
      60,    57,    59,     4,    59,    50,    59,    60,    13,    25,
      26,    27,    28,    29,    60,    60,     4,    36,    32,    60,
      32,    32,    11,    31,    32,    32,    32,    65,    65,    65,
      60,    60,    60,    32,    22,    36,    22,    22,    22,    65,
      60,    63,    64,    60,    52,    59,    59,    22,    52,    32,
      21,    14,    60,    66,    65,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    41,    40,    40,    40,    42,
      42,    43,    43,    45,    44,    44,    46,    47,    47,    48,
      48,    49,    49,    49,    50,    50,    51,    51,    52,    52,
      52,    52,    52,    52,    53,    54,    54,    55,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    66,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     8,     0,     0,     8,     8,     0,     1,
       0,     3,     1,     0,     3,     0,     5,     3,     0,     3,
       2,     3,     3,     3,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     4,     1,
       1,     9,     5,     6,     4,     4,     2,     3,     3,     3,
       3,     3,     4,     1,     1,     1,     1,     4,     4,     5,
       1,     0,     1,     3,     0,     0,     0
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
#line 65 "part3.ypp" /* yacc.c:1646  */
    {
      //Debug
  Debug("PROGRAM: TDEFS FDEFS MAIN_FUNCTION" );
    //making the halt line and adding the header to the buffer 
	vector<string> implemented;
	vector<string> unimplemented;
	vector<string> header;
	
	
	
	if(isMain){
		//the current file that is parsed has the main 
		header.push_back("<main>");
		g_buff.backpatch((yyvsp[-3]).next_list,(yyvsp[-1]).address);
		g_buff.emit("HALT");
	}
	else{
		// empty
		header.push_back("<empty>");
		g_buff.backpatch((yyvsp[-3]).next_list,0);
	}
	//add the <header> as the last line
		header.push_back("<header>");
	
	unimplemented.push_back("<unimplemented>");
	implemented.push_back("<implemented>");
	bool firstFlag = true;
	for(map<string,Function>::iterator it = function_table.table.begin(); it != function_table.table.end(); ++it){
		if(it->second.implemented){
			
				implemented.push_back(" ");
				implemented.push_back(it->first);
					
				if(it->second.startLine > 0){
					implemented.push_back(",");
           implemented.push_back(to_string(it->second.startLine));	
         }
         else
					 semanticError("Not implemented");
		}
    
		else{
			//<unimplemented>
			if(!firstFlag){
			     unimplemented.push_back(",");
		   }
			firstFlag = false;
		  unimplemented.push_back(" ");
			unimplemented.push_back(it->first);
			vector<int>::iterator itVec = it->second.calledFrom.begin();
			while( itVec != it->second.calledFrom.end() ){
					  unimplemented.push_back(",");
						unimplemented.push_back(to_string(*itVec));
						++itVec;
			}
		}		
	}
	
	
	string unimplementedString;
	for(auto s : unimplemented){
			unimplementedString += s;
	}
	vector<string>:: iterator its = header.begin();
	header.insert(its,unimplementedString);
	
	string implementedString;
	for(auto s : implemented){
		implementedString += s;
	}
	vector<string>:: iterator itss = header.begin();
	header.insert(itss,implementedString);
	
	vector<string>:: iterator itsss = header.begin();
	header.insert(itsss,"</header>");
	
	for(auto line : header){
	  g_buff.insertHeader(line);
	} 
  
}
#line 1449 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 148 "part3.ypp" /* yacc.c:1646  */
    {
	// All fields of the struct are in the top of symbol table
	// Define a new struct type
	
    //Debug
  Debug("TDEFS: M1 TDEFS DEFSTRUCT_TOK LC DECLARLIST RC ID SC" );
	if(struct_table.getOffset((yyvsp[-1]).content) > 0){
		symbol_table.pop();
		semanticError("struct with such name already exists");
	}
	
	struct_table.push((yyvsp[-1]).content); //insert a new struct type
	map<string, SymbolEntry>  table = symbol_table.pop(); //pops all fields of the struct that were declared before
	
	for(map<string, SymbolEntry>::iterator it = table.begin(); it != table.end(); ++it){
		string name = it->first;
		SymbolEntry entry = it->second;
		if(entry.type == STRUCT){
			struct_table.insert((yyvsp[-1]).content, name, entry.size, entry.struct_type);
		}
		else{
			struct_table.insert((yyvsp[-1]).content, entry.type, name, entry.size);
		}
		
	}

 }
#line 1481 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 179 "part3.ypp" /* yacc.c:1646  */
    {
  
  // All fields of the function are in the top of symbol table
	// Define a new function 
  if(function_table.get((yyvsp[-2]).content)!= NULL) semanticError("function with such name already exists");
	
  Function f = Function((yyvsp[-3]).type, (yyvsp[-2]).content, true, g_buff.nextQuad());
  curr_function = (yyvsp[-2]).content;
	
	map<string, SymbolEntry>  table = symbol_table.top();
  
    for(map<string, SymbolEntry>::iterator it = table.begin(); it != table.end(); ++it){
        string name = it->first;
        SymbolEntry entry = it->second;
        if(entry.type == STRUCT){
          semanticError("wrong type of function parameter");
        }
        else{
          //cout<< entry.type << " " << it->first;
         if(!f.insert(entry.type, it->first)) semanticError("Err");
        }
		
	}
   function_table.push(f);
	
	//reset register bank!
	Register::reset();
  
}
#line 1515 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 207 "part3.ypp" /* yacc.c:1646  */
    {
  //Debug
  Debug("FDEFS: FDEFS TYPE ID LP FUNC_ARGLIST_FULL RP BLK");
  	//not found a return
	//buffer.emit("COPYI I2 I1");
	g_buff.emit("RETRN"); //goto IO
	//reset register bank!
	//Register::reset();
}
#line 1529 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 217 "part3.ypp" /* yacc.c:1646  */
    {

Debug("FDEFS EXTERN_TOK TYPE ID LP FUNC_ARGLIST_FULL RP SC" );
	    // All fields of the function are in the top of symbol table
	// Define a new function 
  if(function_table.get((yyvsp[-4]).content)!= NULL) semanticError("function with such name already exists");
	
  Function f = Function((yyvsp[-5]).type, (yyvsp[-4]).content, false, -1);
 
	
	map<string, SymbolEntry>  table = symbol_table.top();
  
    for(map<string, SymbolEntry>::iterator it = table.begin(); it != table.end(); ++it){
        string name = it->first;
        SymbolEntry entry = it->second;
        if(entry.type == STRUCT){
          semanticError("wrong type of function parameter");
        }
        else{
         if(!f.insert(entry.type, it->first)) semanticError("Err");
        }
		
	}
    curr_function = (yyvsp[-4]).content;
   function_table.push(f);
	
	//forget temporrary registers! reset register bank!
	//bank = RegistersBank();

}
#line 1564 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 252 "part3.ypp" /* yacc.c:1646  */
    {
  Debug("FUNC_ARGLIST_FULL: FUNC_ARGLIST" );
              
}
#line 1573 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 263 "part3.ypp" /* yacc.c:1646  */
    {
               Debug("FUNC_ARGLIST COM DCL" );


	if((yyvsp[0]).type == STRUCT){
      semanticError("undefined parameter type");
	}
	
 }
#line 1587 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 272 "part3.ypp" /* yacc.c:1646  */
    {
   
    if((yyvsp[0]).type == STRUCT){
      semanticError("undefined parameter type");
	  }
  }
#line 1598 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 280 "part3.ypp" /* yacc.c:1646  */
    {
  curr_function = "main";
  g_buff.emit("COPYI I0 0");
  g_buff.emit("COPYI I1 0");
  g_buff.emit("COPYI I2 0");
  
}
#line 1610 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 286 "part3.ypp" /* yacc.c:1646  */
    {
     Debug("MAIN_TOK BLK" );
     isMain = true;
}
#line 1619 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 290 "part3.ypp" /* yacc.c:1646  */
    {isMain = false;}
#line 1625 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 294 "part3.ypp" /* yacc.c:1646  */
    {
     // end of scope
   Debug("BLK: DECLARATIONS LC LIST RC" );
   g_buff.backpatch((yyvsp[-2]).next_list , (yyvsp[-1]).address);
    map<string, SymbolEntry> table = symbol_table.pop();
    int sum = 0;
    for(map<string, SymbolEntry>::iterator it = table.begin(); it != table.end(); ++it){
        string name = it->first;
        SymbolEntry entry = it->second;
        sum += entry.size;
	}
  	ostringstream os;
		os << "SUBTI " << "I2 " << "I2 "<< sum; //move frame
		g_buff.emit(os.str());
	  Register::reset();
  
 }
#line 1647 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 314 "part3.ypp" /* yacc.c:1646  */
    { 
	/**
	* 	All variables of the current scope are in the symbol table.
	*	I1 must point to the stack frame and I2 will point to the top
	*	of the stack. 
	*/
  //Debug
  Debug("DECLARATIONS: VAR_TOK M1 DECLARLIST ");
	
	ostringstream os;
	os << "ADD2I I2 I1 " << symbol_table.currentOffset();
	g_buff.emit(os.str());		
	
}
#line 1666 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 334 "part3.ypp" /* yacc.c:1646  */
    {  Debug("DECLARLIST: DECLARLIST DCL SC  ");
	
}
#line 1674 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 338 "part3.ypp" /* yacc.c:1646  */
    {  Debug(" DCL SC  ");
}
#line 1681 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 343 "part3.ypp" /* yacc.c:1646  */
    {
 
	(yyval).content = (yyvsp[-2]).content;
	(yyval).type = (yyvsp[0]).type;
	(yyval).offset = 1;
	symbol_table.insert((yyvsp[-2]).content, (yyvsp[0]).type, 1);
        //Debug
      //ostringstream os1;
     // os1 << $$.content << " " << $$.type;
      Debug("DCL: ID COL TYPE ");
     // Debug(os1.str());
  
}
#line 1699 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "part3.ypp" /* yacc.c:1646  */
    { 
 // struct_table.print();//debug
   Debug("ID COL ID ");
	int offset = struct_table.getOffset((yyvsp[0]).content); //check if struct $3 exists
	if (offset == -1){
		semanticError("undefined struct");
	}
	(yyval).content = (yyvsp[-2]).content; //the name of a new var
	(yyval).type = STRUCT;
	(yyval).offset = offset;
  (yyval).struct_type = (yyvsp[0]).content;
	symbol_table.insertStruct((yyvsp[-2]).content, (yyvsp[0]).content, offset);
	
}
#line 1718 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 373 "part3.ypp" /* yacc.c:1646  */
    {
    
	(yyval).content = (yyvsp[-2]).content;
	(yyval).type = (yyvsp[0]).type;
	(yyval).offset = (yyvsp[0]).offset;
  (yyval).struct_type = (yyvsp[0]).struct_type;
  if((yyval).type != STRUCT)
	  symbol_table.insert((yyvsp[-2]).content, (yyvsp[0]).type, 1);
  else
    symbol_table.insertStruct((yyvsp[-2]).content, (yyval).struct_type, (yyval).offset);
  //Debug
  //ostringstream os1;
 // os1 << $$.content << " " << $$.type;
  Debug("ID COM DCL ");
 // Debug(os1.str());
}
#line 1739 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 391 "part3.ypp" /* yacc.c:1646  */
    {
    Debug("TYPE: INT_TOK ");
         (yyval).type = INT;
               }
#line 1748 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 396 "part3.ypp" /* yacc.c:1646  */
    {
       Debug("TYPE: REAL_TOK ");
				 (yyval).type = REAL;
				}
#line 1757 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 402 "part3.ypp" /* yacc.c:1646  */
    {
   Debug("LIST: LIST M STMT ");
           (yyval).next_list = (yyvsp[0]).next_list;
		   g_buff.backpatch((yyvsp[-2]).next_list, (yyvsp[-1]).address);
}
#line 1767 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 413 "part3.ypp" /* yacc.c:1646  */
    { Debug("ASSN ");}
#line 1773 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 415 "part3.ypp" /* yacc.c:1646  */
    {
                                  Debug("CNTRL ");
                              (yyval).next_list = (yyvsp[0]).next_list;
                                }
#line 1782 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 420 "part3.ypp" /* yacc.c:1646  */
    {
                                Debug("READ ");}
#line 1789 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 423 "part3.ypp" /* yacc.c:1646  */
    {Debug("WRITE ");}
#line 1795 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 425 "part3.ypp" /* yacc.c:1646  */
    {Debug("STMT_RETURN");
                                }
#line 1802 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 428 "part3.ypp" /* yacc.c:1646  */
    { Debug("BLK");}
#line 1808 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 431 "part3.ypp" /* yacc.c:1646  */
    {
    Debug("STMT_RETURN:	RETURN_TOK LP EXP RP SC");
      string type;
      if((yyvsp[-2]).type != function_table.get(curr_function)->returnType) semanticError("unknown type return");
      type = ((yyvsp[-2]).type==INT) ? "I" : "R";
      g_buff.emit("STOR" + type + " " + (yyvsp[-2]).place + " I1 -1");
      g_buff.emit("RETRN");
      
  
}
#line 1823 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 443 "part3.ypp" /* yacc.c:1646  */
    {
    Debug("WRITE: WRITE_TOK LP EXP RP SC ");
   if((yyvsp[-2]).type != INT && (yyvsp[-2]).type != REAL) {
      semanticError("unknown type for WRITE");
   }
	if ((yyvsp[-2]).type == INT) {
		g_buff.emit("PRNTI " + (yyvsp[-2]).place);
	}
	else {
		g_buff.emit("PRNTR " + (yyvsp[-2]).place);
	}		
   }
#line 1840 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 456 "part3.ypp" /* yacc.c:1646  */
    {
      Debug(" WRITE_TOK LP STRING RP SC ");
		for(int i = 0; i < (yyvsp[-2]).content.length(); i++){
			char currSymbol = (yyvsp[-2]).content[i];
			if(currSymbol == '\\' && (yyvsp[-2]).content[i+1] == 'n'){ //new line
				currSymbol = '\n'; 
				i++;
			}
			if(currSymbol == '\\' && (yyvsp[-2]).content[i+1] == 't') {//tab
				currSymbol = '\t'; 
				i++;
			}
			g_buff.emit("PRNTC " + to_string((int)currSymbol));
		}
    }
#line 1860 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 473 "part3.ypp" /* yacc.c:1646  */
    {
   Debug(" READ: READ_TOK LP LVAL RP SC ");
   //symbol_table.print(); //debug
    
    if((yyvsp[-2]).type != INT && (yyvsp[-2]).type != REAL) {
      semanticError("unknown type for READ");
    }
  
		string emittedRead = ((yyvsp[-2]).type == INT)?"READI ":"READR ";
		string emittedStore = ((yyvsp[-2]).type == INT)?"STORI ":"STORR ";
		
		// allocate a temporary register and assign to it user input:
		string tempRegister = Register::getNewReg((yyvsp[-2]).type);
		g_buff.emit(emittedRead + tempRegister);
		
		// store the temporary register to memory:
		g_buff.emit(emittedStore + tempRegister + " " + (yyvsp[-2]).place + " 0");     
	}
#line 1883 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 493 "part3.ypp" /* yacc.c:1646  */
    {
 Debug(" ASSN: LVAL ASSIGN_OP EXP SC ");
  //struct_table.print();//debug
  //symbol_table.print(); //debug
  
  /**
  * If LVAL is a name of variable OR a struct field then:
  * $1.place: the adress in the stack for the value of the var
  * $1.offset: offset from I1
  * $1.struct_type: struct type in which $1 is a field
  *
  * If LVAL is a struct we need to assign all its fields
  *
  *
  */
  
  if((yyvsp[-3]).type != (yyvsp[-1]).type){
    semanticError("Different types while assigning");
  }
  
  if((yyvsp[-3]).type == REAL || (yyvsp[-3]).type == INT){
    
      ostringstream os;
      if((yyvsp[-3]).type == INT){
        os << "STORI ";
      }
      else {
        os << "STORR ";
      }
    
     os << (yyvsp[-1]).place << " " << (yyvsp[-3]).place << " 0";
		 g_buff.emit(os.str()); 
 
  }
  
  else{ //Assigning struct:
     if((yyvsp[-3]).struct_type != (yyvsp[-1]).struct_type){
        semanticError("Different struct types while assigning");
     }
    SymbolEntry lEntry = symbol_table.get((yyvsp[-3]).content);
    SymbolEntry rEntry = symbol_table.get((yyvsp[-1]).content);
    assignStructs(lEntry.offset, struct_table.get(lEntry.struct_type), rEntry.offset);
  }
  
  
}
#line 1934 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 542 "part3.ypp" /* yacc.c:1646  */
    {
  Debug(" LVAL: ID ");
	SymbolEntry sEntry = symbol_table.get((yyvsp[0]).content);
	 //check that a variable is declared
	if(sEntry.offset < 0){
		semanticError("A variable is not declared");
	}
	
		(yyval).content = (yyvsp[0]).content;
		(yyval).type = sEntry.type;
		(yyval).offset = sEntry.offset;
		(yyval).place = Register::getNewReg(INT);	
    (yyval).struct_type = sEntry.struct_type;
		
		ostringstream os;
		os << "ADD2I " << (yyval).place << " I1 " << (yyval).offset; //save the adress in the stack
		g_buff.emit(os.str());
}
#line 1957 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 561 "part3.ypp" /* yacc.c:1646  */
    {
       Debug("STREF ");
      //In STREF we will allocate an address that saves its place in the stack
      if((yyvsp[0]).type == STRUCT){
            (yyval) = (yyvsp[0]);
      }
      
      else{
        (yyval).type = (yyvsp[0]).type;
        (yyval).offset = (yyvsp[0]).offset;
        (yyval).content = (yyvsp[0]).content;
        (yyval).struct_type = (yyvsp[0]).struct_type;
        (yyval).place = Register::getNewReg(INT);
        ostringstream os;
        os << "ADD2I " << (yyval).place << " I1 " << (yyval).offset; //save the adress in the stack
        g_buff.emit(os.str());
          
      }
     }
#line 1981 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 582 "part3.ypp" /* yacc.c:1646  */
    {
   Debug("CNTRL: IF_TOK BEXP THEN_TOK M STMT ELSE_TOK N M STMT ");
	g_buff.backpatch((yyvsp[-7]).true_list, (yyvsp[-5]).address);
	g_buff.backpatch((yyvsp[-7]).false_list, (yyvsp[-1]).address);
  list<int> tmp;
	tmp = merge((yyvsp[-4]).next_list, (yyvsp[-2]).next_list);
  	(yyval).next_list = merge(tmp, (yyvsp[0]).next_list);
  
//	for (auto& field : $$.next_list) { //find a field with the name $3
   // cout<<  "fggggggggggggggggggggggggggggggggggggggggggggggggggggggggg"<< endl;
   // cout << field <<  endl;
 // }
			
 // $$.next_list = merge($5.next_list, $9.next_list);
}
#line 2001 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 597 "part3.ypp" /* yacc.c:1646  */
    {
         Debug("IF_TOK BEXP THEN_TOK M STMT ");
			g_buff.backpatch((yyvsp[-3]).true_list, (yyvsp[-1]).address);
			(yyval).next_list = merge((yyvsp[-3]).false_list, (yyvsp[0]).next_list);
}
#line 2011 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 603 "part3.ypp" /* yacc.c:1646  */
    {
        Debug("WHILE_TOK M BEXP DO_TOK M STMT  ");
			g_buff.backpatch((yyvsp[-3]).true_list,(yyvsp[-1]).address);
			g_buff.backpatch((yyvsp[0]).next_list,(yyvsp[-4]).address);
			(yyval).next_list = (yyvsp[-3]).false_list;
			g_buff.emit("UJUMP " + to_string((yyvsp[-4]).address));
}
#line 2023 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 612 "part3.ypp" /* yacc.c:1646  */
    {
          Debug("BEXP: BEXP OR_OP M BEXP  ");

	g_buff.backpatch((yyvsp[-3]).false_list, (yyvsp[-1]).address);
	(yyval).false_list = (yyvsp[0]).false_list;
	(yyval).true_list = merge((yyvsp[-3]).true_list, (yyvsp[0]).true_list);
  }
#line 2035 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 619 "part3.ypp" /* yacc.c:1646  */
    {
              Debug(" BEXP AND_OP M BEXP ");

		g_buff.backpatch((yyvsp[-3]).true_list, (yyvsp[-1]).address);
		(yyval).false_list = merge((yyvsp[-3]).false_list, (yyvsp[0]).false_list);
		(yyval).true_list = (yyvsp[0]).true_list;
}
#line 2047 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 627 "part3.ypp" /* yacc.c:1646  */
    {
                    Debug(" NOT_OP BEXP ");

		(yyval).true_list = (yyvsp[0]).false_list;
		(yyval).false_list = (yyvsp[0]).true_list;
}
#line 2058 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 633 "part3.ypp" /* yacc.c:1646  */
    {
      //Debug
      ostringstream os1;
      os1 << "$1: "<< (yyvsp[-2]).type << " $2: " << (yyvsp[0]).type;
      Debug("EXP REL_OP EXP");
      Debug(os1.str());
     
		if((yyvsp[-2]).type != (yyvsp[0]).type) {
			semanticError("different types in REL_OP");
		}
		else if((yyvsp[-2]).type == REAL || (yyvsp[-2]).type == INT){
			ostringstream compare, branch;
			if((yyvsp[-1]).content == "=="){
				compare << "SEQU";
				branch << "BREQZ ";
			}
			if((yyvsp[-1]).content == "<>"){
				compare << "SNEQ";
				branch << "BREQZ ";				
			}
			if((yyvsp[-1]).content == "<"){
				compare << "SLET";
				branch << "BREQZ ";				
			}
			if((yyvsp[-1]).content == "<="){
				compare << "SGRT";
				branch << "BNEQZ ";				
			}
			if((yyvsp[-1]).content == ">"){
				compare << "SGRT";
				branch << "BREQZ ";				
			}
			if((yyvsp[-1]).content == ">="){
				compare << "SLET";
				branch << "BNEQZ ";				
			}
			if((yyvsp[-2]).type == REAL){
				compare << "R ";
			}
			else{
				compare << "I ";
			}
			string reg = Register::getNewReg(INT);
			compare << reg <<  " " << (yyvsp[-2]).place << " " << (yyvsp[0]).place;
			branch << reg << " ";
			
			g_buff.emit(compare.str());
			(yyval).false_list = makelist(g_buff.nextQuad());
			g_buff.emit(branch.str());
			(yyval).true_list = makelist(g_buff.nextQuad());
			g_buff.emit("UJUMP ");
			
			
		}
		else {
			semanticError("unknown types in REL_OP");
		}
}
#line 2121 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 691 "part3.ypp" /* yacc.c:1646  */
    {
                          Debug(" LP BEXP RP ");

		(yyval).true_list = (yyvsp[-1]).true_list;
		(yyval).false_list = (yyvsp[-1]).false_list;	
}
#line 2132 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 700 "part3.ypp" /* yacc.c:1646  */
    {		                          Debug(" EXP: EXP ADD_OP EXP  ");

		if(((yyvsp[-2]).type != (yyvsp[0]).type) || (yyvsp[-2]).type == STRUCT || (yyvsp[0]).type == STRUCT ){
			semanticError("type missmatch within add operation");
		}
		else{
			(yyval).type = (yyvsp[-2]).type;
			string T = ((yyval).type == INT)?"I":"R";
			(yyval).place = Register::getNewReg((yyval).type);
	
	
			if ((yyvsp[-1]).content == "+") {
				g_buff.emit("ADD2" + T + "" + (yyval).place + "" + (yyvsp[-2]).place + "" + (yyvsp[0]).place);
			} 
			else { // "-"
				g_buff.emit("SUBT" + T + "" + (yyval).place + "" + (yyvsp[-2]).place + "" + (yyvsp[0]).place);
			
			}	
		}
								
    }
#line 2158 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 723 "part3.ypp" /* yacc.c:1646  */
    {  Debug(" EXP MUL_OP EXP   ");

		if(((yyvsp[-2]).type != (yyvsp[0]).type) || (yyvsp[-2]).type == STRUCT || (yyvsp[0]).type == STRUCT){
			semanticError("type missmatch within mult operation");
		}
		else{
			(yyval).type = (yyvsp[-2]).type;
			string T = ((yyval).type == INT)?"I":"R";
			(yyval).place = Register::getNewReg((yyval).type);
	
	
			if ((yyvsp[-1]).content == "*") {
				g_buff.emit("MULT" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[0]).place);
			} 
			else { // "/"
				g_buff.emit("DIVD" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[0]).place);
			
			}	
		}
			
   }
#line 2184 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 746 "part3.ypp" /* yacc.c:1646  */
    {  Debug(" LP EXP RP   ");
		(yyval) = (yyvsp[-1]);
    }
#line 2192 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 751 "part3.ypp" /* yacc.c:1646  */
    { Debug("LP TYPE RP EXP   ");
			(yyval).type = (yyvsp[-2]).type;
			(yyval).place = Register::getNewReg((yyval).type);
			
			if((yyvsp[-2]).type == INT){
				g_buff.emit("CRTOI " + (yyval).place + (yyvsp[0]).place);
			}
			
			else{//REAL
				g_buff.emit("CITOR " + (yyval).place + " " + (yyvsp[0]).place);
			}
		
    }
#line 2210 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 765 "part3.ypp" /* yacc.c:1646  */
    {
       Debug("ID  ");
		 
		 SymbolEntry sEntry = symbol_table.get((yyvsp[0]).content);
		 //check that a variable is declared
		if(sEntry.offset < 0){
			semanticError("A variable is not declared");
		}
		
		
		(yyval).type = sEntry.type;
		(yyval).offset = sEntry.offset;
		(yyval).place = Register::getNewReg((yyval).type);
		(yyval).struct_type = sEntry.struct_type;
       
		ostringstream os;
		if((yyval).type == INT){
			os << "LOADI ";
      os << (yyval).place << " I1 " << (yyval).offset;
		  g_buff.emit(os.str());	
		}
		else if ((yyval).type == REAL){
			os << "LOADR ";
      os << (yyval).place << " I1 " << (yyval).offset;
	  	g_buff.emit(os.str());	
		}
		
	
		
    }
#line 2245 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 797 "part3.ypp" /* yacc.c:1646  */
    {
         Debug("STREF  ");
		 /* 
		  * $1 is a field in the struct.
		  * If $1 is field in the struct:
		  *	$1.content: the name of the field
		  *	$1.offset:  the offset from I1!
		  * $1.type: INT or REAL or STRUCT
		  * $1 is not in the Symbol table (in symbol table we save only a declaration of 
		  * 									the variable of the struct type)
		  */
		  
      if((yyvsp[0]).type != STRUCT){
			(yyval) = (yyvsp[0]);
			(yyval).place = Register::getNewReg((yyval).type);
			ostringstream os;
			if((yyval).type == INT){
				os << "LOADI ";
			}
			else{
				os << "LOADR ";
			}
			
			os << (yyval).place << " I1 " << (yyval).offset;
			g_buff.emit(os.str());					
		  }   
		  else{ 
			  (yyval) = (yyvsp[0]);
		  }
 }
#line 2280 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 828 "part3.ypp" /* yacc.c:1646  */
    {
        Debug("NUM  ");
			(yyval).type = (yyvsp[0]).type;
			(yyval).place = Register::getNewReg((yyval).type);
			if ((yyval).type == REAL) {
				g_buff.emit("COPYR " + (yyval).place + " " + (yyvsp[0]).content);
			}
			else {
				g_buff.emit("COPYI " + (yyval).place + " " + (yyvsp[0]).content);
			}
         }
#line 2296 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 840 "part3.ypp" /* yacc.c:1646  */
    {
        Debug("CALL ");
        (yyval).type = (yyvsp[0]).type;
				(yyval).place = (yyvsp[0]).place;
			}
#line 2306 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 847 "part3.ypp" /* yacc.c:1646  */
    {
   Debug("STREF: ID LS ID RS ");
		SymbolEntry sEntry = symbol_table.get((yyvsp[-3]).content); //get a variable from the symbol table
		 //check that a variable is declared
		if(sEntry.offset < 0){
			semanticError("A variable is not declared");
		}
		if(sEntry.type != STRUCT){ //check if the variable is a struct
			semanticError("A variable is not a struct type");
		}
		
		//the variable is a struct. Get all fields that are defined for this struct 
		list<Entry> fields = struct_table.get(sEntry.struct_type); 
		bool found = false;
  //cout << $1.content << " " << $3.content << endl;
 // symbol_table.print();
		for (auto& field : fields){ //find a field with the name $3
      cout << field.name << " " << (yyvsp[-1]).content << endl;
			if(field.name == (yyvsp[-1]).content){
				found = true;
				(yyval).content = field.name;
				(yyval).type = field.type;
				(yyval).struct_type = field.struct_type;
				(yyval).offset = sEntry.offset + field.offset;//offset of the field from I1
       /* ostringstream os;
        if($$.type == INT){
          os << "LOADI ";
          os << $$.place << " I1 " << $$.offset;
          g_buff.emit(os.str());
        }
        else if($$.type == REAL){
          os << "LOADR ";
          os << $$.place << " I1 " << $$.offset;
          g_buff.emit(os.str());
        }*/

         
			}
		}
		if(found == false){
			semanticError("a field is undefined in struct");
		}
		
		

}
#line 2357 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 893 "part3.ypp" /* yacc.c:1646  */
    {
   Debug("STREF LS ID RS ");
	if((yyvsp[-3]).type != STRUCT){
		semanticError("not a struct");
	}
	
	//SymbolEntry sEntry = symbol_table.get($1.content); //get a variable from the symbol table
	list<Entry> fields = struct_table.get((yyvsp[-3]).struct_type);
	
	//the variable is a struct. Get all fields that are defined for this struct 
	//list<Entry> fields = struct_table.get(sEntry.struct_type); 
	bool found = false;
	for (auto& scope : fields){ //find a field with the name $3
		if(scope.name == (yyvsp[-1]).content){
			found = true;
			(yyval).content = scope.name;
			(yyval).type = scope.type;
			(yyval).offset = scope.offset + (yyvsp[-3]).offset;//offset of the field from I1
			(yyval).struct_type = scope.struct_type;
       /* ostringstream os;
        if($$.type == INT){
          os << "LOADI ";
          os << $$.place << " I1 " << $$.offset;
          g_buff.emit(os.str());
        }
        else if($$.type == REAL){
          os << "LOADR ";
          os << $$.place << " I1 " << $$.offset;
          g_buff.emit(os.str());
        }  */    
		}
	}
	if(found == false){
		semanticError("a field is undefined in struct");
	}		
	
}
#line 2399 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 932 "part3.ypp" /* yacc.c:1646  */
    {
   Debug("CALL: CALL_TOK ID LP CALL_ARGS_FULL RP ");
    Function* f = function_table.get((yyvsp[-3]).content);
    if(f == NULL) {
      semanticError("undefined function");
    }
    
    list<Param> parameters = f->parameters;
    list<Type> tmp1, tmp2;
	
	  for (auto& it : (yyvsp[-1]).parameters){
		  tmp1.push_back(it.first);
    }
    
    for (auto& it : f->parameters){
		  tmp2.push_back(it.type);
    }
    
    if(tmp1 != tmp2){
      semanticError("parameteres of function does not match");
    }
    
    //save used registers
    int cnt = 0;
    for(int i = 0; i != Register::intRegCnt ; ++i) {
      {
        g_buff.emit("STORI I" + to_string(i) + " I2 " + to_string(cnt));
        ++cnt;
      }
    }
    for(int i = 0; i != Register::realRegCnt ; ++i) {
      
      g_buff.emit("STORR R" + to_string(i) + " I2 " + to_string(cnt));
      ++cnt;
    }
  
  
  
    g_buff.emit("ADD2I I2 I2 " + to_string(cnt+1));
  
    g_buff.emit("COPYI I1 I2");
    
    f->calledFrom.push_back(g_buff.nextQuad());
     g_buff.emit("JLINK " + to_string(f->startLine));
  
    
    g_buff.emit("COPYI I2 I1");
  
   // Load the return value of the function
	string type = f->returnType == INT ? "I" : "R";
  string ret_reg =  Register::getNewReg(f->returnType );
	g_buff.emit( "LOAD" + type + " " + ret_reg  + " I2 -1");
	(yyval).place = ret_reg; // Save the return register
	(yyval).type = f->returnType;
  
	// Restore I2
	g_buff.emit("SUBTI I2 I2 " + to_string(cnt + 1));
  
	// Restore all registers from stack
	cnt = 0;
	for (int i = 0; i < Register::intRegCnt ; i++, cnt++) {
		if (i == 2) continue; // No need to reload I2
		g_buff.emit("LOADI I" + to_string(i) + " I2 " + to_string(cnt));
	}
	for (int i = 0; i < Register::realRegCnt; i++, cnt++) {
		string line = "LOADR R" + to_string(i) + " I2 " + to_string(cnt);
		g_buff.emit(line);
	}
 
  
}
#line 2475 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1005 "part3.ypp" /* yacc.c:1646  */
    {
                             Debug("CALL_ARGS_FULL: CALL_ARGS "); 
  (yyval).parameters == (yyvsp[0]).parameters;
                          }
#line 2484 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1013 "part3.ypp" /* yacc.c:1646  */
    {
              Debug("CALL_ARGS:  EXP "); 
        if((yyvsp[0]).type != INT && (yyvsp[0]).type != REAL){
         semanticError("unknown type of parameters");
        }
  	(yyval).parameters.clear();
    (yyval).parameters.push_back(std::make_pair((yyvsp[0]).type,(yyvsp[0]).place)); 
  
}
#line 2498 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1022 "part3.ypp" /* yacc.c:1646  */
    {
      Debug("CALL_ARGS COM EXP "); 
      if((yyvsp[0]).type != INT && (yyvsp[0]).type != REAL){
        semanticError("unknown type of parameters");
      }
      (yyval).parameters = (yyvsp[-2]).parameters;
      (yyval).parameters.push_back(std::make_pair((yyvsp[0]).type,(yyvsp[0]).place)); 
}
#line 2511 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1033 "part3.ypp" /* yacc.c:1646  */
    {
Debug("M "); 
	(yyval).address = g_buff.nextQuad();
}
#line 2520 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1038 "part3.ypp" /* yacc.c:1646  */
    {
Debug("N"); 
	(yyval).next_list = makelist(g_buff.nextQuad());
//$$.next_list = g_buff.nextQuad();
	g_buff.emit("UJUMP ");
}
#line 2531 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1045 "part3.ypp" /* yacc.c:1646  */
    {
Debug("M1 "); 
  symbol_table.push();
}
#line 2540 "part3.tab.cpp" /* yacc.c:1646  */
    break;


#line 2544 "part3.tab.cpp" /* yacc.c:1646  */
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
#line 1050 "part3.ypp" /* yacc.c:1906  */

  
void assignStructs(int leftOffset, const list<Entry>& leftStruct , int rightOffset){
  
  for (auto& field : leftStruct){
    
    switch(field.type){
        
      case INT:
        {
          ostringstream os, ol;
          string reg = Register::getNewReg(INT);
      
          ol << "LOADI " << reg << " I1 " << rightOffset + field.offset;
          os << "STORI " << reg << " I1 " << leftOffset + field.offset;

          g_buff.emit(ol.str());
          g_buff.emit(os.str());
          break;
    }
      case REAL:
        {
          ostringstream os, ol;
          string reg = Register::getNewReg(REAL);
      
          ol << "LOADR " << reg << " I1 " << rightOffset + field.offset;
          os << "STORR " << reg << " I1 " << leftOffset + field.offset;

          g_buff.emit(ol.str());
          g_buff.emit(os.str());
          break;     
    }
      default: //Struct
        {
      assignStructs(leftOffset + field.offset, struct_table.get(field.struct_type), rightOffset + field.offset);
    }
    }
    
  }
}
 
void Debug(string s){
//ma cout << s << endl;
  g_buff.emit(s);
}

void semanticError(string s) {
  cerr << "Semantic error: " << s.c_str()<< " in line number "<< yylineno <<endl;
  exit(3);
}

void yyerror (const char* str){
   cerr << "Syntax error: " << yytext << " in line number "<< yylineno;
   exit(2);
}

int main(int argc, char* argv[]) {
	string inputFile = argv[1];
	size_t lastindex;
	if (argc != 2) {
		cerr << "Operational error: invalid number of arguments" << endl;
		exit(9);
	}

	try {
		lastindex = inputFile.find_last_of(".");
		if (inputFile.substr(lastindex) != ".cmm") {
			throw std::invalid_argument("");
		}
	}
	catch (exception& e){
		cerr << "Operational error: invalid file type. expecting '.cmm' extension" << endl;
		exit(9);
	}

	string outFile = inputFile.substr(0, lastindex) + ".rsk";
	std::ofstream out(outFile);
	std::streambuf *coutBuffer = std::cout.rdbuf(); //save old buffer
	std::cout.rdbuf(out.rdbuf()); //redirect std::cout to outFile

	yyin = fopen(argv[1], "r");
  //cout << "ucbdjbciuds" << endl;
	yyparse();
	g_buff.print();

	cout.rdbuf(coutBuffer); //reset to standard output again
	fclose(yyin);

	yylex_destroy();
	return 0;
}
