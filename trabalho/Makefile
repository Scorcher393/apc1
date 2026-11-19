all: limpa compila roda

compila: main.c
	gcc main.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out