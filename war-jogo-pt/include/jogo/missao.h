// Arquivo de cabeçalho para as funções e estruturas relacionadas às missões no jogo War

#ifndef MISSao_H
#define MISSao_H

typedef struct {
    int id;             // Identificador da missão
    char descricao[256]; // Descrição da missão
    int completada;     // Status da missão (0 = não completada, 1 = completada)
} Missao;

// Função para criar uma nova missão
void criarMissao(Missao *missao, int id, const char *descricao);

// Função para verificar se a missão foi cumprida
int verificarMissao(const Missao *missao);

// Função para marcar a missão como completada
void completarMissao(Missao *missao);

#endif // MISSao_H