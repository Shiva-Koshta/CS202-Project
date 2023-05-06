%{

#include <stdio.h>
void yyerror(const char* message);
int yylex();

%}

%token LET NUMBER IDENTIFIER NOT AND OR XOR DATA DEF FN DIM END FOR TO NEXT GOSUB GOTO IF THEN INPUT PRINT REM RETURN STOP STEP PLUS MINUS MULTIPLY DIVIDE EQUALS NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL COMMA SEMICOLON LPAREN RPAREN EXPO NEGATION INTEGER DOUBLE STRING SINGLE STRING_LITERAL 

%%
//rule here
program: StmtList
        ;

StmtList: NUMBER Stmt
        | StmtList NUMBER Stmt
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
        | IDENTIFIER LPAREN NUMBER RPAREN 
        | IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN
        | InputArgs COMMA InputArgs
        ;

Modifier: INTEGER
        | DOUBLE
        | STRING
        | SINGLE
        ;


PrintStmt: PRINT Printparts
        ;

Printparts: Expression

        |STRING_LITERAL

        | Printparts SEMICOLON Expression
        | Printparts COMMA Expression

        | Printparts SEMICOLON STRING_LITERAL
        | Printparts COMMA STRING_LITERAL
        
        ;


Expression: IDENTIFIER
        | NUMBER
        | Expression PLUS Expression
        | Expression MINUS Expression
        | Expression MULTIPLY Expression
        | Expression DIVIDE Expression
        | Expression EXPO Expression
        | MINUS Expression
        | LPAREN Expression RPAREN
        ;

Relational_Expression: NUMBER
        | IDENTIFIER

        | Relational_Expression EQUALS Relational_Expression
        | Relational_Expression NOT_EQUAL Relational_Expression

        | Relational_Expression LESS Relational_Expression
        | Relational_Expression LESS_EQUAL Relational_Expression

        | Relational_Expression GREATER Relational_Expression
        | Relational_Expression GREATER_EQUAL Relational_Expression

        | NOT Relational_Expression
        | Relational_Expression AND Relational_Expression
        | Relational_Expression OR Relational_Expression
        | Relational_Expression XOR Relational_Expression

        | LPAREN Relational_Expression RPAREN
        ;

AssignStmt: LET Assign
        ;
Assign: IDENTIFIER EQUALS Expression
        | IDENTIFIER STRING EQUALS STRING_LITERAL
        | IDENTIFIER INTEGER EQUALS NUMBER
        | IDENTIFIER DOUBLE EQUALS NUMBER
        | IDENTIFIER SINGLE EQUALS NUMBER

        | IDENTIFIER LPAREN NUMBER RPAREN EQUALS NUMBER
        | IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN EQUALS NUMBER

        ;
%%

int main()
{
	yyparse();
}

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}