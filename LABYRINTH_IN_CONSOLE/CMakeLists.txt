cmake_minimum_required(VERSION 3.20)
project(LABYRINTH_IN_CONSOLE)

set(CMAKE_CXX_STANDARD 14)

add_executable(LABYRINTH_IN_CONSOLE main.cpp src/header/Player.h src/header/MapCell.h src/header/GameMap.h src/Player.cpp src/GameMap.cpp src/MapCell.cpp)
