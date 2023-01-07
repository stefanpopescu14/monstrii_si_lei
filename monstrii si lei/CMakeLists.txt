cmake_minimum_required(VERSION 3.24)
project(monstrii_si_lei)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(monstrii_si_lei
        Costuri.cpp
        Costuri.h
        File_Handler.cpp
        File_Handler.h
        Interfata.h
        main.cpp
        Meniu.cpp
        Meniu.h
        Persoana.cpp
        Persoana.h)
