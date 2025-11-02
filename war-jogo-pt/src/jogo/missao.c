// ============================================================================
//         PROJETO WAR ESTRUTURADO - MISSÕES DO JOGO
// ============================================================================
//
// Este arquivo contém a implementação das funções que gerenciam as missões
// dos jogadores, incluindo a criação e verificação de missões.
//
// ============================================================================

#include "missao.h"
#include <stdlib.h>
#include <string.h>

// Estrutura para representar uma missão
typedef struct {
    char descricao[256];
    int cumprida;
} Missao;

// Função para criar uma nova missão
Missao* criar_missao(const char* descricao) {
    Missao* nova_missao = (Missao*)malloc(sizeof(Missao));
    if (nova_missao != NULL) {
        strncpy(nova_missao->descricao, descricao, sizeof(nova_missao->descricao) - 1);
        nova_missao->descricao[sizeof(nova_missao->descricao) - 1] = '\0'; // Garantir a terminação
        nova_missao->cumprida = 0; // Inicialmente, a missão não está cumprida
    }
    return nova_missao;
}

// Função para verificar se a missão foi cumprida
int verificar_missao(Missao* missao) {
    if (missao != NULL) {
        return missao->cumprida;
    }
    return -1; // Retorna -1 se a missão for nula
}

// Função para marcar a missão como cumprida
void cumprir_missao(Missao* missao) {
    if (missao != NULL) {
        missao->cumprida = 1; // Marca a missão como cumprida
    }
}

// Função para liberar a memória da missão
void liberar_missao(Missao* missao) {
    free(missao);
}