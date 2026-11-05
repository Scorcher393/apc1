#include <stdio.h>

int main() {
    float notas[2][10];

    for(int i=0; i < 2; i++) {
      for(int j=0; j < 10; j++) {
        printf("Informe os valores das notas [%i, %i]: ", i, j);
        scanf("%f", &notas[i][j]);
      }
    }

 printf("As notas dos alunos foram: \n");
    for(int i=0; i < 2; i++) {
      for(int j=0; j < 10; j++) {
        printf("|%5.1f|", notas[i][j]);
      }
      printf("\n");
    }

    float numeros[10];
    
    numeros[0] = 5.0;
    numeros[1] = 2.0;
    numeros[2] = 10.0;
    numeros[3] = 8.0;
    numeros[4] = 7.0;
    numeros[5] = 6.0;
    numeros[6] = 1.0;
    numeros[7] = 3.0;
    numeros[8] = 4.0;
    numeros[9] = 9.0;
    float soma = 0;

    for(int i = 0; i < 20; i++) {
        soma = soma + numeros[i];
    }

    float media = soma / 10;

    printf("Media das notas %i\n", media);

    return 0;
}