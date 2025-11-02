# Especificações do Projeto War

## Objetivo do Jogo
O jogo War é um jogo de estratégia onde os jogadores competem para conquistar territórios e cumprir missões. O objetivo é dominar o mapa e eliminar os adversários.

## Estrutura do Projeto
O projeto é organizado em diferentes módulos, cada um responsável por uma parte específica do jogo. Abaixo estão os principais componentes do projeto:

### 1. Módulo Principal
- **`src/main.c`**: Ponto de entrada do jogo. Inicializa o ambiente e chama as funções principais para iniciar a partida.

### 2. Módulo do Jogo
- **`src/jogo/war.c`**: Implementação das funções principais do jogo, incluindo a lógica de jogo e a interação entre os jogadores.
- **`src/jogo/war.h`**: Cabeçalho que declara as funções e estruturas usadas em `war.c`.

### 3. Módulo do Jogador
- **`src/jogo/jogador.c`**: Funções relacionadas aos jogadores, como criação, movimentação e ações dos jogadores no jogo.
- **`src/jogo/jogador.h`**: Cabeçalho que declara as funções e estruturas relacionadas aos jogadores.

### 4. Módulo de Missões
- **`src/jogo/missao.c`**: Implementação das funções que gerenciam as missões dos jogadores, incluindo a criação e verificação de missões.
- **`src/jogo/missao.h`**: Cabeçalho que declara as funções e estruturas relacionadas às missões.

### 5. Módulo do Mapa
- **`src/jogo/mapa.c`**: Funções que gerenciam o mapa do jogo, incluindo a configuração e visualização do mapa.
- **`src/jogo/mapa.h`**: Cabeçalho que declara as funções e estruturas relacionadas ao mapa.

### 6. Módulo Utilitário
- **`src/util/io.c`**: Funções utilitárias para entrada e saída, como leitura de dados do usuário e exibição de informações.
- **`src/util/io.h`**: Cabeçalho que declara as funções utilitárias de entrada e saída.

### 7. Inclusões
- **`include/jogo/war.h`**: Cópia do cabeçalho `war.h` para inclusão em outros módulos.
- **`include/jogo/jogador.h`**: Cópia do cabeçalho `jogador.h` para uso em outros módulos.
- **`include/jogo/missao.h`**: Cópia do cabeçalho `missao.h` para uso em outros módulos.

### 8. Testes
- **`tests/test_jogador.c`**: Testes unitários para as funções relacionadas aos jogadores.
- **`tests/test_missao.c`**: Testes unitários para as funções relacionadas às missões.
- **`tests/CMakeLists.txt`**: Configuração para a construção dos testes com CMake.

### 9. Documentação
- **`docs/design.md`**: Documentação de design do jogo, incluindo arquitetura e decisões de design.
- **`docs/especificacoes.md`**: Este arquivo, que contém as especificações do projeto.

### 10. Scripts e Configurações
- **`scripts/run.sh`**: Script para compilar e executar o jogo de forma automatizada.
- **`Makefile`**: Regras de construção do projeto usando `make`.
- **`CMakeLists.txt`**: Configuração da construção do projeto com CMake.
- **`.gitignore`**: Arquivos e diretórios a serem ignorados pelo Git.
- **`LICENSE`**: Licença do projeto.
- **`README.md`**: Documentação do projeto, incluindo instruções de instalação e uso.

## Requisitos Funcionais
- O jogo deve permitir que os jogadores se movimentem pelo mapa.
- Os jogadores devem ser capazes de realizar ações, como atacar e defender.
- O sistema de missões deve ser implementado, permitindo que os jogadores cumpram objetivos específicos.
- O jogo deve ter uma interface de entrada e saída amigável para o usuário.

## Requisitos Não Funcionais
- O código deve ser modular e bem organizado.
- Deve haver testes unitários para garantir a qualidade do código.
- A documentação deve ser clara e acessível.

## Conclusão
Este documento serve como um guia para o desenvolvimento do jogo War, detalhando a estrutura do projeto e os requisitos necessários para sua implementação.