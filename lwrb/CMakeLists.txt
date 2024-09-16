cmake_minimum_required(VERSION 3.25)

project(Main LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

# file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(lwrb
    STATIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/lwrb.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/lwrb.c
)

add_executable(Main main.c )

target_link_libraries(Main lwrb)