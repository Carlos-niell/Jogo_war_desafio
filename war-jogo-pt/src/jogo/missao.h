// missao.h
#ifndef MISSao_H
#define MISSao_H

typedef struct {
    char descricao[256];
    int completada;
} Missao;

// Função para criar uma nova missão
void criarMissao(Missao *missao, const char *descricao);

// Função para verificar se a missão foi cumprida
int verificarMissao(const Missao *missao);

// Função para marcar a missão como cumprida
void completarMissao(Missao *missao);

#endif // MISSao_H