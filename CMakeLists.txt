cmake_minimum_required(VERSION 4.1)
project(LogAnalyzer)

set(CMAKE_CXX_STANDARD 26)

set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc -static-libstdc++")

add_executable(LogAnalyzer main.cpp)
