project(Linked_List C)

set(CMAKE_C_STANDARD 90)

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -pedantic -std=gnu89")

add_executable(alx 3-main.c 3-add_node_end.c 0-print_list.c 1-list_len.c)