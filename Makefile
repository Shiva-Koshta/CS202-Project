all:
	# yacc -d yaccFile.y
	# lex b.l
	# cc lex.yy.c y.tab.c -o bminus
	# ./bminus
	lex test.l
	cc lex.yy.c -o fof -ll
	./l input.txt


