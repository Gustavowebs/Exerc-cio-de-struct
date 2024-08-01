#include <stdio.h>
#include <stdlib.h>

struct Jogador {
    int numeroCamisa;
    float peso;
    float altura;
    char posicao[20];
};

int main() {
    struct Jogador jogadores[22];

    for (int i = 0; i < 22; i++) {
        printf("Jogador %d:\n", i + 1);
        printf("Número da camisa: ");
        scanf("%d", &jogadores[i].numeroCamisa);
        printf("Peso (kg): ");
        scanf("%f", &jogadores[i].peso);
        printf("Altura (m): ");
        scanf("%f", &jogadores[i].altura);
        printf("Posição (atacante, defensor ou meio campista): ");
        scanf("%s", jogadores[i].posicao);
    }
    printf("\nRelatório dos jogadores:\n");
    printf("--------------------------------------------------\n");
    printf("| Na Camisa | Peso (kg) | Altura (m) | Posição     |\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 22; i++) {
        printf("| %-10d | %-9.2f | %-10.2f | %-12s |\n",
            jogadores[i].numeroCamisa, jogadores[i].peso,
            jogadores[i].altura, jogadores[i].posicao);
    }
    printf("--------------------------------------------------\n");

    return 0;
}
