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
include google_tests/CMakeFiles/NummerischeIntegration_Test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include google_tests/CMakeFiles/NummerischeIntegration_Test.dir/compiler_depend.make

# Include the progress variables for this target.
include google_tests/CMakeFiles/NummerischeIntegration_Test.dir/progress.make

# Include the compile flags for this target's objects.
include google_tests/CMakeFiles/NummerischeIntegration_Test.dir/flags.make

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/codegen:
.PHONY : google_tests/CMakeFiles/NummerischeIntegration_Test.dir/codegen

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/flags.make
google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/includes_CXX.rsp
google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj: C:/Users/arwed/Documents/Coden/CC++/NumerischeIntegration/google_tests/shunting_yard_test.cpp
google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj"
	cd /d C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests && C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj -MF CMakeFiles\NummerischeIntegration_Test.dir\shunting_yard_test.cpp.obj.d -o CMakeFiles\NummerischeIntegration_Test.dir\shunting_yard_test.cpp.obj -c C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\google_tests\shunting_yard_test.cpp

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.i"
	cd /d C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests && C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\google_tests\shunting_yard_test.cpp > CMakeFiles\NummerischeIntegration_Test.dir\shunting_yard_test.cpp.i

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.s"
	cd /d C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests && C:\Users\arwed\AppData\Local\Programs\CLIONN~1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\google_tests\shunting_yard_test.cpp -o CMakeFiles\NummerischeIntegration_Test.dir\shunting_yard_test.cpp.s

# Object files for target NummerischeIntegration_Test
NummerischeIntegration_Test_OBJECTS = \
"CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj"

# External object files for target NummerischeIntegration_Test
NummerischeIntegration_Test_EXTERNAL_OBJECTS =

google_tests/NummerischeIntegration_Test.exe: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/shunting_yard_test.cpp.obj
google_tests/NummerischeIntegration_Test.exe: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/build.make
google_tests/NummerischeIntegration_Test.exe: source/libsource.a
google_tests/NummerischeIntegration_Test.exe: lib/libgtest.a
google_tests/NummerischeIntegration_Test.exe: lib/libgtest_main.a
google_tests/NummerischeIntegration_Test.exe: lib/libgtest.a
google_tests/NummerischeIntegration_Test.exe: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/linkLibs.rsp
google_tests/NummerischeIntegration_Test.exe: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/objects1.rsp
google_tests/NummerischeIntegration_Test.exe: google_tests/CMakeFiles/NummerischeIntegration_Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NummerischeIntegration_Test.exe"
	cd /d C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NummerischeIntegration_Test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
google_tests/CMakeFiles/NummerischeIntegration_Test.dir/build: google_tests/NummerischeIntegration_Test.exe
.PHONY : google_tests/CMakeFiles/NummerischeIntegration_Test.dir/build

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/clean:
	cd /d C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests && $(CMAKE_COMMAND) -P CMakeFiles\NummerischeIntegration_Test.dir\cmake_clean.cmake
.PHONY : google_tests/CMakeFiles/NummerischeIntegration_Test.dir/clean

google_tests/CMakeFiles/NummerischeIntegration_Test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\google_tests C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests C:\Users\arwed\Documents\Coden\CC++\NumerischeIntegration\cmake-build-debug\google_tests\CMakeFiles\NummerischeIntegration_Test.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : google_tests/CMakeFiles/NummerischeIntegration_Test.dir/depend

