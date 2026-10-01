#include <stdio.h>
#define VERDADEIRO 1
#define FALSO 0

int main() {

    char tecla;
    
    printf("escolha uma tecla e depois ENTER\n");
    scanf("%c", &tecla);

    printf("voce informou a tecla %c\n", tecla);

    return 0;
}