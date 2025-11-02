cmake_minimum_required(VERSION 3.10)

project(WarJogoPT)

set(CMAKE_C_STANDARD 11)

# Adiciona os diretórios de inclusão
include_directories(include)

# Adiciona os arquivos fonte do jogo
file(GLOB_RECURSE SOURCES
    "src/jogo/*.c"
    "src/util/*.c"
    "src/main.c"
)

# Cria o executável do jogo
add_executable(war_jogo ${SOURCES})

# Adiciona as opções de compilação
target_compile_options(war_jogo PRIVATE -Wall -Wextra -pedantic)