#include <stdio.h>

int main() {
    float Maltura, Mpeso, Haltura, Hpeso;
    Maltura = 1.62f, Mpeso = 55.521, Haltura = 1.75f, Hpeso = 77.252;
    int Midade, Hidade;
    Midade = 34, Hidade = 35;

    printf("Nome: %s\n", "Beto");
    printf("Idade: %i\n", Hidade);
    printf("Peso: %.3f\n", Hpeso);
    printf("Altura: %.2f\n", Haltura);

    printf("Nome: %s\n", "Ana");
    printf("Idade: %i\n", Midade);
    printf("Peso: %.3f\n", Mpeso);
    printf("Altura: %.2f", Maltura);

    return 0;
}