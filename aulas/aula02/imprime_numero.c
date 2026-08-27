#include <stdio.h>

int main() {

    printf("%i\n", 10);
    printf("%i\n", 8.5);
    printf("%i\n", 10 - 5);
    printf("falta %i dias para ir embora\n", 10 + 5); // %i inserir um numero no texto

    printf("%f\n", 8.5);
    printf("%.2f\n", 8.51);

    printf("CPF = %lli\n", 11111111111);
    // preenche com espaço ate 11 digitos
    printf("CPF = %11i\n", 00000000001);
    // preenche com 0 ate 11 digitos
    printf("CPF = %011i\n", 00000000001);

    printf("Preco = R$ %7.2f\n", 100.00);
    printf("Preco = R$ %7.2f\n", 10.00);
    printf("Preco = R$ %7.2f\n", 1000.00);

    return 0;
}