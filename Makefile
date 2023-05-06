all:

	lex test.l
	cc lex.yy.c -o fof -ll
	# ./fof 

	./fof input.txt
