cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

set(CMAKE_CXX_STANDARD 17)

set(local_src
    agent.hpp
    agent.cpp
    predator.hpp
    predator.cpp
    prey.hpp
    prey.cpp
)

add_library(agents ${local_src})

set_target_properties(agents PROPERTIES LINKER_LANGUAGE CXX)