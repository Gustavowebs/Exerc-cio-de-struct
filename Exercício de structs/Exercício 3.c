#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas{
    float X, Y;
}ponto;
int main(){
    ponto p1, p2;
    float d;

    printf("Informe a coordenada do X,Y no ponto 1:");
    scanf("%f, %f", &p1.X, &p1.Y);
    printf("Informe a coordenada do X,Y no ponto 2:");
    scanf("%f, %f", &p2.X, &p2.Y);

    d= sqrt((pow(p2.X - p1.X, 2) + pow(p2.Y - p1.Y, 2)));

    printf("O valor da distancia: %3.2f", d);
}