#!/bin/bash

# Script para compilar e executar o jogo War

# Compilar o projeto
make

# Verificar se a compilação foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Compilação bem-sucedida. Iniciando o jogo..."
    # Executar o jogo
    ./src/main
else
    echo "Erro na compilação. Verifique os logs acima."
fi