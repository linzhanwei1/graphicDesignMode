cmake_minimum_required(VERSION 3.2)
project(strategy CXX)

aux_source_directory(. SRC)
file(GLOB CURRENT_HEADERS *.h *.cpp)
add_executable(${PROJECT_NAME} ${SRC} ${CURRENT_HEADERS})

