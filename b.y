%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE int
extern int yylex();
extern int yyparse();
void yyerror(char*);
int sym[26];
%}

%token NUMBER
%token IDENTIFIER
%token PLUS MINUS TIMES DIVIDE
%token ASSIGN
%token IF THEN ELSE
%token LBRACE RBRACE
%token LPAREN RPAREN
%token EQ NEQ LT GT LE GE

%%

program: statement_list
        ;

statement_list: statement
               | statement_list statement
               ;

statement: expression ASSIGN expression
         | IF LPAREN expression RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE
         ;

expression: IDENTIFIER
          | NUMBER
          | expression PLUS expression
          | expression MINUS expression
          | expression TIMES expression
          | expression DIVIDE expression
          | LPAREN expression RPAREN
          | expression EQ expression
          | expression NEQ expression
          | expression LT expression
          | expression GT expression
          | expression LE expression
          | expression GE expression
          ;

%%

void yyerror(char *s) {
    printf("%s\n", s);
}

int main(int argc, char **argv) {
    yyparse();
    return 0;
}

int yywrap() {
    return 1;
}
