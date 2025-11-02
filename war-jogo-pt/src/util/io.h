#ifndef IO_H
#define IO_H

#include <stdio.h>

// Função para ler uma string da entrada padrão
void ler_string(char *buffer, int tamanho);

// Função para exibir uma mensagem na saída padrão
void exibir_mensagem(const char *mensagem);

// Função para ler um número inteiro da entrada padrão
int ler_inteiro();

// Função para confirmar uma ação com o usuário
int confirmar_acao(const char *mensagem);

#endif // IO_H