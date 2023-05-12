%{

#include <stdio.h>

void yyerror(const char* message);
void yyrecover();
int yylex();
// int yyllineno;
extern FILE *yyin;
int array[1000];
extern int count;

%}

%token LET NUMBER IDENTIFIER NOT AND OR XOR DATA DEF FN DIM END FOR TO NEXT GOSUB GOTO IF THEN INPUT PRINT RETURN STOP STEP PLUS MINUS MULTIPLY DIVIDE EQUALS NOT_EQUAL LESS LESS_EQUAL GREATER GREATER_EQUAL COMMA SEMICOLON LPAREN RPAREN EXPO INTEGER DOUBLE STRING SINGLE STRING_LITERAL EOL SMALLcHAR

%%
//rule here
program: StmtList NUMBER END 
       | error
        ;

StmtList: NUMBER Stmt 
        | StmtList NUMBER Stmt 
        | error
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
    | NextStmt EOL
    | error
    ;

DataStmt: DATA DataArgs 
        |error
        ;
DataArgs: NUMBER
        | STRING_LITERAL
        | DataArgs COMMA DataArgs
        | error
        ;

DefStmt: DEF FN IDENTIFIER LPAREN IDENTIFIER RPAREN EQUALS Expression
        |DEF FN IDENTIFIER EQUALS Expression
        |error
        ;

DimStmt: DIM DimArgs
        |error
        ;
DimArgs:IDENTIFIER LPAREN NUMBER RPAREN
        | IDENTIFIER LPAREN NUMBER COMMA NUMBER RPAREN
        | DimArgs COMMA DimArgs
        |error
        ;

ForStmt: FOR IDENTIFIER EQUALS Expression TO Expression STEP Expression 
        | FOR IDENTIFIER EQUALS Expression TO Expression 
        |error
        ;

NextStmt: NEXT IDENTIFIER
        |error
        ;

GosubStmt: GOSUB NUMBER
        |error
        ;

GotoStmt: GOTO NUMBER
        |error
        ;

IfStmt: IF Relational_Expression THEN NUMBER
        |error
        ;

AssignStmt: LET Assign
        |error
        ;
Assign: IDENTIFIER EQUALS Expression
        | IDENTIFIER STRING EQUALS STRING_LITERAL
        | IDENTIFIER INTEGER EQUALS Expression
        | IDENTIFIER DOUBLE EQUALS Expression
        | IDENTIFIER SINGLE EQUALS Expression

        | IDENTIFIER LPAREN Expression RPAREN EQUALS Expression
        | IDENTIFIER LPAREN Expression COMMA Expression RPAREN EQUALS Expression
        |error
        ;

InputStmt: INPUT InputArgs
        |error
        ;

InputArgs: IDENTIFIER 
        | IDENTIFIER INTEGER
        | IDENTIFIER DOUBLE
        | IDENTIFIER SINGLE
        | IDENTIFIER STRING
        
        | IDENTIFIER LPAREN Expression RPAREN 
        | IDENTIFIER LPAREN Expression COMMA Expression RPAREN
        | InputArgs COMMA InputArgs
        |error
        ;

PrintStmt: PRINT Printparts
        | PRINT
        |error
        ;

Printparts: Expression
        |Expression Delim

        |STRING_LITERAL Delim
        |STRING_LITERAL

        | Expression Delim Printparts
        | STRING_LITERAL Delim Printparts
        |error
        ;     

Delim:  COMMA
        | SEMICOLON
        |error
        ;

ReturnStmt: RETURN
        |error
        ;

StopStmt: STOP
        |error
        ;


Expression: IDENTIFIER 
        | NUMBER
        | IDENTIFIER LPAREN Expression RPAREN
        | FN IDENTIFIER LPAREN Expression RPAREN
        | FN IDENTIFIER 

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
        | error
        ;

Relational_Expression: NUMBER
        |STRING_LITERAL
        | IDENTIFIER
        | IDENTIFIER Modifier
        |IDENTIFIER LPAREN Expression RPAREN
        |IDENTIFIER LPAREN Expression COMMA Expression RPAREN

        | Relational_Expression EQUALS Relational_Expression
        | Relational_Expression NOT_EQUAL Relational_Expression

        | STRING_LITERAL EQUALS STRING_LITERAL
        | STRING_LITERAL NOT_EQUAL STRING_LITERAL
        
        | Relational_Expression LESS Relational_Expression
        | Relational_Expression LESS_EQUAL Relational_Expression

        | Relational_Expression GREATER Relational_Expression
        | Relational_Expression GREATER_EQUAL Relational_Expression

        | LPAREN Relational_Expression RPAREN
        | error
        ;

Modifier: INTEGER
        | DOUBLE
        | SINGLE
        | STRING
        ;
%%

int main(int argc, char *argv[]) {

    yyin = fopen(argv[1], "r");

    FILE *temp = fopen(argv[1], "r");

    int index=0;

    while(!feof(temp))
    {
        fscanf(temp, "%d", &array[index]);
        index++;

        while(fgetc(temp) != '\n' && !feof(temp));
    }

    yyparse();
    fclose(yyin);

    printf("\n");

}

void yyerror(const char* message)
{
	printf("ERROR : %s\t", message);
        printf ("Error in line No.: %d\n",array[count]);
}
