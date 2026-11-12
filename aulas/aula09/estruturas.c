#include <stdio.h>
#include <string.h>

int main () {

    // como representar algo do mundo real?
    // o que compor um endereço residencial?

    // uma estrutura (struct) agrupa variaveis
    // criar um tipo na linguagem
    struct endereco_t
    {
        char logradouro[31];
        int numero;
        char complemento[31];
        char bairro[31];
        char cidade[31];
        char uf[3];
        long int cep;
    };

// criar uma variavel a partir da estrutura
struct endereco_t endereco;

printf("Forneca seu endereco\n");
printf("Logradouro: \n");
scanf("%s", endereco.logradouro);
//fgets(stdin, endereco.logradouro, sizeof (endereco.logradouro));
printf("Numero: \n");
scanf("%i", &endereco.numero);
printf("complemento: \n");
scanf("%s", endereco.complemento);
printf("Bairro: \n");
scanf("%s", endereco.bairro);
printf("Cidade: \n");
scanf("%s", endereco.cidade);
printf("UF: \n");
scanf("%s", endereco.uf);
printf("CEP: \n");
scanf("%li", &endereco.cep);

struct endereco_t outro;

// copia os valores da estrutura para outra
outro = endereco;

printf("Seu endereco: \n");
printf("%s, %i, %s\n", outro.logradouro, outro.numero, outro.complemento);
printf("%s - %s/%s\n", outro.bairro, outro.cidade, outro.uf);
printf("%08li\n", outro.cep);

struct contato_t {
    char nome[61];
    long int telefone;
    struct endereco_t endereco;
    };

    struct contato_t contato;

    strcpy(contato.nome, "Jose");
    contato.endereco.numero = 612;
    strcpy(contato.endereco.logradouro, "SQS");

    // lista de 10 contatos
    struct contato_t contatos[10];
    

    return 0;
}