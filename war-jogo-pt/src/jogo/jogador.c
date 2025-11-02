// jogador.c
#include "jogador.h"
#include <stdlib.h>
#include <string.h>

// Estrutura que representa um jogador
typedef struct {
    char nome[50];
    int pontos;
    // Adicione outros atributos conforme necessário
} Jogador;

// Função para criar um novo jogador
Jogador* criar_jogador(const char* nome) {
    Jogador* novo_jogador = (Jogador*)malloc(sizeof(Jogador));
    if (novo_jogador != NULL) {
        strncpy(novo_jogador->nome, nome, sizeof(novo_jogador->nome) - 1);
        novo_jogador->nome[sizeof(novo_jogador->nome) - 1] = '\0'; // Garantir que a string esteja terminada
        novo_jogador->pontos = 0; // Inicializa os pontos
    }
    return novo_jogador;
}

// Função para liberar a memória de um jogador
void liberar_jogador(Jogador* jogador) {
    free(jogador);
}

// Função para adicionar pontos a um jogador
void adicionar_pontos(Jogador* jogador, int pontos) {
    if (jogador != NULL) {
        jogador->pontos += pontos;
    }
}

// Função para obter o nome de um jogador
const char* obter_nome_jogador(const Jogador* jogador) {
    return jogador != NULL ? jogador->nome : NULL;
}

// Função para obter os pontos de um jogador
int obter_pontos_jogador(const Jogador* jogador) {
    return jogador != NULL ? jogador->pontos : 0;
}