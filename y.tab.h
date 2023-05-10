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
    RETURN = 279,                  /* RETURN  */
    STOP = 280,                    /* STOP  */
    STEP = 281,                    /* STEP  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MULTIPLY = 284,                /* MULTIPLY  */
    DIVIDE = 285,                  /* DIVIDE  */
    EQUALS = 286,                  /* EQUALS  */
    NOT_EQUAL = 287,               /* NOT_EQUAL  */
    LESS = 288,                    /* LESS  */
    LESS_EQUAL = 289,              /* LESS_EQUAL  */
    GREATER = 290,                 /* GREATER  */
    GREATER_EQUAL = 291,           /* GREATER_EQUAL  */
    COMMA = 292,                   /* COMMA  */
    SEMICOLON = 293,               /* SEMICOLON  */
    LPAREN = 294,                  /* LPAREN  */
    RPAREN = 295,                  /* RPAREN  */
    EXPO = 296,                    /* EXPO  */
    INTEGER = 297,                 /* INTEGER  */
    DOUBLE = 298,                  /* DOUBLE  */
    STRING = 299,                  /* STRING  */
    SINGLE = 300,                  /* SINGLE  */
    STRING_LITERAL = 301,          /* STRING_LITERAL  */
    EOL = 302                      /* EOL  */
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
#define RETURN 279
#define STOP 280
#define STEP 281
#define PLUS 282
#define MINUS 283
#define MULTIPLY 284
#define DIVIDE 285
#define EQUALS 286
#define NOT_EQUAL 287
#define LESS 288
#define LESS_EQUAL 289
#define GREATER 290
#define GREATER_EQUAL 291
#define COMMA 292
#define SEMICOLON 293
#define LPAREN 294
#define RPAREN 295
#define EXPO 296
#define INTEGER 297
#define DOUBLE 298
#define STRING 299
#define SINGLE 300
#define STRING_LITERAL 301
#define EOL 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
