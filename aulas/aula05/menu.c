#include <stdio.h>

int main() {
    int opcao = 0;

    printf("+================================+\n");
    printf("|         MENU PRINCIPAL         |\n");
    printf("+================================+\n");
    printf("| 1 - Consultar Saldo            |\n");
    printf("| 2 - Fazer Recarga              |\n");
    printf("| 3 - Ver Ultimas Ligacoes       |\n");
    printf("| 4 - Ver Ultimas Mensagens      |\n");
    printf("| 5 - Sair do Aplicativo         |\n");
    printf("+================================+\n");
    printf(" Escolha uma opcao > ");

    scanf("%i", &opcao);

    switch (opcao) {
    case 1: printf("Seu saldo eh R$ 10.00\n"); break;
    case 2: printf("Informe um valor de recarga: \n"); break;
    case 3: printf("61 981414236\n"); break;
    case 4: printf("Voce nao tem mensagens\n"); break;
    case 5: printf("Ate nunca mais\n"); break;
    default: printf("Opcao invalida. Tente novamente\n");
    }
    return 0;
}