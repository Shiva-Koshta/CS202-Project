%{

#include <stdio.h>
void yyerror(const char* message);
int yylex();

%}

%token LET NUMBER IDENTIFIER NOT AND OR XOR DATA DEF FN DIM END FOR TO NEXT GOSUB GOTO IF THEN INPUT PRINT REM RETURN STOP STEP PLUS MINUS MULTIPLY DIVIDE EQUALS NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL COMMA SEMICOLON LPAREN RPAREN EXPO NEGATION INTEGER DOUBLE STRING SINGLE 

%%
//rule here
program: StmtList
        ;

StmtList: Stmt
        | StmtList Stmt
        ;

Stmt: AssignStmt
    | PrintStmt
    | InputStmt
    | IfStmt
    | GotoStmt
    | GosubStmt
    | ReturnStmt
    | StopStmt
    | DimStmt
    | DefStmt
    | FnStmt
    | ForStmt
    | NextStmt
    ;
GotoStmt: GOTO NUMBER
        ;
GosubStmt: GOSUB NUMBER
        ;
ReturnStmt: RETURN
        ;
StopStmt: STOP
        ;
DimStmt: DIM IDENTIFIER LPAREN NUMBER RPAREN
        | DIM IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN
        ;
DefStmt: DEF IDENTIFIER LPAREN IDENTIFIER RPAREN EQUALS Expression
        ;
FnStmt: FN IDENTIFIER LPAREN IDENTIFIER RPAREN EQUALS Expression
        ;
IfStmt: IF Relational_Expression THEN NUMBER
        ;
NextStmt: NEXT IDENTIFIER
        ;
ForStmt: FOR IDENTIFIER EQUALS Expression TO Expression STEP Expression
        | FOR IDENTIFIER EQUALS Expression TO Expression
        ;
InputStmt: INPUT InputArgs
        ;

InputArgs: IDENTIFIER [Modifier]
        | InputArgs COMMA IDENTIFIER [Modifier]
        ;

Modifier: INTEGER
        | DOUBLE
        | STRING
        | SINGLE
        ;


PrintStmt: PRINT Expression
Expression: NUMBER
        ;
Relational_Expression: NUMBER
        ;
AssignStmt: IDENTIFIER EQUALS Expression
%%

int main()
{
	yyparse();
}

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}