# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Structs_Files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Structs_Files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Structs_Files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Structs_Files.dir/flags.make

CMakeFiles/Structs_Files.dir/main.c.o: CMakeFiles/Structs_Files.dir/flags.make
CMakeFiles/Structs_Files.dir/main.c.o: ../main.c
CMakeFiles/Structs_Files.dir/main.c.o: CMakeFiles/Structs_Files.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Structs_Files.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Structs_Files.dir/main.c.o -MF CMakeFiles/Structs_Files.dir/main.c.o.d -o CMakeFiles/Structs_Files.dir/main.c.o -c "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/main.c"

CMakeFiles/Structs_Files.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Structs_Files.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/main.c" > CMakeFiles/Structs_Files.dir/main.c.i

CMakeFiles/Structs_Files.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Structs_Files.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/main.c" -o CMakeFiles/Structs_Files.dir/main.c.s

CMakeFiles/Structs_Files.dir/libros.c.o: CMakeFiles/Structs_Files.dir/flags.make
CMakeFiles/Structs_Files.dir/libros.c.o: ../libros.c
CMakeFiles/Structs_Files.dir/libros.c.o: CMakeFiles/Structs_Files.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Structs_Files.dir/libros.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Structs_Files.dir/libros.c.o -MF CMakeFiles/Structs_Files.dir/libros.c.o.d -o CMakeFiles/Structs_Files.dir/libros.c.o -c "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/libros.c"

CMakeFiles/Structs_Files.dir/libros.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Structs_Files.dir/libros.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/libros.c" > CMakeFiles/Structs_Files.dir/libros.c.i

CMakeFiles/Structs_Files.dir/libros.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Structs_Files.dir/libros.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/libros.c" -o CMakeFiles/Structs_Files.dir/libros.c.s

# Object files for target Structs_Files
Structs_Files_OBJECTS = \
"CMakeFiles/Structs_Files.dir/main.c.o" \
"CMakeFiles/Structs_Files.dir/libros.c.o"

# External object files for target Structs_Files
Structs_Files_EXTERNAL_OBJECTS =

Structs_Files: CMakeFiles/Structs_Files.dir/main.c.o
Structs_Files: CMakeFiles/Structs_Files.dir/libros.c.o
Structs_Files: CMakeFiles/Structs_Files.dir/build.make
Structs_Files: CMakeFiles/Structs_Files.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Structs_Files"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Structs_Files.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Structs_Files.dir/build: Structs_Files
.PHONY : CMakeFiles/Structs_Files.dir/build

CMakeFiles/Structs_Files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Structs_Files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Structs_Files.dir/clean

CMakeFiles/Structs_Files.dir/depend:
	cd "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura" "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura" "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug" "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug" "/Users/josedelabarra/Desktop/carpeta sin título/Tarea1/Estructura/cmake-build-debug/CMakeFiles/Structs_Files.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Structs_Files.dir/depend

