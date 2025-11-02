#include <stdio.h>
#include "missao.h"

void test_criar_missao() {
    // Teste para a função de criação de missão
    Missao m = criar_missao("Conquistar 3 territórios", 3);
    printf("Teste de criação de missão: %s\n", m.descricao);
    // Verificar se a descrição e o objetivo estão corretos
    if (strcmp(m.descricao, "Conquistar 3 territórios") == 0 && m.objetivo == 3) {
        printf("Teste de criação de missão passou.\n");
    } else {
        printf("Teste de criação de missão falhou.\n");
    }
}

void test_verificar_missao() {
    // Teste para a função de verificação de missão
    Missao m = criar_missao("Conquistar 2 territórios", 2);
    m.territorios_conquistados = 2; // Simulando que o jogador conquistou 2 territórios

    if (verificar_missao(&m)) {
        printf("Teste de verificação de missão passou.\n");
    } else {
        printf("Teste de verificação de missão falhou.\n");
    }
}

int main() {
    test_criar_missao();
    test_verificar_missao();
    return 0;
}