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
CMAKE_SOURCE_DIR = /home/stepanvar/Documents/clean_prog/CPP/gcd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepanvar/Documents/clean_prog/CPP/gcd

# Include any dependencies generated for this target.
include CMakeFiles/gcd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/gcd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gcd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gcd.dir/flags.make

CMakeFiles/gcd.dir/src/gcd.cpp.o: CMakeFiles/gcd.dir/flags.make
CMakeFiles/gcd.dir/src/gcd.cpp.o: src/gcd.cpp
CMakeFiles/gcd.dir/src/gcd.cpp.o: CMakeFiles/gcd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gcd.dir/src/gcd.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gcd.dir/src/gcd.cpp.o -MF CMakeFiles/gcd.dir/src/gcd.cpp.o.d -o CMakeFiles/gcd.dir/src/gcd.cpp.o -c /home/stepanvar/Documents/clean_prog/CPP/gcd/src/gcd.cpp

CMakeFiles/gcd.dir/src/gcd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gcd.dir/src/gcd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepanvar/Documents/clean_prog/CPP/gcd/src/gcd.cpp > CMakeFiles/gcd.dir/src/gcd.cpp.i

CMakeFiles/gcd.dir/src/gcd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gcd.dir/src/gcd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepanvar/Documents/clean_prog/CPP/gcd/src/gcd.cpp -o CMakeFiles/gcd.dir/src/gcd.cpp.s

# Object files for target gcd
gcd_OBJECTS = \
"CMakeFiles/gcd.dir/src/gcd.cpp.o"

# External object files for target gcd
gcd_EXTERNAL_OBJECTS =

libgcd.a: CMakeFiles/gcd.dir/src/gcd.cpp.o
libgcd.a: CMakeFiles/gcd.dir/build.make
libgcd.a: CMakeFiles/gcd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgcd.a"
	$(CMAKE_COMMAND) -P CMakeFiles/gcd.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gcd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gcd.dir/build: libgcd.a
.PHONY : CMakeFiles/gcd.dir/build

CMakeFiles/gcd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gcd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gcd.dir/clean

CMakeFiles/gcd.dir/depend:
	cd /home/stepanvar/Documents/clean_prog/CPP/gcd && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepanvar/Documents/clean_prog/CPP/gcd /home/stepanvar/Documents/clean_prog/CPP/gcd /home/stepanvar/Documents/clean_prog/CPP/gcd /home/stepanvar/Documents/clean_prog/CPP/gcd /home/stepanvar/Documents/clean_prog/CPP/gcd/CMakeFiles/gcd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gcd.dir/depend

