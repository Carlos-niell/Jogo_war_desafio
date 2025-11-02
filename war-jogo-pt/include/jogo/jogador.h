// jogador.h
#ifndef JOGADOR_H
#define JOGADOR_H

typedef struct {
    char nome[50];
    int pontos;
    int posicao;
} Jogador;

// Função para criar um novo jogador
Jogador criar_jogador(const char* nome);

// Função para mover o jogador
void mover_jogador(Jogador* jogador, int nova_posicao);

// Função para atualizar os pontos do jogador
void atualizar_pontos(Jogador* jogador, int pontos);

// Função para obter o nome do jogador
const char* obter_nome_jogador(const Jogador* jogador);

// Função para obter os pontos do jogador
int obter_pontos_jogador(const Jogador* jogador);

// Função para obter a posição do jogador
int obter_posicao_jogador(const Jogador* jogador);

#endif // JOGADOR_H