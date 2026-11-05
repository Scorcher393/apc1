all: limpa compila roda

compila: Matrizes.c
	gcc Matrizes.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out