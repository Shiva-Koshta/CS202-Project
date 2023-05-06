all:
<<<<<<< HEAD
	# yacc -d yaccFile.y
	# lex b.l
	# cc lex.yy.c y.tab.c -o bminus
	# ./bminus
	lex test.l
	cc lex.yy.c -o fof -ll
	./l input.txt


=======
	yacc -d yaccFile.y
	lex b.l
	cc lex.yy.c y.tab.c -o bminus
	./bminus
	# lex a.l
	# cc lex.yy.c -o l
	# ./l
>>>>>>> 7e90ad33620f4b334599535b087ae9229d25cedd
