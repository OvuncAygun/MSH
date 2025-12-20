cmake_minimum_required(VERSION 3.10.0)
project(MSH)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(DEPS_DIR "${CMAKE_BINARY_DIR}/_deps")

if(EXISTS "${DEPS_DIR}")
    message(STATUS "Clearing _deps folder: ${DEPS_DIR}")
    file(REMOVE_RECURSE "${DEPS_DIR}")
endif()

include(FetchContent)

add_executable(MSH 
    src/main.cpp
)

target_include_directories(MSH
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

FetchContent_Declare(
    MSH_M1
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M1.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M2
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M2.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M3
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M3.git
    GIT_TAG main
)
FetchContent_Declare(
    MSH_M4
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M4.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M5
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M5.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M6
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M6.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M7
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M7.git
    GIT_TAG main
)

FetchContent_Declare(
    MSH_M8
    GIT_REPOSITORY https://github.com/OvuncAygun/MSH_M8.git
    GIT_TAG main
)

FetchContent_MakeAvailable(MSH_M1 MSH_M2 MSH_M3 MSH_M4 MSH_M5 MSH_M6 MSH_M7 MSH_M8)

target_link_libraries(MSH
    PRIVATE
        MSH_M1
        MSH_M2
        MSH_M3
        MSH_M4
        MSH_M5
        MSH_M6
        MSH_M7
        MSH_M8
)

include(CTest)
enable_testing()

