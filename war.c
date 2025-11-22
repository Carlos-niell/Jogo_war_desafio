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
// -----------------------------
// Sistema simples de empréstimo
// -----------------------------
typedef struct {
    int id;
    char titulo[100];
    int disponivel;       // 1 = disponível, 0 = emprestado
    int emprestado_por;   // id do jogador/usuário que pegou emprestado, -1 se disponível
} Livro;

/* Inicializa uma pequena coleção de livros */
void inicializar_biblioteca(Livro *livros, int *num_livros) {
    *num_livros = 5;
    for (int i = 0; i < *num_livros; ++i) {
        livros[i].id = i + 1;
        livros[i].disponivel = 1;
        livros[i].emprestado_por = -1;
    }
    strncpy(livros[0].titulo, "Estruturas de Dados em C", sizeof(livros[0].titulo));
    strncpy(livros[1].titulo, "Algoritmos e Complexidade", sizeof(livros[1].titulo));
    strncpy(livros[2].titulo, "Programacao de Sistemas", sizeof(livros[2].titulo));
    strncpy(livros[3].titulo, "Redes de Computadores", sizeof(livros[3].titulo));
    strncpy(livros[4].titulo, "Engenharia de Software", sizeof(livros[4].titulo));
}

/* Imprime o estado atual dos livros (apenas leitura) */
void imprimir_status_livros(const Livro *livros, int num_livros) {
    printf("Biblioteca - Status dos livros:\n");
    for (int i = 0; i < num_livros; ++i) {
        printf("  [%d] %s - %s", livros[i].id, livros[i].titulo,
               livros[i].disponivel ? "DISPONIVEL" : "EMPRESTADO");
        if (!livros[i].disponivel) {
            printf(" (emprestado por id %d)", livros[i].emprestado_por);
        }
        printf("\n");
    }
}

/*
  Tenta emprestar um livro.
  Retornos:
    1  = sucesso (emprestado)
    0  = livro não disponível
   -1  = livro não encontrado
*/
int emprestar_livro(Livro *livros, int num_livros, int livro_id, int patron_id) {
    for (int i = 0; i < num_livros; ++i) {
        if (livros[i].id == livro_id) {
            if (!livros[i].disponivel) {
                return 0; // não disponível
            }
            livros[i].disponivel = 0;
            livros[i].emprestado_por = patron_id;
            return 1; // sucesso
        }
    }
    return -1; // não encontrado
}

/*
  Devolve um livro.
  Retornos:
    1  = sucesso (devolvido)
    0  = livro já estava disponível / não emprestado
   -1  = livro não encontrado
*/
int devolver_livro(Livro *livros, int num_livros, int livro_id, int patron_id) {
    for (int i = 0; i < num_livros; ++i) {
        if (livros[i].id == livro_id) {
            if (livros[i].disponivel) {
                return 0; // já disponível
            }
            // opcional: verificar se quem devolve é quem pegou emprestado
            if (livros[i].emprestado_por != patron_id) {
                // ainda assim permite a devolução, mas poderia bloquear
            }
            livros[i].disponivel = 1;
            livros[i].emprestado_por = -1;
            return 1; // sucesso
        }
    }
    return -1; // não encontrado
}