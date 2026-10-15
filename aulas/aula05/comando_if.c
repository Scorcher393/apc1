#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Entre com um valor inteiro: ");
    scanf("%i", &numero1);

    printf("Entre com outro valor inteiro: ");
    scanf("%i", &numero2);

    /*sintaxe basica
    if (condicao é verdadeira){
        faz algo
    }
    */

    if (numero2 != 0) {
        int divisao = numero1 / numero2;
        printf("%i / %i = %i\n", numero1, numero2, divisao);
    }

    if (numero2 == 0) {
        printf("Nao posso dividir por ZERO\n");
    }

    /* sintase completa
    if (condição é verdadeira) {
    faz uma coisa
    } else {
    faz outra coisa 
    }
    */

    if (numero2 != 0) {
        int divisao = numero1 / numero2;
        printf("%i / %i = %i\n", numero1, numero2, divisao);
    } else {
        printf("Nao posso dividir por ZERO\n");
    }

    /*
    sintaxe encadeada do if

    if (condição1 é verdadeira) {
        faz_uma_coisa
    } else if (condição2 é verdadeira) {
        faz_outra_coisa
    } else if (condição3 é verdadeira) {
        ...
    } else {
        faz_então_isso; 
    }
    */
    
    if (numero1 < numero2) {
        printf("%i eh menor que %i\n", numero1, numero2);
    } else if (numero1 > numero2) {
        printf("%i eh maior que %i\n", numero1, numero2);
    } else {
        printf("%i eh igual a %i\n", numero1, numero2);
    }

    /*
    sintaxe aninha do if
        if (condição1 é verdadeira) {
          if (condição2 é verdadeira) {
            faz_algo;
         }
    }
    */

    if(numero1 >= 16) {
        if (numero1 < 18 || numero1 > 70){
            printf("Com %i anos, pode votar\n", numero1);
        } else {
            printf("Com %i anos, deve votar\n", numero1);
        }
    } else {
        printf("Com %i anos, nao pode votar\n", numero1);
    }

    return 0;
}