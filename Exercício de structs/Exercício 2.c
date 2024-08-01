#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas{
    float X, Y;
}ponto;
int main(){
    ponto p;
    float d;

    printf("Informe a posicao de X:");
    scanf("%f", &p.X);
    printf("Informe a posicao do Y:");
    scanf("%f", &p.Y);

    d= sqrt((pow(p.X - 0, 2) + pow(p.Y - 0, 2)));
    printf("A distancia ate o ponto (0,0): %3.2f", d);
}