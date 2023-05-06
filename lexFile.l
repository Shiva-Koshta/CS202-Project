identifier [A-Z][0-9]?
wrongidentifier " "[A-Z]*[0-9]{2,}
%{
#include "y.tab.h"
#include <stdio.h>
extern int yylval;
%}

%%
[ \t]                   /* Ignore whitespace */
\n                      /* Ignore newlines */
[0-9]+                  { return NUMBER; }
{identifier}            {return IDENTIFIER; }
{wrongidentifier}       {yyerror("Invalid Identifier");}
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
"#"                     {return DOUBLE; }
"$"                     {return STRING; }
"!"                     {return SINGLE; }
"%"                     {return INTEGER; }
\"([A-Z0-9]|\s)*\"      {return STRING_LITERAL;}
.                       { yyerror("Invalid Character\n"); }
%%

int yywrap() {
    return 1;
}


