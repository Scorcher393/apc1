all: limpa compila roda

compila: strings.c
	gcc strings.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out