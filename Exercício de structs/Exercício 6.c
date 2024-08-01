#include <stdio.h>
#include <stdlib.h>

typedef struct dados_Aluno{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3, media;
}Aluno[5];

int main(){
    Aluno aluno;
    float  maior=0;
    int j;

    for(int i = 0; i < 5; i++){
        printf("\nInforme numero da matricula do aluno %d:", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Informe o nome do aluno %d:", i+1);
        scanf("\n%[^\n]s", &aluno[i].nome);
        printf("Informe as notas das prova 1, prova 2, prova 3:");
        scanf("%f,%f,%f", &aluno[i].nota1, &aluno[i].nota2, &aluno[i].nota3);

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
    }
    for(int i=0; i<5; i++){
        printf("NOME: %s\nMATRICULA: %d\nMEDIA: %3.2f\n", aluno[i].nome, aluno[i].matricula, aluno[i].media);
        if(aluno[i].media > maior){
            maior = aluno[i].media;
            j = i;
        }
    }
    printf("----------ALUNO MAIOR MEDIA--------\n");
    printf("Nome:%s\nMedia:%3.2f\n", aluno[j].nome, aluno[j].media);
}


