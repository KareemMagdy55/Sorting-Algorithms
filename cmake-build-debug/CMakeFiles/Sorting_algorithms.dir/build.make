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
CMAKE_COMMAND = "C:\Users\Ahmed\AppData\Local\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Ahmed\AppData\Local\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ahmed\Documents\Sorting-Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sorting_algorithms.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Sorting_algorithms.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting_algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting_algorithms.dir/flags.make

CMakeFiles/Sorting_algorithms.dir/main.cpp.obj: CMakeFiles/Sorting_algorithms.dir/flags.make
CMakeFiles/Sorting_algorithms.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Sorting_algorithms.dir/main.cpp.obj: CMakeFiles/Sorting_algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting_algorithms.dir/main.cpp.obj"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sorting_algorithms.dir/main.cpp.obj -MF CMakeFiles\Sorting_algorithms.dir\main.cpp.obj.d -o CMakeFiles\Sorting_algorithms.dir\main.cpp.obj -c C:\Users\Ahmed\Documents\Sorting-Algorithms\main.cpp

CMakeFiles/Sorting_algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_algorithms.dir/main.cpp.i"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Ahmed\Documents\Sorting-Algorithms\main.cpp > CMakeFiles\Sorting_algorithms.dir\main.cpp.i

CMakeFiles/Sorting_algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_algorithms.dir/main.cpp.s"
	C:\Users\Ahmed\AppData\Local\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Ahmed\Documents\Sorting-Algorithms\main.cpp -o CMakeFiles\Sorting_algorithms.dir\main.cpp.s

# Object files for target Sorting_algorithms
Sorting_algorithms_OBJECTS = \
"CMakeFiles/Sorting_algorithms.dir/main.cpp.obj"

# External object files for target Sorting_algorithms
Sorting_algorithms_EXTERNAL_OBJECTS =

Sorting_algorithms.exe: CMakeFiles/Sorting_algorithms.dir/main.cpp.obj
Sorting_algorithms.exe: CMakeFiles/Sorting_algorithms.dir/build.make
Sorting_algorithms.exe: CMakeFiles/Sorting_algorithms.dir/linklibs.rsp
Sorting_algorithms.exe: CMakeFiles/Sorting_algorithms.dir/objects1.rsp
Sorting_algorithms.exe: CMakeFiles/Sorting_algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sorting_algorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sorting_algorithms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting_algorithms.dir/build: Sorting_algorithms.exe
.PHONY : CMakeFiles/Sorting_algorithms.dir/build

CMakeFiles/Sorting_algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sorting_algorithms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sorting_algorithms.dir/clean

CMakeFiles/Sorting_algorithms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ahmed\Documents\Sorting-Algorithms C:\Users\Ahmed\Documents\Sorting-Algorithms C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug C:\Users\Ahmed\Documents\Sorting-Algorithms\cmake-build-debug\CMakeFiles\Sorting_algorithms.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sorting_algorithms.dir/depend
