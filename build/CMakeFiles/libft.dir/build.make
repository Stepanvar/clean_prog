# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/stepanvar/Documents/clean_prog/C/libft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepanvar/Documents/clean_prog/build

# Include any dependencies generated for this target.
include CMakeFiles/libft.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/libft.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/libft.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libft.dir/flags.make

CMakeFiles/libft.dir/src/ft_itoa.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/ft_itoa.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/ft_itoa.c
CMakeFiles/libft.dir/src/ft_itoa.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/libft.dir/src/ft_itoa.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/ft_itoa.c.o -MF CMakeFiles/libft.dir/src/ft_itoa.c.o.d -o CMakeFiles/libft.dir/src/ft_itoa.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/ft_itoa.c

CMakeFiles/libft.dir/src/ft_itoa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/ft_itoa.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/ft_itoa.c > CMakeFiles/libft.dir/src/ft_itoa.c.i

CMakeFiles/libft.dir/src/ft_itoa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/ft_itoa.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/ft_itoa.c -o CMakeFiles/libft.dir/src/ft_itoa.c.s

CMakeFiles/libft.dir/src/ft_print_alphabet.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/ft_print_alphabet.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/ft_print_alphabet.c
CMakeFiles/libft.dir/src/ft_print_alphabet.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/libft.dir/src/ft_print_alphabet.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/ft_print_alphabet.c.o -MF CMakeFiles/libft.dir/src/ft_print_alphabet.c.o.d -o CMakeFiles/libft.dir/src/ft_print_alphabet.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/ft_print_alphabet.c

CMakeFiles/libft.dir/src/ft_print_alphabet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/ft_print_alphabet.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/ft_print_alphabet.c > CMakeFiles/libft.dir/src/ft_print_alphabet.c.i

CMakeFiles/libft.dir/src/ft_print_alphabet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/ft_print_alphabet.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/ft_print_alphabet.c -o CMakeFiles/libft.dir/src/ft_print_alphabet.c.s

CMakeFiles/libft.dir/src/ft_printf.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/ft_printf.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/ft_printf.c
CMakeFiles/libft.dir/src/ft_printf.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/libft.dir/src/ft_printf.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/ft_printf.c.o -MF CMakeFiles/libft.dir/src/ft_printf.c.o.d -o CMakeFiles/libft.dir/src/ft_printf.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/ft_printf.c

CMakeFiles/libft.dir/src/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/ft_printf.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/ft_printf.c > CMakeFiles/libft.dir/src/ft_printf.c.i

CMakeFiles/libft.dir/src/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/ft_printf.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/ft_printf.c -o CMakeFiles/libft.dir/src/ft_printf.c.s

CMakeFiles/libft.dir/src/ft_putchar.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/ft_putchar.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/ft_putchar.c
CMakeFiles/libft.dir/src/ft_putchar.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/libft.dir/src/ft_putchar.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/ft_putchar.c.o -MF CMakeFiles/libft.dir/src/ft_putchar.c.o.d -o CMakeFiles/libft.dir/src/ft_putchar.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/ft_putchar.c

CMakeFiles/libft.dir/src/ft_putchar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/ft_putchar.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/ft_putchar.c > CMakeFiles/libft.dir/src/ft_putchar.c.i

CMakeFiles/libft.dir/src/ft_putchar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/ft_putchar.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/ft_putchar.c -o CMakeFiles/libft.dir/src/ft_putchar.c.s

CMakeFiles/libft.dir/src/ft_strlen.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/ft_strlen.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/ft_strlen.c
CMakeFiles/libft.dir/src/ft_strlen.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/libft.dir/src/ft_strlen.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/ft_strlen.c.o -MF CMakeFiles/libft.dir/src/ft_strlen.c.o.d -o CMakeFiles/libft.dir/src/ft_strlen.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/ft_strlen.c

CMakeFiles/libft.dir/src/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/ft_strlen.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/ft_strlen.c > CMakeFiles/libft.dir/src/ft_strlen.c.i

CMakeFiles/libft.dir/src/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/ft_strlen.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/ft_strlen.c -o CMakeFiles/libft.dir/src/ft_strlen.c.s

CMakeFiles/libft.dir/src/list_sort_bubble.c.o: CMakeFiles/libft.dir/flags.make
CMakeFiles/libft.dir/src/list_sort_bubble.c.o: /home/stepanvar/Documents/clean_prog/C/libft/src/list_sort_bubble.c
CMakeFiles/libft.dir/src/list_sort_bubble.c.o: CMakeFiles/libft.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/libft.dir/src/list_sort_bubble.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/libft.dir/src/list_sort_bubble.c.o -MF CMakeFiles/libft.dir/src/list_sort_bubble.c.o.d -o CMakeFiles/libft.dir/src/list_sort_bubble.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/src/list_sort_bubble.c

CMakeFiles/libft.dir/src/list_sort_bubble.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/libft.dir/src/list_sort_bubble.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/src/list_sort_bubble.c > CMakeFiles/libft.dir/src/list_sort_bubble.c.i

CMakeFiles/libft.dir/src/list_sort_bubble.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/libft.dir/src/list_sort_bubble.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/src/list_sort_bubble.c -o CMakeFiles/libft.dir/src/list_sort_bubble.c.s

# Object files for target libft
libft_OBJECTS = \
"CMakeFiles/libft.dir/src/ft_itoa.c.o" \
"CMakeFiles/libft.dir/src/ft_print_alphabet.c.o" \
"CMakeFiles/libft.dir/src/ft_printf.c.o" \
"CMakeFiles/libft.dir/src/ft_putchar.c.o" \
"CMakeFiles/libft.dir/src/ft_strlen.c.o" \
"CMakeFiles/libft.dir/src/list_sort_bubble.c.o"

# External object files for target libft
libft_EXTERNAL_OBJECTS =

liblibft.a: CMakeFiles/libft.dir/src/ft_itoa.c.o
liblibft.a: CMakeFiles/libft.dir/src/ft_print_alphabet.c.o
liblibft.a: CMakeFiles/libft.dir/src/ft_printf.c.o
liblibft.a: CMakeFiles/libft.dir/src/ft_putchar.c.o
liblibft.a: CMakeFiles/libft.dir/src/ft_strlen.c.o
liblibft.a: CMakeFiles/libft.dir/src/list_sort_bubble.c.o
liblibft.a: CMakeFiles/libft.dir/build.make
liblibft.a: CMakeFiles/libft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C static library liblibft.a"
	$(CMAKE_COMMAND) -P CMakeFiles/libft.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libft.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libft.dir/build: liblibft.a
.PHONY : CMakeFiles/libft.dir/build

CMakeFiles/libft.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libft.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libft.dir/clean

CMakeFiles/libft.dir/depend:
	cd /home/stepanvar/Documents/clean_prog/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepanvar/Documents/clean_prog/C/libft /home/stepanvar/Documents/clean_prog/C/libft /home/stepanvar/Documents/clean_prog/build /home/stepanvar/Documents/clean_prog/build /home/stepanvar/Documents/clean_prog/build/CMakeFiles/libft.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libft.dir/depend

