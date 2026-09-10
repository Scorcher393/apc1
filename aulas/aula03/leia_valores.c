#include <stdio.h>

int main() {
    char letra;
    int numero;
    float nota;

    printf("entre com uma letra de A-Z: ");
    scanf("%c", &letra);
    while(getchar() != '\n'); // LIMPAR O BUFFER

    printf("entre com um numero de 0-10: ");
    scanf("%i", &numero);
    while(getchar() != '\n'); // LIMPAR O BUFFER

    printf("entre com uma nota de 0.0 a 10.0: ");
    scanf("%f", &nota);
    while(getchar() != '\n'); // LIMPAR O BUFFER

    printf("Dados lidos foram %c, %i, %.1f\n", letra, numero, nota);


    return 0;
}