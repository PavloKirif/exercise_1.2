cmake_minimum_required(VERSION 3.22)
project(exercise_1.2)
set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp teacher/teacher.h teacher/teacher.cpp)