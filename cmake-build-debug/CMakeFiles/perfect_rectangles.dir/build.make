# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /root/soft/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /root/soft/clion-2020.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CLionProjects/leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/perfect_rectangles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/perfect_rectangles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/perfect_rectangles.dir/flags.make

CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o: CMakeFiles/perfect_rectangles.dir/flags.make
CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o: ../perfect_rectangles_391.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o -c /root/CLionProjects/leetcode/perfect_rectangles_391.cpp

CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/leetcode/perfect_rectangles_391.cpp > CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.i

CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/leetcode/perfect_rectangles_391.cpp -o CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.s

# Object files for target perfect_rectangles
perfect_rectangles_OBJECTS = \
"CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o"

# External object files for target perfect_rectangles
perfect_rectangles_EXTERNAL_OBJECTS =

perfect_rectangles: CMakeFiles/perfect_rectangles.dir/perfect_rectangles_391.cpp.o
perfect_rectangles: CMakeFiles/perfect_rectangles.dir/build.make
perfect_rectangles: CMakeFiles/perfect_rectangles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable perfect_rectangles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/perfect_rectangles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/perfect_rectangles.dir/build: perfect_rectangles

.PHONY : CMakeFiles/perfect_rectangles.dir/build

CMakeFiles/perfect_rectangles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/perfect_rectangles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/perfect_rectangles.dir/clean

CMakeFiles/perfect_rectangles.dir/depend:
	cd /root/CLionProjects/leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/leetcode /root/CLionProjects/leetcode /root/CLionProjects/leetcode/cmake-build-debug /root/CLionProjects/leetcode/cmake-build-debug /root/CLionProjects/leetcode/cmake-build-debug/CMakeFiles/perfect_rectangles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/perfect_rectangles.dir/depend
