// jogador.h
#ifndef JOGADOR_H
#define JOGADOR_H

typedef struct {
    char nome[50];
    int pontos;
    int posicao;
} Jogador;

// Função para criar um novo jogador
Jogador criarJogador(const char* nome);

// Função para mover o jogador
void moverJogador(Jogador* jogador, int novaPosicao);

// Função para adicionar pontos ao jogador
void adicionarPontos(Jogador* jogador, int pontos);

// Função para obter o nome do jogador
const char* obterNomeJogador(const Jogador* jogador);

// Função para obter os pontos do jogador
int obterPontosJogador(const Jogador* jogador);

// Função para obter a posição do jogador
int obterPosicaoJogador(const Jogador* jogador);

#endif // JOGADOR_H