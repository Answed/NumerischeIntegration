cmake_minimum_required(VERSION 3.30)
project(NumerischeIntegration
        VERSION 1.0
        DESCRIPTION "A Programm that calculates the integral of a function using different methods.")

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_subdirectory(source)

