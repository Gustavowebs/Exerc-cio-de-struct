#include <stdio.h>
#include <stdlib.h>

typedef struct agenda_telefone{
    char nome[100], email[100], dd[20], dd2[20];
    long telef_Movel, telef_fixo;
}telefone[100];
int main(){
    telefone agenda;

    for(int i=0; i<100; i++){
        printf("\nInforme o nome completo:");
        scanf("\n%[^\n]s", &agenda[i].nome);
        printf("Informe o (dd) e o numero do telefone movel:");
        scanf("%s %d", &agenda[i].dd, &agenda[i].telef_Movel);
        printf("Informe o (dd) e o numero do telefone fixo:");
        scanf("%s %d", &agenda[i].dd2, &agenda[i].telef_fixo);
        printf("Informe o email:");
        scanf("%s", &agenda[i].email);
    }

    for(int i=0; i<100; i++){
        printf("\nNome completo: %s\n", agenda[i].nome);
        printf("Numero do telefone movel: %s %d\n", agenda[i].dd, agenda[i].telef_Movel);
        printf("Numero do telefone fixo: %s %d\n", agenda[i].dd2, agenda[i].telef_fixo);
        printf("Email: %s\n", agenda[i].email);
    }
}