%{
#include <stdio.h>
%}

%%

^(?![a-z])(?!NUMBER\b|IDENTIFIER\b|NOT\b|AND\b|OR\b|XOR\b|DATA\b|DEF\b|FN\b|DIM\b|END\b|FOR\b|TO\b|NEXT\b|GOSUB\b|GOTO\b|IF\b|THEN\b|INPUT\b|PRINT\b|REM\b|RETURN\b|STOP\b|STEP\b|PLUS\b|MINUS\b|MULTIPLY\b|DIVIDE\b|EQUALS\b|NOT_EQUAL\b|LESS\b|LESS_EQUAL\b|GREATER\b|GREATER_EQUAL\b|COMMA\b|SEMICOLON\b|LPAREN\b|RPAREN\b)\b[a-zA-Z]+\b$     {printf("\nHI\t");}

 
[^(NUMBER)] {
    printf("\nHI\t");
}

(.|\n)    { /* Ignore all other characters */ }

%%
int yywrap(){
    return 1;
}

int main(void) {
    yylex();
    return 0;
}
