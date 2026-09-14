cmake_minimum_required(VERSION 3.20)

project(cpp_chess LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(chess
    src/main.cpp
    src/chess/board.cpp
    src/chess/square.cpp
)