#include <stdio.h>

int main() {
    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro [10][10];
    

    printf("      BATALHA NAVAL      \n");
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    // Horizontal (linha 8-9, colunas 9)
tabuleiro[8][9] = 3;
tabuleiro[9][9] = 3; 

    // Horizontal (linha 1, colunas 3-5)
tabuleiro[1][3] = 3;
tabuleiro[1][4] = 3;  
tabuleiro[1][5] = 3;

    // Vertical (linha 0-1, coluna 1)
tabuleiro[0][1] = 3;
tabuleiro[1][1] = 3;

    // Horizontal (linha 7, colunas 6-7)
tabuleiro[7][7] = 3;
tabuleiro[7][6] = 3;

    // Vertical (linha 7-8, coluna 1)
tabuleiro[7][1] = 3;
tabuleiro[8][1] = 3;


    // --- Exibição do tabuleiro ---

 printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j+1);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}
