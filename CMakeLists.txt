# Especificar a versão mínima requerida do cmake para rodar o projeto
cmake_minimum_required(VERSION 3.18)

# define o nome do projeto
project(Tutorial)

# define o padrão do C++ e se o mesmo é obrigatório
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(HEADER_FILES ${PROJECT_SOURCE_DIR}/test/test.hpp)

# cria o executável do projeto
add_executable(Tutorial main.cpp ${HEADER_FILES})

target_include_directories(Tutorial PUBLIC "${PROJECT_SOURCE_DIR}")
