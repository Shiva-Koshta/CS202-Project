identifier [A-Z][0-9]?

Wrongidentifier " "[A-Z]+[0-9]{2,}
%{
#include "y.tab.h"
%}

%%
[ \t]                   /* Ignore whitespace */

[0-9]+(" ")+"REM"(" ")*([A-Z0-9=,\*\+\-\/]*(" ")*)*  

[0-9]+                  { printf ("NUMBER\t"); }
{identifier}            {printf("IDENTIFIER\t"); }
{Wrongidentifier}       {printf("Invalid input\t"); }
"("                     { printf ("LPAREN\t"); }
")"                     { printf ("RPAREN\t"); }
"^"                     {printf ("EXPO\t");}
"~"                     {printf ("NEGATION\t");}
"+"                     { printf ("PLUS\t"); }
"-"                     { printf ("MINUS\t"); }
"*"                     { printf ("MULTIPLY\t"); }
"/"                     { printf ("DIVIDE\t"); }
"="                     { printf ("EQUALS\t"); }
"<>"                    { printf ("NOT_EQUAL\t"); }
"<"                     { printf ("LESS\t"); }
">"                     { printf ("GREATER\t"); }
"<="                    { printf ("LESS_EQUAL\t"); }
">="                    { printf ("GREATER_EQUAL\t"); }
"NOT"                   { printf ("NOT\t"); }
"AND"                   { printf ("AND\t"); }
"OR"                    { printf ("OR\t"); }
"XOR"                   { printf ("XOR\t"); }
"DATA"                  { printf ("DATA\t"); }
"DEF"                    { printf ("DEF\t"); }
"DIM"                    { printf ("DIM\t"); }
"END"                    { printf ("END\t"); }
"FOR"                    { printf ("FOR\t"); }
"TO"                     {printf ("TO\t"); }
"STEP"                   {printf ("STEP\t"); }
"NEXT"                   {printf ("NEXT\t"); }
"GOSUB"                  {printf ("GOSUB\t"); }
"GOTO"                   {printf ("GOTO\t"); }


"PRINT"                  {printf ("PRINT\t"); }

"STOP"                   {printf ("STOP\t"); }
";"                      {printf ("SEMICOLON\t"); }
","                      {printf ("COMMA\t");}

"IF"                     {printf ("IF\t"); }
"THEN"                   {printf ("THEN\t"); }
"LET"                    {printf ("LET\t"); }
"INPUT"                  {printf ("INPUT\t"); }
\"([A-Z0-9]|\s)*\"       {printf("STRING_LITERAL");}
.                         {printf("INVALID CHARACTER\t");}
%%

int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {

    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);

    printf("\n");

}