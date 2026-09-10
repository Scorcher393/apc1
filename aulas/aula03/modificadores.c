#include <stdio.h>

int main() {
/* modificadores de tipo
unsigned = sem sinal char ou int
signed = com sinal (+ ou -)

short = inteiro curto
long long = inteiro longo ou duplo longo

*/
long long int inteiro_longo = 1000000000001L;
long double duplo_longo = 5.455645411687431345312L;

printf("Numero inteiro longo = %lli\n", inteiro_longo);
printf("Numero duplo longo = %llf", duplo_longo);


    return 0;
}