/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */

#line 76 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    BOOL = 259,
    FLOAT = 260,
    DOUBLE = 261,
    STRING = 262,
    CONST = 263,
    VOID = 264,
    END = 265,
    LESS_THAN_ELSE = 266,
    KW_ELSE = 267,
    ARITHMETIC_PARENTHESES = 268,
    LOWER_THEN_ARITHMETIC_PARENTHESES = 269,
    OP_OR = 270,
    OP_AND = 271,
    OP_NOT = 272,
    OP_LT = 273,
    OP_LE = 274,
    OP_EQ = 275,
    OP_GE = 276,
    OP_GT = 277,
    OP_NE = 278,
    KW_RETURN = 279,
    KW_BREAK = 280,
    KW_CONTINUE = 281,
    KW_FOR = 282,
    KW_WHILE = 283,
    KW_DO = 284,
    KW_IF = 285,
    SEMICOLON = 286,
    ID = 287,
    ASSIGN = 288,
    COMMA = 289,
    KW_PRINT = 290,
    KW_READ = 291,
    INTEGER_CONSTANT = 292,
    FLOATING_CONSTANT = 293,
    BOOLEAN_CONSTANT = 294,
    STRING_CONSTANT = 295
  };
#endif
/* Tokens.  */
#define INT 258
#define BOOL 259
#define FLOAT 260
#define DOUBLE 261
#define STRING 262
#define CONST 263
#define VOID 264
#define END 265
#define LESS_THAN_ELSE 266
#define KW_ELSE 267
#define ARITHMETIC_PARENTHESES 268
#define LOWER_THEN_ARITHMETIC_PARENTHESES 269
#define OP_OR 270
#define OP_AND 271
#define OP_NOT 272
#define OP_LT 273
#define OP_LE 274
#define OP_EQ 275
#define OP_GE 276
#define OP_GT 277
#define OP_NE 278
#define KW_RETURN 279
#define KW_BREAK 280
#define KW_CONTINUE 281
#define KW_FOR 282
#define KW_WHILE 283
#define KW_DO 284
#define KW_IF 285
#define SEMICOLON 286
#define ID 287
#define ASSIGN 288
#define COMMA 289
#define KW_PRINT 290
#define KW_READ 291
#define INTEGER_CONSTANT 292
#define FLOATING_CONSTANT 293
#define BOOLEAN_CONSTANT 294
#define STRING_CONSTANT 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    30,     2,     2,
      15,    16,    28,    26,     2,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      17,    18,    19,    20,    21,    22,    23,    24,    25,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    72,    73,    74,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    90,    91,
      92,    93,    94,    98,    99,   103,   104,   107,   108,   109,
     121,   127,   128,   130,   135,   138,   139,   142,   143,   147,
     148,   149,   150,   155,   155,   159,   159,   163,   164,   165,
     166,   170,   170,   174,   174,   178,   179,   182,   182,   183,
     183,   186,   187,   191,   193,   194,   197,   198,   201,   202,
     205,   206,   209,   210,   215,   216,   217,   218,   219,   220,
     221,   225,   226,   230,   233,   238,   239,   244,   247,   248,
     249,   252,   253,   257,   258,   259,   263,   264,   265,   268,
     269,   272,   273,   275,   279,   282,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   311,   311,   314,   315,   319,
     320
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "BOOL", "FLOAT", "DOUBLE",
  "STRING", "CONST", "VOID", "END", "LESS_THAN_ELSE", "KW_ELSE",
  "ARITHMETIC_PARENTHESES", "LOWER_THEN_ARITHMETIC_PARENTHESES", "'('",
  "')'", "OP_OR", "OP_AND", "OP_NOT", "OP_LT", "OP_LE", "OP_EQ", "OP_GE",
  "OP_GT", "OP_NE", "'+'", "'-'", "'*'", "'/'", "'%'", "KW_RETURN",
  "KW_BREAK", "KW_CONTINUE", "KW_FOR", "KW_WHILE", "KW_DO", "KW_IF",
  "SEMICOLON", "ID", "ASSIGN", "COMMA", "KW_PRINT", "KW_READ",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "BOOLEAN_CONSTANT",
  "STRING_CONSTANT", "'{'", "'}'", "'['", "']'", "$accept", "program",
  "decl_and_def_list", "declaration_list", "var_decl", "type",
  "identifier", "var_list", "var_entry", "scalar_id", "array_indice",
  "single_array_indice", "const_decl", "const_list", "single_const",
  "literal_constant", "funct_decl", "$@1", "proc_decl", "$@2",
  "definition_list", "funct_def", "$@3", "proc_def", "$@4", "args",
  "single_arg", "$@5", "$@6", "arg_list", "compound_stat",
  "local_decl_list", "var_decl_list", "var_decl_entry",
  "zero_or_more_stat_list", "stat_list", "stat", "if_stat", "if_only_stat",
  "if_else_stat", "while_stat", "for_stat", "for_expr",
  "one_or_more_for_assignment", "jump_stat", "simple_stat", "var_ref",
  "intexpr_array_indice", "intexpr_single_array_indice", "int_expr",
  "bool_expr", "expr", "funct_call", "$@7", "zero_or_more_expr_list",
  "expr_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    40,    41,   270,   271,   272,
     273,   274,   275,   276,   277,   278,    43,    45,    42,    47,
      37,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   123,   125,
      91,    93
};
# endif

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -126

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-126)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     166,  -183,  -183,  -183,  -183,  -183,   198,   -26,    24,   166,
    -183,   -26,  -183,  -183,  -183,  -183,  -183,   -26,  -183,    12,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   -10,   -11,
       1,   166,   166,    -9,    33,    -5,   159,   166,   166,  -183,
     -26,   159,    76,    36,    -1,    37,  -183,  -183,  -183,  -183,
      84,  -183,   -26,   198,  -183,    73,    49,  -183,  -183,   -21,
      77,    76,    76,    76,  -183,  -183,  -183,  -183,     3,  -183,
    -183,   264,  -183,    41,    48,  -183,   -26,   -26,  -183,  -183,
     181,  -183,  -183,  -183,   -26,    50,   159,    56,   250,   288,
    -183,    76,  -183,    55,    95,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,  -183,    76,
      59,   102,  -183,   -26,  -183,    37,    80,    71,  -183,    86,
      71,  -183,    74,   264,  -183,    76,   277,   288,   299,   299,
     299,   299,   299,   299,    72,    72,  -183,  -183,  -183,   264,
      83,    93,   159,   159,  -183,  -183,  -183,   177,  -183,  -183,
    -183,  -183,   121,  -183,    76,   124,   126,  -183,   -26,  -183,
     221,  -183,   177,  -183,   264,  -183,  -183,    76,   106,   108,
     132,   134,    71,   135,    76,   -26,  -183,   103,   221,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,   114,   138,  -183,
     170,  -183,  -183,    76,    76,   143,    76,   194,    55,   148,
    -183,  -183,    76,  -183,  -183,   168,   118,   167,   264,   193,
     264,   214,   197,  -183,  -183,   213,    76,   -26,    76,    71,
      76,    71,  -183,   206,   205,   264,  -183,   230,   235,    76,
      76,   210,    71,   233,   264,  -183,  -183,   202,   221,   212,
    -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    18,    19,    21,    20,    22,     0,     0,     0,     0,
      14,     0,    13,    15,    16,     8,     8,     0,    30,     0,
       1,    10,     9,    11,    12,     8,     8,    27,     0,    25,
      23,     5,     4,     0,     0,    35,    56,     2,     3,    17,
       0,    56,     0,     0,    24,    32,     6,     7,    49,    50,
       0,    34,     0,     0,    57,     0,    62,    55,    26,    23,
       0,     0,     0,     0,    39,    40,    41,    42,    99,   122,
     124,    28,   123,     0,     0,    31,     0,     0,    47,    48,
       0,    37,    36,    59,     0,    45,     0,    43,     0,   121,
     111,     0,   100,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,   128,
      23,     0,    38,     0,    58,    23,     0,     0,    61,     0,
       0,   112,     0,   104,   101,   128,   120,   119,   113,   114,
     118,   116,   115,   117,   106,   107,   108,   109,   110,   129,
       0,   127,    56,    56,    60,    24,    46,    65,    54,    44,
      52,   103,     0,    29,     0,     0,     0,    68,     0,    69,
      71,    64,    67,   126,   130,    43,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    70,    73,
      76,    81,    82,    77,    78,    79,    75,     0,     0,    66,
       0,    94,    95,    90,     0,     0,     0,     0,    99,     0,
      63,    72,     0,    80,    93,     0,    89,   124,    88,     0,
     105,     0,     0,    97,    98,     0,    90,     0,     0,     0,
       0,     0,    96,     0,     0,    91,    85,     0,    83,    90,
       0,     0,     0,     0,    92,    86,    84,     0,    71,     0,
      87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,    60,   259,    -6,    -4,   -32,   222,  -183,    -7,
     -37,  -183,    -2,   231,  -183,   -33,     0,  -183,     2,  -183,
    -183,    25,  -183,    26,  -183,   -35,  -183,  -183,  -183,   179,
    -105,  -183,   169,  -183,    58,  -183,   152,  -183,  -183,  -183,
    -183,  -183,  -141,  -183,  -183,  -183,   -81,   239,  -183,  -183,
    -182,   -41,  -155,  -183,   208,  -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    31,    46,    10,    11,    27,    28,    29,    68,
      44,    45,    12,    34,    35,    69,    13,   119,    14,   116,
      47,    48,   120,    49,   117,    55,    56,    84,   113,    57,
     176,   160,   161,   162,   177,   178,   179,   180,   181,   182,
     183,   184,   205,   206,   185,   186,    70,    92,    93,   122,
     209,   208,    72,    94,   140,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    71,    17,    21,    30,   188,    60,    22,    75,    23,
      33,    24,   148,    18,   212,   150,    41,    81,  -125,    42,
      88,    89,    90,   188,    20,    15,    16,    36,    39,    43,
      40,    50,    54,    59,    25,    26,    52,    54,   227,    74,
      21,    42,    76,    77,    22,    33,    23,   112,    24,    83,
     123,    43,   114,    91,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   195,   139,   110,
     111,    51,    78,    79,   142,   223,    32,   115,   145,   187,
      73,   144,    54,   188,   139,    37,    38,    43,   233,    85,
      86,    61,   108,    87,   199,    62,   109,   187,   -53,    42,
     105,   106,   107,    63,   -51,    91,   115,   155,   156,    43,
     125,    80,   207,   164,   226,    18,   228,   143,   146,   147,
      64,    65,    66,    67,   149,   151,   190,   236,    64,    65,
      66,    67,   153,   197,   154,   207,   224,   163,    54,    54,
     165,   157,   166,   158,   191,   159,   192,   193,   207,   194,
     196,    59,   200,   210,   202,   210,   157,   187,   158,   217,
     159,   215,     1,     2,     3,     4,     5,    53,   198,     1,
       2,     3,     4,     5,     6,     7,   203,   225,   211,   210,
       1,     2,     3,     4,     5,     6,   214,    95,    96,   234,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,     1,     2,     3,     4,     5,   216,   218,   204,   219,
     198,    95,    96,   221,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    64,    65,    66,    67,   220,
      95,    96,   213,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   229,   230,   231,   232,   235,   237,
     238,   222,   167,   168,   169,   170,   171,   172,   173,     9,
      18,   240,    58,   174,   175,   118,   121,    95,    96,   147,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    95,    96,    82,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    96,   239,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,  -126,
    -126,  -126,  -126,  -126,  -126,   103,   104,   105,   106,   107,
     201,   189,   124,   152
};

static const yytype_uint8 yycheck[] =
{
       7,    42,     6,     9,    11,   160,    41,     9,    45,     9,
      17,     9,   117,    39,   196,   120,    15,    50,    15,    40,
      61,    62,    63,   178,     0,     0,     0,    15,    38,    50,
      41,    40,    36,    40,     9,     9,    41,    41,   220,    40,
      46,    40,    46,    47,    46,    52,    46,    80,    46,    53,
      91,    50,    84,    50,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   172,   109,    76,
      77,    38,    47,    47,    15,   216,    16,    84,   115,   160,
      44,   113,    86,   238,   125,    25,    26,    50,   229,    16,
      41,    15,    51,    16,   175,    19,    48,   178,    48,    40,
      28,    29,    30,    27,    48,    50,   113,   142,   143,    50,
      15,    27,   193,   154,   219,    39,   221,    15,    38,    48,
      44,    45,    46,    47,    38,    51,   167,   232,    44,    45,
      46,    47,    49,   174,    41,   216,   217,    16,   142,   143,
      16,   147,    16,   147,    38,   147,    38,    15,   229,    15,
      15,   158,    49,   194,    40,   196,   162,   238,   162,    41,
     162,   202,     3,     4,     5,     6,     7,     8,   175,     3,
       4,     5,     6,     7,     8,     9,    38,   218,    35,   220,
       3,     4,     5,     6,     7,     8,    38,    17,    18,   230,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,     4,     5,     6,     7,    38,    40,    38,    16,
     217,    17,    18,    16,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    44,    45,    46,    47,    15,
      17,    18,    38,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    38,    40,    16,    12,    38,    16,
      48,    38,    31,    32,    33,    34,    35,    36,    37,     0,
      39,    49,    40,    42,    43,    86,    16,    17,    18,    48,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,    52,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    18,   238,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     178,   162,    93,   125
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    53,    55,
      56,    57,    64,    68,    70,    73,    75,    57,    39,    61,
       0,    56,    64,    68,    70,    73,    75,    58,    59,    60,
      61,    54,    54,    61,    65,    66,    15,    54,    54,    38,
      41,    15,    40,    50,    62,    63,    55,    72,    73,    75,
      40,    38,    41,     8,    57,    77,    78,    81,    59,    61,
      77,    15,    19,    27,    44,    45,    46,    47,    61,    67,
      98,   103,   104,    44,    40,    62,    57,    57,    73,    75,
      27,    67,    65,    57,    79,    16,    41,    16,   103,   103,
     103,    50,    99,   100,   105,    17,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    51,    48,
      61,    61,    67,    80,    58,    61,    71,    76,    81,    69,
      74,    16,   101,   103,    99,    15,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     106,   107,    15,    15,    58,    62,    38,    48,    82,    38,
      82,    51,   106,    49,    41,    77,    77,    56,    57,    64,
      83,    84,    85,    16,   103,    16,    16,    31,    32,    33,
      34,    35,    36,    37,    42,    43,    82,    86,    87,    88,
      89,    90,    91,    92,    93,    96,    97,    98,   104,    84,
     103,    38,    38,    15,    15,    82,    15,   103,    61,    98,
      49,    88,    40,    38,    38,    94,    95,    98,   103,   102,
     103,    35,   102,    38,    38,   103,    38,    41,    40,    16,
      15,    16,    38,    94,    98,   103,    82,   102,    82,    38,
      40,    16,    12,    94,   103,    38,    82,    16,    48,    86,
      49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    60,    60,    60,
      61,    62,    62,    63,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    69,    68,    71,    70,    72,    72,    72,
      72,    74,    73,    76,    75,    77,    77,    79,    78,    80,
      78,    81,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    91,    92,    92,    93,    94,    94,
      94,    95,    95,    96,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   101,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   105,   104,   106,   106,   107,
     107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     2,     2,     0,     2,
       2,     2,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     6,
       1,     2,     1,     3,     4,     1,     3,     3,     4,     1,
       1,     1,     1,     0,     7,     0,     7,     2,     2,     1,
       1,     0,     7,     0,     7,     1,     0,     0,     3,     0,
       4,     3,     1,     4,     1,     0,     2,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     5,     7,     5,     7,    11,     1,     1,
       0,     3,     5,     3,     2,     2,     4,     3,     3,     1,
       2,     2,     1,     3,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     0,     5,     1,     0,     1,
       3
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
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to program\n");}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to program\n");}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("Reduce list&declare to list\n");}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "parser.y" /* yacc.c:1646  */
    {printf("Reduce list&define to list\n");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("Reduce decl_list&const to decl_list\n");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("Reduce decl_list&variable to decl_list\n");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("Reduce decl_list&function to decl_list\n");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("Reduce decl_list&function to decl_list\n");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 81 "parser.y" /* yacc.c:1646  */
    {printf("Reduce const to decl_list\n");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("Reduce variable to decl_list\n");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("Reduce function to decl_list\n");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("Reduce prodecure to decl_list\n");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("Reduce type id SEMI to variable_declare\n");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("Reduce INT to type\n");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 91 "parser.y" /* yacc.c:1646  */
    {printf("Reduce BOOL to type\n");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "parser.y" /* yacc.c:1646  */
    {printf("Reduce DOUBLE to type\n");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("Reduce FLOAT to type\n");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("Reduce STRING to type\n");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("Reduce scalar_id to identifier \n");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("Reduce Array to identifier \n");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("Reduce singe_array to array\n");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("Reduce singe to array\n");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to single indice\n");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("Reduce CONST type identifier SEMI to const_decl\n");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("funct_decl seen ()\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("Reduce  to funct_decl \n");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("proc_decl seen ()\n");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to proc_decl \n");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("Reduce def_list&funct_def to def_list \n");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("Reduce def_list&proc_def to def_list \n");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("Reduce NORMAL funct_def to def_list \n");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("Reduce proc_def to def_list \n");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("funct_def seen ()\n");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to funct_def \n");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("proc_def seen ()\n");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to proc_def \n");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("seen arg type\n");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to single_arg\n");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("seen const arg type\n");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to const single_arg\n");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("Reduce single_arg,arg_list to arg_list\n");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("Reduce single_arg to arg_list\n");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to compund stat\n");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("Reduce if-only to if\n");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("Reduce if-else to if\n");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("Reduce n-while to while\n");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("Reduce do-while to while\n");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("Redce to for\n");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("Reduce  to simple_stat\n");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("int:Reduce singe_array to array\n");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("int:Reduce singe to array\n");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("int:Reduce to single indice\n");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 291 "parser.y" /* yacc.c:1646  */
    {printf("Reduce with negation operator\n");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("Func call see ()\n");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 311 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to function call\n");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("Reduce to expr list\n");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1822 "y.tab.c" /* yacc.c:1646  */
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
#line 324 "parser.y" /* yacc.c:1906  */


int yyerror( char *msg )
{
  fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
	fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
	fprintf( stderr, "|\n" );
	fprintf( stderr, "| Unmatched token: %s\n", yytext );
  fprintf( stderr, "|--------------------------------------------------------------------------\n" );
  exit(-1);
}

int  main( int argc, char **argv )
{
	if( argc != 2 ) {
		fprintf(  stdout,  "Usage:  ./parser  [filename]\n"  );
		exit(0);
	}

	FILE *fp = fopen( argv[1], "r" );
	
	if( fp == NULL )  {
		fprintf( stdout, "Open  file  error\n" );
		exit(-1);
	}
	
	yyin = fp;
	yyparse();

	fprintf( stdout, "\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	fprintf( stdout, "|  There is no syntactic error!  |\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	exit(0);
}

