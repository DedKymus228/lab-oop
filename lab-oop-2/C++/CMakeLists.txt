cmake_minimum_required(VERSION 3.20)
project(lab_oop_2)

set(CMAKE_CXX_STANDARD 20)

add_library(MyClassLib STATIC
        MyClassLib/Triangle.cpp
        MyClassLib/Triangle.h
)


add_executable(lab_oop_2 main.cpp)


target_link_libraries(lab_oop_2 MyClassLib)


target_include_directories(lab_oop_2 PUBLIC MyClassLib)