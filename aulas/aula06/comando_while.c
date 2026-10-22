#include <stdio.h>

int main() {
    int numero = 0;

    printf("Entre com um numero de 1 a 10: \n");
    scanf("%i", &numero);
    while(getchar() != '\n');

    /*
        comando while = repete não sei quantidade de vezes

        while(condição_é_verdadeira) {
            faz_algo;
        }
    */

    while (numero < 1 || numero > 10) {
        printf("Numero invalido, Tente de novo!\n");
        printf("Entre com um numero de 1 a 10: \n");
        scanf("%i", &numero);
        while(getchar() != '\n');
    }
    
    printf("A tabuada de multiplicacao de %i\n", numero);
    int i = 1;
    while (i <= 10) {
        printf("%i x %i = %i\n", i, numero, i * numero);
        i++;
    }
    

    return 0;
}