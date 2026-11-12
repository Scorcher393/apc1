all: limpa compila roda

compila: enumeracoes.c
	gcc enumeracoes.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out