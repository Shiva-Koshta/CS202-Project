identifier [A-Z][0-9]? 
%{
#include "y.tab.h"
FILE *file;
%}

%%
[ \t]                   /* Ignore whitespace */
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