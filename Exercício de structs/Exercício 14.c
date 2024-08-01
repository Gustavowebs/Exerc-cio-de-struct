#include <stdio.h>
#include <string.h>

struct Dados {
    char endereco[100];
    char telefone[20];
    char data_nascimento[20];
};

struct Associado {
    char nome[50];
    int idade;
    char num_carteira[20];
    struct Dados dados;
};

int main() {
    struct Associado associados[50];

    for (int i = 0; i < 50; ++i) {
        printf("Digite o nome do associado %d: ", i + 1);
        scanf("%s", associados[i].nome);

        printf("Digite a idade do associado %d: ", i + 1);
        scanf("%d", &associados[i].idade);

        printf("Digite o número da carteira de sócio do associado %d: ", i + 1);
        scanf("%s", associados[i].num_carteira);

        printf("Digite o endereço do associado %d: ", i + 1);
        scanf("%s", associados[i].dados.endereco);

        printf("Digite o telefone do associado %d: ", i + 1);
        scanf("%s", associados[i].dados.telefone);

        printf("Digite a data de nascimento do associado %d (DD/MM/AAAA): ", i + 1);
        scanf("%s", associados[i].dados.data_nascimento);
    }
    printf("\nDados do primeiro associado:\n");
    printf("Nome: %s\n", associados[0].nome);
    printf("Idade: %d\n", associados[0].idade);
    printf("Número da carteira: %s\n", associados[0].num_carteira);
    printf("Endereço: %s\n", associados[0].dados.endereco);
    printf("Telefone: %s\n", associados[0].dados.telefone);
    printf("Data de nascimento: %s\n", associados[0].dados.data_nascimento);

    return 0;
}
