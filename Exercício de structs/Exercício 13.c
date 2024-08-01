#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Associado {
    char nome[100];
    int dia_nascimento, mes_nascimento, ano_nascimento, num_dependentes;
    float mensalidade;
};

int main() {
    int num_associados = 37;
    struct Associado associados[num_associados];

    for (int i = 0; i < num_associados; ++i) {
        printf("Associado %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", associados[i].nome);

        printf("Dia de nascimento: ");
        scanf("%d", &associados[i].dia_nascimento);

        printf("Mês de nascimento: ");
        scanf("%d", &associados[i].mes_nascimento);

        printf("Ano de nascimento: ");
        scanf("%d", &associados[i].ano_nascimento);

        printf("Valor da mensalidade: ");
        scanf("%f", &associados[i].mensalidade);

        printf("Quantidade de dependentes: ");
        scanf("%d", &associados[i].num_dependentes);
    }
    int max_dependentes = 0;
    for (int i = 0; i < num_associados; ++i) {
        if (associados[i].num_dependentes > max_dependentes) {
            max_dependentes = associados[i].num_dependentes;
        }
    }

    printf("\nAssociado(s) com maior número de dependentes:\n");
    for (int i = 0; i < num_associados; ++i) {
        if (associados[i].num_dependentes == max_dependentes) {
            printf("- %s\n", associados[i].nome);
        }
    }
    return 0;
}
