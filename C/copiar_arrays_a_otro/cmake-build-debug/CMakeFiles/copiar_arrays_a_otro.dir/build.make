# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cygdrive/c/Users/emendez/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/emendez/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/copiar_arrays_a_otro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/copiar_arrays_a_otro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/copiar_arrays_a_otro.dir/flags.make

CMakeFiles/copiar_arrays_a_otro.dir/main.c.o: CMakeFiles/copiar_arrays_a_otro.dir/flags.make
CMakeFiles/copiar_arrays_a_otro.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/copiar_arrays_a_otro.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/copiar_arrays_a_otro.dir/main.c.o   -c /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/main.c

CMakeFiles/copiar_arrays_a_otro.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/copiar_arrays_a_otro.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/main.c > CMakeFiles/copiar_arrays_a_otro.dir/main.c.i

CMakeFiles/copiar_arrays_a_otro.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/copiar_arrays_a_otro.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/main.c -o CMakeFiles/copiar_arrays_a_otro.dir/main.c.s

CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.requires:

.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.requires

CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.provides: CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/copiar_arrays_a_otro.dir/build.make CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.provides.build
.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.provides

CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.provides.build: CMakeFiles/copiar_arrays_a_otro.dir/main.c.o


# Object files for target copiar_arrays_a_otro
copiar_arrays_a_otro_OBJECTS = \
"CMakeFiles/copiar_arrays_a_otro.dir/main.c.o"

# External object files for target copiar_arrays_a_otro
copiar_arrays_a_otro_EXTERNAL_OBJECTS =

copiar_arrays_a_otro.exe: CMakeFiles/copiar_arrays_a_otro.dir/main.c.o
copiar_arrays_a_otro.exe: CMakeFiles/copiar_arrays_a_otro.dir/build.make
copiar_arrays_a_otro.exe: CMakeFiles/copiar_arrays_a_otro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable copiar_arrays_a_otro.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/copiar_arrays_a_otro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/copiar_arrays_a_otro.dir/build: copiar_arrays_a_otro.exe

.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/build

CMakeFiles/copiar_arrays_a_otro.dir/requires: CMakeFiles/copiar_arrays_a_otro.dir/main.c.o.requires

.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/requires

CMakeFiles/copiar_arrays_a_otro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/copiar_arrays_a_otro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/clean

CMakeFiles/copiar_arrays_a_otro.dir/depend:
	cd /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug /cygdrive/c/Users/emendez/Desktop/codigo/C/copiar_arrays_a_otro/cmake-build-debug/CMakeFiles/copiar_arrays_a_otro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/copiar_arrays_a_otro.dir/depend
