set(CMAKE_C_STANDARD 90)
project(0x0F-function_pointers C)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -std=gnu89")
add_executable(alx 3-main.c 3-get_op_func.c 3-op_functions.c 3-calc.h)