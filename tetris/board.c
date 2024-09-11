#include <stdio.h>
#include <time.h>
#include "tetris.h"

#define LARGURA_TABULEIRO 12
#define ALTURA_TABULEIRO 22

int board[ALTURA_TABULEIRO][LARGURA_TABULEIRO];

void inicializarTabuleiro() {
    for (int i = 0; i < ALTURA_TABULEIRO; i++) {
        for (int j = 0; j < LARGURA_TABULEIRO; j++) {
            board[i][j] = 0;
        }
    }
}

void imprimirBordas(int i, int j) {
    if (i == 21) {
        if (j != 0 && j != 11) {
            printf("\\/");
        } else {
            printf("  ");
        }
    } else if (j == 0) {
        printf("<!");
    } else if (j == 11) {
        printf("!>");
    } else if (i == 20) {
        printf("**");
    } else {
        printf("  ");
    }
}

void exibirTabuleiro() {
    for (int i = 0; i < ALTURA_TABULEIRO; i++) {
        for (int j = 0; j < LARGURA_TABULEIRO; j++) {
            if (i == 21 || j == 0 || j == 11 || i == 20) {
                imprimirBordas(i, j);
            } else if (board[i][j] == 0) {
                printf(" .");
            } else {
                printf("[]");
            }
        }
        printf("\n");
    }
}



void colocarTetramino(){
    
    srand(time(NULL));
    int posicaoTetramino = rand() % 18;
    printf("%d\n", posicaoTetramino);


    for(int i=0; i <4; i++){
        for(int j= 0; j<4; j++){
            board[i][j+3] = TETRAMINOS[posicaoTetramino][i][j];
        }
    }
}


int main(){
    inicializarTabuleiro();
    colocarTetramino();
    exibirTabuleiro();
}