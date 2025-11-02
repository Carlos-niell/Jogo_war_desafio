// war.h
#ifndef WAR_H
#define WAR_H

// Estruturas de dados
typedef struct {
    char nome[50];
    int pontos;
    // Outras informações do jogador
} Jogador;

typedef struct {
    char descricao[100];
    int concluida;
    // Outras informações da missão
} Missao;

// Funções relacionadas ao jogo
void inicializarJogo();
void iniciarPartida();
void finalizarPartida();
void exibirStatusJogadores(Jogador* jogadores, int numJogadores);

// Funções de missões
void criarMissao(Missao* missao, const char* descricao);
int verificarMissaoConcluida(const Missao* missao);

// Funções de jogadores
void criarJogador(Jogador* jogador, const char* nome);
void movimentarJogador(Jogador* jogador, int novaPosicao);

// Outras funções do jogo
void exibirMapa();

#endif // WAR_H