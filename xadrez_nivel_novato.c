#include <stdio.h>

// Constantes para a quantidade de casas que cada peça deve mover.
#define BISPO_MOVE 5
#define TORRE_MOVE 5
#define RAINHA_MOVE 8

/*
   Função: moverBispoNovato
   Objetivo: Simular a movimentação do Bispo para 5 casas na diagonal superior direita.
            Em cada casa, o programa exibe "Cima, Direita".
*/
void moverBispoNovato() {
    for (int i = 1; i <= BISPO_MOVE; i++) {
        printf("Casa %d: Cima, Direita\n", i);
    }
}

/*
   Função: moverTorreNovato
   Objetivo: Simular a movimentação da Torre para 5 casas à direita.
            Em cada casa, o programa exibe "Direita".
*/
void moverTorreNovato() {
    for (int i = 1; i <= TORRE_MOVE; i++) {
        printf("Casa %d: Direita\n", i);
    }
}

/*
   Função: moverRainhaNovato
   Objetivo: Simular a movimentação da Rainha para 8 casas à esquerda.
            Em cada casa, o programa exibe "Esquerda".
*/
void moverRainhaNovato() {
    for (int i = 1; i <= RAINHA_MOVE; i++) {
        printf("Casa %d: Esquerda\n", i);
    }
}

/*
   Função: main
   Objetivo: Executa os procedimentos de movimentação para cada peça e exibe os resultados.
*/
int main(void) {
    printf("=== Desafio MateCheck: Xadrez - Nível Novato ===\n\n");
    
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    moverBispoNovato();
    
    printf("\nMovimentação da Torre (Direita):\n");
    moverTorreNovato();
    
    printf("\nMovimentação da Rainha (Esquerda):\n");
    moverRainhaNovato();
    
    return 0;
}
