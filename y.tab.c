/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c2cpp.y"

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
	struct symbol_table{char var_name[MAX_NAME_LEN]; int type;} sym[MAX_VARIABLES];
	extern int lookup_in_table(char var[MAX_NAME_LEN]);
	extern void insert_to_table(char var[MAX_NAME_LEN], int type);
	extern void print_tabs();
	char var_list[MAX_VARIABLES][MAX_NAME_LEN];	// MAX_VARIABLES variable names with each variable being atmost MAX_NAME_LEN characters long
	int string_or_var[MAX_VARIABLES];
	//extern int *yytext;

	// functions
	void print_init(){
		time_t t = time(NULL);
  		struct tm now = *localtime(&t);
		char *autores = "Fernando Caneza - Gerardo Espínola";

		printf("/*\n*\t===================================================================\n");
		printf("*\tTraductor de lenguaje \"C\" a \"C++\"\n");
		printf("*\tAutores: %s\n", autores);
		printf("*\tTranducido: %d-%02d-%02d %02d:%02d:%02d \n", now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec);
		printf("*\t===================================================================\n*/\n\n");
		printf("#include <iostream>\n#include <string>\n\nusing namespace std;\n\n");
	}


#line 114 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VAR = 258,                     /* VAR  */
    LAND = 259,                    /* LAND  */
    LOR = 260,                     /* LOR  */
    GEQ = 261,                     /* GEQ  */
    LEQ = 262,                     /* LEQ  */
    NOT = 263,                     /* NOT  */
    GT = 264,                      /* GT  */
    LT = 265,                      /* LT  */
    NEQ = 266,                     /* NEQ  */
    DEQ = 267,                     /* DEQ  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    MOD = 272,                     /* MOD  */
    ASSIGNMENT = 273,              /* ASSIGNMENT  */
    EX = 274,                      /* EX  */
    MAIN_FUNC = 275,               /* MAIN_FUNC  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    ELSEIF = 278,                  /* ELSEIF  */
    WHILE = 279,                   /* WHILE  */
    FOR = 280,                     /* FOR  */
    CLASS = 281,                   /* CLASS  */
    STATIC = 282,                  /* STATIC  */
    PUBLIC = 283,                  /* PUBLIC  */
    PRIVATE = 284,                 /* PRIVATE  */
    VOID = 285,                    /* VOID  */
    PRINTF = 286,                  /* PRINTF  */
    NEW = 287,                     /* NEW  */
    DO = 288,                      /* DO  */
    BREAK = 289,                   /* BREAK  */
    RETURN = 290,                  /* RETURN  */
    BOOL_VAL = 291,                /* BOOL_VAL  */
    NUMBER = 292,                  /* NUMBER  */
    QUOTED_STRING = 293,           /* QUOTED_STRING  */
    QUOTED_CHAR = 294,             /* QUOTED_CHAR  */
    LP = 295,                      /* LP  */
    RP = 296,                      /* RP  */
    LC = 297,                      /* LC  */
    RC = 298,                      /* RC  */
    LB = 299,                      /* LB  */
    RB = 300,                      /* RB  */
    COMA = 301,                    /* COMA  */
    SEMICOLON = 302,               /* SEMICOLON  */
    COLON = 303,                   /* COLON  */
    QM = 304,                      /* QM  */
    SQ = 305,                      /* SQ  */
    DQ = 306,                      /* DQ  */
    COMENTARIO = 307,              /* COMENTARIO  */
    MLCOMENTARIO = 308,            /* MLCOMENTARIO  */
    DEFINE = 309,                  /* DEFINE  */
    STATIC_INT = 310,              /* STATIC_INT  */
    STATIC_VOID = 311,             /* STATIC_VOID  */
    STATIC_CHAR = 312,             /* STATIC_CHAR  */
    STATIC_FLOAT = 313,            /* STATIC_FLOAT  */
    STATIC_DOUBLE = 314,           /* STATIC_DOUBLE  */
    INT = 315,                     /* INT  */
    FLOAT = 316,                   /* FLOAT  */
    DOUBLE = 317,                  /* DOUBLE  */
    CHAR = 318,                    /* CHAR  */
    BOOLEAN = 319,                 /* BOOLEAN  */
    CONST = 320                    /* CONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#line 44 "c2cpp.y"

int data_type;
char var_name[MAX_NAME_LEN];

#line 301 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR = 3,                        /* VAR  */
  YYSYMBOL_LAND = 4,                       /* LAND  */
  YYSYMBOL_LOR = 5,                        /* LOR  */
  YYSYMBOL_GEQ = 6,                        /* GEQ  */
  YYSYMBOL_LEQ = 7,                        /* LEQ  */
  YYSYMBOL_NOT = 8,                        /* NOT  */
  YYSYMBOL_GT = 9,                         /* GT  */
  YYSYMBOL_LT = 10,                        /* LT  */
  YYSYMBOL_NEQ = 11,                       /* NEQ  */
  YYSYMBOL_DEQ = 12,                       /* DEQ  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_MOD = 17,                       /* MOD  */
  YYSYMBOL_ASSIGNMENT = 18,                /* ASSIGNMENT  */
  YYSYMBOL_EX = 19,                        /* EX  */
  YYSYMBOL_MAIN_FUNC = 20,                 /* MAIN_FUNC  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 23,                    /* ELSEIF  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_CLASS = 26,                     /* CLASS  */
  YYSYMBOL_STATIC = 27,                    /* STATIC  */
  YYSYMBOL_PUBLIC = 28,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 29,                   /* PRIVATE  */
  YYSYMBOL_VOID = 30,                      /* VOID  */
  YYSYMBOL_PRINTF = 31,                    /* PRINTF  */
  YYSYMBOL_NEW = 32,                       /* NEW  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_BREAK = 34,                     /* BREAK  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_BOOL_VAL = 36,                  /* BOOL_VAL  */
  YYSYMBOL_NUMBER = 37,                    /* NUMBER  */
  YYSYMBOL_QUOTED_STRING = 38,             /* QUOTED_STRING  */
  YYSYMBOL_QUOTED_CHAR = 39,               /* QUOTED_CHAR  */
  YYSYMBOL_LP = 40,                        /* LP  */
  YYSYMBOL_RP = 41,                        /* RP  */
  YYSYMBOL_LC = 42,                        /* LC  */
  YYSYMBOL_RC = 43,                        /* RC  */
  YYSYMBOL_LB = 44,                        /* LB  */
  YYSYMBOL_RB = 45,                        /* RB  */
  YYSYMBOL_COMA = 46,                      /* COMA  */
  YYSYMBOL_SEMICOLON = 47,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 48,                     /* COLON  */
  YYSYMBOL_QM = 49,                        /* QM  */
  YYSYMBOL_SQ = 50,                        /* SQ  */
  YYSYMBOL_DQ = 51,                        /* DQ  */
  YYSYMBOL_COMENTARIO = 52,                /* COMENTARIO  */
  YYSYMBOL_MLCOMENTARIO = 53,              /* MLCOMENTARIO  */
  YYSYMBOL_DEFINE = 54,                    /* DEFINE  */
  YYSYMBOL_STATIC_INT = 55,                /* STATIC_INT  */
  YYSYMBOL_STATIC_VOID = 56,               /* STATIC_VOID  */
  YYSYMBOL_STATIC_CHAR = 57,               /* STATIC_CHAR  */
  YYSYMBOL_STATIC_FLOAT = 58,              /* STATIC_FLOAT  */
  YYSYMBOL_STATIC_DOUBLE = 59,             /* STATIC_DOUBLE  */
  YYSYMBOL_INT = 60,                       /* INT  */
  YYSYMBOL_FLOAT = 61,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 62,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 63,                      /* CHAR  */
  YYSYMBOL_BOOLEAN = 64,                   /* BOOLEAN  */
  YYSYMBOL_CONST = 65,                     /* CONST  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_68_1 = 68,                      /* $@1  */
  YYSYMBOL_69_2 = 69,                      /* $@2  */
  YYSYMBOL_STATEMENTS = 70,                /* STATEMENTS  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_72_4 = 72,                      /* $@4  */
  YYSYMBOL_73_5 = 73,                      /* $@5  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_76_8 = 76,                      /* $@8  */
  YYSYMBOL_77_9 = 77,                      /* $@9  */
  YYSYMBOL_78_10 = 78,                     /* $@10  */
  YYSYMBOL_79_11 = 79,                     /* $@11  */
  YYSYMBOL_80_12 = 80,                     /* $@12  */
  YYSYMBOL_81_13 = 81,                     /* $@13  */
  YYSYMBOL_82_14 = 82,                     /* $@14  */
  YYSYMBOL_ST = 83,                        /* ST  */
  YYSYMBOL_84_15 = 84,                     /* $@15  */
  YYSYMBOL_RETURN_ST = 85,                 /* RETURN_ST  */
  YYSYMBOL_86_16 = 86,                     /* $@16  */
  YYSYMBOL_BREAK_ST = 87,                  /* BREAK_ST  */
  YYSYMBOL_STDIO = 88,                     /* STDIO  */
  YYSYMBOL_89_17 = 89,                     /* $@17  */
  YYSYMBOL_90_18 = 90,                     /* $@18  */
  YYSYMBOL_VAR_DECLARATION = 91,           /* VAR_DECLARATION  */
  YYSYMBOL_92_19 = 92,                     /* $@19  */
  YYSYMBOL_93_20 = 93,                     /* $@20  */
  YYSYMBOL_94_21 = 94,                     /* $@21  */
  YYSYMBOL_95_22 = 95,                     /* $@22  */
  YYSYMBOL_96_23 = 96,                     /* $@23  */
  YYSYMBOL_97_24 = 97,                     /* $@24  */
  YYSYMBOL_98_25 = 98,                     /* $@25  */
  YYSYMBOL_99_26 = 99,                     /* $@26  */
  YYSYMBOL_VAR_ASSIGNATION = 100,          /* VAR_ASSIGNATION  */
  YYSYMBOL_101_27 = 101,                   /* $@27  */
  YYSYMBOL_102_28 = 102,                   /* $@28  */
  YYSYMBOL_COLON_ARRAY = 103,              /* COLON_ARRAY  */
  YYSYMBOL_104_29 = 104,                   /* $@29  */
  YYSYMBOL_IF_STATEMENT = 105,             /* IF_STATEMENT  */
  YYSYMBOL_106_30 = 106,                   /* $@30  */
  YYSYMBOL_107_31 = 107,                   /* $@31  */
  YYSYMBOL_108_32 = 108,                   /* $@32  */
  YYSYMBOL_ELSE_VARIATIONS = 109,          /* ELSE_VARIATIONS  */
  YYSYMBOL_110_33 = 110,                   /* $@33  */
  YYSYMBOL_111_34 = 111,                   /* $@34  */
  YYSYMBOL_112_35 = 112,                   /* $@35  */
  YYSYMBOL_113_36 = 113,                   /* $@36  */
  YYSYMBOL_114_37 = 114,                   /* $@37  */
  YYSYMBOL_WHILE_LOOP = 115,               /* WHILE_LOOP  */
  YYSYMBOL_116_38 = 116,                   /* $@38  */
  YYSYMBOL_117_39 = 117,                   /* $@39  */
  YYSYMBOL_FOR_LOOP = 118,                 /* FOR_LOOP  */
  YYSYMBOL_119_40 = 119,                   /* $@40  */
  YYSYMBOL_120_41 = 120,                   /* $@41  */
  YYSYMBOL_FOR_PARAMS = 121,               /* FOR_PARAMS  */
  YYSYMBOL_122_42 = 122,                   /* $@42  */
  YYSYMBOL_123_43 = 123,                   /* $@43  */
  YYSYMBOL_124_44 = 124,                   /* $@44  */
  YYSYMBOL_125_45 = 125,                   /* $@45  */
  YYSYMBOL_DECL_EXPR = 126,                /* DECL_EXPR  */
  YYSYMBOL_127_46 = 127,                   /* $@46  */
  YYSYMBOL_128_47 = 128,                   /* $@47  */
  YYSYMBOL_DO_WHILE_LOOP = 129,            /* DO_WHILE_LOOP  */
  YYSYMBOL_130_48 = 130,                   /* $@48  */
  YYSYMBOL_131_49 = 131,                   /* $@49  */
  YYSYMBOL_NUMARRAY = 132,                 /* NUMARRAY  */
  YYSYMBOL_HAS_ASSIGNMENT = 133,           /* HAS_ASSIGNMENT  */
  YYSYMBOL_134_50 = 134,                   /* $@50  */
  YYSYMBOL_FUNC_INI = 135,                 /* FUNC_INI  */
  YYSYMBOL_136_51 = 136,                   /* $@51  */
  YYSYMBOL_137_52 = 137,                   /* $@52  */
  YYSYMBOL_METHODS = 138,                  /* METHODS  */
  YYSYMBOL_PARAMS = 139,                   /* PARAMS  */
  YYSYMBOL_140_53 = 140,                   /* $@53  */
  YYSYMBOL_HAS_PARAMS = 141,               /* HAS_PARAMS  */
  YYSYMBOL_EXPRESION = 142,                /* EXPRESION  */
  YYSYMBOL_143_54 = 143,                   /* $@54  */
  YYSYMBOL_144_55 = 144,                   /* $@55  */
  YYSYMBOL_145_56 = 145,                   /* $@56  */
  YYSYMBOL_146_57 = 146,                   /* $@57  */
  YYSYMBOL_147_58 = 147,                   /* $@58  */
  YYSYMBOL_148_59 = 148,                   /* $@59  */
  YYSYMBOL_149_60 = 149,                   /* $@60  */
  YYSYMBOL_150_61 = 150,                   /* $@61  */
  YYSYMBOL_151_62 = 151,                   /* $@62  */
  YYSYMBOL_152_63 = 152,                   /* $@63  */
  YYSYMBOL_153_64 = 153,                   /* $@64  */
  YYSYMBOL_154_65 = 154,                   /* $@65  */
  YYSYMBOL_155_66 = 155,                   /* $@66  */
  YYSYMBOL_156_67 = 156,                   /* $@67  */
  YYSYMBOL_EXPRESION_ARRAY = 157,          /* EXPRESION_ARRAY  */
  YYSYMBOL_158_68 = 158,                   /* $@68  */
  YYSYMBOL_159_69 = 159,                   /* $@69  */
  YYSYMBOL_EXPRESION_ARRAY_INITIALIZE = 160, /* EXPRESION_ARRAY_INITIALIZE  */
  YYSYMBOL_161_70 = 161,                   /* $@70  */
  YYSYMBOL_162_71 = 162,                   /* $@71  */
  YYSYMBOL_163_72 = 163,                   /* $@72  */
  YYSYMBOL_164_73 = 164,                   /* $@73  */
  YYSYMBOL_165_74 = 165,                   /* $@74  */
  YYSYMBOL_166_75 = 166,                   /* $@75  */
  YYSYMBOL_TYPE_NO_PRINT = 167,            /* TYPE_NO_PRINT  */
  YYSYMBOL_TYPE = 168,                     /* TYPE  */
  YYSYMBOL_TERMINAL = 169,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 170,                  /* COMMENT  */
  YYSYMBOL_CONSTAN_ALT = 171,              /* CONSTAN_ALT  */
  YYSYMBOL_172_76 = 172,                   /* $@76  */
  YYSYMBOL_173_77 = 173,                   /* $@77  */
  YYSYMBOL_174_78 = 174,                   /* $@78  */
  YYSYMBOL_175_79 = 175,                   /* $@79  */
  YYSYMBOL_176_80 = 176,                   /* $@80  */
  YYSYMBOL_177_81 = 177                    /* $@81  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    75,    75,    75,    75,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      93,    93,    97,    97,    98,   101,   104,   104,   104,   105,
     108,   108,   109,   109,   110,   110,   110,   111,   111,   111,
     111,   111,   112,   115,   115,   115,   118,   119,   119,   120,
     123,   123,   123,   123,   126,   126,   127,   127,   127,   127,
     127,   128,   131,   131,   131,   135,   135,   135,   138,   138,
     138,   139,   139,   139,   142,   143,   143,   144,   144,   145,
     148,   148,   148,   152,   153,   156,   156,   157,   158,   160,
     160,   160,   163,   167,   168,   168,   169,   173,   174,   175,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   193,
     194,   195,   198,   199,   199,   199,   202,   202,   203,   203,
     203,   203,   204,   204,   204,   205,   206,   209,   210,   211,
     212,   213,   216,   217,   218,   219,   220,   221,   224,   225,
     226,   227,   230,   231,   234,   234,   234,   234,   235,   235,
     235,   235
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VAR", "LAND", "LOR",
  "GEQ", "LEQ", "NOT", "GT", "LT", "NEQ", "DEQ", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "ASSIGNMENT", "EX", "MAIN_FUNC", "IF", "ELSE", "ELSEIF",
  "WHILE", "FOR", "CLASS", "STATIC", "PUBLIC", "PRIVATE", "VOID", "PRINTF",
  "NEW", "DO", "BREAK", "RETURN", "BOOL_VAL", "NUMBER", "QUOTED_STRING",
  "QUOTED_CHAR", "LP", "RP", "LC", "RC", "LB", "RB", "COMA", "SEMICOLON",
  "COLON", "QM", "SQ", "DQ", "COMENTARIO", "MLCOMENTARIO", "DEFINE",
  "STATIC_INT", "STATIC_VOID", "STATIC_CHAR", "STATIC_FLOAT",
  "STATIC_DOUBLE", "INT", "FLOAT", "DOUBLE", "CHAR", "BOOLEAN", "CONST",
  "$accept", "program", "$@1", "$@2", "STATEMENTS", "$@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "ST",
  "$@15", "RETURN_ST", "$@16", "BREAK_ST", "STDIO", "$@17", "$@18",
  "VAR_DECLARATION", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "VAR_ASSIGNATION", "$@27", "$@28", "COLON_ARRAY", "$@29",
  "IF_STATEMENT", "$@30", "$@31", "$@32", "ELSE_VARIATIONS", "$@33",
  "$@34", "$@35", "$@36", "$@37", "WHILE_LOOP", "$@38", "$@39", "FOR_LOOP",
  "$@40", "$@41", "FOR_PARAMS", "$@42", "$@43", "$@44", "$@45",
  "DECL_EXPR", "$@46", "$@47", "DO_WHILE_LOOP", "$@48", "$@49", "NUMARRAY",
  "HAS_ASSIGNMENT", "$@50", "FUNC_INI", "$@51", "$@52", "METHODS",
  "PARAMS", "$@53", "HAS_PARAMS", "EXPRESION", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "EXPRESION_ARRAY", "$@68", "$@69",
  "EXPRESION_ARRAY_INITIALIZE", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "TYPE_NO_PRINT", "TYPE", "TERMINAL", "COMMENT", "CONSTAN_ALT",
  "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* $@1: %empty  */
#line 75 "c2cpp.y"
                  { print_init(); }
#line 1722 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 75 "c2cpp.y"
                                               { exit(0); }
#line 1728 "y.tab.c"
    break;

  case 5: /* $@3: %empty  */
#line 78 "c2cpp.y"
                  { print_tabs(); }
#line 1734 "y.tab.c"
    break;

  case 6: /* STATEMENTS: $@3 FUNC_INI STATEMENTS  */
#line 78 "c2cpp.y"
                                                        { }
#line 1740 "y.tab.c"
    break;

  case 7: /* $@4: %empty  */
#line 79 "c2cpp.y"
                          { print_tabs(); }
#line 1746 "y.tab.c"
    break;

  case 8: /* STATEMENTS: $@4 VAR_DECLARATION STATEMENTS  */
#line 79 "c2cpp.y"
                                                                       { }
#line 1752 "y.tab.c"
    break;

  case 9: /* $@5: %empty  */
#line 80 "c2cpp.y"
                          { print_tabs(); }
#line 1758 "y.tab.c"
    break;

  case 10: /* STATEMENTS: $@5 COMMENT STATEMENTS  */
#line 80 "c2cpp.y"
                                                               { }
#line 1764 "y.tab.c"
    break;

  case 11: /* $@6: %empty  */
#line 81 "c2cpp.y"
                          { print_tabs(); }
#line 1770 "y.tab.c"
    break;

  case 12: /* STATEMENTS: $@6 IF_STATEMENT STATEMENTS  */
#line 81 "c2cpp.y"
                                                                    { }
#line 1776 "y.tab.c"
    break;

  case 13: /* $@7: %empty  */
#line 82 "c2cpp.y"
                          { print_tabs(); }
#line 1782 "y.tab.c"
    break;

  case 14: /* STATEMENTS: $@7 FOR_LOOP STATEMENTS  */
#line 82 "c2cpp.y"
                                                                { }
#line 1788 "y.tab.c"
    break;

  case 15: /* $@8: %empty  */
#line 83 "c2cpp.y"
                          { print_tabs(); }
#line 1794 "y.tab.c"
    break;

  case 16: /* STATEMENTS: $@8 WHILE_LOOP STATEMENTS  */
#line 83 "c2cpp.y"
                                                                  { }
#line 1800 "y.tab.c"
    break;

  case 17: /* $@9: %empty  */
#line 84 "c2cpp.y"
                          { print_tabs(); }
#line 1806 "y.tab.c"
    break;

  case 18: /* STATEMENTS: $@9 DO_WHILE_LOOP STATEMENTS  */
#line 84 "c2cpp.y"
                                                                     { }
#line 1812 "y.tab.c"
    break;

  case 19: /* $@10: %empty  */
#line 85 "c2cpp.y"
                          { print_tabs(); }
#line 1818 "y.tab.c"
    break;

  case 20: /* STATEMENTS: $@10 STDIO STATEMENTS  */
#line 85 "c2cpp.y"
                                                             { }
#line 1824 "y.tab.c"
    break;

  case 21: /* $@11: %empty  */
#line 86 "c2cpp.y"
                          { print_tabs(); }
#line 1830 "y.tab.c"
    break;

  case 22: /* STATEMENTS: $@11 BREAK_ST STATEMENTS  */
#line 86 "c2cpp.y"
                                                                { }
#line 1836 "y.tab.c"
    break;

  case 23: /* $@12: %empty  */
#line 87 "c2cpp.y"
                          { print_tabs(); }
#line 1842 "y.tab.c"
    break;

  case 24: /* STATEMENTS: $@12 RETURN_ST STATEMENTS  */
#line 87 "c2cpp.y"
                                                                 { }
#line 1848 "y.tab.c"
    break;

  case 25: /* $@13: %empty  */
#line 88 "c2cpp.y"
                          { print_tabs(); }
#line 1854 "y.tab.c"
    break;

  case 26: /* STATEMENTS: $@13 CONSTAN_ALT STATEMENTS  */
#line 88 "c2cpp.y"
                                                                   { }
#line 1860 "y.tab.c"
    break;

  case 27: /* $@14: %empty  */
#line 89 "c2cpp.y"
                          { print_tabs(); }
#line 1866 "y.tab.c"
    break;

  case 28: /* STATEMENTS: $@14 VAR_ASSIGNATION STATEMENTS  */
#line 89 "c2cpp.y"
                                                                       { }
#line 1872 "y.tab.c"
    break;

  case 29: /* STATEMENTS: %empty  */
#line 90 "c2cpp.y"
                                { }
#line 1878 "y.tab.c"
    break;

  case 30: /* $@15: %empty  */
#line 93 "c2cpp.y"
          { print_tabs(); }
#line 1884 "y.tab.c"
    break;

  case 31: /* ST: $@15 METHODS STATEMENTS  */
#line 93 "c2cpp.y"
                                               { }
#line 1890 "y.tab.c"
    break;

  case 32: /* $@16: %empty  */
#line 97 "c2cpp.y"
                         { printf("\n\treturn "); }
#line 1896 "y.tab.c"
    break;

  case 33: /* RETURN_ST: RETURN $@16 EXPRESION SEMICOLON  */
#line 97 "c2cpp.y"
                                                                        { printf(";\n"); }
#line 1902 "y.tab.c"
    break;

  case 34: /* RETURN_ST: error SEMICOLON  */
#line 98 "c2cpp.y"
                                          { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 1908 "y.tab.c"
    break;

  case 35: /* BREAK_ST: BREAK SEMICOLON  */
#line 101 "c2cpp.y"
                                   { printf("break;\n"); }
#line 1914 "y.tab.c"
    break;

  case 36: /* $@17: %empty  */
#line 104 "c2cpp.y"
                 { printf("std::cout"); }
#line 1920 "y.tab.c"
    break;

  case 37: /* $@18: %empty  */
#line 104 "c2cpp.y"
                                             { printf(" << "); }
#line 1926 "y.tab.c"
    break;

  case 38: /* STDIO: PRINTF $@17 LP $@18 EXPRESION RP SEMICOLON  */
#line 104 "c2cpp.y"
                                                                                        { printf(";\n"); }
#line 1932 "y.tab.c"
    break;

  case 39: /* STDIO: error SEMICOLON  */
#line 105 "c2cpp.y"
                                  { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 1938 "y.tab.c"
    break;

  case 40: /* $@19: %empty  */
#line 108 "c2cpp.y"
                           { printf("%s", yylval.var_name); }
#line 1944 "y.tab.c"
    break;

  case 41: /* VAR_DECLARATION: TYPE VAR $@19 HAS_ASSIGNMENT SEMICOLON  */
#line 108 "c2cpp.y"
                                                                                       { printf(";\n"); }
#line 1950 "y.tab.c"
    break;

  case 42: /* $@20: %empty  */
#line 109 "c2cpp.y"
                                           { printf("%s", yylval.var_name); }
#line 1956 "y.tab.c"
    break;

  case 43: /* VAR_DECLARATION: TYPE VAR $@20 COLON_ARRAY HAS_ASSIGNMENT SEMICOLON  */
#line 109 "c2cpp.y"
                                                                                                                   { printf(";\n"); }
#line 1962 "y.tab.c"
    break;

  case 44: /* $@21: %empty  */
#line 110 "c2cpp.y"
                                        { printf("const "); }
#line 1968 "y.tab.c"
    break;

  case 45: /* $@22: %empty  */
#line 110 "c2cpp.y"
                                                                       { printf("%s", yylval.var_name); }
#line 1974 "y.tab.c"
    break;

  case 46: /* VAR_DECLARATION: CONST $@21 TYPE VAR $@22 HAS_ASSIGNMENT SEMICOLON  */
#line 110 "c2cpp.y"
                                                                                                                                   { printf(";\n"); }
#line 1980 "y.tab.c"
    break;

  case 47: /* $@23: %empty  */
#line 111 "c2cpp.y"
                                           { printf("%s", yylval.var_name); }
#line 1986 "y.tab.c"
    break;

  case 48: /* $@24: %empty  */
#line 111 "c2cpp.y"
                                                                                 { printf("( "); }
#line 1992 "y.tab.c"
    break;

  case 49: /* $@25: %empty  */
#line 111 "c2cpp.y"
                                                                                                             { printf(")"); }
#line 1998 "y.tab.c"
    break;

  case 50: /* $@26: %empty  */
#line 111 "c2cpp.y"
                                                                                                                                 { tab_counter++; printf("{\n"); }
#line 2004 "y.tab.c"
    break;

  case 51: /* VAR_DECLARATION: TYPE VAR $@23 LP $@24 PARAMS RP $@25 LC $@26 STATEMENTS RC  */
#line 111 "c2cpp.y"
                                                                                                                                                                                 { printf("}\n"); tab_counter--; }
#line 2010 "y.tab.c"
    break;

  case 52: /* VAR_DECLARATION: error SEMICOLON  */
#line 112 "c2cpp.y"
                                                  { printf("=> Falta un \";\" (punto y coma).\n\n"); }
#line 2016 "y.tab.c"
    break;

  case 53: /* $@27: %empty  */
#line 115 "c2cpp.y"
                      { printf("%s", yylval.var_name); }
#line 2022 "y.tab.c"
    break;

  case 54: /* $@28: %empty  */
#line 115 "c2cpp.y"
                                                                    { printf(" = "); }
#line 2028 "y.tab.c"
    break;

  case 55: /* VAR_ASSIGNATION: VAR $@27 ASSIGNMENT $@28 EXPRESION SEMICOLON  */
#line 115 "c2cpp.y"
                                                                                                           { printf(";\n"); }
#line 2034 "y.tab.c"
    break;

  case 57: /* $@29: %empty  */
#line 119 "c2cpp.y"
                                  { bracket_counter++; }
#line 2040 "y.tab.c"
    break;

  case 60: /* $@30: %empty  */
#line 123 "c2cpp.y"
                        { printf("if ("); }
#line 2046 "y.tab.c"
    break;

  case 61: /* $@31: %empty  */
#line 123 "c2cpp.y"
                                                            { tab_counter++; printf(") {\n"); }
#line 2052 "y.tab.c"
    break;

  case 62: /* $@32: %empty  */
#line 123 "c2cpp.y"
                                                                                                              { tab_counter--; print_tabs(); printf("}"); }
#line 2058 "y.tab.c"
    break;

  case 64: /* $@33: %empty  */
#line 126 "c2cpp.y"
                          { tab_counter++; printf(" else {\n"); }
#line 2064 "y.tab.c"
    break;

  case 65: /* ELSE_VARIATIONS: ELSE LC $@33 STATEMENTS RC  */
#line 126 "c2cpp.y"
                                                                                { tab_counter--; print_tabs(); printf("}"); }
#line 2070 "y.tab.c"
    break;

  case 66: /* $@34: %empty  */
#line 127 "c2cpp.y"
                                            { printf(" else if ("); }
#line 2076 "y.tab.c"
    break;

  case 67: /* $@35: %empty  */
#line 127 "c2cpp.y"
                                                                                   { printf(")"); }
#line 2082 "y.tab.c"
    break;

  case 68: /* $@36: %empty  */
#line 127 "c2cpp.y"
                                                                                                       { tab_counter++; printf(") {\n"); }
#line 2088 "y.tab.c"
    break;

  case 69: /* $@37: %empty  */
#line 127 "c2cpp.y"
                                                                                                                                                         { tab_counter--;print_tabs(); printf("}"); }
#line 2094 "y.tab.c"
    break;

  case 71: /* ELSE_VARIATIONS: %empty  */
#line 128 "c2cpp.y"
                                        { printf("\n"); }
#line 2100 "y.tab.c"
    break;

  case 72: /* $@38: %empty  */
#line 131 "c2cpp.y"
                           {printf("while ("); }
#line 2106 "y.tab.c"
    break;

  case 73: /* $@39: %empty  */
#line 131 "c2cpp.y"
                                                                 { tab_counter++; printf("){\n"); }
#line 2112 "y.tab.c"
    break;

  case 74: /* WHILE_LOOP: WHILE LP $@38 DECL_EXPR RP LC $@39 STATEMENTS RC  */
#line 131 "c2cpp.y"
                                                                                                                  { tab_counter--; print_tabs(); printf("}\n"); }
#line 2118 "y.tab.c"
    break;

  case 75: /* $@40: %empty  */
#line 135 "c2cpp.y"
                         { printf("for ("); }
#line 2124 "y.tab.c"
    break;

  case 76: /* $@41: %empty  */
#line 135 "c2cpp.y"
                                                               { tab_counter++; printf(") {\n"); }
#line 2130 "y.tab.c"
    break;

  case 77: /* FOR_LOOP: FOR LP $@40 FOR_PARAMS RP LC $@41 STATEMENTS RC  */
#line 135 "c2cpp.y"
                                                                                                                 { tab_counter--; print_tabs(); printf("}\n"); }
#line 2136 "y.tab.c"
    break;

  case 78: /* $@42: %empty  */
#line 138 "c2cpp.y"
                                      { printf("; "); }
#line 2142 "y.tab.c"
    break;

  case 79: /* $@43: %empty  */
#line 138 "c2cpp.y"
                                                                            { printf("; "); }
#line 2148 "y.tab.c"
    break;

  case 81: /* $@44: %empty  */
#line 139 "c2cpp.y"
                                         { printf("%s", yylval.var_name); }
#line 2154 "y.tab.c"
    break;

  case 82: /* $@45: %empty  */
#line 139 "c2cpp.y"
                                                                            { printf(" : "); }
#line 2160 "y.tab.c"
    break;

  case 83: /* FOR_PARAMS: TYPE VAR COLON $@44 $@45 VAR  */
#line 139 "c2cpp.y"
                                                                                                   { printf("%s", yylval.var_name); }
#line 2166 "y.tab.c"
    break;

  case 85: /* $@46: %empty  */
#line 143 "c2cpp.y"
                                   { printf("%s", yylval.var_name); }
#line 2172 "y.tab.c"
    break;

  case 87: /* $@47: %empty  */
#line 144 "c2cpp.y"
                              { printf("%s", yylval.var_name); }
#line 2178 "y.tab.c"
    break;

  case 89: /* DECL_EXPR: %empty  */
#line 145 "c2cpp.y"
                                 { }
#line 2184 "y.tab.c"
    break;

  case 90: /* $@48: %empty  */
#line 148 "c2cpp.y"
                        { printf("do{\n"); tab_counter++;}
#line 2190 "y.tab.c"
    break;

  case 91: /* $@49: %empty  */
#line 148 "c2cpp.y"
                                                                                  {tab_counter--; print_tabs(); printf("}while("); }
#line 2196 "y.tab.c"
    break;

  case 92: /* DO_WHILE_LOOP: DO LC $@48 STATEMENTS RC WHILE LP $@49 DECL_EXPR RP SEMICOLON  */
#line 148 "c2cpp.y"
                                                                                                                                                            { printf(");"); }
#line 2202 "y.tab.c"
    break;

  case 93: /* NUMARRAY: NUMBER  */
#line 152 "c2cpp.y"
                           { printf("[%s]", yylval.var_name); }
#line 2208 "y.tab.c"
    break;

  case 94: /* NUMARRAY: VAR  */
#line 153 "c2cpp.y"
                              { printf("[%s]", yylval.var_name); }
#line 2214 "y.tab.c"
    break;

  case 95: /* $@50: %empty  */
#line 156 "c2cpp.y"
                             { printf(" = "); }
#line 2220 "y.tab.c"
    break;

  case 98: /* HAS_ASSIGNMENT: %empty  */
#line 158 "c2cpp.y"
                                                      {}
#line 2226 "y.tab.c"
    break;

  case 99: /* $@51: %empty  */
#line 160 "c2cpp.y"
                            { printf("\nint main()"); }
#line 2232 "y.tab.c"
    break;

  case 100: /* $@52: %empty  */
#line 160 "c2cpp.y"
                                                           { tab_counter++; printf("{\n"); }
#line 2238 "y.tab.c"
    break;

  case 101: /* FUNC_INI: MAIN_FUNC $@51 LC $@52 STATEMENTS RC  */
#line 160 "c2cpp.y"
                                                                                                           { printf("\n}\n"); tab_counter--; }
#line 2244 "y.tab.c"
    break;

  case 104: /* $@53: %empty  */
#line 168 "c2cpp.y"
                       { printf(","); }
#line 2250 "y.tab.c"
    break;

  case 106: /* PARAMS: %empty  */
#line 169 "c2cpp.y"
                                                { printf(" "); }
#line 2256 "y.tab.c"
    break;

  case 107: /* HAS_PARAMS: TYPE VAR  */
#line 173 "c2cpp.y"
                           { printf("%s", yylval.var_name); }
#line 2262 "y.tab.c"
    break;

  case 108: /* HAS_PARAMS: TYPE COLON_ARRAY VAR  */
#line 174 "c2cpp.y"
                                               { for(;bracket_counter>0;bracket_counter--)printf("*");printf("%s", yylval.var_name); }
#line 2268 "y.tab.c"
    break;

  case 110: /* $@54: %empty  */
#line 178 "c2cpp.y"
                                 { printf("&&"); }
#line 2274 "y.tab.c"
    break;

  case 112: /* $@55: %empty  */
#line 179 "c2cpp.y"
                                        { printf("||"); }
#line 2280 "y.tab.c"
    break;

  case 114: /* $@56: %empty  */
#line 180 "c2cpp.y"
                                        { printf("<="); }
#line 2286 "y.tab.c"
    break;

  case 116: /* $@57: %empty  */
#line 181 "c2cpp.y"
                                       { printf(">"); }
#line 2292 "y.tab.c"
    break;

  case 118: /* $@58: %empty  */
#line 182 "c2cpp.y"
                                       { printf("<"); }
#line 2298 "y.tab.c"
    break;

  case 120: /* $@59: %empty  */
#line 183 "c2cpp.y"
                                        { printf("!="); }
#line 2304 "y.tab.c"
    break;

  case 122: /* $@60: %empty  */
#line 184 "c2cpp.y"
                                        { printf("=="); }
#line 2310 "y.tab.c"
    break;

  case 124: /* $@61: %empty  */
#line 185 "c2cpp.y"
                              { printf("!"); }
#line 2316 "y.tab.c"
    break;

  case 126: /* $@62: %empty  */
#line 186 "c2cpp.y"
                                         { printf("+"); }
#line 2322 "y.tab.c"
    break;

  case 128: /* $@63: %empty  */
#line 187 "c2cpp.y"
                                          { printf("-"); }
#line 2328 "y.tab.c"
    break;

  case 130: /* $@64: %empty  */
#line 188 "c2cpp.y"
                                        { printf("*"); }
#line 2334 "y.tab.c"
    break;

  case 132: /* $@65: %empty  */
#line 189 "c2cpp.y"
                                        { printf("/"); }
#line 2340 "y.tab.c"
    break;

  case 134: /* $@66: %empty  */
#line 190 "c2cpp.y"
                                        { printf("%%"); }
#line 2346 "y.tab.c"
    break;

  case 136: /* $@67: %empty  */
#line 191 "c2cpp.y"
                             { printf("("); }
#line 2352 "y.tab.c"
    break;

  case 137: /* EXPRESION: LP $@67 EXPRESION RP  */
#line 191 "c2cpp.y"
                                                           { printf(")"); }
#line 2358 "y.tab.c"
    break;

  case 138: /* EXPRESION: EXPRESION PLUS PLUS  */
#line 192 "c2cpp.y"
                                              { printf("++"); }
#line 2364 "y.tab.c"
    break;

  case 139: /* EXPRESION: EXPRESION MINUS MINUS  */
#line 193 "c2cpp.y"
                                                { printf("--"); }
#line 2370 "y.tab.c"
    break;

  case 141: /* EXPRESION: VAR  */
#line 195 "c2cpp.y"
                              { printf("%s", yylval.var_name); }
#line 2376 "y.tab.c"
    break;

  case 142: /* EXPRESION_ARRAY: TYPE_NO_PRINT COLON_ARRAY  */
#line 198 "c2cpp.y"
                                            {bracket_counter=0;}
#line 2382 "y.tab.c"
    break;

  case 143: /* $@68: %empty  */
#line 199 "c2cpp.y"
                                  { for(;bracket_counter>0;bracket_counter--)printf("[]"); }
#line 2388 "y.tab.c"
    break;

  case 144: /* $@69: %empty  */
#line 199 "c2cpp.y"
                                                                                                { printf(" = {"); }
#line 2394 "y.tab.c"
    break;

  case 145: /* EXPRESION_ARRAY: $@68 LC $@69 EXPRESION_ARRAY_INITIALIZE RC  */
#line 199 "c2cpp.y"
                                                                                                                                                  { printf("}"); }
#line 2400 "y.tab.c"
    break;

  case 146: /* $@70: %empty  */
#line 202 "c2cpp.y"
                                                { printf(","); }
#line 2406 "y.tab.c"
    break;

  case 148: /* $@71: %empty  */
#line 203 "c2cpp.y"
                                                               { printf(","); }
#line 2412 "y.tab.c"
    break;

  case 149: /* $@72: %empty  */
#line 203 "c2cpp.y"
                                                                                   { printf("{"); }
#line 2418 "y.tab.c"
    break;

  case 150: /* $@73: %empty  */
#line 203 "c2cpp.y"
                                                                                                                                  { printf("}"); }
#line 2424 "y.tab.c"
    break;

  case 152: /* $@74: %empty  */
#line 204 "c2cpp.y"
                                                              { printf("{"); }
#line 2430 "y.tab.c"
    break;

  case 153: /* $@75: %empty  */
#line 204 "c2cpp.y"
                                                                                                             { printf("}"); }
#line 2436 "y.tab.c"
    break;

  case 162: /* TYPE: INT  */
#line 216 "c2cpp.y"
              { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);	printf("int "); }
#line 2442 "y.tab.c"
    break;

  case 163: /* TYPE: CHAR  */
#line 217 "c2cpp.y"
                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("char "); }
#line 2448 "y.tab.c"
    break;

  case 164: /* TYPE: FLOAT  */
#line 218 "c2cpp.y"
                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("float "); }
#line 2454 "y.tab.c"
    break;

  case 165: /* TYPE: DOUBLE  */
#line 219 "c2cpp.y"
                         { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("double "); }
#line 2460 "y.tab.c"
    break;

  case 166: /* TYPE: BOOLEAN  */
#line 220 "c2cpp.y"
                          { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); printf("bool "); }
#line 2466 "y.tab.c"
    break;

  case 167: /* TYPE: VOID  */
#line 221 "c2cpp.y"
                       { printf("void "); }
#line 2472 "y.tab.c"
    break;

  case 168: /* TERMINAL: NUMBER  */
#line 224 "c2cpp.y"
                         { printf("%s", yylval.var_name); }
#line 2478 "y.tab.c"
    break;

  case 169: /* TERMINAL: QUOTED_CHAR  */
#line 225 "c2cpp.y"
                                      { printf("%s", yylval.var_name); }
#line 2484 "y.tab.c"
    break;

  case 170: /* TERMINAL: QUOTED_STRING  */
#line 226 "c2cpp.y"
                                        { printf("%s", yylval.var_name); }
#line 2490 "y.tab.c"
    break;

  case 171: /* TERMINAL: BOOL_VAL  */
#line 227 "c2cpp.y"
                                   { printf("%s", yylval.var_name); }
#line 2496 "y.tab.c"
    break;

  case 172: /* COMMENT: COMENTARIO  */
#line 230 "c2cpp.y"
                                { printf("%s\n", yylval.var_name); }
#line 2502 "y.tab.c"
    break;

  case 173: /* COMMENT: MLCOMENTARIO  */
#line 231 "c2cpp.y"
                                        { printf("%s", yylval.var_name); }
#line 2508 "y.tab.c"
    break;

  case 174: /* $@76: %empty  */
#line 234 "c2cpp.y"
                         { printf("#define ");}
#line 2514 "y.tab.c"
    break;

  case 175: /* $@77: %empty  */
#line 234 "c2cpp.y"
                                                    { printf("%s ", yylval.var_name); }
#line 2520 "y.tab.c"
    break;

  case 176: /* $@78: %empty  */
#line 234 "c2cpp.y"
                                                                                               { printf("%s", yylval.var_name); }
#line 2526 "y.tab.c"
    break;

  case 177: /* CONSTAN_ALT: DEFINE $@76 VAR $@77 NUMBER $@78 SEMICOLON  */
#line 234 "c2cpp.y"
                                                                                                                                            { printf(";\n"); }
#line 2532 "y.tab.c"
    break;

  case 178: /* $@79: %empty  */
#line 235 "c2cpp.y"
                                         { printf("#define ");}
#line 2538 "y.tab.c"
    break;

  case 179: /* $@80: %empty  */
#line 235 "c2cpp.y"
                                                                    { printf("%s ", yylval.var_name); }
#line 2544 "y.tab.c"
    break;

  case 180: /* $@81: %empty  */
#line 235 "c2cpp.y"
                                                                                                               { printf("%s", yylval.var_name); }
#line 2550 "y.tab.c"
    break;

  case 181: /* CONSTAN_ALT: COMMENT DEFINE $@79 VAR $@80 NUMBER $@81 SEMICOLON  */
#line 235 "c2cpp.y"
                                                                                                                                                            { printf(";\n"); }
#line 2556 "y.tab.c"
    break;


#line 2560 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 238 "c2cpp.y"


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


