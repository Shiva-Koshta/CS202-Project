%{

#include <stdio.h>
void yyerror(const char* message);
int yylex();
extern FILE *yyin;
extern int count;

%}

%token LET NUMBER IDENTIFIER NOT AND OR XOR DATA DEF FN DIM END FOR TO NEXT GOSUB GOTO IF THEN INPUT PRINT RETURN STOP STEP PLUS MINUS MULTIPLY DIVIDE EQUALS NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL COMMA SEMICOLON LPAREN RPAREN EXPO INTEGER DOUBLE STRING SINGLE STRING_LITERAL EOL

%%
//rule here
program: StmtList
        ;

StmtList: NUMBER Stmt 
        | StmtList NUMBER Stmt 
        ;

Stmt: AssignStmt EOL
    | PrintStmt EOL
    | InputStmt EOL
    | IfStmt EOL
    | GotoStmt EOL
    | GosubStmt EOL
    | ReturnStmt EOL
    | StopStmt EOL
    | DimStmt EOL
    | DefStmt EOL
    | ForStmt EOL 
    | DataStmt EOL
    | EndStmt 
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
EndStmt: END EOL
        | END
        ;

ForStmt: FOR IDENTIFIER EQUALS Expression TO Expression STEP Expression EOL StmtList NEXT IDENTIFIER
        | FOR IDENTIFIER EQUALS Expression TO Expression EOL StmtList NEXT IDENTIFIER
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
        | IDENTIFIER INTEGER EQUALS Expression
        | IDENTIFIER DOUBLE EQUALS Expression
        | IDENTIFIER SINGLE EQUALS Expression

        | IDENTIFIER LPAREN Expression RPAREN EQUALS Expression
        | IDENTIFIER LPAREN Expression COMMA Expression RPAREN EQUALS Expression
        ;

InputStmt: INPUT InputArgs
        ;

InputArgs: IDENTIFIER 
        | IDENTIFIER INTEGER
        | IDENTIFIER DOUBLE
        | IDENTIFIER SINGLE
        | IDENTIFIER STRING
        
        | IDENTIFIER LPAREN Expression RPAREN 
        | IDENTIFIER LPAREN Expression COMMA Expression RPAREN
        | InputArgs COMMA InputArgs
        ;

PrintStmt: PRINT Printparts
        | PRINT
        ;

Printparts: Expression
        |Expression Delim

        |STRING_LITERAL Delim
        |STRING_LITERAL

        | Expression Delim Printparts
        | STRING_LITERAL Delim Printparts
        ;     

Delim:  COMMA
        | SEMICOLON
        ;

ReturnStmt: RETURN
        ;

StopStmt: STOP
        ;


Expression: IDENTIFIER
        | NUMBER

        | Expression AND Expression
        | Expression OR Expression
        | Expression XOR Expression
        | NOT Expression

        | Expression PLUS Expression
        | Expression MINUS Expression
        | Expression MULTIPLY Expression
        | Expression DIVIDE Expression
        | Expression EXPO Expression
        | MINUS Expression
        | LPAREN Expression RPAREN
        ;

Relational_Expression: NUMBER
        |STRING_LITERAL
        | IDENTIFIER
        | IDENTIFIER Modifier

        | Relational_Expression EQUALS Relational_Expression
        | Relational_Expression NOT_EQUAL Relational_Expression

        | STRING_LITERAL EQUALS STRING_LITERAL
        | STRING_LITERAL NOT_EQUAL STRING_LITERAL
        
        | Relational_Expression LESS Relational_Expression
        | Relational_Expression LESS_EQUAL Relational_Expression

        | Relational_Expression GREATER Relational_Expression
        | Relational_Expression GREATER_EQUAL Relational_Expression

        | LPAREN Relational_Expression RPAREN
        ;

Modifier: INTEGER
        | DOUBLE
        | SINGLE
        | STRING
        ;
%%

/* int main()
{
	yyparse();
} */
int main(int argc, char *argv[]) {

    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    printf("\n");

}

void yyerror(const char* message)
{
	printf("ERROR : %s\n", message);
        printf ("the line no is=%d", count);
}