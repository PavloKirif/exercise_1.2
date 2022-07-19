cmake_minimum_required(VERSION 3.22)
project(exercise_1.2)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_EXE main.cpp)
add_executable(main ${SOURCE_EXE})

include_directories(teacher)
add_subdirectory(teacher)

target_link_libraries(main PRIVATE teacher)