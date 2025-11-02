// war.h - Cabeçalho do jogo War
#ifndef WAR_H
#define WAR_H

// Estruturas de dados
typedef struct {
    char nome[50];
    int pontos;
    // Adicione outros atributos do jogador conforme necessário
} Jogador;

typedef struct {
    char descricao[100];
    int completada;
    // Adicione outros atributos da missão conforme necessário
} Missao;

// Funções do jogo
void inicializarJogo();
void iniciarPartida();
void finalizarPartida();
void adicionarJogador(Jogador *jogador);
void verificarMissao(Jogador *jogador, Missao *missao);

#endif // WAR_H