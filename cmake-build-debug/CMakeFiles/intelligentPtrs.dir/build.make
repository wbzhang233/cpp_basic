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
include CMakeFiles/intelligentPtrs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/intelligentPtrs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/intelligentPtrs.dir/flags.make

CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.obj: CMakeFiles/intelligentPtrs.dir/flags.make
CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.obj: ../intelligentPtrs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.obj"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\intelligentPtrs.dir\intelligentPtrs.cpp.obj -c D:\Code\5-cppBasic\intelligentPtrs.cpp

CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.i"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\5-cppBasic\intelligentPtrs.cpp > CMakeFiles\intelligentPtrs.dir\intelligentPtrs.cpp.i

CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.s"
	D:\PROGRA~1\JETBRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\5-cppBasic\intelligentPtrs.cpp -o CMakeFiles\intelligentPtrs.dir\intelligentPtrs.cpp.s

# Object files for target intelligentPtrs
intelligentPtrs_OBJECTS = \
"CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.obj"

# External object files for target intelligentPtrs
intelligentPtrs_EXTERNAL_OBJECTS =

intelligentPtrs.exe: CMakeFiles/intelligentPtrs.dir/intelligentPtrs.cpp.obj
intelligentPtrs.exe: CMakeFiles/intelligentPtrs.dir/build.make
intelligentPtrs.exe: CMakeFiles/intelligentPtrs.dir/linklibs.rsp
intelligentPtrs.exe: CMakeFiles/intelligentPtrs.dir/objects1.rsp
intelligentPtrs.exe: CMakeFiles/intelligentPtrs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable intelligentPtrs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\intelligentPtrs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/intelligentPtrs.dir/build: intelligentPtrs.exe

.PHONY : CMakeFiles/intelligentPtrs.dir/build

CMakeFiles/intelligentPtrs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\intelligentPtrs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/intelligentPtrs.dir/clean

CMakeFiles/intelligentPtrs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\5-cppBasic D:\Code\5-cppBasic D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug D:\Code\5-cppBasic\cmake-build-debug\CMakeFiles\intelligentPtrs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/intelligentPtrs.dir/depend
