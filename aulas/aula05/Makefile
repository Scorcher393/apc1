all: limpa compila roda

compila: menu.c
	gcc menu.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out