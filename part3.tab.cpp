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
  #include <iostream>
  #include <sstream>
  #include <fstream>
	#include "Register.hpp"
  #include "buffer.hpp"
	#include "SymbolTable.hpp"
	#include "StructTable.hpp"
  #include "attributes.hpp"

  
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
  
  SymbolTable symbol_table;
  StructTable struct_table;
  int gEntryOffset;
  Buffer g_buff;

#line 96 "part3.tab.cpp" /* yacc.c:339  */

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

#line 184 "part3.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

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
       0,    60,    60,    65,    65,    90,    94,    98,   101,   106,
     109,   115,   119,   124,   127,   131,   137,   137,   150,   155,
     158,   163,   171,   184,   192,   196,   201,   205,   211,   213,
     217,   219,   221,   223,   226,   231,   240,   256,   270,   308,
     325,   330,   335,   340,   348,   353,   359,   363,   416,   422,
     444,   466,   471,   487,   514,   548,   559,   565,   595,   622,
     627,   630,   634,   638,   644,   648
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
  "LS", "RS", "$accept", "PROGRAM", "TDEFS", "$@1", "FDEFS",
  "FUNC_ARGLIST_FULL", "FUNC_ARGLIST", "MAIN_FUNCTION", "BLK",
  "DECLARATIONS", "$@2", "DECLARLIST", "DCL", "TYPE", "LIST", "STMT",
  "STMT_RETURN", "WRITE", "READ", "ASSN", "LVAL", "CNTRL", "BEXP", "EXP",
  "STREF", "CALL", "CALL_ARGS_FULL", "CALL_ARGS", "M", "N", YY_NULLPTR
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

#define YYPACT_NINF -65

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,    66,   -65,   -65,   -65,    -2,    50,   -65,   -65,    67,
       9,   -65,    82,    37,   -65,   -65,    59,   102,    65,   104,
     104,   -65,   100,   104,   107,    -1,    94,   104,    89,   104,
      97,   111,   -65,   104,    17,   129,   112,   -65,   -65,    91,
     103,    67,   104,   -65,   -65,   -65,   114,   -65,   105,   106,
     108,   -65,     5,   110,   -65,   -65,   -65,   -65,   -65,   -65,
     118,   -65,   109,   116,   -65,   -65,   -65,   139,    60,   141,
       5,   -65,   105,   142,     5,    25,    68,    98,   109,   -65,
      23,    23,   143,   -65,   113,   119,    54,    85,   120,    42,
     117,   -65,   121,    47,    83,   -65,   -65,   -65,    23,    23,
      23,    90,    76,   122,   -65,   128,    92,   132,   133,   -65,
      23,    23,   -65,   -65,    91,     5,     5,    15,   127,   -65,
     135,   -65,   -65,   -65,   -65,   -65,    91,    15,   130,   138,
     -65,   146,   137,   -65,   -65,   -65,   -65,    23,   -65,    15,
     -65,    91,   -65
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     8,     3,     1,    14,     0,    25,    24,    18,
       0,     2,     0,     0,    16,    13,     0,     0,     0,     0,
       0,    27,     0,    10,     0,     0,     0,    17,    64,    10,
       0,     9,    12,     0,     0,     0,     0,    20,    15,    18,
       0,    18,     0,    23,    22,    21,     0,    19,    39,     0,
       0,    64,     0,     0,    33,    26,    32,    31,    30,    28,
       0,    29,    40,     0,     6,    11,     4,     0,     0,     0,
       0,    55,    53,     0,     0,     0,     0,     0,    54,    56,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,    64,    64,    64,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    64,
      61,     0,    48,    51,    18,     0,     0,    47,    49,    50,
       0,    38,    58,    36,    35,    37,    18,    62,     0,    60,
      52,    42,    44,    45,    34,    43,    59,     0,    65,    63,
      64,    18,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   158,   -65,   -65,   136,   -65,   -65,    -7,   -65,
     -65,   144,    55,     7,   -65,   -52,   -65,   -65,   -65,   -65,
      99,   -65,   -64,   -61,   -39,   -65,   -65,   -65,   -50,   -65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    30,    31,    11,    54,    16,
      20,    25,    26,    92,    28,    55,    56,    57,    58,    59,
      60,    61,    76,    77,    78,    79,   128,   129,    39,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    70,    15,    24,     7,     8,    89,    87,    71,    72,
      91,    93,    12,     9,    94,     7,     8,    17,    10,   101,
     102,    44,    73,     7,     8,   106,    71,    72,    71,    72,
      62,     7,     8,    35,    64,    74,    75,   117,   118,   119,
      73,    45,    73,    99,   100,   114,   115,   116,    -3,   127,
     130,   132,   133,   109,    86,    74,    75,    71,    72,   126,
       7,     8,   131,    71,    72,    85,     4,    96,    97,    13,
      19,    73,    96,    97,   135,    62,   139,    73,    32,   112,
      36,    95,    36,    14,    32,    86,    18,    62,    43,   142,
     141,    86,    21,    96,    97,    48,    23,    65,   121,    49,
      50,    51,    62,    52,    99,   100,    22,    14,    24,    53,
      98,    99,   100,    99,   100,   113,    37,   107,    99,   100,
      99,   100,   120,    38,   113,    98,    99,   100,    33,    41,
      34,    29,    42,    46,    47,    63,    66,    68,    83,    69,
      67,    80,    81,    84,    82,    48,    90,   103,   110,   104,
     123,   105,   108,   111,   124,   125,   100,   134,   122,   137,
     138,     6,   136,    97,    27,    40,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
      39,    51,     9,     4,     6,     7,    70,    68,     3,     4,
      74,    75,     5,    15,    75,     6,     7,    10,    20,    80,
      81,     4,    17,     6,     7,    86,     3,     4,     3,     4,
      69,     6,     7,    34,    41,    30,    31,    98,    99,   100,
      17,    34,    17,    28,    29,    95,    96,    97,    19,   110,
     111,   115,   116,    11,    31,    30,    31,     3,     4,   109,
       6,     7,   114,     3,     4,     5,     0,    25,    26,    19,
      33,    17,    25,    26,   126,   114,   137,    17,    23,    32,
      25,    13,    27,    16,    29,    31,     4,   126,    33,   141,
     140,    31,    33,    25,    26,     4,    31,    42,    22,     8,
       9,    10,   141,    12,    28,    29,     4,    16,     4,    18,
      27,    28,    29,    28,    29,    32,    22,    32,    28,    29,
      28,    29,    32,    34,    32,    27,    28,    29,    21,    32,
      23,    31,    21,     4,    22,    32,    22,    31,    22,    31,
      35,    31,    24,     4,    35,     4,     4,     4,    31,    36,
      22,    32,    32,    32,    22,    22,    29,    22,    36,    21,
      14,     3,    32,    26,    20,    29,    -1,    -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    40,     0,    41,    39,     6,     7,    15,
      20,    44,    50,    19,    16,    45,    46,    50,     4,    33,
      47,    33,     4,    31,     4,    48,    49,    48,    51,    31,
      42,    43,    49,    21,    23,    34,    49,    22,    34,    65,
      42,    32,    21,    49,     4,    50,     4,    22,     4,     8,
       9,    10,    12,    18,    45,    52,    53,    54,    55,    56,
      57,    58,    61,    32,    45,    49,    22,    35,    31,    31,
      65,     3,     4,    17,    30,    31,    59,    60,    61,    62,
      31,    24,    35,    22,     4,     5,    31,    60,    57,    59,
       4,    59,    50,    59,    60,    13,    25,    26,    27,    28,
      29,    60,    60,     4,    36,    32,    60,    32,    32,    11,
      31,    32,    32,    32,    65,    65,    65,    60,    60,    60,
      32,    22,    36,    22,    22,    22,    65,    60,    63,    64,
      60,    52,    59,    59,    22,    52,    32,    21,    14,    60,
      66,    65,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    40,    39,    39,    41,    41,    41,    42,
      42,    43,    43,    44,    44,    45,    47,    46,    46,    48,
      48,    49,    49,    49,    50,    50,    51,    51,    52,    52,
      52,    52,    52,    52,    53,    54,    54,    55,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     8,     0,     7,     8,     0,     1,
       0,     3,     1,     2,     0,     4,     0,     3,     0,     3,
       2,     3,     3,     3,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     4,     1,
       1,     9,     5,     6,     4,     4,     2,     3,     3,     3,
       3,     3,     4,     1,     1,     1,     1,     4,     4,     5,
       1,     0,     1,     3,     0,     0
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
#line 60 "part3.ypp" /* yacc.c:1646  */
    {//TODO

                                   }
#line 1362 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "part3.ypp" /* yacc.c:1646  */
    {symbol_table.push();}
#line 1368 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "part3.ypp" /* yacc.c:1646  */
    {//TODO
	// All fields of the struct are in the top of symbol table
	// Define a new struct type
	
	if(struct_table.getOffset((yyvsp[-2]).content) > 0){
		symbol_table.pop();
		semanticError("struct with such name already exists");
	}
	
	struct_table.push((yyvsp[-2]).content); //insert a new struct type
	map<string, SymbolEntry>  table = symbol_table.pop(); //pops all fields of the struct that were declared before
	
	for(map<string, SymbolEntry>::iterator it = table.begin(); it != table.end(); it++){
		string name = it->first;
		SymbolEntry entry = it->second;
		if(entry.type == STRUCT){
			struct_table.insert((yyvsp[-2]).content, name, entry.size, entry.struct_type);
		}
		else{
			struct_table.insert((yyvsp[-2]).content, entry.type, name, entry.size);
		}
		
	}

 }
#line 1398 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "part3.ypp" /* yacc.c:1646  */
    {//TODO
  
                                  }
#line 1406 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "part3.ypp" /* yacc.c:1646  */
    {//TODO

                                  }
#line 1414 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 106 "part3.ypp" /* yacc.c:1646  */
    {//TODO
                            
                                  }
#line 1422 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 115 "part3.ypp" /* yacc.c:1646  */
    {//TODO
             
                                  }
#line 1430 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "part3.ypp" /* yacc.c:1646  */
    {//TODO
                    
                                  }
#line 1438 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "part3.ypp" /* yacc.c:1646  */
    {//TODO
    
                                  }
#line 1446 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 131 "part3.ypp" /* yacc.c:1646  */
    {//TODO
     // end of scope
	 symbol_table.pop();
                              }
#line 1455 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 137 "part3.ypp" /* yacc.c:1646  */
    {symbol_table.push();}
#line 1461 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 138 "part3.ypp" /* yacc.c:1646  */
    { 
	/**
	* 	All variables of the current scope are in the symbol table.
	*	I1 must point to the stack frame and I2 will point to the top
	*	of the stack. 
	*/
	
	ostringstream os;
	os << "ADD2I I2 I1 " << symbol_table.top().size();
	g_buff.emit(os.str());		
	
}
#line 1478 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "part3.ypp" /* yacc.c:1646  */
    {
}
#line 1485 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "part3.ypp" /* yacc.c:1646  */
    {
}
#line 1492 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "part3.ypp" /* yacc.c:1646  */
    {
	(yyval).content = (yyvsp[-2]).content;
	(yyval).type = (yyvsp[0]).type;
	(yyval).offset = 1;
	symbol_table.insert((yyvsp[-2]).content, (yyvsp[0]).type, 1);
}
#line 1503 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "part3.ypp" /* yacc.c:1646  */
    {
	int offset = struct_table.getOffset((yyvsp[0]).content); //check if struct $3 exists
	if (offset == -1){
		semanticError("undefined struct");
	}
	(yyval).content = (yyvsp[-2]).content; //the name of a new var
	(yyval).type = STRUCT;
	(yyval).offset = offset;
	symbol_table.insertStruct((yyvsp[-2]).content, (yyvsp[0]).content, offset);
	
}
#line 1519 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 184 "part3.ypp" /* yacc.c:1646  */
    {
	(yyval).content = (yyvsp[-2]).content;
	(yyval).type = (yyvsp[0]).type;
	(yyval).offset = (yyvsp[0]).offset;
	symbol_table.insert((yyvsp[-2]).content, (yyvsp[0]).type, 1);
}
#line 1530 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 192 "part3.ypp" /* yacc.c:1646  */
    {
                 (yyval).type = INT;
               }
#line 1538 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 196 "part3.ypp" /* yacc.c:1646  */
    {
				 (yyval).type = REAL;
				}
#line 1546 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 201 "part3.ypp" /* yacc.c:1646  */
    {
           (yyval).next_list = (yyvsp[0]).next_list;
		   g_buff.backpatch((yyvsp[-1]).next_list, (yyvsp[-1]).address);
}
#line 1555 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 211 "part3.ypp" /* yacc.c:1646  */
    { }
#line 1561 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 213 "part3.ypp" /* yacc.c:1646  */
    {
                              (yyval).next_list = (yyvsp[0]).next_list;
                                }
#line 1569 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 217 "part3.ypp" /* yacc.c:1646  */
    {}
#line 1575 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 219 "part3.ypp" /* yacc.c:1646  */
    {}
#line 1581 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 221 "part3.ypp" /* yacc.c:1646  */
    {}
#line 1587 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "part3.ypp" /* yacc.c:1646  */
    {}
#line 1593 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 226 "part3.ypp" /* yacc.c:1646  */
    {//TODO
    
}
#line 1601 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 231 "part3.ypp" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]).type == INT) {
		g_buff.emit("PRNTI " + (yyvsp[-2]).place);
	}
	else {
		g_buff.emit("PRNTR " + (yyvsp[-2]).place);
	}		
   }
#line 1614 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 240 "part3.ypp" /* yacc.c:1646  */
    {
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
#line 1633 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 256 "part3.ypp" /* yacc.c:1646  */
    {

		string emittedRead = ((yyvsp[-2]).type == INT)?"READI ":"READR ";
		string emittedStore = ((yyvsp[-2]).type == INT)?"STORI ":"STORR ";
		
		// allocate a temporary register and assign to it user input:
		string tempRegister = Register::getNewReg((yyvsp[-2]).type);
		g_buff.emit(emittedRead + tempRegister);
		
		// store the temporary register to memory:
		g_buff.emit(emittedStore + tempRegister + " " + (yyvsp[-2]).place + " 0");     
	}
#line 1650 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 270 "part3.ypp" /* yacc.c:1646  */
    {
	Type lValType = (yyvsp[-3]).type, rValType = (yyvsp[-1]).type;
	ostringstream os;
	if(lValType == INT){
		os << "STORI ";
	}
	else {
		os << "STORR ";
	}
	
	if (lValType != rValType) {
		// casting is needed, allocate a temporary register and set it to the casted value:
		ostringstream os1;
		string tmpReg =  Register::getNewReg(lValType);
		
		if (lValType == INT) { //cast to int
			os1 << "CRTOI ";
		}
		else { //cast to real
			os1 << "CITOR ";
		}
		
		os << tmpReg << " " << (yyvsp[-3]).place << " 0";
		os1 << tmpReg << (yyvsp[-1]).place;
		
		g_buff.emit(os1.str());
		g_buff.emit(os.str());
	}
	
	else{
		//assign the temporary register to the memory
		os << (yyvsp[-1]).place << " " << (yyvsp[-3]).place << " 0";
		g_buff.emit(os.str());
	}
}
#line 1690 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 308 "part3.ypp" /* yacc.c:1646  */
    {
	SymbolEntry sEntry = symbol_table.get((yyvsp[0]).content);
	 //check that a variable is declared
	if(sEntry.offset < 0){
		semanticError("A variable is not declared");
	}
	
		
		(yyval).type = sEntry.type;
		(yyval).offset = sEntry.offset;
		(yyval).place = Register::getNewReg((yyval).type);	
		
		ostringstream os;
		os << "ADD2I " << (yyval).place << " I1 " << (yyval).offset;
		g_buff.emit(os.str());
}
#line 1711 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 325 "part3.ypp" /* yacc.c:1646  */
    {//TODO
            (yyval) = (yyvsp[0]);                 
     }
#line 1719 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 330 "part3.ypp" /* yacc.c:1646  */
    {
	g_buff.backpatch((yyvsp[-7]).true_list, (yyvsp[-5]).address);
	g_buff.backpatch((yyvsp[-7]).false_list, (yyvsp[-1]).address);
	(yyval).next_list = merge(merge((yyvsp[-4]).next_list, (yyvsp[0]).next_list), (yyvsp[-2]).next_list);
}
#line 1729 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 335 "part3.ypp" /* yacc.c:1646  */
    {
			g_buff.backpatch((yyvsp[-3]).true_list, (yyvsp[-1]).address);
			(yyval).next_list = merge((yyvsp[-3]).false_list, (yyvsp[0]).next_list);
}
#line 1738 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 340 "part3.ypp" /* yacc.c:1646  */
    {
			g_buff.backpatch((yyvsp[-3]).true_list,(yyvsp[-1]).address);
			g_buff.backpatch((yyvsp[0]).next_list,(yyvsp[-4]).address);
			(yyval).next_list = (yyvsp[-3]).false_list;
			g_buff.emit("UJUMP " + to_string((yyvsp[-4]).address));
}
#line 1749 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "part3.ypp" /* yacc.c:1646  */
    {
	g_buff.backpatch((yyvsp[-3]).false_list, (yyvsp[-1]).address);
	(yyval).false_list = (yyvsp[0]).false_list;
	(yyval).true_list = merge((yyvsp[-3]).true_list, (yyvsp[0]).true_list);
  }
#line 1759 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 353 "part3.ypp" /* yacc.c:1646  */
    {
		g_buff.backpatch((yyvsp[-3]).true_list, (yyvsp[-1]).address);
		(yyval).false_list = merge((yyvsp[-3]).false_list, (yyvsp[0]).false_list);
		(yyval).true_list = (yyvsp[0]).true_list;
}
#line 1769 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 359 "part3.ypp" /* yacc.c:1646  */
    {
		(yyval).true_list = (yyvsp[0]).false_list;
		(yyval).false_list = (yyvsp[0]).true_list;
}
#line 1778 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 363 "part3.ypp" /* yacc.c:1646  */
    {
		
		if((yyvsp[-2]).type != (yyvsp[0]).type) {
			semanticError("different types in REL_OP");
		}
		else if((yyvsp[-2]).type == REAL || (yyvsp[-2]).type == INT){
			ostringstream compare, branch;
			if((yyvsp[-1]).content == "=="){
				compare << "SEQU";
				branch << "BREQZ";
			}
			if((yyvsp[-1]).content == "<>"){
				compare << "SNEQ";
				branch << "BREQZ";				
			}
			if((yyvsp[-1]).content == "<"){
				compare << "SLET";
				branch << "BREQZ";				
			}
			if((yyvsp[-1]).content == "<="){
				compare << "SGRT";
				branch << "BNEQZ";				
			}
			if((yyvsp[-1]).content == ">"){
				compare << "SGRT";
				branch << "BREQZ";				
			}
			if((yyvsp[-1]).content == ">="){
				compare << "SLET";
				branch << "BNEQZ";				
			}
			if((yyvsp[-2]).type == REAL){
				compare << "R ";
			}
			else{
				compare << "I ";
			}
			
			compare << Register::getNewReg(INT) <<  " " << (yyvsp[-2]).place << (yyvsp[-1]).place;
			branch << Register::getNewReg(INT) << " ";
			
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
#line 1836 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 416 "part3.ypp" /* yacc.c:1646  */
    {
		(yyval).true_list = (yyvsp[-1]).true_list;
		(yyval).false_list = (yyvsp[-1]).false_list;	
}
#line 1845 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 423 "part3.ypp" /* yacc.c:1646  */
    {		
		if(((yyvsp[-2]).type != (yyvsp[0]).type) || (yyvsp[-2]).type == STRUCT || (yyvsp[0]).type == STRUCT ){
			semanticError("type missmatch within add operation");
		}
		else{
			(yyval).type = (yyvsp[-2]).type;
			string T = ((yyval).type == INT)?"I":"R";
			(yyval).place = Register::getNewReg((yyval).type);
	
	
			if ((yyvsp[-1]).content == "+") {
				g_buff.emit("ADD2" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
			} 
			else { // "-"
				g_buff.emit("SUBT" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
			
			}	
		}
								
    }
#line 1870 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 445 "part3.ypp" /* yacc.c:1646  */
    {
		if(((yyvsp[-2]).type != (yyvsp[0]).type) || (yyvsp[-2]).type == STRUCT || (yyvsp[0]).type == STRUCT){
			semanticError("type missmatch within mult operation");
		}
		else{
			(yyval).type = (yyvsp[-2]).type;
			string T = ((yyval).type == INT)?"I":"R";
			(yyval).place = Register::getNewReg((yyval).type);
	
	
			if ((yyvsp[-1]).content == "*") {
				g_buff.emit("MULT" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
			} 
			else { // "/"
				g_buff.emit("DIVD" + T + " " + (yyval).place + " " + (yyvsp[-2]).place + " " + (yyvsp[-1]).place);
			
			}	
		}
			
   }
#line 1895 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 467 "part3.ypp" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[-1]);
    }
#line 1903 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 472 "part3.ypp" /* yacc.c:1646  */
    {
			(yyval).type = (yyvsp[-2]).type;
			(yyval).place = Register::getNewReg((yyval).type);
			
			if((yyvsp[-2]).type == INT){
				g_buff.emit("CRTOI " + (yyval).place + (yyvsp[0]).place);
			}
			
			else{//REAL
				g_buff.emit("CRTOR " + (yyval).place + (yyvsp[0]).place);
			}
		
    }
#line 1921 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 487 "part3.ypp" /* yacc.c:1646  */
    {
		 
		 SymbolEntry sEntry = symbol_table.get((yyvsp[0]).content);
		 //check that a variable is declared
		if(sEntry.offset < 0){
			semanticError("A variable is not declared");
		}
		
		
		(yyval).type = sEntry.type;
		(yyval).offset = sEntry.offset;
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
#line 1951 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 514 "part3.ypp" /* yacc.c:1646  */
    {
		 /* 
		  * $1 is a field in the struct.
		  * If $1 is field in the struct:
		  *	$1.content: the name if the field
		  *	$1.offset:  the offset from the start of the STRUCT!
		  * $1.type: INT or REAL or STRUCT
		  * $1 is not in the Symbol table (in symbol table we save only a declaration of 
		  * 									the variable of the struct type)
		  */
		  
          if((yyvsp[0]).type != STRUCT){
			SymbolEntry sEntry = symbol_table.get((yyvsp[0]).struct_type);
			int offset = sEntry.offset + (yyvsp[0]).offset; //TODO: check 	
			(yyval).type = (yyvsp[0]).type;
			(yyval).offset = offset;
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
		  else{ //TODO: check
			  (yyval) = (yyvsp[0]);
		  }
 }
#line 1989 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 548 "part3.ypp" /* yacc.c:1646  */
    {
			(yyval).type = (yyvsp[0]).type;
			(yyval).place = Register::getNewReg((yyval).type);
			if ((yyval).type == REAL) {
				g_buff.emit("COPYR " + (yyval).place + " " + (yyvsp[0]).content);
			}
			else {
				g_buff.emit("COPYI " + (yyval).place + " " + (yyvsp[0]).content);
			}
         }
#line 2004 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 559 "part3.ypp" /* yacc.c:1646  */
    {
                (yyval).type = (yyvsp[0]).type;
				(yyval).place = (yyvsp[0]).place;
			}
#line 2013 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 565 "part3.ypp" /* yacc.c:1646  */
    {
		SymbolEntry sEntry = symbol_table.get((yyvsp[-3]).content); //get a variable from the symbol table
		 //check that a variable is declared
		if(sEntry.offset < 0){
			semanticError("A variable is not declared");
		}
		gEntryOffset = sEntry.offset;
		if(sEntry.type != STRUCT){ //check if the variable is a struct
			semanticError("A variable is not a struct type");
		}
		
		//the variable is a struct. Get all fields that are defined for this struct 
		list<Entry> fields = struct_table.get(sEntry.struct_type); 
		bool found = false;
		for (auto& field : fields){ //find a field with the name $3
			if(field.name == (yyvsp[-1]).content){
				found = true;
				(yyval).content = field.name;
				(yyval).type = field.type;
				(yyval).struct_type = field.struct_type;
				(yyval).offset = field.offset;//offset of the field from the start of struct
			}
		}
		if(found == false){
			semanticError("a field is undefined in struct");
		}
		
		

}
#line 2048 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 595 "part3.ypp" /* yacc.c:1646  */
    {
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
			(yyval).offset = scope.offset;
			(yyval).struct_type = scope.struct_type;
		}
	}
	if(found == false){
		semanticError("a field is undefined in struct");
	}		
	
}
#line 2078 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 622 "part3.ypp" /* yacc.c:1646  */
    {//TODO

                          }
#line 2086 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 627 "part3.ypp" /* yacc.c:1646  */
    {//TODO
                            
                          }
#line 2094 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 634 "part3.ypp" /* yacc.c:1646  */
    {//TODO
             
               }
#line 2102 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 638 "part3.ypp" /* yacc.c:1646  */
    {//TODO

                        }
#line 2110 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 644 "part3.ypp" /* yacc.c:1646  */
    {
	(yyval).address = g_buff.nextQuad();
}
#line 2118 "part3.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 648 "part3.ypp" /* yacc.c:1646  */
    {
	(yyval).next_list = makelist(g_buff.nextQuad());
	g_buff.emit("UJUMP ");
}
#line 2127 "part3.tab.cpp" /* yacc.c:1646  */
    break;


#line 2131 "part3.tab.cpp" /* yacc.c:1646  */
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
#line 653 "part3.ypp" /* yacc.c:1906  */

  

void semanticError(string s) {
  printf("Semantic error: '%s' in line number %d\n", s.c_str(), yylineno);
  exit(3);
}

void yyerror (const char* str){
   printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
   exit(2);
}

int main(int argc, char* argv[]) {
	string inputFile = argv[1];
	size_t lastindex;
	
	if (argc != 2) {
		cerr << "Operational error: invalid number of arguments" << endl;
		exit(1);
	}

	try {
		lastindex = inputFile.find_last_of(".");
		if (inputFile.substr(lastindex) != ".cmm") {
			throw std::invalid_argument("");
		}
	}
	catch (exception& e){
		cerr << "Operational error: invalid file type. expecting '.cmm' extension" << endl;
		exit(1);
	}

	string outFile = inputFile.substr(0, lastindex) + ".rsk";
	std::ofstream out(outFile);
	std::streambuf *coutBuffer = std::cout.rdbuf(); //save old buffer
	std::cout.rdbuf(out.rdbuf()); //redirect std::cout to outFile

	yyin = fopen(argv[1], "r");

	yyparse();
	g_buff.print();

	cout.rdbuf(coutBuffer); //reset to standard output again
	fclose(yyin);

	yylex_destroy();
	return 0;
}
