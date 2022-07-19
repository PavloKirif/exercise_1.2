cmake_minimum_required(VERSION 3.22)
project(teacher LANGUAGES CXX)

set(SOURCE_LIB teacher.cpp)
add_library(teacher STATIC ${SOURCE_LIB})