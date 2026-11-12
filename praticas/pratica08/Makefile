all: limpa compila roda

compila: boletim.c
	gcc boletim.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out