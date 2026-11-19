#include <stdio.h>
#include <stdlib.h>

#define LIMITE 10

int main() {
    int opcao = 0;
    struct AlgumaCoisa {
        int id;
        char nome[101];
    };

    struct AlgumaCoisa lista[LIMITE];
    int contador = 0;

    while (opcao != 6) {
        opcao = 0;
        system("clear"); // limpar o terminal
        printf("+---------------------------+\n");
        printf("| Cadastros de Alguma Coisa |\n");
        printf("+---------------------------+\n");
        printf("MENU PRINCIPAL\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Procurar\n");
        printf("4 - Modificar\n");
        printf("5 - Remover\n");
        printf("6 - Sair\n");
        printf("Sua opcao => ");
        
        scanf("%i", &opcao);
        while (getchar()!='\n');

        switch(opcao) {
            case 1: {
                if (contador == LIMITE){
                printf("Lista cheia! por favor remova um item");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;
            }
            case 2: {
                if (contador == 0){
                printf("Minha lista de Algo\n");

                break;
                }
            }
            case 3: {
                if (contador == 0){
                printf("Informe o dado de Alguma coisa\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;
                }
            }
            case 4: {
                printf("Informe o dado de Alguma coisa\n");
                printf("Modifique os dados de Alguma coisa");
                printf("Pressione ENTER para continuar...");
            while (getchar() != '\n');
                break;
            }
            case 5: {
                if (contador == 0){
                    printf("A lista esta vazia");
                    break;
                }
                printf("Informe o dado de Alguma coisa\n");
                printf("Deseja remover Alguma coisa? (S/N)\n")
                if (getchar() == 'S') {
                    printf("Alguma coisa foi removida");
                    contador--;
            }
        }
            case 6: break;
            default:
            printf("Opcao invalida. Tente de novo\n");
            printf("Pressione ENTER para continuar...");
            while (getchar() != '\n');
        }
    }
    system("clear");
    printf("Ate logo!\n");

    return 0;
}