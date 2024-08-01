#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct retangulo{
    float X, Y;
}ponto;
int main(){
    ponto p1, p2;
    float Area, comp_diagonal, p, X, Y;

    printf("\t--------Ponto superior esquerdo do retangulo---------\n");
    printf("Informe o ponto (X,Y):");
    scanf("%f, %f", &p1.X, &p1.Y);
    printf("\t--------Ponto inferior direito do retangulo-----------\n");
    printf("Informe o valor de (X,Y):");
    scanf("%f, %f", &p2.X, &p2.Y);

    X = p2.X - p1.X;
    Y = p2.Y - p1.Y;

    Area = X * Y;
    comp_diagonal = sqrt((pow(X, 2) + pow(Y, 2))); 
    p = (X + Y) * 2;

    printf("Area: %3.2f\nComprimento diagonal: %3.2f\nPerimetro: %3.2f\n", Area, comp_diagonal, p);
}