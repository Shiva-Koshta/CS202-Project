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
    | ForStmt
    ;

DataStmt: DATA DataArgs
        ;
DataArgs: NUMBER
        | STRING_LITERAL
        | DataArgs COMMA DataArgs
        ;

DefStmt: DEF FN IDENTIFIER LPAREN IDENTIFIER RPAREN EQUALS Expression
        |DEF FN IDENTIFIER EQUALS Expression
        ;

DimStmt: DIM DimArgs
        ;
DimArgs:IDENTIFIER LPAREN NUMBER RPAREN
        | IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN
        | DimArgs COMMA DimArgs
        ;
EndStmt: END
        ;

ForStmt: FOR IDENTIFIER EQUALS Expression TO Expression STEP Expression StmtList NEXT IDENTIFIER
        | FOR IDENTIFIER EQUALS Expression TO Expression StmtList NEXT IDENTIFIER
        ;

GosubStmt: GOSUB NUMBER
        ;

GotoStmt: GOTO NUMBER
        ;

IfStmt: IF Relational_Expression THEN NUMBER
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

InputStmt: INPUT InputArgs
        ;

InputArgs: IDENTIFIER [Modifier]
        | IDENTIFIER LPAREN NUMBER RPAREN 
        | IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN
        | InputArgs COMMA InputArgs
        ;

PrintStmt: PRINT Printparts
        | PRINT
        ;

Printparts: Expression

        |STRING_LITERAL

        | Printparts SEMICOLON Expression
        | Printparts COMMA Expression

        | Printparts SEMICOLON STRING_LITERAL
        | Printparts COMMA STRING_LITERAL
        
        ;

ReturnStmt: RETURN
        ;

StopStmt: STOP
        ;

Modifier: INTEGER
        | DOUBLE
        | STRING
        | SINGLE
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
        |STRING_LITERAL

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

%%

int main()
{
	yyparse();
}

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}