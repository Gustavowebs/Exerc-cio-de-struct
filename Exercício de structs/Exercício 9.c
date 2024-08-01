#include <stdio.h>
#include <stdlib.h>

struct Atletas{
    char nome[30], esporte[30];
    int idade;
    float altura;
}atleta[5];
int main(){
    float maior_altura=0;
    int maior_idade=0;
    int k, j;

    for(int i=0; i<5; i++){
        printf("\nInforme o nome do atleta:");
        scanf("\n%[^\n]s", &atleta[i].nome);
        printf("Informe o esporte:");
        scanf("\n%[^\n]s", &atleta[i].esporte);
        printf("Informe a idade:");
        scanf("%d", &atleta[i].idade);
        printf("Informe a altura:");
        scanf("%f", &atleta[i].altura);
    }
    for(int i=0; i<5; i++){
        if(atleta[i].altura > maior_altura){
            maior_altura = atleta[i].altura;
            j = i;
        }
    }
        for(int i=0; i<5; i++){
            if(atleta[i].idade > maior_idade){
                maior_idade = atleta[i].idade;
                k = i;
        }
    }
    printf("---------Atleta mais alto-------------------\n");
    printf("%s: %3.2fm\n", atleta[j].nome, atleta[j].altura);

    printf("----------Atleta mais velho----------------\n");
    printf("%s: %danos\n", atleta[k].nome, atleta[k].idade);
}
