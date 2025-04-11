#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main () {

    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [LINHAS] [COLUNAS];

    for (int i = 0; i < LINHAS; i++) {
         for (int j = 0; j < COLUNAS; j++) {
           tabuleiro[i][j] = 0;
    }
}
//navio 1
        for (int j = 3; j < 6; j++){
            tabuleiro [4][j]=3;
            }    
//navio 2
        for (int i = 5; i < 8; i++){
            tabuleiro [i][7]=3;
            }    
//navio 3
    for (int i = 0; i < 3; i++){
        tabuleiro [i][i]=3;
        }   
//navio 4
    for (int i = 0; i < 3; i++){
        tabuleiro [0 + i][9 - i]=3;
        }   



     // Exibir o tabuleiro
   printf("   Tabuleiro batalha naval!!!\n   ");
   for (int j = 0; j < 10; j++) {
       printf("%c ", coluna[j]);
   }
   printf("\n");

   for (int i = 0; i < 10; i++) {
       printf("%2d ", i + 1);
       for (int j = 0; j < 10; j++) {
           printf("%d ", tabuleiro[i][j]);
       }
       printf("\n");
   }

   return 0;
}