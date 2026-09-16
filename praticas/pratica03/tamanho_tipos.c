#include <stdio.h>

int main() {

    printf("Tamanho de char: %i bytes\n", sizeof(char));
    printf("Tamanho de short int: %i bytes\n", sizeof(short int));
    printf("Tamanho de int: %i bytes\n", sizeof(int));
    printf("Tamanho de long int: %i bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %i bytes\n", sizeof(long long int));
    printf("Tamanho de float: %i bytes\n", sizeof(float));
    printf("Tamanho de double: %i bytes\n", sizeof(double));
    printf("Tamanho de long double: %i bytes\n", sizeof(long double));

    return 0;
}