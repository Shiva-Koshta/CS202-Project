%{
#include <stdio.h>
%}
%%
[0-9]+(" ")+"REM"(" ")*([A-Z0-9=,\*\+\-\/]*(" ")*)*           { printf("COmment");}
\n      printf("\n");
[ \t]+ /* ignore whitespace */;
%%

int main(int argc, char *argv[]) {

    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);

    printf("\n");

}