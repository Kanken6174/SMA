cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

set(CMAKE_CXX_STANDARD 17)

set(local_src
    cliGameDisplay.cpp
    cliGameDisplay.hpp
    gameDisplay.hpp
)

add_library(ui ${local_src})

link_libraries(ui backend)

set_target_properties(backend PROPERTIES LINKER_LANGUAGE CXX)

set_target_properties(backend PROPERTIES LINKER_LANGUAGE CXX)