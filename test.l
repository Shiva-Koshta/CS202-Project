identifier \s[A-Z][0-9]?\b
%{
#include "y.tab.h"
FILE *file;
%}

%%
[ \t]                   /* Ignore whitespace */
<<<<<<< HEAD
[0-9]+(" ")+"REM"(" ")*([A-Z0-9=,\*\+\-\/]*(" ")*)*       
[0-9]+                  { printf ("NUMBER\t"); }


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
{identifier}            { printf("%s", yytext);}

=======
\n                      /* Ignore newlines */

[0-9]+                  { printf ("NUMBER\n"); }
{identifier}            { printf("Match found: %s\n", yytext);}
"("                     { printf ("LPAREN\n"); }
")"                     { printf ("RPAREN\n"); }
"^"                     { printf ("EXPO\n");}
"~"                     { printf ("NEGATION\n");}
"+"                     { printf ("PLUS\n"); }
"-"                     { printf ("MINUS\n"); }
"*"                     { printf ("MULTIPLY\n"); }
"/"                     { printf ("DIVIDE\n"); }
"="                     { printf ("EQUALS\n"); }
"<>"                    { printf ("NOT_EQUAL\n"); }
"<"                     { printf ("LESS\n"); }
">"                     { printf ("GREATER\n"); }
"<="                    { printf ("LESS_EQUAL\n"); }
">="                    { printf ("GREATER_EQUAL\n"); }
"NOT"                   { printf ("NOT\n"); }
"AND"                   { printf ("AND\n"); }
"OR"                    { printf ("OR\n"); }
"XOR"                   { printf ("XOR\n"); }
"DATA"                  { printf ("DATA\n"); }
"DEF"                   { printf ("DEF\n"); }
"DIM"                   { printf ("DIM\n"); }
"END"                   { printf ("END\n"); }
"FOR"                   { printf ("FOR\n"); }
"TO"                    { printf ("TO\n"); }
"STEP"                  { printf ("STEP\n"); }
"NEXT"                  { printf ("NEXT\n"); }
"GOSUB"                 { printf ("GOSUB\n"); }
"GOTO"                  { printf ("GOTO\n"); }


"PRINT"                 { printf ("PRINT\n"); }
"REM"                   { printf ("REM\n"); }
"STOP"                  { printf ("STOP\n"); }
";"                     { printf ("SEMICOLON\n"); }
","                     { printf ("COMMA\n");}

"IF"                    { printf ("IF\n"); }
"THEN"                  { printf ("THEN\n"); }
"LET"                   { printf ("LET\n"); }
"INPUT"                 { printf ("INPUT\n"); }
.                       { printf("Invalidcharacter %c\n", *yytext); }
>>>>>>> df3bba7d730992cf8a849ed0d277a83b90848ef1
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