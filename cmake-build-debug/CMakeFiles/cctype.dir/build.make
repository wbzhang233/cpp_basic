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
include CMakeFiles/cctype.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cctype.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cctype.dir/flags.make

CMakeFiles/cctype.dir/cctypeTest.cpp.obj: CMakeFiles/cctype.dir/flags.make
CMakeFiles/cctype.dir/cctypeTest.cpp.obj: ../cctypeTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cctype.dir/cctypeTest.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cctype.dir\cctypeTest.cpp.obj -c D:\Code\5-cppBasic\cctypeTest.cpp

CMakeFiles/cctype.dir/cctypeTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cctype.dir/cctypeTest.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\5-cppBasic\cctypeTest.cpp > CMakeFiles\cctype.dir\cctypeTest.cpp.i

CMakeFiles/cctype.dir/cctypeTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cctype.dir/cctypeTest.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\5-cppBasic\cctypeTest.cpp -o CMakeFiles\cctype.dir\cctypeTest.cpp.s

# Object files for target cctype
cctype_OBJECTS = \
"CMakeFiles/cctype.dir/cctypeTest.cpp.obj"

# External object files for target cctype
cctype_EXTERNAL_OBJECTS =

cctype.exe: CMakeFiles/cctype.dir/cctypeTest.cpp.obj
cctype.exe: CMakeFiles/cctype.dir/build.make
cctype.exe: CMakeFiles/cctype.dir/linklibs.rsp
cctype.exe: CMakeFiles/cctype.dir/objects1.rsp
cctype.exe: CMakeFiles/cctype.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cctype.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cctype.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cctype.dir/build: cctype.exe

.PHONY : CMakeFiles/cctype.dir/build

CMakeFiles/cctype.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cctype.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cctype.dir/clean

CMakeFiles/cctype.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\5-cppBasic D:\Code\5-cppBasic D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles\cctype.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cctype.dir/depend
