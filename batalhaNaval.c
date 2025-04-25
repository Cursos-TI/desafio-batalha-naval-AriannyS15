#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int  tabuleiro[10][10];
    int i, j;
    

    // Inicializando o tabuleiro com 0 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando o navio 1 horizontal 
   printf("Navio 1 - horizontal: \n");
   for ( i = 0; i < 3; i++)
   {
    tabuleiro[0][i] = 3;
    printf("cordenada navio horizontal: [%d][%d]\n", 0, i);
   }
   

    // Posicionando o navio 2 vertical 
   printf("\nNavio 2 - vertical: \n");
   for (i = 0; i < 3; i++)
   {
    tabuleiro[i + 2][3] = 3;
    printf("cordenada navio vertical: [%d][%d]\n", i + 2, 3);
   }
   
   // Posicionando navio 3 na diagona
   printf("\nNavio 3 - Diagonal:\n");
   for (i = 0; i < 3; i++) {
       tabuleiro[i + 5][i + 1] = 3;
       printf("Coordenada: [%d][%d]\n", i + 5, i + 1);
   }

   // Posicionando navio 4 na diagonal
   printf("\nNavio 4 - Diagonal:\n");
   for (i = 0; i < 3; i++) {
       tabuleiro[i + 1][8 - i] = 3;
       printf("Coordenada: [%d][%d]\n", i + 1, 8 - i);
   }


    // Exibe o tabuleiro
    printf("Tabuleiro Batalha Naval: \n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
