#include <stdio.h>

int main() {
    // Criando um tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posição inicial do navio vertical (coluna 1, da linha 1 à 3)
    int x1 = 1; // coluna
    for (int y = 1; y <= 3; y++) {
        tabuleiro[y][x1] = 1;
        printf("Navio vertical em: (%d, %d)\n", y, x1);
    }

    // Posição inicial do navio horizontal (linha 4, da coluna 2 à 4)
    int y2 = 4; // linha
    for (int x = 2; x <= 4; x++) {
        tabuleiro[y2][x] = 2;
        printf("Navio horizontal em: (%d, %d)\n", y2, x);
    }

    return 0;
}