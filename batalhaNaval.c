#include <stdio.h>

int main() {
int tabuleiro[10][10]= {0};
int coluna_vertical=2;

for (int linha = 1; linha <= 4; linha++) {
    tabuleiro[linha][coluna_vertical] = 3;
}
int linha_horizontal = 6;
for (int coluna = 3; coluna <= 7; coluna++) {
    tabuleiro[linha_horizontal][coluna] = 3;
}

for (int i = 0; i < 5; i++) {
    tabuleiro[i][i] = 3;
}
for (int i = 0; i < 5; i++) {
    tabuleiro[i][9 - i] = 3;
}

printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}


