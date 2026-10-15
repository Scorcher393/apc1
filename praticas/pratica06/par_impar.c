#include <stdio.h>

int main() {
    int numero;

    printf("Entre com um numero inteiro de 1 digito: ");
    scanf("%i", &numero);

    /*if (numero = 0, 2, 4, 6, 8) {
        printf("Par\n");
    } if (numero = 1, 3 ,5 ,7 ,9) {
        printf("Impar\n");
    }*/

    switch (numero) {
    case 1: printf("Impar\n"); break;
    case 2: printf("Par\n"); break;
    case 3: printf("Impar\n"); break;
    case 4: printf("Par\n"); break;
    case 5: printf("Impar\n"); break;
    case 6: printf("Par\n"); break;
    case 7: printf("Impar\n"); break;
    case 8: printf("Par\n"); break;
    case 9: printf("Impar\n"); break;
    case 0: printf("Par\n"); break;
    default: printf("Invalido. tente de novo");
    } 

    return 0;
}