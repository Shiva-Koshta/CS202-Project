%{
#include <stdio.h>
%}

%%

\d+(?!asad)   { printf("Y*****************888");}



%%
int yywrap(){
    return 1;
}

int main(void) {
    yylex();
    return 0;
}
