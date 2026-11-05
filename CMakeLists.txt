cmake_minimum_required(VERSION 3.10)
project(ECU_TechnoArtist)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Directorios de inclusión
include_directories(include)

# Agrega todos los archivos fuente
add_executable(ECU_TechnoArtist 
    src/sensores.cpp
    
)

# Opción: Usar variables para los archivos
set(SOURCES
    src/main.cpp
    src/modulo1.cpp
    src/modulo2.cpp
)

set(HEADERS
    include/modulo1.h
    include/modulo2.h
)

add_executable(ECU_TechnoArtist ${SOURCES} ${HEADERS})