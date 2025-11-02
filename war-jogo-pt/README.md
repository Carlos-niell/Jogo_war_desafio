# Projeto War em C

Este projeto é uma implementação do jogo War, onde os jogadores competem para conquistar territórios e completar missões. O jogo é modularizado em várias funções e arquivos, permitindo uma fácil manutenção e expansão.

## Estrutura do Projeto

O projeto é organizado da seguinte forma:

```
war-jogo-pt
├── src
│   ├── main.c          # Ponto de entrada do jogo
│   ├── jogo
│   │   ├── war.c      # Lógica principal do jogo
│   │   ├── war.h      # Cabeçalho para funções do jogo
│   │   ├── jogador.c   # Funções relacionadas aos jogadores
│   │   ├── jogador.h   # Cabeçalho para funções de jogadores
│   │   ├── missao.c    # Funções para gerenciamento de missões
│   │   ├── missao.h    # Cabeçalho para funções de missões
│   │   ├── mapa.c      # Funções para gerenciamento do mapa
│   │   └── mapa.h      # Cabeçalho para funções de mapa
│   └── util
│       ├── io.c       # Funções utilitárias de entrada e saída
│       └── io.h       # Cabeçalho para funções utilitárias
├── include
│   └── jogo
│       ├── war.h      # Cabeçalho do jogo para outros módulos
│       ├── jogador.h   # Cabeçalho de jogadores para outros módulos
│       └── missao.h    # Cabeçalho de missões para outros módulos
├── tests
│   ├── test_jogador.c  # Testes unitários para jogadores
│   ├── test_missao.c    # Testes unitários para missões
│   └── CMakeLists.txt   # Configuração dos testes com CMake
├── docs
│   ├── design.md       # Documentação de design do jogo
│   └── especificacoes.md # Especificações do projeto
├── scripts
│   └── run.sh          # Script para compilar e executar o jogo
├── Makefile             # Regras de construção do projeto
├── CMakeLists.txt      # Configuração de construção com CMake
├── .gitignore          # Arquivos a serem ignorados pelo Git
├── LICENSE             # Licença do projeto
└── README.md           # Documentação do projeto
```

## Instruções de Instalação

1. Clone o repositório:
   ```
   git clone <url-do-repositorio>
   cd war-jogo-pt
   ```

2. Compile o projeto usando o Make:
   ```
   make
   ```

3. Execute o jogo:
   ```
   ./src/main
   ```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests.

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo LICENSE para mais detalhes.