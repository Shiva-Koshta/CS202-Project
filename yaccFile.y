%{

#include <stdio.h>
void yyerror(const char* message);
int yylex();

%}

%token NUMBER IDENTIFIER NOT AND OR XOR DATA DEF FNx DIM END FOR TO NEXT GOSUB GOTO IF THEN INPUT PRINT REM RETURN STOP STEP PLUS MINUS MULTIPLY DIVIDE MOD EQUALS NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL COMMA SEMICOLON LPAREN RPAREN 

%%
//rule here

%%

int main()
{
	yyparse();
}

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}