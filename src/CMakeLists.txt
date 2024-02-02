cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

project(nomnom)

set(main_source_files
    agent.cpp
    agent.hpp
    cliGameDisplay.cpp
    cliGameDisplay.hpp
    gameDisplay.hpp
    gamespace.cpp
    gamespace.hpp
    main.cpp
    position.hpp
    predator.hpp
    predator.cpp
    prey.hpp
    prey.cpp
    randomGen.hpp
    randomGen.cpp
)

add_executable(nomnomGame ${main_source_files})

MESSAGE(STATUS "CMAKE FLAGS : ${LINK_OPTIONS}")