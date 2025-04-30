cmake_minimum_required(VERSION 3.27)
project(Ejercicio_Polimorfismo)

# Definir las rutas base para los directorios de código fuente
set(SRC_DIR src)
set(MODEL_DIR ${SRC_DIR}/Model)
set(VIEW_DIR ${SRC_DIR}/View)

# Incluir directorios de encabezados
include_directories(${MODEL_DIR})
include_directories(${VIEW_DIR})

# Buscar todos los archivos fuente y de encabezado automáticamente
file(GLOB_RECURSE MODEL_SOURCES ${MODEL_DIR}/*.cpp ${MODEL_DIR}/*.h)
file(GLOB_RECURSE VIEW_SOURCES ${VIEW_DIR}/*.cpp ${VIEW_DIR}/*.h)

set(MAIN_FILES
        ${SRC_DIR}/Main.cpp
)

# Combinar todas las fuentes
set(SOURCES ${MODEL_SOURCES} ${VIEW_SOURCES})

# Nombre del binario basado en el nombre del proyecto
set(BINARY ${CMAKE_PROJECT_NAME})

# Crear el ejecutable principal
add_executable(${BINARY}_exe ${MAIN_FILES} ${SOURCES})

