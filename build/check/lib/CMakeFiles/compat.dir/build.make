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
include check/lib/CMakeFiles/compat.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include check/lib/CMakeFiles/compat.dir/compiler_depend.make

# Include the progress variables for this target.
include check/lib/CMakeFiles/compat.dir/progress.make

# Include the compile flags for this target's objects.
include check/lib/CMakeFiles/compat.dir/flags.make

check/lib/CMakeFiles/compat.dir/libcompat.c.o: check/lib/CMakeFiles/compat.dir/flags.make
check/lib/CMakeFiles/compat.dir/libcompat.c.o: /home/stepanvar/Documents/clean_prog/C/libft/check/lib/libcompat.c
check/lib/CMakeFiles/compat.dir/libcompat.c.o: check/lib/CMakeFiles/compat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object check/lib/CMakeFiles/compat.dir/libcompat.c.o"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT check/lib/CMakeFiles/compat.dir/libcompat.c.o -MF CMakeFiles/compat.dir/libcompat.c.o.d -o CMakeFiles/compat.dir/libcompat.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/check/lib/libcompat.c

check/lib/CMakeFiles/compat.dir/libcompat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/compat.dir/libcompat.c.i"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/check/lib/libcompat.c > CMakeFiles/compat.dir/libcompat.c.i

check/lib/CMakeFiles/compat.dir/libcompat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/compat.dir/libcompat.c.s"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/check/lib/libcompat.c -o CMakeFiles/compat.dir/libcompat.c.s

check/lib/CMakeFiles/compat.dir/fpclassify.c.o: check/lib/CMakeFiles/compat.dir/flags.make
check/lib/CMakeFiles/compat.dir/fpclassify.c.o: /home/stepanvar/Documents/clean_prog/C/libft/check/lib/fpclassify.c
check/lib/CMakeFiles/compat.dir/fpclassify.c.o: check/lib/CMakeFiles/compat.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object check/lib/CMakeFiles/compat.dir/fpclassify.c.o"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT check/lib/CMakeFiles/compat.dir/fpclassify.c.o -MF CMakeFiles/compat.dir/fpclassify.c.o.d -o CMakeFiles/compat.dir/fpclassify.c.o -c /home/stepanvar/Documents/clean_prog/C/libft/check/lib/fpclassify.c

check/lib/CMakeFiles/compat.dir/fpclassify.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/compat.dir/fpclassify.c.i"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stepanvar/Documents/clean_prog/C/libft/check/lib/fpclassify.c > CMakeFiles/compat.dir/fpclassify.c.i

check/lib/CMakeFiles/compat.dir/fpclassify.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/compat.dir/fpclassify.c.s"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stepanvar/Documents/clean_prog/C/libft/check/lib/fpclassify.c -o CMakeFiles/compat.dir/fpclassify.c.s

# Object files for target compat
compat_OBJECTS = \
"CMakeFiles/compat.dir/libcompat.c.o" \
"CMakeFiles/compat.dir/fpclassify.c.o"

# External object files for target compat
compat_EXTERNAL_OBJECTS =

check/lib/libcompat.a: check/lib/CMakeFiles/compat.dir/libcompat.c.o
check/lib/libcompat.a: check/lib/CMakeFiles/compat.dir/fpclassify.c.o
check/lib/libcompat.a: check/lib/CMakeFiles/compat.dir/build.make
check/lib/libcompat.a: check/lib/CMakeFiles/compat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepanvar/Documents/clean_prog/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libcompat.a"
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && $(CMAKE_COMMAND) -P CMakeFiles/compat.dir/cmake_clean_target.cmake
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/compat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
check/lib/CMakeFiles/compat.dir/build: check/lib/libcompat.a
.PHONY : check/lib/CMakeFiles/compat.dir/build

check/lib/CMakeFiles/compat.dir/clean:
	cd /home/stepanvar/Documents/clean_prog/build/check/lib && $(CMAKE_COMMAND) -P CMakeFiles/compat.dir/cmake_clean.cmake
.PHONY : check/lib/CMakeFiles/compat.dir/clean

check/lib/CMakeFiles/compat.dir/depend:
	cd /home/stepanvar/Documents/clean_prog/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepanvar/Documents/clean_prog/C/libft /home/stepanvar/Documents/clean_prog/C/libft/check/lib /home/stepanvar/Documents/clean_prog/build /home/stepanvar/Documents/clean_prog/build/check/lib /home/stepanvar/Documents/clean_prog/build/check/lib/CMakeFiles/compat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : check/lib/CMakeFiles/compat.dir/depend
