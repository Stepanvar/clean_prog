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
include CMakeFiles/lcd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lcd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lcd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lcd.dir/flags.make

CMakeFiles/lcd.dir/src/lcd.cpp.o: CMakeFiles/lcd.dir/flags.make
CMakeFiles/lcd.dir/src/lcd.cpp.o: src/lcd.cpp
CMakeFiles/lcd.dir/src/lcd.cpp.o: CMakeFiles/lcd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lcd.dir/src/lcd.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lcd.dir/src/lcd.cpp.o -MF CMakeFiles/lcd.dir/src/lcd.cpp.o.d -o CMakeFiles/lcd.dir/src/lcd.cpp.o -c /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/lcd.cpp

CMakeFiles/lcd.dir/src/lcd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lcd.dir/src/lcd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/lcd.cpp > CMakeFiles/lcd.dir/src/lcd.cpp.i

CMakeFiles/lcd.dir/src/lcd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lcd.dir/src/lcd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/src/lcd.cpp -o CMakeFiles/lcd.dir/src/lcd.cpp.s

# Object files for target lcd
lcd_OBJECTS = \
"CMakeFiles/lcd.dir/src/lcd.cpp.o"

# External object files for target lcd
lcd_EXTERNAL_OBJECTS =

liblcd.a: CMakeFiles/lcd.dir/src/lcd.cpp.o
liblcd.a: CMakeFiles/lcd.dir/build.make
liblcd.a: CMakeFiles/lcd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblcd.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lcd.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lcd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lcd.dir/build: liblcd.a
.PHONY : CMakeFiles/lcd.dir/build

CMakeFiles/lcd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lcd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lcd.dir/clean

CMakeFiles/lcd.dir/depend:
	cd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd /home/stepanvar/Documents/clean_prog/CPP/gcdandlcd/CMakeFiles/lcd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lcd.dir/depend
