# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\5-cppBasic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\5-cppBasic\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sortCmpFunc2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sortCmpFunc2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortCmpFunc2.dir/flags.make

CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.obj: CMakeFiles/sortCmpFunc2.dir/flags.make
CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.obj: ../sortCmpFunc2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sortCmpFunc2.dir\sortCmpFunc2.cpp.obj -c D:\Code\5-cppBasic\sortCmpFunc2.cpp

CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\5-cppBasic\sortCmpFunc2.cpp > CMakeFiles\sortCmpFunc2.dir\sortCmpFunc2.cpp.i

CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\5-cppBasic\sortCmpFunc2.cpp -o CMakeFiles\sortCmpFunc2.dir\sortCmpFunc2.cpp.s

# Object files for target sortCmpFunc2
sortCmpFunc2_OBJECTS = \
"CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.obj"

# External object files for target sortCmpFunc2
sortCmpFunc2_EXTERNAL_OBJECTS =

sortCmpFunc2.exe: CMakeFiles/sortCmpFunc2.dir/sortCmpFunc2.cpp.obj
sortCmpFunc2.exe: CMakeFiles/sortCmpFunc2.dir/build.make
sortCmpFunc2.exe: CMakeFiles/sortCmpFunc2.dir/linklibs.rsp
sortCmpFunc2.exe: CMakeFiles/sortCmpFunc2.dir/objects1.rsp
sortCmpFunc2.exe: CMakeFiles/sortCmpFunc2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortCmpFunc2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sortCmpFunc2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortCmpFunc2.dir/build: sortCmpFunc2.exe

.PHONY : CMakeFiles/sortCmpFunc2.dir/build

CMakeFiles/sortCmpFunc2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sortCmpFunc2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sortCmpFunc2.dir/clean

CMakeFiles/sortCmpFunc2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\5-cppBasic D:\Code\5-cppBasic D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles\sortCmpFunc2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortCmpFunc2.dir/depend

