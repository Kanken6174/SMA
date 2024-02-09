cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

set(CMAKE_CXX_STANDARD 17)

set(local_src
    gamespace.cpp
    gamespace.hpp
    position.hpp
    randomGen.hpp
    randomGen.cpp
)

add_library(backend ${local_src})

add_subdirectory(agents)
add_subdirectory(solvers)

set_target_properties(backend PROPERTIES LINKER_LANGUAGE CXX)

link_libraries(backend solvers agents)