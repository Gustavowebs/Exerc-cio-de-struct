#include <stdio.h>
#include <stdlib.h>

struct Atletas{
    char nome[30], esporte[30];
    int idade, idade1, idade2, idade3;
    float altura;
}atleta[5], auxilio;
int main(){
    float maior_altura=0;
    int maior_idade=0, idade1, idade2, idade3;
    int k, j, L;

    for(int i=0; i<5; i++){
        printf("\nInforme o nome do atleta:");
        scanf("\n%[^\n]s", &atleta[i].nome);
        printf("Informe o esporte:");
        scanf("\n%[^\n]s", &atleta[i].esporte);
        printf("Informe a idade do atleta:");
        scanf("%d", &atleta[i].idade);
        printf("Informe a altura:");
        scanf("%f", &atleta[i].altura);
    }
    for (int cont=1; cont<5; cont++) {
        for (int i=0;i<5-1;i++){
            if (atleta[i].idade>atleta[i+1].idade) {
                auxilio =atleta[i];
                atleta[i]=atleta[i+1];
                atleta[i+1]= auxilio;
        }
    }
    }
    for(int i=4;i>=0;i--){
        printf("Nome %s Idade: %d \n",atleta[i].nome,atleta[i].idade);
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