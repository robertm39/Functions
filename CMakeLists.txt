cmake_minimum_required(VERSION 3.20)
project(Functions)

set(CMAKE_CXX_STANDARD 17)

add_executable(Functions main.cpp consts.h Function.cpp Function.h)
