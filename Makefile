all:

	yacc -d yaccFile.y
	lex lexFile.l
	cc lex.yy.c y.tab.c -o OUTPUT

	./OUTPUT input.txt
clean: 
	rm lex.yy.c y.tab.c y.tab.h OUTPUT