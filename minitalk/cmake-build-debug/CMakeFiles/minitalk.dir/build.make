# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/jsaldana/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5712.21/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jsaldana/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5712.21/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jsaldana/Documents/42Cursus/minitalk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/minitalk.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/minitalk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minitalk.dir/flags.make

CMakeFiles/minitalk.dir/minitalk.c.o: CMakeFiles/minitalk.dir/flags.make
CMakeFiles/minitalk.dir/minitalk.c.o: ../minitalk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/minitalk.dir/minitalk.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minitalk.dir/minitalk.c.o -c /home/jsaldana/Documents/42Cursus/minitalk/minitalk.c

CMakeFiles/minitalk.dir/minitalk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minitalk.dir/minitalk.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jsaldana/Documents/42Cursus/minitalk/minitalk.c > CMakeFiles/minitalk.dir/minitalk.c.i

CMakeFiles/minitalk.dir/minitalk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minitalk.dir/minitalk.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jsaldana/Documents/42Cursus/minitalk/minitalk.c -o CMakeFiles/minitalk.dir/minitalk.c.s

CMakeFiles/minitalk.dir/client.c.o: CMakeFiles/minitalk.dir/flags.make
CMakeFiles/minitalk.dir/client.c.o: ../client.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/minitalk.dir/client.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minitalk.dir/client.c.o -c /home/jsaldana/Documents/42Cursus/minitalk/client.c

CMakeFiles/minitalk.dir/client.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minitalk.dir/client.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jsaldana/Documents/42Cursus/minitalk/client.c > CMakeFiles/minitalk.dir/client.c.i

CMakeFiles/minitalk.dir/client.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minitalk.dir/client.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jsaldana/Documents/42Cursus/minitalk/client.c -o CMakeFiles/minitalk.dir/client.c.s

CMakeFiles/minitalk.dir/server.c.o: CMakeFiles/minitalk.dir/flags.make
CMakeFiles/minitalk.dir/server.c.o: ../server.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/minitalk.dir/server.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minitalk.dir/server.c.o -c /home/jsaldana/Documents/42Cursus/minitalk/server.c

CMakeFiles/minitalk.dir/server.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minitalk.dir/server.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jsaldana/Documents/42Cursus/minitalk/server.c > CMakeFiles/minitalk.dir/server.c.i

CMakeFiles/minitalk.dir/server.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minitalk.dir/server.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jsaldana/Documents/42Cursus/minitalk/server.c -o CMakeFiles/minitalk.dir/server.c.s

# Object files for target minitalk
minitalk_OBJECTS = \
"CMakeFiles/minitalk.dir/minitalk.c.o" \
"CMakeFiles/minitalk.dir/client.c.o" \
"CMakeFiles/minitalk.dir/server.c.o"

# External object files for target minitalk
minitalk_EXTERNAL_OBJECTS =

minitalk: CMakeFiles/minitalk.dir/minitalk.c.o
minitalk: CMakeFiles/minitalk.dir/client.c.o
minitalk: CMakeFiles/minitalk.dir/server.c.o
minitalk: CMakeFiles/minitalk.dir/build.make
minitalk: CMakeFiles/minitalk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable minitalk"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minitalk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minitalk.dir/build: minitalk
.PHONY : CMakeFiles/minitalk.dir/build

CMakeFiles/minitalk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minitalk.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minitalk.dir/clean

CMakeFiles/minitalk.dir/depend:
	cd /home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jsaldana/Documents/42Cursus/minitalk /home/jsaldana/Documents/42Cursus/minitalk /home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug /home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug /home/jsaldana/Documents/42Cursus/minitalk/cmake-build-debug/CMakeFiles/minitalk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minitalk.dir/depend

