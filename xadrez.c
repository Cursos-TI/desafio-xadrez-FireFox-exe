#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula os movimentos das peças de xadrez utilizando loops e prints.

int main() {
   const int bispo = 5; // O Bispo vai se mover 5 casas na diagonal
   const int rainha = 8; // A Rainha vai se mover 8 casas para a esquerda
   const int torre = 5; // A Torre vai se mover 5 casas para a direita

    //Torre - 5 casas para a direita
    printf("\nmovimentação da Torre\n");
    for (int mov = 0; mov < torre; mov++){
        printf("\nDireita\n");
    }

    // Bispo - 5 casas na diagonal superior direita (Cima + Direita)
    printf("\nMovimenação do Bispo\n");
    for(int mov = 0; mov < bispo; mov++){
        printf("\nDiagonal direita\n");
    }

    //Rainha - 8 casas para a esquerda
    printf("\nMovimentação da Rainha\n");
    for (int mov = 0; mov < rainha;mov++){ 
        printf("\nEsquerda\n");
    }

    //Cavalo - 2 passos para a Direita e 2 passo para Perpendicular.
    //horizontal
    printf("\nMovimenação cavalo\n");
    for (int i = 0; i < 1; i++) { //
    for (int j = 0; j < 2; j++) {
        printf("Direita\n");
    }
        //vertical
        int h = 0;
        while (h < 2) {
            printf("Cima\n");
            h++;
        }
    }

    return 0;
}
