// mapa.h
#ifndef MAPA_H
#define MAPA_H

// Estruturas de dados para o mapa
typedef struct {
    int largura;
    int altura;
    char **grid; // Representação do mapa como uma grade de caracteres
} Mapa;

// Funções para manipulação do mapa
Mapa* criar_mapa(int largura, int altura);
void destruir_mapa(Mapa* mapa);
void exibir_mapa(const Mapa* mapa);
void configurar_mapa(Mapa* mapa, const char* configuracao);
void atualizar_mapa(Mapa* mapa, int x, int y, char simbolo);

#endif // MAPA_H