all:

	yacc -d yaccFile.y
	lex lexFile.l
	cc lex.yy.c y.tab.c -o OUTPUT 
	# ./fof 

	./OUTPUT input.txt
