cmake_minimum_required(VERSION 2.6)

project(MyCpp)

file(GLOB SOURCES
        src/*.hpp
        src/*.cpp)

add_executable(MyCpp src/main.cpp ${SOURCES})