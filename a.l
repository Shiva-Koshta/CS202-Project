%{
#include <stdio.h>
%}

%%

^(?![a-z])(?!NUMBER|IDENTIFIER|NOT|AND|OR|XOR|DATA|DEF|FN|DIM|END|FOR|TO|NEXT|GOSUB|GOTO|IF|THEN|INPUT|PRINT|REM|RETURN|STOP|STEP|PLUS|MINUS|MULTIPLY|DIVIDE|EQUALS|NOT_EQUAL|LESS|LESS_EQUAL|GREATER|GREATER_EQUAL|COMMA|SEMICOLON|LPAREN|RPAREN)\b[a-zA-Z]+\b$ \
    {printf("\nHI\t");}

(.|\n)    { /* Ignore all other characters */ }

%%
int yywrap(){
    return 1;
}

int main(void) {
    yylex();
    return 0;
}
