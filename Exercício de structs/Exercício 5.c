#include <stdio.h>
#include <stdlib.h>

typedef struct retangulo{
    float X, Y, i;
}ponto;

int main(){
    ponto p1, p2, p3;
    float X, Y;

    printf("----------Ponto superior esquerdo do retangulo-------------\n");
    printf("Informe o valor do (X,Y):");
    scanf("%f,%f", &p1.X, &p1.Y);
    printf("---------Ponto inferior direito do retangulo-----------------\n");
    printf("Informe o valor do (X,Y):");
    scanf("%f,%f", &p2.X, &p2.Y);

    X = p2.X - p1.X;
    Y = p2.Y - p1.Y;
    system("cls");

    printf("Informe um ponto a ser encontrado no retangulo:");
    scanf("%f", &p3.i);

    if(p3.i <= X && p3.i <= Y){
        printf("O ponto esta dentro do retangulo!\n");
    }else{
        printf("O ponto esta fora do retangulo!\n");
    }
}
