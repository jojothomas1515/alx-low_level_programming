project(Linked_List C)

set(CMAKE_C_STANDARD 90)

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -std=gnu89")

add_executable(alx 2-main.c 2-add_node.c 0-print_list.c)