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
CMAKE_SOURCE_DIR = /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd

# Include any dependencies generated for this target.
include CMakeFiles/gcd.out.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/gcd.out.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gcd.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gcd.out.dir/flags.make

CMakeFiles/gcd.out.dir/src/main.cpp.o: CMakeFiles/gcd.out.dir/flags.make
CMakeFiles/gcd.out.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/gcd.out.dir/src/main.cpp.o: CMakeFiles/gcd.out.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gcd.out.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gcd.out.dir/src/main.cpp.o -MF CMakeFiles/gcd.out.dir/src/main.cpp.o.d -o CMakeFiles/gcd.out.dir/src/main.cpp.o -c /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/main.cpp

CMakeFiles/gcd.out.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gcd.out.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/main.cpp > CMakeFiles/gcd.out.dir/src/main.cpp.i

CMakeFiles/gcd.out.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gcd.out.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/main.cpp -o CMakeFiles/gcd.out.dir/src/main.cpp.s

# Object files for target gcd.out
gcd_out_OBJECTS = \
"CMakeFiles/gcd.out.dir/src/main.cpp.o"

# External object files for target gcd.out
gcd_out_EXTERNAL_OBJECTS =

gcd.out: CMakeFiles/gcd.out.dir/src/main.cpp.o
gcd.out: CMakeFiles/gcd.out.dir/build.make
gcd.out: libgcd.a
gcd.out: liblcd.a
gcd.out: CMakeFiles/gcd.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gcd.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gcd.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gcd.out.dir/build: gcd.out
.PHONY : CMakeFiles/gcd.out.dir/build

CMakeFiles/gcd.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gcd.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gcd.out.dir/clean

CMakeFiles/gcd.out.dir/depend:
	cd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles/gcd.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gcd.out.dir/depend
