#include <stdio.h>
#include <assert.h>
#include "jogador.h"

void test_criar_jogador() {
    Jogador jogador;
    criar_jogador(&jogador, "Carlos", 1);
    assert(jogador.nome == "Carlos");
    assert(jogador.id == 1);
}

void test_movimentar_jogador() {
    Jogador jogador;
    criar_jogador(&jogador, "Carlos", 1);
    movimentar_jogador(&jogador, 5, 10);
    assert(jogador.posicao.x == 5);
    assert(jogador.posicao.y == 10);
}

void test_realizar_acao() {
    Jogador jogador;
    criar_jogador(&jogador, "Carlos", 1);
    int resultado = realizar_acao(&jogador, "atacar");
    assert(resultado == 1); // Supondo que a ação de atacar sempre retorna 1
}

int main() {
    test_criar_jogador();
    test_movimentar_jogador();
    test_realizar_acao();
    printf("Todos os testes passaram!\n");
    return 0;
}