#include <stdio.h>
#include <stdlib.h>

struct Horas{
    int h, min, seg, soma;

}horas[3];
int main(){
    int maior=0, j;

    for(int i=0; i<3; i++){
        printf("\nInforme a hora:");
        scanf("%d", &horas[i].h);
        printf("Informe os minutos:");
        scanf("%d", &horas[i].min);
        printf("Informe os segundos:");
        scanf("%d", &horas[i].seg);

        horas[i].soma = horas[i].h + horas[i].min + horas[i].seg;
    }
    for(int i=0; i<3; i++){
        if(horas[i].soma > maior){
            maior = horas[i].soma;
            j = i;
        }
    }
    printf("\n%dh foi maior hora\n", horas[j].h);
}

