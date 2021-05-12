cmake_minimum_required(VERSION 3.10)

project(learning)

#file(GLOB_RECURSE sources CONFIGURE_DEPENDS "*n.cpp")

add_executable(${PROJECT_NAME} main.cpp algorithms.cpp)
