cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

set(CMAKE_CXX_STANDARD 17)

set(local_src
    solver.cpp
    solver.hpp
    predatorSolver.cpp
    predatorSolver.hpp
    preySolver.cpp
    preySolver.hpp
)

add_library(solvers ${local_src})

set_target_properties(solvers PROPERTIES LINKER_LANGUAGE CXX)