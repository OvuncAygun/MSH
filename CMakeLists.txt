cmake_minimum_required(VERSION 3.10.0)
project(MSH)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXTERNAL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external)

target_include_directories(MSH
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/external
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M1
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M2
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M3
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M4
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M5
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M6
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M7
        ${CMAKE_CURRENT_SOURCE_DIR}/external/M8
    
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(MSH 
    src/main.cpp
)

include(CTest)
enable_testing()

