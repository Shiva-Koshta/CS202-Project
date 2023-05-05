%{
#include "y.tab.h"
%}

%%
[ \t]                   /* Ignore whitespace */
\n                      /* Ignore newlines */
[0-9]+                  { yylval.num = atoi(yytext); return NUMBER; }

\b(?!THEN|IF|ELSE|while)\b[a-zA-Z_]\w*    { yylval.id = strdup(yytext); return IDENTIFIER; }
[a-zA-Z][a-zA-Z0-9]*    { yylval.id = strdup(yytext); return IDENTIFIER; }
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return TIMES; }
"/"                     { return DIVIDE; }
"="                     { return ASSIGN; }
"if"                    { return IF; }
"then"                  { return THEN; }
"else"                  { return ELSE; }
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
