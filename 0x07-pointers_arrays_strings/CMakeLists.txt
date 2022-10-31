cmake_minimum_required(VERSION 3.22)

PROJECT(0x07-pointers_arrays_strings C)
SET(CMAKE_C_COMPILER gcc)

set(CMAKE_C_FLAGS "-Wall -pedantic -Werror -Wextra -std=gnu89")

add_executable(alx 3-main.c 0-memset.c 1-memcpy.c 2-strchr.c 3-strspn.c)

