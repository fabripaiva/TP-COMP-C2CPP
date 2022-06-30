/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "traductor.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<time.h>
	#define MAX_NAME_LEN 32
	#define MAX_VARIABLES 32
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int bracket_counter=0;
	int expn_type = -1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tab_counter = 0;
	int func_bandera = 0;
	char for_var[MAX_NAME_LEN];
	struct simbolRec
{
	char *name;			
	char *type;			
	int function;
	struct simbolRec *next;		
};

typedef struct simbolRec simbolRec;

extern simbolRec *simbolTable;
	// Declaro e inicializo explícitamente
	struct symbol_table{char var_name[MAX_NAME_LEN]; int type;} sym[MAX_VARIABLES];
	extern int lookup_in_table(char var[MAX_NAME_LEN]);
	extern void insert_to_table(char var[MAX_NAME_LEN], int type);
	extern void print_tabs(); //Funcion interna para imprimir las tablas 
	char var_list[MAX_VARIABLES][MAX_NAME_LEN];	// MAX_VARIABLES variable names with each variable being atmost MAX_NAME_LEN characters long
	int string_or_var[MAX_VARIABLES];
	//extern int *yytext;

	// functions
	void print_init(){
		time_t t = time(NULL);
  		struct tm now = *localtime(&t); // Inicializa la hora
		char *autores = "Fabrizio Paiva - Marcelo Baez";

		printf("/*\n*\t===================================================================\n");
		printf("*\tTraductor de lenguaje \"C\" a \"C++\"\n");
		printf("*\tAutores: %s\n", autores);
		printf("*\tTranducido: %d-%02d-%02d %02d:%02d:%02d \n", now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec);
		printf("*\t===================================================================\n*/\n\n");
		printf("#include <iostream>\n#include <string>\n\nusing namespace std;\n\n");
	}


#line 125 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    VAR = 258,
    LAND = 259,
    LOR = 260,
    GEQ = 261,
    LEQ = 262,
    NOT = 263,
    GT = 264,
    LT = 265,
    NEQ = 266,
    DEQ = 267,
    PLUS = 268,
    MINUS = 269,
    MUL = 270,
    DIV = 271,
    MOD = 272,
    ASSIGNMENT = 273,
    EX = 274,
    MAIN_FUNC = 275,
    IF = 276,
    ELSE = 277,
    ELSEIF = 278,
    WHILE = 279,
    FOR = 280,
    CLASS = 281,
    STATIC = 282,
    PUBLIC = 283,
    PRIVATE = 284,
    VOID = 285,
    PRINTF = 286,
    NEW = 287,
    DO = 288,
    BREAK = 289,
    RETURN = 290,
    BOOL_VAL = 291,
    NUMBER = 292,
    QUOTED_STRING = 293,
    QUOTED_CHAR = 294,
    LP = 295,
    RP = 296,
    LC = 297,
    RC = 298,
    LB = 299,
    RB = 300,
    COMA = 301,
    SEMICOLON = 302,
    COLON = 303,
    QM = 304,
    SQ = 305,
    DQ = 306,
    COMENTARIO = 307,
    MLCOMENTARIO = 308,
    DEFINE = 309,
    STATIC_INT = 310,
    STATIC_VOID = 311,
    STATIC_CHAR = 312,
    STATIC_FLOAT = 313,
    STATIC_DOUBLE = 314,
    INT = 315,
    FLOAT = 316,
    DOUBLE = 317,
    CHAR = 318,
    BOOLEAN = 319,
    CONST = 320
  };
#endif
/* Tokens.  */
#define VAR 258
#define LAND 259
#define LOR 260
#define GEQ 261
#define LEQ 262
#define NOT 263
#define GT 264
#define LT 265
#define NEQ 266
#define DEQ 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define MOD 272
#define ASSIGNMENT 273
#define EX 274
#define MAIN_FUNC 275
#define IF 276
#define ELSE 277
#define ELSEIF 278
#define WHILE 279
#define FOR 280
#define CLASS 281
#define STATIC 282
#define PUBLIC 283
#define PRIVATE 284
#define VOID 285
#define PRINTF 286
#define NEW 287
#define DO 288
#define BREAK 289
#define RETURN 290
#define BOOL_VAL 291
#define NUMBER 292
#define QUOTED_STRING 293
#define QUOTED_CHAR 294
#define LP 295
#define RP 296
#define LC 297
#define RC 298
#define LB 299
#define RB 300
#define COMA 301
#define SEMICOLON 302
#define COLON 303
#define QM 304
#define SQ 305
#define DQ 306
#define COMENTARIO 307
#define MLCOMENTARIO 308
#define DEFINE 309
#define STATIC_INT 310
#define STATIC_VOID 311
#define STATIC_CHAR 312
#define STATIC_FLOAT 313
#define STATIC_DOUBLE 314
#define INT 315
#define FLOAT 316
#define DOUBLE 317
#define CHAR 318
#define BOOLEAN 319
#define CONST 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "traductor.y"

int data_type;
char var_name[MAX_NAME_LEN];

#line 312 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

#define YYUNDEFTOK  2
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    87,    87,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     105,   105,   109,   109,   110,   113,   116,   116,   116,   117,
     120,   120,   121,   121,   122,   122,   122,   123,   123,   123,
     123,   123,   124,   127,   127,   127,   130,   131,   131,   132,
     135,   135,   135,   135,   138,   138,   139,   139,   139,   139,
     139,   140,   143,   143,   143,   147,   147,   147,   150,   150,
     150,   151,   151,   151,   154,   155,   155,   156,   156,   157,
     160,   160,   160,   164,   165,   168,   168,   169,   170,   172,
     172,   172,   175,   179,   180,   180,   181,   185,   186,   187,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   205,
     206,   207,   210,   211,   211,   211,   214,   214,   215,   215,
     215,   215,   216,   216,   216,   217,   218,   221,   222,   223,
     224,   225,   228,   229,   230,   231,   232,   233,   236,   237,
     238,   239,   242,   243,   246,   246,   246,   246,   247,   247,
     247,   247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "LAND", "LOR", "GEQ", "LEQ",
  "NOT", "GT", "LT", "NEQ", "DEQ", "PLUS", "MINUS", "MUL", "DIV", "MOD",
  "ASSIGNMENT", "EX", "MAIN_FUNC", "IF", "ELSE", "ELSEIF", "WHILE", "FOR",
  "CLASS", "STATIC", "PUBLIC", "PRIVATE", "VOID", "PRINTF", "NEW", "DO",
  "BREAK", "RETURN", "BOOL_VAL", "NUMBER", "QUOTED_STRING", "QUOTED_CHAR",
  "LP", "RP", "LC", "RC", "LB", "RB", "COMA", "SEMICOLON", "COLON", "QM",
  "SQ", "DQ", "COMENTARIO", "MLCOMENTARIO", "DEFINE", "STATIC_INT",
  "STATIC_VOID", "STATIC_CHAR", "STATIC_FLOAT", "STATIC_DOUBLE", "INT",
  "FLOAT", "DOUBLE", "CHAR", "BOOLEAN", "CONST", "$accept", "program",
  "$@1", "$@2", "STATEMENTS", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "ST", "$@15", "RETURN_ST",
  "$@16", "BREAK_ST", "STDIO", "$@17", "$@18", "VAR_DECLARATION", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26",
  "VAR_ASSIGNATION", "$@27", "$@28", "COLON_ARRAY", "$@29", "IF_STATEMENT",
  "$@30", "$@31", "$@32", "ELSE_VARIATIONS", "$@33", "$@34", "$@35",
  "$@36", "$@37", "WHILE_LOOP", "$@38", "$@39", "FOR_LOOP", "$@40", "$@41",
  "FOR_PARAMS", "$@42", "$@43", "$@44", "$@45", "DECL_EXPR", "$@46",
  "$@47", "DO_WHILE_LOOP", "$@48", "$@49", "NUMARRAY", "HAS_ASSIGNMENT",
  "$@50", "FUNC_INI", "$@51", "$@52", "METHODS", "PARAMS", "$@53",
  "HAS_PARAMS", "EXPRESION", "$@54", "$@55", "$@56", "$@57", "$@58",
  "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67",
  "EXPRESION_ARRAY", "$@68", "$@69", "EXPRESION_ARRAY_INITIALIZE", "$@70",
  "$@71", "$@72", "$@73", "$@74", "$@75", "TYPE_NO_PRINT", "TYPE",
  "TERMINAL", "COMMENT", "CONSTAN_ALT", "$@76", "$@77", "$@78", "$@79",
  "$@80", "$@81", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF (-226)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -226,    11,   234,  -226,  -226,    -2,    62,   -22,    -1,     8,
      13,    24,     7,     1,     5,    28,    53,  -226,  -226,   155,
      12,  -226,  -226,  -226,  -226,  -226,  -226,  -226,   155,    58,
    -226,  -226,   155,    34,   155,    38,   155,    43,   155,    26,
     155,    37,  -226,   155,    41,   155,    42,  -226,   155,  -226,
      31,   155,  -226,   155,  -226,   216,    48,  -226,  -226,   216,
    -226,   -30,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,    54,  -226,  -226,  -226,  -226,   125,  -226,    90,
    -226,  -226,    78,  -226,   181,    94,  -226,    95,    88,    64,
      74,   125,   110,   110,   218,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,   285,  -226,  -226,   112,  -226,  -226,  -226,
     218,  -226,    75,    72,     2,    88,  -226,   313,    23,    80,
      82,   393,   127,    91,   128,    98,   125,   125,   125,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,   121,   129,  -226,  -226,
    -226,  -226,   105,  -226,   125,   101,    88,  -226,  -226,  -226,
    -226,  -226,   125,  -226,   103,    64,  -226,  -226,  -226,  -226,
     106,   107,   -18,   111,    88,   114,  -226,   104,   117,  -226,
     136,   346,  -226,   360,   125,   125,   125,   125,   125,   125,
     125,  -226,   125,  -226,   125,   125,   125,   125,  -226,   130,
     299,  -226,   119,   393,  -226,  -226,    64,    64,  -226,  -226,
     137,   -18,     4,  -226,  -226,  -226,   110,  -226,    88,  -226,
     142,   138,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,   140,  -226,  -226,  -226,   297,
    -226,  -226,   216,  -226,  -226,  -226,   165,   218,   218,   144,
    -226,  -226,   218,  -226,  -226,  -226,   145,  -226,  -226,   134,
     148,  -226,   141,  -226,   152,   154,  -226,   196,   157,   110,
    -226,   297,   161,  -226,  -226,  -226,  -226,  -226,   125,  -226,
    -226,   163,   167,  -226,   297,   218,     0,   393,   164,  -226,
     297,  -226,   170,   175,   182,  -226,  -226,   297,   183,  -226,
    -226,  -226,  -226,  -226,   218,   125,   297,   185,   379,  -226,
    -226,  -226,   187,  -226,   218,   188,  -226,     0,  -226
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     7,     1,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    99,     7,
       0,   167,   162,   164,   165,   163,   166,    44,     7,     0,
     172,   173,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,    36,     7,     0,     7,     0,    32,     7,   174,
       0,     7,    53,     7,     4,     0,     0,     6,    52,     0,
       8,    40,    10,    60,    12,    75,    14,    72,    16,    90,
      18,    39,     0,    20,    35,    22,    34,     0,    24,     0,
     178,    26,     0,    28,     7,     0,   100,     0,    98,    59,
       0,     0,    89,    89,     7,    37,   141,   124,   171,   168,
     170,   169,   136,     0,   140,   175,     0,    54,    31,   102,
       7,    45,    95,     0,     0,    98,    48,     0,   141,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,   110,
     112,   114,   116,   118,   120,   122,   126,   128,   130,   132,
     134,    33,     0,   179,     0,     0,    98,   157,   159,   160,
     158,   161,     0,    97,     0,    59,    41,    94,    93,    57,
       0,     0,   106,     0,    98,     0,    78,    85,     0,    85,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   138,     0,   139,     0,     0,     0,     0,   176,     0,
       0,   101,     0,    96,   144,   142,    59,    59,    43,   104,
       0,   106,     0,    61,    88,    76,    89,    81,    98,    73,
       0,     0,   137,   111,   113,   115,   117,   119,   121,   123,
     127,   129,   131,   133,   135,     0,   180,    55,    46,   156,
      58,    56,   109,    49,   103,   107,     0,     7,     7,     0,
      82,    86,     7,    91,    38,   177,     0,   152,   148,     0,
     155,   105,     0,   108,     0,     0,    79,     0,     0,    89,
     181,   156,     0,   145,   146,    50,    62,    77,     0,    83,
      74,     0,     0,   149,   156,     7,    71,    80,     0,   153,
     156,   147,     0,     0,     0,    63,    92,   156,     0,    51,
      64,    66,   154,   150,     7,     0,   156,     0,     0,   151,
      65,    67,     0,    68,     7,     0,    69,    71,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,  -226,  -226,   -19,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -130,  -226,  -226,
    -226,  -226,  -226,   -83,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
     -90,  -226,  -226,  -226,  -226,  -226,  -226,   -88,  -226,  -226,
    -226,  -226,  -226,    29,  -226,    -7,   -75,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -201,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,    -5,  -225,   217,  -226,  -226,  -226,  -226,  -226,
    -226,  -226
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    54,    55,    48,
      77,    45,    43,    72,   126,    28,    88,    89,    59,   146,
      90,   162,   252,   275,    53,    82,   144,   115,   196,    34,
      91,   237,   276,   285,   294,   295,   302,   304,   307,    38,
      93,   242,    36,    92,   238,   119,   206,   268,   240,   257,
     120,   208,   164,    40,    94,   259,   160,   113,   152,    19,
      56,   110,    84,   200,   232,   201,   121,   174,   175,   176,
     177,   178,   179,   180,   127,   182,   184,   185,   186,   187,
     128,   153,   154,   229,   249,   274,   262,   280,   296,   261,
     287,   155,   124,   104,    32,    51,    79,   142,   225,   106,
     189,   246
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    29,   103,   123,   250,   157,    46,   235,    41,    60,
     -47,     3,    21,    62,   -42,    64,   117,    66,    18,    68,
      33,    70,   283,   284,    73,   195,    75,   161,   199,    78,
      30,    31,    81,    35,    83,    44,   250,    37,    42,   158,
      47,   -87,    22,    23,    24,    25,    26,   159,   114,   250,
      85,   171,   172,   173,    87,   250,    52,    39,   192,    58,
     272,    61,   250,    20,   -87,   108,   230,   231,    69,   190,
     -87,   250,   236,   281,    63,   125,   204,   193,    65,   288,
      30,    31,    49,    67,    71,    80,   292,   122,    74,    76,
      86,   145,    21,   105,    95,   299,   107,   109,   111,   213,
     214,   215,   216,   217,   218,   219,   112,   220,   114,   221,
     222,   223,   224,   118,   116,   143,   239,  -143,    97,   156,
     241,   165,    22,    23,    24,    25,    26,    27,    96,   166,
     167,   169,   168,    97,   181,   147,   148,   149,   150,   151,
      21,   170,   188,   183,   191,   194,    98,    99,   100,   101,
     102,   197,   207,   203,   198,   -29,   205,   202,   -27,   209,
     210,    98,    99,   100,   101,   102,   228,   226,   253,   271,
      22,    23,    24,    25,    26,    -5,   -11,   263,   233,   -15,
     -13,   -29,   243,   265,   -27,   244,   -19,   245,   -17,   -21,
     -23,   256,   260,   277,   264,   266,   202,   267,   -29,   269,
     270,    -5,   -11,   273,   278,   -15,   -13,    -9,    -9,   -25,
     279,   286,   -19,   289,   -17,   -21,   -23,   290,   254,   255,
     298,   -27,   291,   258,   308,   251,   293,   202,   300,   303,
     234,   306,    50,    -9,    -9,   -25,     0,   -27,    -5,   -11,
       0,     0,   -15,   -13,     0,     0,    21,     0,     0,   -19,
       0,   -17,   -21,   -23,    -5,   -11,   282,     0,   -15,   -13,
       0,   -29,     0,     0,     0,   -19,     0,   -17,   -21,   -23,
      -9,    -9,   -25,     0,     0,   297,    22,    23,    24,    25,
      26,     0,     0,     0,     0,   305,    -9,    -9,   -25,   129,
     130,     0,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   129,   130,     0,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   129,   130,     0,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     0,   141,    98,    99,   100,   101,     0,     0,   247,
       0,     0,     0,   248,     0,     0,   227,     0,     0,     0,
     129,   130,     0,   131,   163,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   129,   130,     0,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,     0,     0,
       0,     0,     0,   129,   130,     0,   131,   211,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   129,   130,     0,
     131,   212,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     301
};

static const yytype_int16 yycheck[] =
{
      19,     6,    77,    93,   229,     3,     1,     3,     1,    28,
      40,     0,    30,    32,    44,    34,    91,    36,    20,    38,
      21,    40,    22,    23,    43,   155,    45,   115,    46,    48,
      52,    53,    51,    25,    53,    34,   261,    24,    31,    37,
      35,    18,    60,    61,    62,    63,    64,    45,    44,   274,
      55,   126,   127,   128,    59,   280,     3,    33,   146,    47,
     261,     3,   287,     1,    41,    84,   196,   197,    42,   144,
      47,   296,   202,   274,    40,    94,   164,   152,    40,   280,
      52,    53,    54,    40,    47,    54,   287,    92,    47,    47,
      42,   110,    30,     3,    40,   296,    18,     3,     3,   174,
     175,   176,   177,   178,   179,   180,    18,   182,    44,   184,
     185,   186,   187,     3,    40,     3,   206,    42,     8,    47,
     208,    41,    60,    61,    62,    63,    64,    65,     3,    47,
       3,     3,    41,     8,    13,    60,    61,    62,    63,    64,
      30,    43,    37,    14,    43,    42,    36,    37,    38,    39,
      40,    45,    48,    42,    47,     0,    42,   162,     3,    42,
      24,    36,    37,    38,    39,    40,    47,    37,     3,   259,
      60,    61,    62,    63,    64,    20,    21,    43,    41,    24,
      25,     0,    40,    42,     3,    47,    31,    47,    33,    34,
      35,    47,    47,   268,    46,    43,   201,    43,    43,     3,
      43,    20,    21,    42,    41,    24,    25,    52,    53,    54,
      43,    47,    31,    43,    33,    34,    35,    42,   237,   238,
     295,     3,    40,   242,   307,   232,    43,   232,    43,    42,
     201,    43,    15,    52,    53,    54,    -1,     3,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    30,    -1,    -1,    31,
      -1,    33,    34,    35,    20,    21,   275,    -1,    24,    25,
      -1,    43,    -1,    -1,    -1,    31,    -1,    33,    34,    35,
      52,    53,    54,    -1,    -1,   294,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,   304,    52,    53,    54,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    47,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    47,    -1,    -1,    -1,
       4,     5,    -1,     7,    41,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,    41,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     4,     5,    -1,
       7,    41,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    68,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    69,    20,   135,
       1,    30,    60,    61,    62,    63,    64,    65,    91,   168,
      52,    53,   170,    21,   105,    25,   118,    24,   115,    33,
     129,     1,    31,    88,    34,    87,     1,    35,    85,    54,
     170,   171,     3,   100,    83,    84,   136,    70,    47,    94,
      70,     3,    70,    40,    70,    40,    70,    40,    70,    42,
      70,    47,    89,    70,    47,    70,    47,    86,    70,   172,
      54,    70,   101,    70,   138,   168,    42,   168,    92,    93,
      96,   106,   119,   116,   130,    40,     3,     8,    36,    37,
      38,    39,    40,   142,   169,     3,   175,    18,    70,     3,
     137,     3,    18,   133,    44,   103,    40,   142,     3,   121,
     126,   142,   168,   126,   168,    70,    90,   150,   156,     4,
       5,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    47,   173,     3,   102,    70,    95,    60,    61,    62,
      63,    64,   134,   157,   158,   167,    47,     3,    37,    45,
     132,   133,    97,    41,   128,    41,    47,     3,    41,     3,
      43,   142,   142,   142,   143,   144,   145,   146,   147,   148,
     149,    13,   151,    14,   152,   153,   154,   155,    37,   176,
     142,    43,   133,   142,    42,   103,   104,    45,    47,    46,
     139,   141,   168,    42,   133,    42,   122,    48,   127,    42,
      24,    41,    41,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   174,    37,    47,    47,   159,
     103,   103,   140,    41,   139,     3,   103,   107,   120,   126,
     124,   133,   117,    40,    47,    47,   177,    42,    46,   160,
     169,   141,    98,     3,    70,    70,    47,   125,    70,   131,
      47,   165,   162,    43,    46,    42,    43,    43,   123,     3,
      43,   126,   160,    42,   161,    99,   108,   142,    41,    43,
     163,   160,    70,    22,    23,   109,    47,   166,   160,    43,
      42,    40,   160,    43,   110,   111,   164,    70,   142,   160,
      43,    41,   112,    42,   113,    70,    43,   114,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    69,    67,    71,    70,    72,    70,    73,
      70,    74,    70,    75,    70,    76,    70,    77,    70,    78,
      70,    79,    70,    80,    70,    81,    70,    82,    70,    70,
      84,    83,    86,    85,    85,    87,    89,    90,    88,    88,
      92,    91,    93,    91,    94,    95,    91,    96,    97,    98,
      99,    91,    91,   101,   102,   100,   103,   104,   103,   103,
     106,   107,   108,   105,   110,   109,   111,   112,   113,   114,
     109,   109,   116,   117,   115,   119,   120,   118,   122,   123,
     121,   124,   125,   121,   126,   127,   126,   128,   126,   126,
     130,   131,   129,   132,   132,   134,   133,   133,   133,   136,
     137,   135,   138,   139,   140,   139,   139,   141,   141,   141,
     143,   142,   144,   142,   145,   142,   146,   142,   147,   142,
     148,   142,   149,   142,   150,   142,   151,   142,   152,   142,
     153,   142,   154,   142,   155,   142,   156,   142,   142,   142,
     142,   142,   157,   158,   159,   157,   161,   160,   162,   163,
     164,   160,   165,   166,   160,   160,   160,   167,   167,   167,
     167,   167,   168,   168,   168,   168,   168,   168,   169,   169,
     169,   169,   170,   170,   172,   173,   174,   171,   175,   176,
     177,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       0,     3,     0,     4,     2,     2,     0,     0,     7,     2,
       0,     5,     0,     6,     0,     0,     7,     0,     0,     0,
       0,    12,     2,     0,     0,     6,     4,     0,     4,     0,
       0,     0,     0,    11,     0,     5,     0,     0,     0,     0,
      12,     0,     0,     0,     9,     0,     0,     9,     0,     0,
       7,     0,     0,     6,     1,     0,     4,     0,     3,     0,
       0,     0,    11,     1,     1,     0,     3,     2,     0,     0,
       0,     6,     2,     2,     0,     3,     0,     2,     3,     0,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     3,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     3,     3,
       1,     1,     2,     0,     0,     5,     0,     4,     0,     0,
       0,     8,     0,     0,     6,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     7,     0,     0,
       0,     8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 87 "traductor.y"
                  { print_init(); }
#line 1760 "y.tab.c"
    break;

  case 3:
#line 87 "traductor.y"
                                               { exit(0); }
#line 1766 "y.tab.c"
    break;

  case 5:
#line 90 "traductor.y"
                  { print_tabs(); }
#line 1772 "y.tab.c"
    break;

  case 6:
#line 90 "traductor.y"
                                                        { }
#line 1778 "y.tab.c"
    break;

  case 7:
#line 91 "traductor.y"
                          { print_tabs(); }
#line 1784 "y.tab.c"
    break;

  case 8:
#line 91 "traductor.y"
                                                                       { }
#line 1790 "y.tab.c"
    break;

  case 9:
#line 92 "traductor.y"
                          { print_tabs(); }
#line 1796 "y.tab.c"
    break;

  case 10:
#line 92 "traductor.y"
                                                               { }
#line 1802 "y.tab.c"
    break;

  case 11:
#line 93 "traductor.y"
                          { print_tabs(); }
#line 1808 "y.tab.c"
    break;

  case 12:
#line 93 "traductor.y"
                                                                    { }
#line 1814 "y.tab.c"
    break;

  case 13:
#line 94 "traductor.y"
                          { print_tabs(); }
#line 1820 "y.tab.c"
    break;

  case 14:
#line 94 "traductor.y"
                                                                { }
#line 1826 "y.tab.c"
    break;

  case 15:
#line 95 "traductor.y"
                          { print_tabs(); }
#line 1832 "y.tab.c"
    break;

  case 16:
#line 95 "traductor.y"
                                                                  { }
#line 1838 "y.tab.c"
    break;

  case 17:
#line 96 "traductor.y"
                          { print_tabs(); }
#line 1844 "y.tab.c"
    break;

  case 18:
#line 96 "traductor.y"
                                                                     { }
#line 1850 "y.tab.c"
    break;

  case 19:
#line 97 "traductor.y"
                          { print_tabs(); }
#line 1856 "y.tab.c"
    break;

  case 20:
#line 97 "traductor.y"
                                                             { }
#line 1862 "y.tab.c"
    break;

  case 21:
#line 98 "traductor.y"
                          { print_tabs(); }
#line 1868 "y.tab.c"
    break;

  case 22:
#line 98 "traductor.y"
                                                                { }
#line 1874 "y.tab.c"
    break;

  case 23:
#line 99 "traductor.y"
                          { print_tabs(); }
#line 1880 "y.tab.c"
    break;

  case 24:
#line 99 "traductor.y"
                                                                 { }
#line 1886 "y.tab.c"
    break;

  case 25:
#line 100 "traductor.y"
                          { print_tabs(); }
#line 1892 "y.tab.c"
    break;

  case 26:
#line 100 "traductor.y"
                                                                   { }
#line 1898 "y.tab.c"
    break;

  case 27:
#line 101 "traductor.y"
                          { print_tabs(); }
#line 1904 "y.tab.c"
    break;

  case 28:
#line 101 "traductor.y"
                                                                       { }
#line 1910 "y.tab.c"
    break;

  case 29:
#line 102 "traductor.y"
                                { }
#line 1916 "y.tab.c"
    break;

  case 30:
#line 105 "traductor.y"
          { print_tabs(); }
#line 1922 "y.tab.c"
    break;

  case 31:
#line 105 "traductor.y"
                                               { }
#line 1928 "y.tab.c"
    break;

  case 32:
#line 109 "traductor.y"
                         { printf("\n\treturn "); }
#line 1934 "y.tab.c"
    break;

  case 33:
#line 109 "traductor.y"
                                                                        { printf(";\n"); }
#line 1940 "y.tab.c"
    break;

  case 34:
#line 110 "traductor.y"
                                          { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 1946 "y.tab.c"
    break;

  case 35:
#line 113 "traductor.y"
                                   { printf("break;\n"); }
#line 1952 "y.tab.c"
    break;

  case 36:
#line 116 "traductor.y"
                 { printf("std::cout"); }
#line 1958 "y.tab.c"
    break;

  case 37:
#line 116 "traductor.y"
                                             { printf(" << "); }
#line 1964 "y.tab.c"
    break;

  case 38:
#line 116 "traductor.y"
                                                                                        { printf(";\n"); }
#line 1970 "y.tab.c"
    break;

  case 39:
#line 117 "traductor.y"
                                  { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 1976 "y.tab.c"
    break;

  case 40:
#line 120 "traductor.y"
                           { printf("%s", yylval.var_name); }
#line 1982 "y.tab.c"
    break;

  case 41:
#line 120 "traductor.y"
                                                                                       { printf(";\n"); }
#line 1988 "y.tab.c"
    break;

  case 42:
#line 121 "traductor.y"
                                           { printf("%s", yylval.var_name); }
#line 1994 "y.tab.c"
    break;

  case 43:
#line 121 "traductor.y"
                                                                                                                   { printf(";\n"); }
#line 2000 "y.tab.c"
    break;

  case 44:
#line 122 "traductor.y"
                                        { printf("const "); }
#line 2006 "y.tab.c"
    break;

  case 45:
#line 122 "traductor.y"
                                                                       { printf("%s", yylval.var_name); }
#line 2012 "y.tab.c"
    break;

  case 46:
#line 122 "traductor.y"
                                                                                                                                   { printf(";\n"); }
#line 2018 "y.tab.c"
    break;

  case 47:
#line 123 "traductor.y"
                                           { printf("%s", yylval.var_name); }
#line 2024 "y.tab.c"
    break;

  case 48:
#line 123 "traductor.y"
                                                                                 { printf("( "); }
#line 2030 "y.tab.c"
    break;

  case 49:
#line 123 "traductor.y"
                                                                                                             { printf(")"); }
#line 2036 "y.tab.c"
    break;

  case 50:
#line 123 "traductor.y"
                                                                                                                                 { tab_counter++; printf("{\n"); }
#line 2042 "y.tab.c"
    break;

  case 51:
#line 123 "traductor.y"
                                                                                                                                                                                 { printf("}\n"); tab_counter--; }
#line 2048 "y.tab.c"
    break;

  case 52:
#line 124 "traductor.y"
                                                  { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 2054 "y.tab.c"
    break;

  case 53:
#line 127 "traductor.y"
                      { printf("%s", yylval.var_name); }
#line 2060 "y.tab.c"
    break;

  case 54:
#line 127 "traductor.y"
                                                                    { printf(" = "); }
#line 2066 "y.tab.c"
    break;

  case 55:
#line 127 "traductor.y"
                                                                                                           { printf(";\n"); }
#line 2072 "y.tab.c"
    break;

  case 57:
#line 131 "traductor.y"
                                  { bracket_counter++; }
#line 2078 "y.tab.c"
    break;

  case 60:
#line 135 "traductor.y"
                        { printf("if ("); }
#line 2084 "y.tab.c"
    break;

  case 61:
#line 135 "traductor.y"
                                                            { tab_counter++; printf(") {\n"); }
#line 2090 "y.tab.c"
    break;

  case 62:
#line 135 "traductor.y"
                                                                                                              { tab_counter--; print_tabs(); printf("}"); }
#line 2096 "y.tab.c"
    break;

  case 64:
#line 138 "traductor.y"
                          { tab_counter++; printf(" else {\n"); }
#line 2102 "y.tab.c"
    break;

  case 65:
#line 138 "traductor.y"
                                                                                { tab_counter--; print_tabs(); printf("}"); }
#line 2108 "y.tab.c"
    break;

  case 66:
#line 139 "traductor.y"
                                            { printf(" else if ("); }
#line 2114 "y.tab.c"
    break;

  case 67:
#line 139 "traductor.y"
                                                                                   { printf(")"); }
#line 2120 "y.tab.c"
    break;

  case 68:
#line 139 "traductor.y"
                                                                                                       { tab_counter++; printf(") {\n"); }
#line 2126 "y.tab.c"
    break;

  case 69:
#line 139 "traductor.y"
                                                                                                                                                         { tab_counter--;print_tabs(); printf("}"); }
#line 2132 "y.tab.c"
    break;

  case 71:
#line 140 "traductor.y"
                                        { printf("\n"); }
#line 2138 "y.tab.c"
    break;

  case 72:
#line 143 "traductor.y"
                           {printf("while ("); }
#line 2144 "y.tab.c"
    break;

  case 73:
#line 143 "traductor.y"
                                                                 { tab_counter++; printf("){\n"); }
#line 2150 "y.tab.c"
    break;

  case 74:
#line 143 "traductor.y"
                                                                                                                  { tab_counter--; print_tabs(); printf("}\n"); }
#line 2156 "y.tab.c"
    break;

  case 75:
#line 147 "traductor.y"
                         { printf("for ("); }
#line 2162 "y.tab.c"
    break;

  case 76:
#line 147 "traductor.y"
                                                               { tab_counter++; printf(") {\n"); }
#line 2168 "y.tab.c"
    break;

  case 77:
#line 147 "traductor.y"
                                                                                                                 { tab_counter--; print_tabs(); printf("}\n"); }
#line 2174 "y.tab.c"
    break;

  case 78:
#line 150 "traductor.y"
                                      { printf("; "); }
#line 2180 "y.tab.c"
    break;

  case 79:
#line 150 "traductor.y"
                                                                            { printf("; "); }
#line 2186 "y.tab.c"
    break;

  case 81:
#line 151 "traductor.y"
                                         { printf("%s", yylval.var_name); }
#line 2192 "y.tab.c"
    break;

  case 82:
#line 151 "traductor.y"
                                                                            { printf(" : "); }
#line 2198 "y.tab.c"
    break;

  case 83:
#line 151 "traductor.y"
                                                                                                   { printf("%s", yylval.var_name); }
#line 2204 "y.tab.c"
    break;

  case 85:
#line 155 "traductor.y"
                                   { printf("%s", yylval.var_name); }
#line 2210 "y.tab.c"
    break;

  case 87:
#line 156 "traductor.y"
                              { printf("%s", yylval.var_name); }
#line 2216 "y.tab.c"
    break;

  case 89:
#line 157 "traductor.y"
                                 { }
#line 2222 "y.tab.c"
    break;

  case 90:
#line 160 "traductor.y"
                        { printf("do{\n"); tab_counter++;}
#line 2228 "y.tab.c"
    break;

  case 91:
#line 160 "traductor.y"
                                                                                  {tab_counter--; print_tabs(); printf("}while("); }
#line 2234 "y.tab.c"
    break;

  case 92:
#line 160 "traductor.y"
                                                                                                                                                            { printf(");"); }
#line 2240 "y.tab.c"
    break;

  case 93:
#line 164 "traductor.y"
                           { printf("[%s]", yylval.var_name); }
#line 2246 "y.tab.c"
    break;

  case 94:
#line 165 "traductor.y"
                              { printf("[%s]", yylval.var_name); }
#line 2252 "y.tab.c"
    break;

  case 95:
#line 168 "traductor.y"
                             { printf(" = "); }
#line 2258 "y.tab.c"
    break;

  case 98:
#line 170 "traductor.y"
                                                      {}
#line 2264 "y.tab.c"
    break;

  case 99:
#line 172 "traductor.y"
                            { printf("\nint main()"); }
#line 2270 "y.tab.c"
    break;

  case 100:
#line 172 "traductor.y"
                                                           { tab_counter++; printf("{\n"); }
#line 2276 "y.tab.c"
    break;

  case 101:
#line 172 "traductor.y"
                                                                                                           { printf("\n}\n"); tab_counter--; }
#line 2282 "y.tab.c"
    break;

  case 104:
#line 180 "traductor.y"
                       { printf(","); }
#line 2288 "y.tab.c"
    break;

  case 106:
#line 181 "traductor.y"
                                                { printf(" "); }
#line 2294 "y.tab.c"
    break;

  case 107:
#line 185 "traductor.y"
                           { printf("%s", yylval.var_name); }
#line 2300 "y.tab.c"
    break;

  case 108:
#line 186 "traductor.y"
                                               { for(;bracket_counter>0;bracket_counter--)printf("*");printf("%s", yylval.var_name); }
#line 2306 "y.tab.c"
    break;

  case 110:
#line 190 "traductor.y"
                                 { printf("&&"); }
#line 2312 "y.tab.c"
    break;

  case 112:
#line 191 "traductor.y"
                                        { printf("||"); }
#line 2318 "y.tab.c"
    break;

  case 114:
#line 192 "traductor.y"
                                        { printf("<="); }
#line 2324 "y.tab.c"
    break;

  case 116:
#line 193 "traductor.y"
                                       { printf(">"); }
#line 2330 "y.tab.c"
    break;

  case 118:
#line 194 "traductor.y"
                                       { printf("<"); }
#line 2336 "y.tab.c"
    break;

  case 120:
#line 195 "traductor.y"
                                        { printf("!="); }
#line 2342 "y.tab.c"
    break;

  case 122:
#line 196 "traductor.y"
                                        { printf("=="); }
#line 2348 "y.tab.c"
    break;

  case 124:
#line 197 "traductor.y"
                              { printf("!"); }
#line 2354 "y.tab.c"
    break;

  case 126:
#line 198 "traductor.y"
                                         { printf("+"); }
#line 2360 "y.tab.c"
    break;

  case 128:
#line 199 "traductor.y"
                                          { printf("-"); }
#line 2366 "y.tab.c"
    break;

  case 130:
#line 200 "traductor.y"
                                        { printf("*"); }
#line 2372 "y.tab.c"
    break;

  case 132:
#line 201 "traductor.y"
                                        { printf("/"); }
#line 2378 "y.tab.c"
    break;

  case 134:
#line 202 "traductor.y"
                                        { printf("%%"); }
#line 2384 "y.tab.c"
    break;

  case 136:
#line 203 "traductor.y"
                             { printf("("); }
#line 2390 "y.tab.c"
    break;

  case 137:
#line 203 "traductor.y"
                                                           { printf(")"); }
#line 2396 "y.tab.c"
    break;

  case 138:
#line 204 "traductor.y"
                                              { printf("++"); }
#line 2402 "y.tab.c"
    break;

  case 139:
#line 205 "traductor.y"
                                                { printf("--"); }
#line 2408 "y.tab.c"
    break;

  case 141:
#line 207 "traductor.y"
                              { printf("%s", yylval.var_name); }
#line 2414 "y.tab.c"
    break;

  case 142:
#line 210 "traductor.y"
                                            {bracket_counter=0;}
#line 2420 "y.tab.c"
    break;

  case 143:
#line 211 "traductor.y"
                                  { for(;bracket_counter>0;bracket_counter--)printf("[]"); }
#line 2426 "y.tab.c"
    break;

  case 144:
#line 211 "traductor.y"
                                                                                                { printf(" = {"); }
#line 2432 "y.tab.c"
    break;

  case 145:
#line 211 "traductor.y"
                                                                                                                                                  { printf("}"); }
#line 2438 "y.tab.c"
    break;

  case 146:
#line 214 "traductor.y"
                                                { printf(","); }
#line 2444 "y.tab.c"
    break;

  case 148:
#line 215 "traductor.y"
                                                               { printf(","); }
#line 2450 "y.tab.c"
    break;

  case 149:
#line 215 "traductor.y"
                                                                                   { printf("{"); }
#line 2456 "y.tab.c"
    break;

  case 150:
#line 215 "traductor.y"
                                                                                                                                  { printf("}"); }
#line 2462 "y.tab.c"
    break;

  case 152:
#line 216 "traductor.y"
                                                              { printf("{"); }
#line 2468 "y.tab.c"
    break;

  case 153:
#line 216 "traductor.y"
                                                                                                             { printf("}"); }
#line 2474 "y.tab.c"
    break;

  case 162:
#line 228 "traductor.y"
              { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);	printf("int "); }
#line 2480 "y.tab.c"
    break;

  case 163:
#line 229 "traductor.y"
                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("char "); }
#line 2486 "y.tab.c"
    break;

  case 164:
#line 230 "traductor.y"
                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("float "); }
#line 2492 "y.tab.c"
    break;

  case 165:
#line 231 "traductor.y"
                         { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("double "); }
#line 2498 "y.tab.c"
    break;

  case 166:
#line 232 "traductor.y"
                          { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("bool "); }
#line 2504 "y.tab.c"
    break;

  case 167:
#line 233 "traductor.y"
                       { printf("void "); }
#line 2510 "y.tab.c"
    break;

  case 168:
#line 236 "traductor.y"
                         { printf("%s", yylval.var_name); }
#line 2516 "y.tab.c"
    break;

  case 169:
#line 237 "traductor.y"
                                      { printf("%s", yylval.var_name); }
#line 2522 "y.tab.c"
    break;

  case 170:
#line 238 "traductor.y"
                                        { printf("%s", yylval.var_name); }
#line 2528 "y.tab.c"
    break;

  case 171:
#line 239 "traductor.y"
                                   { printf("%s", yylval.var_name); }
#line 2534 "y.tab.c"
    break;

  case 172:
#line 242 "traductor.y"
                                { printf("%s\n", yylval.var_name); }
#line 2540 "y.tab.c"
    break;

  case 173:
#line 243 "traductor.y"
                                        { printf("%s", yylval.var_name); }
#line 2546 "y.tab.c"
    break;

  case 174:
#line 246 "traductor.y"
                         { printf("#define ");}
#line 2552 "y.tab.c"
    break;

  case 175:
#line 246 "traductor.y"
                                                    { printf("%s ", yylval.var_name); }
#line 2558 "y.tab.c"
    break;

  case 176:
#line 246 "traductor.y"
                                                                                               { printf("%s", yylval.var_name); }
#line 2564 "y.tab.c"
    break;

  case 177:
#line 246 "traductor.y"
                                                                                                                                            { printf(";\n"); }
#line 2570 "y.tab.c"
    break;

  case 178:
#line 247 "traductor.y"
                                         { printf("#define ");}
#line 2576 "y.tab.c"
    break;

  case 179:
#line 247 "traductor.y"
                                                                    { printf("%s ", yylval.var_name); }
#line 2582 "y.tab.c"
    break;

  case 180:
#line 247 "traductor.y"
                                                                                                               { printf("%s", yylval.var_name); }
#line 2588 "y.tab.c"
    break;

  case 181:
#line 247 "traductor.y"
                                                                                                                                                            { printf(";\n"); }
#line 2594 "y.tab.c"
    break;


#line 2598 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 250 "traductor.y"


#include "lex.yy.c"
int lookup_in_table(char var[MAX_NAME_LEN])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}

void insert_to_table(char var[MAX_NAME_LEN], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

void print_tabs() {
	for(int i = 0; i < tab_counter; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Error de parseo\nLinea numero: %d => %s\n", yylineno, msg);
	success = 0;
	return 0;
}

/**void type_comprobacion(char* op1, char* op2, char operation)
{
	simbolRec* simbolRec_operando1 = getSimbol(op1);
	simbolRec* simbolRec_operando2 = getSimbol(op2);
	if(simbolRec_operando1 == NULL || simbolRec_operando2 == NULL)	
		return;

	char* type_op1 = simbolRec_operando1->type;
	char* type_op2 = simbolRec_operando2->type;
	int ban = 0;

	if(operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%')
	{
		
		if(strcmp(type_op1,"float")!=0 && strcmp(type_op1,"double")!=0 && strcmp(type_op1,"int")!=0)
		{
			ban=1;
		}
				
		if(strcmp(type_op2,"float")!=0 && strcmp(type_op2,"double")!=0 && strcmp(type_op2,"int")!=0)
		{
			ban=1;
		}

		if(ban==1){
			printf("[ERROR línea %d]Operando %s con %c no permitido por (%s)\n", yylineno,op1, operation, type_op1 );
		}
	}
}*/
