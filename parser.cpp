/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

    #include <stdlib.h>
    #include <stdio.h>
    #include <iostream>

    #include "ast.hpp"
    #define YYINITDEPTH 500
    #define YYDEBUG 1
    int yylex(void);
    void yyerror(const char *);

    extern ASTNode* astRoot;

/* Line 371 of yacc.c  */
#line 82 "parser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_SEMICOLON = 260,
     T_COLON = 261,
     T_COMMA = 262,
     T_OPENBRACKET = 263,
     T_CLOSEBRACKET = 264,
     T_OPENPAREN = 265,
     T_CLOSEPAREN = 266,
     T_ARROW = 267,
     T_RETURN = 268,
     T_EQUAL = 269,
     T_IF = 270,
     T_ELSE = 271,
     T_WHILE = 272,
     T_REPEAT = 273,
     T_UNTIL = 274,
     T_PRINT = 275,
     T_PLUS = 276,
     T_MINUS = 277,
     T_MULTIPLY = 278,
     T_DIVIDE = 279,
     T_LESSTHAN = 280,
     T_LESSEQUALTO = 281,
     T_EQUALS = 282,
     T_AND = 283,
     T_OR = 284,
     T_NOT = 285,
     T_NEW = 286,
     T_BEGINCOMMENT = 287,
     T_NONE = 288,
     T_ENDCOMMENT = 289,
     T_PERIOD = 290,
     T_NUMBER = 291,
     T_IDEN = 292,
     T_INTEGER = 293,
     T_BOOLEAN = 294,
     T_EXTENDS = 295,
     T_NEG = 296
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 188 "parser.cpp"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    16,    24,    27,    28,
      32,    34,    37,    38,    48,    50,    52,    54,    56,    58,
      63,    64,    70,    71,    75,    78,    79,    84,    88,    89,
      93,    94,    97,    98,   103,   110,   113,   115,   117,   119,
     121,   128,   133,   134,   140,   150,   154,   157,   159,   163,
     167,   171,   175,   179,   183,   187,   191,   195,   198,   201,
     203,   207,   209,   213,   215,   217,   219,   222,   228,   233,
     240,   242,   243,   247,   249
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    44,    45,    -1,    45,    -1,
      72,     8,    46,    49,     9,    -1,    72,    40,    72,     8,
      46,    49,     9,    -1,    46,    47,    -1,    -1,    51,    48,
       5,    -1,    72,    -1,    50,    49,    -1,    -1,    72,    10,
      53,    11,    12,    52,     8,    55,     9,    -1,    38,    -1,
      72,    -1,    39,    -1,    51,    -1,    33,    -1,    72,     6,
      51,    54,    -1,    -1,     7,    72,     6,    51,    54,    -1,
      -1,    56,    60,    59,    -1,    56,    57,    -1,    -1,    51,
      72,    58,     5,    -1,     7,    72,    58,    -1,    -1,    13,
      68,     5,    -1,    -1,    61,    60,    -1,    -1,    72,    14,
      68,     5,    -1,    72,    35,    72,    14,    68,     5,    -1,
      69,     5,    -1,    62,    -1,    64,    -1,    65,    -1,    66,
      -1,    15,    68,     8,    67,     9,    63,    -1,    16,     8,
      67,     9,    -1,    -1,    17,    68,     8,    67,     9,    -1,
      18,     8,    67,     9,    19,    10,    68,    11,     5,    -1,
      20,    68,     5,    -1,    67,    61,    -1,    61,    -1,    68,
      21,    68,    -1,    68,    22,    68,    -1,    68,    23,    68,
      -1,    68,    24,    68,    -1,    68,    25,    68,    -1,    68,
      26,    68,    -1,    68,    27,    68,    -1,    68,    28,    68,
      -1,    68,    29,    68,    -1,    30,    68,    -1,    22,    68,
      -1,    72,    -1,    72,    35,    72,    -1,    69,    -1,    10,
      68,    11,    -1,    36,    -1,     3,    -1,     4,    -1,    31,
      72,    -1,    31,    72,    10,    70,    11,    -1,    72,    10,
      70,    11,    -1,    72,    35,    72,    10,    70,    11,    -1,
      71,    -1,    -1,    71,     7,    68,    -1,    68,    -1,    37,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    74,    75,    78,    79,    82,    83,    86,
      89,    92,    93,    96,    99,   100,   101,   104,   105,   108,
     109,   112,   113,   124,   127,   128,   131,   134,   135,   138,
     139,   142,   143,   146,   147,   148,   149,   150,   151,   152,
     155,   158,   159,   162,   165,   168,   171,   172,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   197,   198,
     201,   202,   205,   206,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_TRUE", "T_FALSE", "T_SEMICOLON",
  "T_COLON", "T_COMMA", "T_OPENBRACKET", "T_CLOSEBRACKET", "T_OPENPAREN",
  "T_CLOSEPAREN", "T_ARROW", "T_RETURN", "T_EQUAL", "T_IF", "T_ELSE",
  "T_WHILE", "T_REPEAT", "T_UNTIL", "T_PRINT", "T_PLUS", "T_MINUS",
  "T_MULTIPLY", "T_DIVIDE", "T_LESSTHAN", "T_LESSEQUALTO", "T_EQUALS",
  "T_AND", "T_OR", "T_NOT", "T_NEW", "T_BEGINCOMMENT", "T_NONE",
  "T_ENDCOMMENT", "T_PERIOD", "T_NUMBER", "T_IDEN", "T_INTEGER",
  "T_BOOLEAN", "T_EXTENDS", "T_NEG", "$accept", "Start", "Class", "Class1",
  "Membrs", "Membr", "Ident", "Mthds", "Mthd", "Type", "ReturnType",
  "Params", "Param", "Body", "Decls", "Decl", "Ids", "Rtrn", "Stmts",
  "Stmt", "If", "Else", "While", "Repeat", "Print", "Block", "Exp",
  "Method", "Arg", "Arg1", "Iden", YY_NULL
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      48,    49,    49,    50,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    56,    56,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      62,    63,    63,    64,    65,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     7,     2,     0,     3,
       1,     2,     0,     9,     1,     1,     1,     1,     1,     4,
       0,     5,     0,     3,     2,     0,     4,     3,     0,     3,
       0,     2,     0,     4,     6,     2,     1,     1,     1,     1,
       6,     4,     0,     5,     9,     3,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     5,     4,     6,
       1,     0,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    74,     0,     2,     4,     0,     1,     3,     8,     0,
      12,     0,    14,    16,     7,     0,    12,     0,    15,     8,
       5,    11,     0,     0,    10,    20,    12,     9,     0,     0,
       0,     0,     0,     6,     0,    22,    15,    18,    17,     0,
       0,    19,    25,     0,     0,    32,     0,    13,     0,     0,
       0,     0,     0,    24,    30,    32,    36,    37,    38,    39,
       0,    15,    22,    64,    65,     0,     0,     0,     0,    63,
       0,    61,    59,     0,     0,     0,    28,     0,    23,    31,
       0,    35,    71,     0,     0,    21,     0,    58,    57,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,    45,     0,     0,     0,    73,     0,
      70,     0,     0,    62,    71,     0,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    60,     0,     0,    46,    28,
      26,    29,    68,     0,    33,    71,     0,     0,    42,    43,
       0,    27,    72,     0,     0,    67,     0,    40,     0,    69,
      34,     0,     0,     0,     0,    41,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    14,    23,    15,    16,    17,
      39,    28,    41,    44,    45,    53,   106,    78,    54,   102,
      56,   147,    57,    58,    59,   103,   108,    71,   109,   110,
      72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int16 yypact[] =
{
     -30,  -109,    13,   -30,  -109,    -3,  -109,  -109,  -109,   -30,
     -17,    30,  -109,  -109,  -109,    19,   -30,   -30,    31,  -109,
    -109,  -109,    31,    38,  -109,   -30,   -17,  -109,    42,    43,
      45,    50,   -17,  -109,    83,    54,  -109,  -109,  -109,    55,
     -30,  -109,  -109,    67,    66,    49,   -17,  -109,    20,    20,
      69,    20,   -30,  -109,    76,   202,  -109,  -109,  -109,  -109,
      75,     4,    54,  -109,  -109,    20,    20,    20,   -30,  -109,
     219,  -109,    -2,   241,   202,   143,    78,    20,  -109,  -109,
       4,  -109,    20,    20,   -30,  -109,   250,  -109,  -109,    81,
     202,    20,    20,    20,    20,    20,    20,    20,    20,    20,
     -30,   202,  -109,    61,  -109,   -30,    87,   175,   229,    82,
      89,   184,    34,  -109,    20,   110,    12,    12,  -109,  -109,
     111,   111,   111,   278,   260,    92,   137,    80,  -109,    78,
    -109,  -109,  -109,    20,  -109,    20,    20,    96,    98,  -109,
     114,  -109,   229,   120,   209,  -109,   128,  -109,    20,  -109,
    -109,   202,   269,   141,   144,  -109,  -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,   157,   154,  -109,  -109,     3,  -109,    72,
    -109,  -109,   100,  -109,  -109,  -109,    47,  -109,   108,   -44,
    -109,  -109,  -109,  -109,  -109,   -86,    46,   -43,  -108,  -109,
       0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    55,    60,     5,   115,     8,   137,     1,    82,    11,
      18,    55,    60,     6,    82,   126,    22,    24,    83,    21,
       1,    12,    13,    63,    64,    29,    18,   143,    20,    30,
      65,    60,    36,   100,    36,    93,    94,     9,    19,    84,
      43,    25,    66,    27,   135,    61,    36,    60,   136,    32,
      67,    68,    76,    31,    33,    80,    69,     1,    60,   128,
      60,    40,    34,    42,    48,   153,    49,    50,    89,    51,
     127,   128,    60,    46,    80,    47,    48,    74,    49,    50,
      81,    51,   128,    60,   112,   105,     1,    12,    13,    77,
      80,   114,   130,   132,    70,    73,   133,    75,     1,   140,
     125,    80,   135,    80,    35,   129,    38,   145,    60,   128,
      60,    86,    87,    88,   146,    80,    37,    52,    62,   138,
       1,    12,    13,   107,   148,    48,    80,    49,    50,   111,
      51,   149,    91,    92,    93,    94,   151,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   139,     1,   104,   156,
     155,    80,    48,    80,    49,    50,    48,    51,    49,    50,
       7,    51,    85,    79,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    26,     1,     0,   141,     0,     1,   142,
     131,     0,   144,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,   152,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   150,     0,     0,    48,     0,    49,
      50,     0,    51,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   101,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,   113,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     154,    91,    92,    93,    94,    95,    96,    97,    98,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    91,
      92,    93,    94,    95,    96,    97
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    45,    45,     3,    90,     8,   114,    37,    10,     9,
      10,    55,    55,     0,    10,   101,    16,    17,    14,    16,
      37,    38,    39,     3,     4,    25,    26,   135,     9,    26,
      10,    74,    32,    35,    34,    23,    24,    40,     8,    35,
      40,    10,    22,     5,    10,    45,    46,    90,    14,     6,
      30,    31,    52,    11,     9,    55,    36,    37,   101,   103,
     103,     7,    12,     8,    15,   151,    17,    18,    68,    20,
       9,   115,   115,     6,    74,     9,    15,     8,    17,    18,
       5,    20,   126,   126,    84,     7,    37,    38,    39,    13,
      90,    10,     5,    11,    48,    49,     7,    51,    37,    19,
     100,   101,    10,   103,    32,   105,    34,    11,   151,   153,
     153,    65,    66,    67,    16,   115,    33,    45,    46,     9,
      37,    38,    39,    77,    10,    15,   126,    17,    18,    83,
      20,    11,    21,    22,    23,    24,     8,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     9,    37,     5,     5,
       9,   151,    15,   153,    17,    18,    15,    20,    17,    18,
       3,    20,    62,    55,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    19,    37,    -1,   129,    -1,    37,   133,
       5,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,   148,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     5,    -1,    -1,    15,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    37,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     8,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    11,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      11,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    21,
      22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    43,    44,    45,    72,     0,    45,     8,    40,
      46,    72,    38,    39,    47,    49,    50,    51,    72,     8,
       9,    49,    72,    48,    72,    10,    46,     5,    53,    72,
      49,    11,     6,     9,    12,    51,    72,    33,    51,    52,
       7,    54,     8,    72,    55,    56,     6,     9,    15,    17,
      18,    20,    51,    57,    60,    61,    62,    64,    65,    66,
      69,    72,    51,     3,     4,    10,    22,    30,    31,    36,
      68,    69,    72,    68,     8,    68,    72,    13,    59,    60,
      72,     5,    10,    14,    35,    54,    68,    68,    68,    72,
       8,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      35,     8,    61,    67,     5,     7,    58,    68,    68,    70,
      71,    68,    72,    11,    10,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    72,    67,     9,    61,    72,
       5,     5,    11,     7,     5,    10,    14,    70,     9,     9,
      19,    58,    68,    70,    68,    11,    16,    63,    10,    11,
       5,     8,    68,    67,    11,     9,     5
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
/* Line 1792 of yacc.c  */
#line 70 "parser.y"
    { (yyval.program_ptr) = new ProgramNode((yyvsp[(1) - (1)].class_list_ptr)); astRoot = (yyval.program_ptr); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    { (yyval.class_list_ptr) = (yyvsp[(1) - (2)].class_list_ptr); (yyval.class_list_ptr)->push_back((yyvsp[(2) - (2)].class_ptr)); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    { (yyval.class_list_ptr) = new std::list<ClassNode*>(); (yyval.class_list_ptr)->push_back((yyvsp[(1) - (1)].class_ptr)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    { (yyval.class_ptr) = new ClassNode((yyvsp[(1) - (5)].identifier_ptr), NULL, (yyvsp[(3) - (5)].declaration_list_ptr), (yyvsp[(4) - (5)].method_list_ptr)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 79 "parser.y"
    { (yyval.class_ptr) = new ClassNode((yyvsp[(1) - (7)].identifier_ptr), (yyvsp[(3) - (7)].identifier_ptr), (yyvsp[(5) - (7)].declaration_list_ptr), (yyvsp[(6) - (7)].method_list_ptr)); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 82 "parser.y"
    { (yyval.declaration_list_ptr) = (yyvsp[(1) - (2)].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[(2) - (2)].declaration_ptr)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 83 "parser.y"
    { (yyval.declaration_list_ptr) = new std::list<DeclarationNode*>(); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    { (yyval.declaration_ptr) = new DeclarationNode((yyvsp[(1) - (3)].type_ptr), (yyvsp[(2) - (3)].identifier_list_ptr)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 89 "parser.y"
    { (yyval.identifier_list_ptr) = new std::list<IdentifierNode*>(); (yyval.identifier_list_ptr)->push_back((yyvsp[(1) - (1)].identifier_ptr)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    { (yyval.method_list_ptr) = (yyvsp[(2) - (2)].method_list_ptr); (yyval.method_list_ptr)->push_front((yyvsp[(1) - (2)].method_ptr)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    { (yyval.method_list_ptr) = new std::list<MethodNode*>(); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 96 "parser.y"
    { (yyval.method_ptr) = new MethodNode((yyvsp[(1) - (9)].identifier_ptr), (yyvsp[(3) - (9)].parameter_list_ptr), (yyvsp[(6) - (9)].type_ptr), (yyvsp[(8) - (9)].methodbody_ptr)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 99 "parser.y"
    { (yyval.type_ptr) = new IntegerTypeNode(); /*$$ = $1;*/ }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 100 "parser.y"
    { (yyval.type_ptr) = new ObjectTypeNode((yyvsp[(1) - (1)].identifier_ptr)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 101 "parser.y"
    { (yyval.type_ptr) = new BooleanTypeNode(); /*$$ = $1;*/ }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    { (yyval.type_ptr) = (yyvsp[(1) - (1)].type_ptr); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 105 "parser.y"
    { (yyval.type_ptr) = new NoneNode(); /*$$ = $1;*/ }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    { (yyval.parameter_list_ptr) = (yyvsp[(4) - (4)].parameter_list_ptr); (yyval.parameter_list_ptr)->push_front(new ParameterNode((yyvsp[(3) - (4)].type_ptr), (yyvsp[(1) - (4)].identifier_ptr))); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    { (yyval.parameter_list_ptr) = new std::list<ParameterNode*>(); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    { (yyval.parameter_list_ptr) = (yyvsp[(5) - (5)].parameter_list_ptr); (yyval.parameter_list_ptr)->push_front(new ParameterNode((yyvsp[(4) - (5)].type_ptr), (yyvsp[(2) - (5)].identifier_ptr))); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 113 "parser.y"
    { (yyval.parameter_list_ptr) = new std::list<ParameterNode*>(); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    { (yyval.methodbody_ptr) = new MethodBodyNode((yyvsp[(1) - (3)].declaration_list_ptr), (yyvsp[(2) - (3)].statement_list_ptr), (yyvsp[(3) - (3)].returnstatement_ptr)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    { (yyval.declaration_list_ptr) = (yyvsp[(1) - (2)].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[(2) - (2)].declaration_ptr)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 128 "parser.y"
    { (yyval.declaration_list_ptr) = new std::list<DeclarationNode*>(); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    { (yyvsp[(3) - (4)].identifier_list_ptr)->push_front((yyvsp[(2) - (4)].identifier_ptr)); (yyval.declaration_ptr) = new DeclarationNode((yyvsp[(1) - (4)].type_ptr), (yyvsp[(3) - (4)].identifier_list_ptr)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 134 "parser.y"
    { (yyval.identifier_list_ptr) = (yyvsp[(3) - (3)].identifier_list_ptr); (yyval.identifier_list_ptr)->push_front((yyvsp[(2) - (3)].identifier_ptr)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    { (yyval.identifier_list_ptr) = new std::list<IdentifierNode*>(); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 138 "parser.y"
    { (yyval.returnstatement_ptr) = new ReturnStatementNode((yyvsp[(2) - (3)].expression_ptr)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    { (yyval.returnstatement_ptr) = NULL; /*$$ = new ReturnStatementNode(NULL);*/ }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 142 "parser.y"
    { (yyval.statement_list_ptr) = (yyvsp[(2) - (2)].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[(1) - (2)].statement_ptr)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 143 "parser.y"
    { (yyval.statement_list_ptr) = new std::list<StatementNode*>(); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    { (yyval.statement_ptr) = new AssignmentNode((yyvsp[(1) - (4)].identifier_ptr), NULL, (yyvsp[(3) - (4)].expression_ptr)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 147 "parser.y"
    { (yyval.statement_ptr) = new AssignmentNode((yyvsp[(1) - (6)].identifier_ptr), (yyvsp[(3) - (6)].identifier_ptr), (yyvsp[(5) - (6)].expression_ptr)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    { (yyval.statement_ptr) = new CallNode((yyvsp[(1) - (2)].methodcall_ptr)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 149 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].ifelse_ptr); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 150 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].while_ptr); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 151 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].repeat_ptr); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 152 "parser.y"
    { (yyval.statement_ptr) = (yyvsp[(1) - (1)].print_ptr); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 155 "parser.y"
    { (yyval.ifelse_ptr) = new IfElseNode((yyvsp[(2) - (6)].expression_ptr), (yyvsp[(4) - (6)].statement_list_ptr), (yyvsp[(6) - (6)].statement_list_ptr)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    { (yyval.statement_list_ptr) = (yyvsp[(3) - (4)].statement_list_ptr); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 159 "parser.y"
    { (yyval.statement_list_ptr) = NULL; /*$$ = new std::list<StatementNode*>();*/ }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 162 "parser.y"
    { (yyval.while_ptr) = new WhileNode((yyvsp[(2) - (5)].expression_ptr), (yyvsp[(4) - (5)].statement_list_ptr)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 165 "parser.y"
    { (yyval.repeat_ptr) = new RepeatNode((yyvsp[(3) - (9)].statement_list_ptr), (yyvsp[(7) - (9)].expression_ptr)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 168 "parser.y"
    { (yyval.print_ptr) = new PrintNode((yyvsp[(2) - (3)].expression_ptr)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 171 "parser.y"
    { (yyval.statement_list_ptr) = (yyvsp[(1) - (2)].statement_list_ptr); (yyval.statement_list_ptr)->push_back((yyvsp[(2) - (2)].statement_ptr)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 172 "parser.y"
    { (yyval.statement_list_ptr) = new std::list<StatementNode*>(); (yyval.statement_list_ptr)->push_front((yyvsp[(1) - (1)].statement_ptr)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 175 "parser.y"
    { (yyval.expression_ptr) = new PlusNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 176 "parser.y"
    { (yyval.expression_ptr) = new MinusNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 177 "parser.y"
    { (yyval.expression_ptr) = new TimesNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 178 "parser.y"
    { (yyval.expression_ptr) = new DivideNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 179 "parser.y"
    { (yyval.expression_ptr) = new LessNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr));  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 180 "parser.y"
    { (yyval.expression_ptr) = new LessEqualNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 181 "parser.y"
    { (yyval.expression_ptr) = new EqualNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    { (yyval.expression_ptr) = new AndNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 183 "parser.y"
    { (yyval.expression_ptr) = new OrNode((yyvsp[(1) - (3)].expression_ptr), (yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 184 "parser.y"
    { (yyval.expression_ptr) = new NotNode((yyvsp[(2) - (2)].expression_ptr)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 185 "parser.y"
    { (yyval.expression_ptr) = new NegationNode((yyvsp[(2) - (2)].expression_ptr)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 186 "parser.y"
    { (yyval.expression_ptr) = new VariableNode((yyvsp[(1) - (1)].identifier_ptr)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 187 "parser.y"
    { (yyval.expression_ptr) = new MemberAccessNode((yyvsp[(1) - (3)].identifier_ptr), (yyvsp[(3) - (3)].identifier_ptr)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    { (yyval.expression_ptr) = (yyvsp[(1) - (1)].methodcall_ptr); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 189 "parser.y"
    { (yyval.expression_ptr) = (yyvsp[(2) - (3)].expression_ptr); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 190 "parser.y"
    { (yyval.expression_ptr) = new IntegerLiteralNode(new IntegerNode(yylval.base_int)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 191 "parser.y"
    { (yyval.expression_ptr) = new BooleanLiteralNode(new IntegerNode(1)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 192 "parser.y"
    { (yyval.expression_ptr) = new BooleanLiteralNode(new IntegerNode(0)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 193 "parser.y"
    { (yyval.expression_ptr) = new NewNode((yyvsp[(2) - (2)].identifier_ptr), NULL); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 194 "parser.y"
    { (yyval.expression_ptr) = new NewNode((yyvsp[(2) - (5)].identifier_ptr), (yyvsp[(4) - (5)].expression_list_ptr)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 197 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode((yyvsp[(1) - (4)].identifier_ptr), NULL, (yyvsp[(3) - (4)].expression_list_ptr)); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 198 "parser.y"
    { (yyval.methodcall_ptr) = new MethodCallNode((yyvsp[(1) - (6)].identifier_ptr), (yyvsp[(3) - (6)].identifier_ptr), (yyvsp[(5) - (6)].expression_list_ptr)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 201 "parser.y"
    { (yyval.expression_list_ptr) = (yyvsp[(1) - (1)].expression_list_ptr); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 202 "parser.y"
    { (yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 205 "parser.y"
    { (yyval.expression_list_ptr) = (yyvsp[(1) - (3)].expression_list_ptr); (yyval.expression_list_ptr)->push_back((yyvsp[(3) - (3)].expression_ptr)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 206 "parser.y"
    { (yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); (yyval.expression_list_ptr)->push_back((yyvsp[(1) - (1)].expression_ptr)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 209 "parser.y"
    { (yyval.identifier_ptr) = new IdentifierNode((yyvsp[(1) - (1)].base_char_ptr)); }
    break;


/* Line 1792 of yacc.c  */
#line 1983 "parser.cpp"
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


/* Line 2055 of yacc.c  */
#line 211 "parser.y"


extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(1);
}
