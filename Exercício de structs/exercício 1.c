#include <stdio.h>
#include <stdlib.h>

struct informacao{
    char nome[50];
    int idade;
    char endereco[100];
};
typedef struct informacao dados;

int main(){
    dados inf;

    printf("Informe o nome:");
    scanf("\n%[^\n]s", &inf.nome);
    printf("Informe a idade:");
    scanf("%d", &inf.idade);
    printf("Informe o endereco onde mora:");
    scanf("\n%[^\n]s", inf.endereco);

    printf("NOME: %s\n", inf.nome);
    printf("IDADE: %d\n", inf.idade);
    printf("Endereco: %s\n", inf.endereco);
}

