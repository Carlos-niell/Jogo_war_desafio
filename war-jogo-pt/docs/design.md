# Documentação de Design do Jogo War

## Visão Geral

O jogo War é um jogo de estratégia que envolve a conquista de territórios e a realização de missões. O objetivo principal é dominar o mapa e cumprir as missões designadas para vencer o jogo. Este documento descreve a arquitetura do sistema, as decisões de design e a modularização do código.

## Arquitetura do Sistema

O projeto é estruturado em módulos, cada um responsável por uma parte específica da lógica do jogo. Abaixo estão os principais componentes do sistema:

1. **Módulo Principal (`main.c`)**: 
   - Ponto de entrada do jogo.
   - Inicializa o ambiente e chama as funções principais para iniciar a partida.

2. **Módulo do Jogo (`war.c` e `war.h`)**:
   - Contém a lógica principal do jogo, incluindo a interação entre jogadores e a execução das regras do jogo.

3. **Módulo do Jogador (`jogador.c` e `jogador.h`)**:
   - Gerencia as ações dos jogadores, como criação, movimentação e interações.

4. **Módulo de Missões (`missao.c` e `missao.h`)**:
   - Implementa a criação e verificação de missões que os jogadores devem cumprir.

5. **Módulo do Mapa (`mapa.c` e `mapa.h`)**:
   - Gerencia a configuração e visualização do mapa do jogo.

6. **Módulo Utilitário (`io.c` e `io.h`)**:
   - Fornece funções utilitárias para entrada e saída, facilitando a interação com o usuário.

## Decisões de Design

- **Modularização**: O código foi dividido em módulos para facilitar a manutenção e a compreensão. Cada módulo tem uma responsabilidade clara, o que permite que desenvolvedores trabalhem em partes específicas do código sem afetar o restante do sistema.

- **Passagem de Parâmetros**: Utilizamos passagem por referência (ponteiros) para modificar dados e passagem por valor/referência constante (`const`) para leitura, garantindo a integridade dos dados e evitando modificações indesejadas.

- **Sistema de Missões**: O design do sistema de missões permite que os jogadores tenham objetivos específicos, aumentando a complexidade e a estratégia do jogo.

## Conclusão

Este documento fornece uma visão geral da arquitetura e das decisões de design do jogo War. A modularização e a clareza nas responsabilidades de cada componente são fundamentais para o sucesso do desenvolvimento e manutenção do projeto.