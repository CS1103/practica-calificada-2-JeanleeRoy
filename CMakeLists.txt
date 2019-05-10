cmake_minimum_required(VERSION 3.13.4)
project(PC2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC2 main.cpp Arena.cpp Arena.h Fighter.cpp Fighter.h Skill.cpp Skill.h)