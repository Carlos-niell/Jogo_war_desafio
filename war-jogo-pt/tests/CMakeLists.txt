cmake_minimum_required(VERSION 3.10)

# Define the project name
project(WarJogoPTTests)

# Specify the source files for the tests
set(TEST_SOURCES
    test_jogador.c
    test_missao.c
)

# Create an executable for the tests
add_executable(WarJogoPTTests ${TEST_SOURCES})

# Link the test executable with the necessary libraries
target_link_libraries(WarJogoPTTests
    PRIVATE
    jogo
    util
)

# Enable testing
enable_testing()

# Add tests
add_test(NAME TestJogador COMMAND WarJogoPTTests)
add_test(NAME TestMissao COMMAND WarJogoPTTests)