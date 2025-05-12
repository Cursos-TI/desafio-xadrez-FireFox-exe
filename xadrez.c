#include <stdio.h>

// Torre - movimento recursivo para a direita
void mov_torre(int casas){
    if (casas > 0 ){
        printf("Direita\n");
        mov_torre(casas - 1);
    }
}

// Bispo - movimento recursivo na diagonal superior direita
void mov_bispo(int casas){
    if (casas > 0){
        printf("Diagonal Superior Direita\n");
        mov_bispo(casas - 1);
    }
}

// Rainha 8 pra esquerda
void mov_rainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        mov_rainha(casas - 1);
    }
}

// movimentato horizontal cavalo
void moverHorizontal(int passos) {
    if (passos > 0) {
        printf("Direita\n");  // ou Esquerda
        moverHorizontal(passos - 1);
    }
}
//movimento vertical cavalo
void moverVertical(int passos) {
    if (passos > 0) {
        printf("Cima\n");  // ou Baixo
        moverVertical(passos - 1);
    }
}

// junção do horizontal e vertical 
void cavalo(int movimentos) {
    if (movimentos > 0) {
        moverHorizontal(2);
        moverVertical(3); 
    }
}

int main() {
    const int bispo = 5;
    const int rainha = 8;
    const int torre = 5;
    const int movimentosCavalo = 2;

    printf("\nMovimentação da Torre\n");
    mov_torre(torre); // chamada moov_torre

    printf("\nMovimentação do Bispo\n");
    mov_bispo(bispo); // chamado mov_bispo

    //rainha e seus 8 movimentos
    printf("\nMovimentação da Rainha\n");
    mov_rainha(rainha); 


    printf("\nMovimentação do Cavalo\n");
    cavalo(movimentosCavalo); // chamada mov_cavalo

    return 0;
}
