
%{
#include "y.tab.h"
%}

%%
[ \t]                   /* Ignore whitespace */
\n                      /* Ignore newlines */
[0-9]+                  { yylval.num = atoi(yytext); return NUMBER; }

[a-zA-Z_][a-zA-Z0-9_]* \b(?<!if|then|else)\b       { yylval.id = strdup(yytext); return IDENTIFIER; }

"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return TIMES; }
"/"                     { return DIVIDE; }
"="                     { return ASSIGN; }
"IF"                    { return IF; }
"THEN"                  { return THEN; }
"ELSE"                  { return ELSE; }
"{"                     { return LBRACE; }
"}"                     { return RBRACE; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"=="                    { return EQ; }
"!="                    { return NEQ; }
"<"                     { return LT; }
">"                     { return GT; }
"<="                    { return LE; }
">="                    { return GE; }
.                       { printf("Invalid character %c\n", *yytext); }
%%

int yywrap() {
    return 1;
}
