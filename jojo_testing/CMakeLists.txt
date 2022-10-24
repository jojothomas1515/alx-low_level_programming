cmake_minimum_required(VERSION 3.10)
project(jojo_testing C)

set(CMAKE_C_STANDARD 90)

add_executable(bin main.c _putchar.c ../0x05-pointers_arrays_strings/0-reset_to_98.c ../0x05-pointers_arrays_strings/main.h)