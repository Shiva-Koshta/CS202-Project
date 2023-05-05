all:
	yacc -d b.y
	lex b.l
	cc lex.yy.c y.tab.c -o bminus
	./bminus
	