# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw"

# Include any dependencies generated for this target.
include CMakeFiles/alx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/alx.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/alx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alx.dir/flags.make

CMakeFiles/alx.dir/main.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/main.c.obj: ../main.c
CMakeFiles/alx.dir/main.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/alx.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/main.c.obj -MF CMakeFiles\alx.dir\main.c.obj.d -o CMakeFiles\alx.dir\main.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\main.c"

CMakeFiles/alx.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\main.c" > CMakeFiles\alx.dir\main.c.i

CMakeFiles/alx.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\main.c" -o CMakeFiles\alx.dir\main.c.s

CMakeFiles/alx.dir/0-isupper.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/0-isupper.c.obj: ../0-isupper.c
CMakeFiles/alx.dir/0-isupper.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/alx.dir/0-isupper.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/0-isupper.c.obj -MF CMakeFiles\alx.dir\0-isupper.c.obj.d -o CMakeFiles\alx.dir\0-isupper.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\0-isupper.c"

CMakeFiles/alx.dir/0-isupper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/0-isupper.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\0-isupper.c" > CMakeFiles\alx.dir\0-isupper.c.i

CMakeFiles/alx.dir/0-isupper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/0-isupper.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\0-isupper.c" -o CMakeFiles\alx.dir\0-isupper.c.s

CMakeFiles/alx.dir/1-isdigit.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/1-isdigit.c.obj: ../1-isdigit.c
CMakeFiles/alx.dir/1-isdigit.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/alx.dir/1-isdigit.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/1-isdigit.c.obj -MF CMakeFiles\alx.dir\1-isdigit.c.obj.d -o CMakeFiles\alx.dir\1-isdigit.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\1-isdigit.c"

CMakeFiles/alx.dir/1-isdigit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/1-isdigit.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\1-isdigit.c" > CMakeFiles\alx.dir\1-isdigit.c.i

CMakeFiles/alx.dir/1-isdigit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/1-isdigit.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\1-isdigit.c" -o CMakeFiles\alx.dir\1-isdigit.c.s

CMakeFiles/alx.dir/2-mul.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/2-mul.c.obj: ../2-mul.c
CMakeFiles/alx.dir/2-mul.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/alx.dir/2-mul.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/2-mul.c.obj -MF CMakeFiles\alx.dir\2-mul.c.obj.d -o CMakeFiles\alx.dir\2-mul.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\2-mul.c"

CMakeFiles/alx.dir/2-mul.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/2-mul.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\2-mul.c" > CMakeFiles\alx.dir\2-mul.c.i

CMakeFiles/alx.dir/2-mul.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/2-mul.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\2-mul.c" -o CMakeFiles\alx.dir\2-mul.c.s

CMakeFiles/alx.dir/3-print_numbers.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/3-print_numbers.c.obj: ../3-print_numbers.c
CMakeFiles/alx.dir/3-print_numbers.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/alx.dir/3-print_numbers.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/3-print_numbers.c.obj -MF CMakeFiles\alx.dir\3-print_numbers.c.obj.d -o CMakeFiles\alx.dir\3-print_numbers.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\3-print_numbers.c"

CMakeFiles/alx.dir/3-print_numbers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/3-print_numbers.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\3-print_numbers.c" > CMakeFiles\alx.dir\3-print_numbers.c.i

CMakeFiles/alx.dir/3-print_numbers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/3-print_numbers.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\3-print_numbers.c" -o CMakeFiles\alx.dir\3-print_numbers.c.s

CMakeFiles/alx.dir/_putchar.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/_putchar.c.obj: ../_putchar.c
CMakeFiles/alx.dir/_putchar.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/alx.dir/_putchar.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/_putchar.c.obj -MF CMakeFiles\alx.dir\_putchar.c.obj.d -o CMakeFiles\alx.dir\_putchar.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\_putchar.c"

CMakeFiles/alx.dir/_putchar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/_putchar.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\_putchar.c" > CMakeFiles\alx.dir\_putchar.c.i

CMakeFiles/alx.dir/_putchar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/_putchar.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\_putchar.c" -o CMakeFiles\alx.dir\_putchar.c.s

CMakeFiles/alx.dir/7-print_diagonal.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/7-print_diagonal.c.obj: ../7-print_diagonal.c
CMakeFiles/alx.dir/7-print_diagonal.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/alx.dir/7-print_diagonal.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/7-print_diagonal.c.obj -MF CMakeFiles\alx.dir\7-print_diagonal.c.obj.d -o CMakeFiles\alx.dir\7-print_diagonal.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\7-print_diagonal.c"

CMakeFiles/alx.dir/7-print_diagonal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/7-print_diagonal.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\7-print_diagonal.c" > CMakeFiles\alx.dir\7-print_diagonal.c.i

CMakeFiles/alx.dir/7-print_diagonal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/7-print_diagonal.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\7-print_diagonal.c" -o CMakeFiles\alx.dir\7-print_diagonal.c.s

CMakeFiles/alx.dir/8-print_square.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/8-print_square.c.obj: ../8-print_square.c
CMakeFiles/alx.dir/8-print_square.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/alx.dir/8-print_square.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/8-print_square.c.obj -MF CMakeFiles\alx.dir\8-print_square.c.obj.d -o CMakeFiles\alx.dir\8-print_square.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\8-print_square.c"

CMakeFiles/alx.dir/8-print_square.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/8-print_square.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\8-print_square.c" > CMakeFiles\alx.dir\8-print_square.c.i

CMakeFiles/alx.dir/8-print_square.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/8-print_square.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\8-print_square.c" -o CMakeFiles\alx.dir\8-print_square.c.s

CMakeFiles/alx.dir/101-print_number.c.obj: CMakeFiles/alx.dir/flags.make
CMakeFiles/alx.dir/101-print_number.c.obj: ../101-print_number.c
CMakeFiles/alx.dir/101-print_number.c.obj: CMakeFiles/alx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/alx.dir/101-print_number.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/alx.dir/101-print_number.c.obj -MF CMakeFiles\alx.dir\101-print_number.c.obj.d -o CMakeFiles\alx.dir\101-print_number.c.obj -c "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\101-print_number.c"

CMakeFiles/alx.dir/101-print_number.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/alx.dir/101-print_number.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\101-print_number.c" > CMakeFiles\alx.dir\101-print_number.c.i

CMakeFiles/alx.dir/101-print_number.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/alx.dir/101-print_number.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\101-print_number.c" -o CMakeFiles\alx.dir\101-print_number.c.s

# Object files for target alx
alx_OBJECTS = \
"CMakeFiles/alx.dir/main.c.obj" \
"CMakeFiles/alx.dir/0-isupper.c.obj" \
"CMakeFiles/alx.dir/1-isdigit.c.obj" \
"CMakeFiles/alx.dir/2-mul.c.obj" \
"CMakeFiles/alx.dir/3-print_numbers.c.obj" \
"CMakeFiles/alx.dir/_putchar.c.obj" \
"CMakeFiles/alx.dir/7-print_diagonal.c.obj" \
"CMakeFiles/alx.dir/8-print_square.c.obj" \
"CMakeFiles/alx.dir/101-print_number.c.obj"

# External object files for target alx
alx_EXTERNAL_OBJECTS =

alx.exe: CMakeFiles/alx.dir/main.c.obj
alx.exe: CMakeFiles/alx.dir/0-isupper.c.obj
alx.exe: CMakeFiles/alx.dir/1-isdigit.c.obj
alx.exe: CMakeFiles/alx.dir/2-mul.c.obj
alx.exe: CMakeFiles/alx.dir/3-print_numbers.c.obj
alx.exe: CMakeFiles/alx.dir/_putchar.c.obj
alx.exe: CMakeFiles/alx.dir/7-print_diagonal.c.obj
alx.exe: CMakeFiles/alx.dir/8-print_square.c.obj
alx.exe: CMakeFiles/alx.dir/101-print_number.c.obj
alx.exe: CMakeFiles/alx.dir/build.make
alx.exe: CMakeFiles/alx.dir/linklibs.rsp
alx.exe: CMakeFiles/alx.dir/objects1.rsp
alx.exe: CMakeFiles/alx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable alx.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\alx.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alx.dir/build: alx.exe
.PHONY : CMakeFiles/alx.dir/build

CMakeFiles/alx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\alx.dir\cmake_clean.cmake
.PHONY : CMakeFiles/alx.dir/clean

CMakeFiles/alx.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops" "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops" "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw" "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw" "C:\Users\Jojo Thomas\CLionProjects\alx-low_level_programming\0x04-more_functions_nested_loops\cmake-build-debug-mingw\CMakeFiles\alx.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/alx.dir/depend

