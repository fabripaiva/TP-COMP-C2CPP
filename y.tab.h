/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 192 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
