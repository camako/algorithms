cmake_minimum_required (VERSION 3.22 FATAL_ERROR)

project (ALGORITHMS
         VERSION 1.0.0
         DESCRIPTION "algorithms")

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set (executable_name go)

add_executable (${executable_name} main.cpp bfs.cpp dfs.cpp graph.cpp)
