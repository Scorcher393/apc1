#include <stdio.h>

int main() {
    float cobaias[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe os numeros ai [%i, %i]: ", i, j);
            scanf("%f", &cobaias[i][j]);
        }
    }

    printf("Os numeros escolhidos foram: \n");
    for(int i=0; i < 3; i++) {
      for(int j=0; j < 3; j++) {
        printf("|%5.1f|", cobaias[i][j]);
      }
      printf("\n");
    }

    return 0;
}