cmake_minimum_required(VERSION 3.15.3)
project(Projet_Robot)

set(CMAKE_CXX_STANDARD 14)

add_executable(Projet_Robot main.cpp
        Robot.h
        Robot.cpp
        Fonctions.h
        Fonctions.cpp
        )