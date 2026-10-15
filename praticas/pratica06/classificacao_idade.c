#include <stdio.h>

int main() {
    int idade;

    printf("Entre com uma idade: ");
    scanf("%i", &idade);

    if (idade <= 12) {
        printf("Crianca\n");
    } else if (idade >= 13 || idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 || idade <= 64) {
        printf("Adulto\n");
    } else if (idade >= 65) {
        printf("Idoso\n");
    }

    return 0;
}