cmake_minimum_required(VERSION 3.15)
project(learn_c C)

set(CMAKE_C_STANDARD 11)

add_executable(learn_c source/main.c source/variable.c)
add_executable(dataType source/dataType.c)
add_executable(oddOrEven source/oddOrEven.c)
add_executable(pointer source/pointer.c)