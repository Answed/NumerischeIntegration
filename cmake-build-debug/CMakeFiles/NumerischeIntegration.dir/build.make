# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = "C:\Users\arwed\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\arwed\AppData\Local\Programs\CLion Nova\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NumerischeIntegration.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NumerischeIntegration.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NumerischeIntegration.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NumerischeIntegration.dir/flags.make

CMakeFiles/NumerischeIntegration.dir/codegen:
.PHONY : CMakeFiles/NumerischeIntegration.dir/codegen

CMakeFiles/NumerischeIntegration.dir/main.cpp.obj: CMakeFiles/NumerischeIntegration.dir/flags.make
CMakeFiles/NumerischeIntegration.dir/main.cpp.obj: CMakeFiles/NumerischeIntegration.dir/includes_CXX.rsp
CMakeFiles/NumerischeIntegration.dir/main.cpp.obj: C:/Users/arwed/Documents/Coden/CC++/NumerischeIntegration/main.cpp
CMakeFiles/NumerischeIntegration.dir/main.cpp.obj: CMakeFiles/NumerischeIntegration.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NumerischeIntegration.dir/main.cpp.obj"
	C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NumerischeIntegration.dir/main.cpp.obj -MF CMakeFiles\NumerischeIntegration.dir\main.cpp.obj.d -o CMakeFiles\NumerischeIntegration.dir\main.cpp.obj -c C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\main.cpp

CMakeFiles/NumerischeIntegration.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NumerischeIntegration.dir/main.cpp.i"
	C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\main.cpp > CMakeFiles\NumerischeIntegration.dir\main.cpp.i

CMakeFiles/NumerischeIntegration.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NumerischeIntegration.dir/main.cpp.s"
	C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\main.cpp -o CMakeFiles\NumerischeIntegration.dir\main.cpp.s

# Object files for target NumerischeIntegration
NumerischeIntegration_OBJECTS = \
"CMakeFiles/NumerischeIntegration.dir/main.cpp.obj"

# External object files for target NumerischeIntegration
NumerischeIntegration_EXTERNAL_OBJECTS =

NumerischeIntegration.exe: CMakeFiles/NumerischeIntegration.dir/main.cpp.obj
NumerischeIntegration.exe: CMakeFiles/NumerischeIntegration.dir/build.make
NumerischeIntegration.exe: source/libsource.a
NumerischeIntegration.exe: CMakeFiles/NumerischeIntegration.dir/linkLibs.rsp
NumerischeIntegration.exe: CMakeFiles/NumerischeIntegration.dir/objects1.rsp
NumerischeIntegration.exe: CMakeFiles/NumerischeIntegration.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NumerischeIntegration.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NumerischeIntegration.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NumerischeIntegration.dir/build: NumerischeIntegration.exe
.PHONY : CMakeFiles/NumerischeIntegration.dir/build

CMakeFiles/NumerischeIntegration.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NumerischeIntegration.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NumerischeIntegration.dir/clean

CMakeFiles/NumerischeIntegration.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\CMakeFiles\NumerischeIntegration.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/NumerischeIntegration.dir/depend

