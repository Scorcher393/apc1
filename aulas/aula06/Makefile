all: limpa compila roda

compila: comando_do_while.c
	gcc comando_do_while.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out