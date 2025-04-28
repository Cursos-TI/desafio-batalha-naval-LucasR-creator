#include <stdio.h>

int main() {
int tabuleiro[5][5]= {0};
int x1 =1;
int y;
for (int y = 1; y <= 3; y++){
tabuleiro [y][x1] =1;
printf ("Navio vertical em: (%d, %d)\n",y,x1);
}

int y2 =4;
for (int x = 2; x <= 4; x++){
    tabuleiro[y2][x] = 2;
        printf("Navio horizontal em: (%d, %d)\n", y2, x);
}
    return 0;
}