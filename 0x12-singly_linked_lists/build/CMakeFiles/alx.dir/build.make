# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build

# Include any dependencies generated for this target.
include CMakeFiles/alx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/alx.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/alx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alx.dir/flags.make

CMakeFiles/alx.dir/3-main.c.o: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/3-main.c.o: /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-main.c
CMakeFiles/alx.dir/3-main.c.o: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/alx.dir/3-main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/3-main.c.o -MF CMakeFiles/alx.dir/3-main.c.o.d -o CMakeFiles/alx.dir/3-main.c.o -c /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-main.c

CMakeFiles/alx.dir/3-main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/3-main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-main.c > CMakeFiles/alx.dir/3-main.c.i

CMakeFiles/alx.dir/3-main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/3-main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-main.c -o CMakeFiles/alx.dir/3-main.c.s

CMakeFiles/alx.dir/3-add_node_end.c.o: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/3-add_node_end.c.o: /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-add_node_end.c
CMakeFiles/alx.dir/3-add_node_end.c.o: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/alx.dir/3-add_node_end.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/3-add_node_end.c.o -MF CMakeFiles/alx.dir/3-add_node_end.c.o.d -o CMakeFiles/alx.dir/3-add_node_end.c.o -c /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-add_node_end.c

CMakeFiles/alx.dir/3-add_node_end.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/3-add_node_end.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-add_node_end.c > CMakeFiles/alx.dir/3-add_node_end.c.i

CMakeFiles/alx.dir/3-add_node_end.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/3-add_node_end.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/3-add_node_end.c -o CMakeFiles/alx.dir/3-add_node_end.c.s

CMakeFiles/alx.dir/0-print_list.c.o: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/0-print_list.c.o: /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c
CMakeFiles/alx.dir/0-print_list.c.o: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/alx.dir/0-print_list.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/0-print_list.c.o -MF CMakeFiles/alx.dir/0-print_list.c.o.d -o CMakeFiles/alx.dir/0-print_list.c.o -c /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c

CMakeFiles/alx.dir/0-print_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/0-print_list.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c > CMakeFiles/alx.dir/0-print_list.c.i

CMakeFiles/alx.dir/0-print_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/0-print_list.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/0-print_list.c -o CMakeFiles/alx.dir/0-print_list.c.s

CMakeFiles/alx.dir/1-list_len.c.o: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/1-list_len.c.o: /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/1-list_len.c
CMakeFiles/alx.dir/1-list_len.c.o: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/alx.dir/1-list_len.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/1-list_len.c.o -MF CMakeFiles/alx.dir/1-list_len.c.o.d -o CMakeFiles/alx.dir/1-list_len.c.o -c /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/1-list_len.c

CMakeFiles/alx.dir/1-list_len.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/1-list_len.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/1-list_len.c > CMakeFiles/alx.dir/1-list_len.c.i

CMakeFiles/alx.dir/1-list_len.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/1-list_len.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/1-list_len.c -o CMakeFiles/alx.dir/1-list_len.c.s

# Object files for target alx
alx_OBJECTS = \
"CMakeFiles/alx.dir/3-main.c.o" \
"CMakeFiles/alx.dir/3-add_node_end.c.o" \
"CMakeFiles/alx.dir/0-print_list.c.o" \
"CMakeFiles/alx.dir/1-list_len.c.o"

# External object files for target alx
alx_EXTERNAL_OBJECTS =

alx: CMakeFiles/alx.dir/3-main.c.o
alx: CMakeFiles/alx.dir/3-add_node_end.c.o
alx: CMakeFiles/alx.dir/0-print_list.c.o
alx: CMakeFiles/alx.dir/1-list_len.c.o
alx: CMakeFiles/alx.dir/build.make
alx: CMakeFiles/alx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable alx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alx.dir/build: alx
.PHONY : CMakeFiles/alx.dir/build

CMakeFiles/alx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/alx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/alx.dir/clean

CMakeFiles/alx.dir/depend:
	cd /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build /home/jojo/CLionProjects/alx-low_level_programming/0x12-singly_linked_lists/build/CMakeFiles/alx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/alx.dir/depend

