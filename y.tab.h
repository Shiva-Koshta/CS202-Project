/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
    LET = 258,                     /* LET  */
    NUMBER = 259,                  /* NUMBER  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    NOT = 261,                     /* NOT  */
    AND = 262,                     /* AND  */
    OR = 263,                      /* OR  */
    XOR = 264,                     /* XOR  */
    DATA = 265,                    /* DATA  */
    DEF = 266,                     /* DEF  */
    FN = 267,                      /* FN  */
    DIM = 268,                     /* DIM  */
    END = 269,                     /* END  */
    FOR = 270,                     /* FOR  */
    TO = 271,                      /* TO  */
    NEXT = 272,                    /* NEXT  */
    GOSUB = 273,                   /* GOSUB  */
    GOTO = 274,                    /* GOTO  */
    IF = 275,                      /* IF  */
    THEN = 276,                    /* THEN  */
    INPUT = 277,                   /* INPUT  */
    PRINT = 278,                   /* PRINT  */
    REM = 279,                     /* REM  */
    RETURN = 280,                  /* RETURN  */
    STOP = 281,                    /* STOP  */
    STEP = 282,                    /* STEP  */
    PLUS = 283,                    /* PLUS  */
    MINUS = 284,                   /* MINUS  */
    MULTIPLY = 285,                /* MULTIPLY  */
    DIVIDE = 286,                  /* DIVIDE  */
    EQUALS = 287,                  /* EQUALS  */
    NOT_EQUAL = 288,               /* NOT_EQUAL  */
    LESS = 289,                    /* LESS  */
    LESS_EQUAL = 290,              /* LESS_EQUAL  */
    GREATER = 291,                 /* GREATER  */
    GREATER_EQUAL = 292,           /* GREATER_EQUAL  */
    COMMA = 293,                   /* COMMA  */
    SEMICOLON = 294,               /* SEMICOLON  */
    LPAREN = 295,                  /* LPAREN  */
    RPAREN = 296,                  /* RPAREN  */
    EXPO = 297,                    /* EXPO  */
    NEGATION = 298,                /* NEGATION  */
    INTEGER = 299,                 /* INTEGER  */
    DOUBLE = 300,                  /* DOUBLE  */
    STRING = 301,                  /* STRING  */
    SINGLE = 302                   /* SINGLE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LET 258
#define NUMBER 259
#define IDENTIFIER 260
#define NOT 261
#define AND 262
#define OR 263
#define XOR 264
#define DATA 265
#define DEF 266
#define FN 267
#define DIM 268
#define END 269
#define FOR 270
#define TO 271
#define NEXT 272
#define GOSUB 273
#define GOTO 274
#define IF 275
#define THEN 276
#define INPUT 277
#define PRINT 278
#define REM 279
#define RETURN 280
#define STOP 281
#define STEP 282
#define PLUS 283
#define MINUS 284
#define MULTIPLY 285
#define DIVIDE 286
#define EQUALS 287
#define NOT_EQUAL 288
#define LESS 289
#define LESS_EQUAL 290
#define GREATER 291
#define GREATER_EQUAL 292
#define COMMA 293
#define SEMICOLON 294
#define LPAREN 295
#define RPAREN 296
#define EXPO 297
#define NEGATION 298
#define INTEGER 299
#define DOUBLE 300
#define STRING 301
#define SINGLE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
