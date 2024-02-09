cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Ofast -fPIC -ldl")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -fPIC -ldl")

project(nomnom)

set(main_source_files
    main.cpp
)

add_subdirectory(backend)
add_subdirectory(ui)



add_executable(nomnomGame ${main_source_files})

target_link_libraries(nomnomGame backend ui)

MESSAGE(STATUS "CMAKE FLAGS : ${LINK_OPTIONS}")