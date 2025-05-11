#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula os movimentos das peças de xadrez utilizando loops e prints.

int main() {
   const int bispo = 5; // O Bispo vai se mover 5 casas na diagonal
   const int rainha = 8; // A Rainha vai se mover 8 casas para a esquerda
   const int torre = 5; // A Torre vai se mover 5 casas para a direita
   const int cavalo; // Movimentação do cavalo em formato de loop aninhado. 2 para esquerda e 1 na perpendicular.

    //Torre - 5 casas para a direita
    printf("movimentação da Torre\n");
    for (int mov = 0; mov < torre; mov++){
        printf("\nDireita\n");

    // Bispo - 5 casas na diagonal superior direita (Cima + Direita)
    printf("Movimenação do Bispo\n");
    for(int mov = 0; mov < bispo; mov++){
        printf("\nDiagonal direita\n");
    }
    printf("Movimentação da Rainha\n");

    //Rainha - 8 casas para a esquerda
    for (int mov = 0; mov < rainha;mov++){ 
        printf("\nEsquerda\n");
    }

    //Cavalo - 2 passos para a Direita e 1 passo para Perpendicular.
    for (int i = 0; i < 2; i++){
        printf("Direita\n"); // ou esquerda
    }
        int j = 0;
        while(j < 1){
            printf("Cima\n"); // ou baixo
        j++;
    }

    return 0;
}
