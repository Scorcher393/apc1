all: limpa compila roda

compila: diagonal_principal.c
	gcc diagonal_principal.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out