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
CMAKE_SOURCE_DIR = /home/kanken/code/cpp-adv/SMA/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanken/code/cpp-adv/SMA/src

# Include any dependencies generated for this target.
include CMakeFiles/nomnomGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nomnomGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nomnomGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nomnomGame.dir/flags.make

CMakeFiles/nomnomGame.dir/agent.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/agent.cpp.o: agent.cpp
CMakeFiles/nomnomGame.dir/agent.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nomnomGame.dir/agent.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/agent.cpp.o -MF CMakeFiles/nomnomGame.dir/agent.cpp.o.d -o CMakeFiles/nomnomGame.dir/agent.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/agent.cpp

CMakeFiles/nomnomGame.dir/agent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/agent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/agent.cpp > CMakeFiles/nomnomGame.dir/agent.cpp.i

CMakeFiles/nomnomGame.dir/agent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/agent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/agent.cpp -o CMakeFiles/nomnomGame.dir/agent.cpp.s

CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o: cliGameDisplay.cpp
CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o -MF CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o.d -o CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/cliGameDisplay.cpp

CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/cliGameDisplay.cpp > CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.i

CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/cliGameDisplay.cpp -o CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.s

CMakeFiles/nomnomGame.dir/gamespace.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/gamespace.cpp.o: gamespace.cpp
CMakeFiles/nomnomGame.dir/gamespace.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nomnomGame.dir/gamespace.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/gamespace.cpp.o -MF CMakeFiles/nomnomGame.dir/gamespace.cpp.o.d -o CMakeFiles/nomnomGame.dir/gamespace.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/gamespace.cpp

CMakeFiles/nomnomGame.dir/gamespace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/gamespace.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/gamespace.cpp > CMakeFiles/nomnomGame.dir/gamespace.cpp.i

CMakeFiles/nomnomGame.dir/gamespace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/gamespace.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/gamespace.cpp -o CMakeFiles/nomnomGame.dir/gamespace.cpp.s

CMakeFiles/nomnomGame.dir/main.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/main.cpp.o: main.cpp
CMakeFiles/nomnomGame.dir/main.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/nomnomGame.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/main.cpp.o -MF CMakeFiles/nomnomGame.dir/main.cpp.o.d -o CMakeFiles/nomnomGame.dir/main.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/main.cpp

CMakeFiles/nomnomGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/main.cpp > CMakeFiles/nomnomGame.dir/main.cpp.i

CMakeFiles/nomnomGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/main.cpp -o CMakeFiles/nomnomGame.dir/main.cpp.s

CMakeFiles/nomnomGame.dir/predator.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/predator.cpp.o: predator.cpp
CMakeFiles/nomnomGame.dir/predator.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/nomnomGame.dir/predator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/predator.cpp.o -MF CMakeFiles/nomnomGame.dir/predator.cpp.o.d -o CMakeFiles/nomnomGame.dir/predator.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/predator.cpp

CMakeFiles/nomnomGame.dir/predator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/predator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/predator.cpp > CMakeFiles/nomnomGame.dir/predator.cpp.i

CMakeFiles/nomnomGame.dir/predator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/predator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/predator.cpp -o CMakeFiles/nomnomGame.dir/predator.cpp.s

CMakeFiles/nomnomGame.dir/prey.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/prey.cpp.o: prey.cpp
CMakeFiles/nomnomGame.dir/prey.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/nomnomGame.dir/prey.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/prey.cpp.o -MF CMakeFiles/nomnomGame.dir/prey.cpp.o.d -o CMakeFiles/nomnomGame.dir/prey.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/prey.cpp

CMakeFiles/nomnomGame.dir/prey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/prey.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/prey.cpp > CMakeFiles/nomnomGame.dir/prey.cpp.i

CMakeFiles/nomnomGame.dir/prey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/prey.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/prey.cpp -o CMakeFiles/nomnomGame.dir/prey.cpp.s

CMakeFiles/nomnomGame.dir/randomGen.cpp.o: CMakeFiles/nomnomGame.dir/flags.make
CMakeFiles/nomnomGame.dir/randomGen.cpp.o: randomGen.cpp
CMakeFiles/nomnomGame.dir/randomGen.cpp.o: CMakeFiles/nomnomGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/nomnomGame.dir/randomGen.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nomnomGame.dir/randomGen.cpp.o -MF CMakeFiles/nomnomGame.dir/randomGen.cpp.o.d -o CMakeFiles/nomnomGame.dir/randomGen.cpp.o -c /home/kanken/code/cpp-adv/SMA/src/randomGen.cpp

CMakeFiles/nomnomGame.dir/randomGen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nomnomGame.dir/randomGen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kanken/code/cpp-adv/SMA/src/randomGen.cpp > CMakeFiles/nomnomGame.dir/randomGen.cpp.i

CMakeFiles/nomnomGame.dir/randomGen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nomnomGame.dir/randomGen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kanken/code/cpp-adv/SMA/src/randomGen.cpp -o CMakeFiles/nomnomGame.dir/randomGen.cpp.s

# Object files for target nomnomGame
nomnomGame_OBJECTS = \
"CMakeFiles/nomnomGame.dir/agent.cpp.o" \
"CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o" \
"CMakeFiles/nomnomGame.dir/gamespace.cpp.o" \
"CMakeFiles/nomnomGame.dir/main.cpp.o" \
"CMakeFiles/nomnomGame.dir/predator.cpp.o" \
"CMakeFiles/nomnomGame.dir/prey.cpp.o" \
"CMakeFiles/nomnomGame.dir/randomGen.cpp.o"

# External object files for target nomnomGame
nomnomGame_EXTERNAL_OBJECTS =

nomnomGame: CMakeFiles/nomnomGame.dir/agent.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/cliGameDisplay.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/gamespace.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/main.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/predator.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/prey.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/randomGen.cpp.o
nomnomGame: CMakeFiles/nomnomGame.dir/build.make
nomnomGame: CMakeFiles/nomnomGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kanken/code/cpp-adv/SMA/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable nomnomGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nomnomGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nomnomGame.dir/build: nomnomGame
.PHONY : CMakeFiles/nomnomGame.dir/build

CMakeFiles/nomnomGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nomnomGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nomnomGame.dir/clean

CMakeFiles/nomnomGame.dir/depend:
	cd /home/kanken/code/cpp-adv/SMA/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanken/code/cpp-adv/SMA/src /home/kanken/code/cpp-adv/SMA/src /home/kanken/code/cpp-adv/SMA/src /home/kanken/code/cpp-adv/SMA/src /home/kanken/code/cpp-adv/SMA/src/CMakeFiles/nomnomGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nomnomGame.dir/depend

