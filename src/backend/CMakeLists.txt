cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

set(CMAKE_CXX_STANDARD 17)

set(local_src
    agent.cpp
    agent.hpp
    gamespace.cpp
    gamespace.hpp
    position.hpp
    predator.hpp
    predator.cpp
    prey.hpp
    prey.cpp
    randomGen.hpp
    randomGen.cpp
)

add_library(backend ${local_src})

set_target_properties(backend PROPERTIES LINKER_LANGUAGE CXX)

set_target_properties(backend PROPERTIES LINKER_LANGUAGE CXX)