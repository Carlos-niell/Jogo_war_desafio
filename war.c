// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_JOGADORES 6
#define MAX_TERRITORIOS 42
#define MAX_MISSOES 14

typedef struct {
    int id;
    char nome[50];
    int territorios[MAX_TERRITORIOS];
    int num_territorios;
    int exercitos_disponiveis;
    int missao;
} Jogador;

typedef struct {
    int id;
    char nome[50];
    int continente;
    int dono;
    int exercitos;
} Territorio;

typedef struct {
    int id;
    char descricao[200];
    int objetivo_tipo;
    int objetivo_valor;
} Missao;

// Funções principais
void inicializar_jogo(Jogador *jogadores, int *num_jogadores);
void distribuir_territorios(Jogador *jogadores, Territorio *territorios, int num_jogadores);
void distribuir_missoes(Jogador *jogadores, Missao *missoes, int num_jogadores);
void realizar_turno(Jogador *jogador, Territorio *territorios);
int verificar_missao(const Jogador *jogador, const Missao *missao, const Territorio *territorios);

int main() {
    Jogador jogadores[MAX_JOGADORES];
    Territorio territorios[MAX_TERRITORIOS];
    Missao missoes[MAX_MISSOES];
    int num_jogadores;
    
    srand(time(NULL));
    inicializar_jogo(jogadores, &num_jogadores);
    
    printf("War - Jogo de Estratégia\n");
    printf("Iniciando partida com %d jogadores...\n", num_jogadores);
    
    return 0;
}