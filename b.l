
%{
#include "y.tab.h"
%}

%%
[ \t]                   /* Ignore whitespace */
\n                      /* Ignore newlines */
[0-9]+                  { yylval.num = atoi(yytext); return NUMBER; }
[A-Z]([0-9])?           { yylval.id = strdup(yytext); return IDENTIFIER; }
"("                     { return LPAREN; }
")"                     { return RPAREN; }
"^"                     {return EXPO;}
"~"                     {return NEGATION;}
"+"                     { return PLUS; }
"-"                     { return MINUS; }
"*"                     { return MULTIPLY; }
"/"                     { return DIVIDE; }
"="                     { return EQUALS; }
"<>"                    { return NOT_EQUAL; }
"<"                     { return LESS; }
">"                     { return GREATER; }
"<="                    { return LESS_EQUAL; }
">="                    { return GREATER_EQUAL; }
"NOT"                   { return NOT; }
"AND"                   { return AND; }
"OR"                    { return OR; }
"XOR"                   { return XOR; }
"DATA"                  { return DATA; }
"DEF"                    { return DEF; }
"DIM"                    { return DIM; }
"END"                    { return END; }
"FOR"                    { return FOR; }
"TO"                     {return TO; }
"STEP"                   {return STEP; }
"NEXT"                   {return NEXT; }
"GOSUB"                  {return GOSUB; }
"GOTO"                   {return GOTO; }


"PRINT"                  {return PRINT; }
"REM"                    {return REM; }
"RETURN"                 {return RETURN; }
"STOP"                   {return STOP; }
";"                      {return SEMICOLON; }
","                      {return COMMA;}

"IF"                     {return IF; }
"THEN"                   {return THEN; }
"LET"                    {return LET; }
"INPUT"                  {return INPUT; }
.                         { print("Invalidcharacter %c\n", *yytext); }
%%

int yywrap() {
    return 1;
}

int main(){
    yylexer();
}
