cmake_minimum_required(VERSION 3.30)
project(NumerischeIntegration
        VERSION 1.0
        DESCRIPTION "A Programm that calculates the integral of a function using different methods.")

set(CMAKE_CXX_STANDARD 20)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

include_directories(include)

add_subdirectory(source)

