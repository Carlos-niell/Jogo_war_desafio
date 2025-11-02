// ============================================================================
//         JOGO WAR - FUNÇÕES DE ENTRADA E SAÍDA
// ============================================================================
//
// Este arquivo contém funções utilitárias para entrada e saída, como leitura
// de dados do usuário e exibição de informações.
//
// ============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "io.h"

// Função para ler uma string da entrada padrão
void ler_string(char *buffer, size_t tamanho) {
    if (fgets(buffer, tamanho, stdin) != NULL) {
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0'; // Remove a nova linha
        }
    }
}

// Função para exibir uma mensagem na saída padrão
void exibir_mensagem(const char *mensagem) {
    printf("%s\n", mensagem);
}

// Função para ler um número inteiro da entrada padrão
int ler_inteiro() {
    int valor;
    scanf("%d", &valor);
    while (getchar() != '\n'); // Limpa o buffer
    return valor;
}