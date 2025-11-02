// mapa.c
#include "mapa.h"
#include <stdio.h>
#include <stdlib.h>

// Estrutura que representa o mapa do jogo
typedef struct {
    int largura;
    int altura;
    char **grid;
} Mapa;

// Função para criar o mapa
Mapa* criar_mapa(int largura, int altura) {
    Mapa *mapa = (Mapa *)malloc(sizeof(Mapa));
    mapa->largura = largura;
    mapa->altura = altura;

    // Alocação da grade do mapa
    mapa->grid = (char **)malloc(altura * sizeof(char *));
    for (int i = 0; i < altura; i++) {
        mapa->grid[i] = (char *)malloc(largura * sizeof(char));
        for (int j = 0; j < largura; j++) {
            mapa->grid[i][j] = '.'; // Inicializa o mapa com pontos
        }
    }
    return mapa;
}

// Função para liberar a memória do mapa
void liberar_mapa(Mapa *mapa) {
    for (int i = 0; i < mapa->altura; i++) {
        free(mapa->grid[i]);
    }
    free(mapa->grid);
    free(mapa);
}

// Função para exibir o mapa
void exibir_mapa(Mapa *mapa) {
    for (int i = 0; i < mapa->altura; i++) {
        for (int j = 0; j < mapa->largura; j++) {
            printf("%c ", mapa->grid[i][j]);
        }
        printf("\n");
    }
}