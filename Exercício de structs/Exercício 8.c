#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int dia, mes, ano;
};
int main() {
    struct Pessoa pessoas[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Digite a data de nascimento (dia mês ano) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }
    int idadeMaisNova = 999; 
    int idadeMaisVelha = 0;
    for (int i = 0; i < 6; i++) {
        int idade = 2024 - pessoas[i].ano;

        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
        }
        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
        }
    }
    printf("Pessoa mais nova: %s (idade: %d anos)\n", pessoas[idadeMaisNova].nome, idadeMaisNova);
    printf("Pessoa mais velha: %s (idade: %d anos)\n", pessoas[idadeMaisVelha].nome, idadeMaisVelha);

    return 0;
}
