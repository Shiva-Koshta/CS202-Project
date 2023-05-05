%{
#include <stdio.h>
#include <string.h>
%}

%%
[a-zA-Z_][a-zA-Z0-9_]*\b(?<!auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while)\b    { printf("Matched variable name: %s\n", yytext); }
.|\n    {}

%%
 
int main() {
    yylex();
    return 0;
}
