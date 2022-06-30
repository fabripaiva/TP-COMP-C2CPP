/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 201 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
