#include <stdio.h>

int main() {
    int menu = 0;

    printf("+================================+\n");
    printf("| INSIRA O NOME DE UM JOGO AQUI  |\n");
    printf("+================================+\n");
    printf("| 1 - Novo Jogo                  |\n");
    printf("| 2 - Continuar Jogo             |\n");
    printf("| 3 - Configuracoes              |\n");
    printf("| 4 - Ver Pontuacao              |\n");
    printf("| 5 - Sair                       |\n");
    printf("+================================+\n");

    scanf("%i", &menu);

    switch (menu) {
    case 1: printf("Criando mapa!\n"); break;
    case 2: printf("Carregando dados do mapa\n"); break;
    case 3: printf("Calma ai que nao implementei ainda\n"); break;
    case 4: printf("Maior pontuacao: 5463 (precisa melhorar hein)\n"); break;
    case 5: printf("Ja vai sair? Que pena\n"); break;
    default: printf("pra que tentar um numero diferente?\n");
    }

    return 0;
}