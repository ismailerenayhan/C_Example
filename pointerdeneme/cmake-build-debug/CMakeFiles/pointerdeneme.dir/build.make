# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\ISMAIL\C\pointerdeneme

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\ISMAIL\C\pointerdeneme\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\pointerdeneme.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\pointerdeneme.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\pointerdeneme.dir\flags.make

CMakeFiles\pointerdeneme.dir\main.c.obj: CMakeFiles\pointerdeneme.dir\flags.make
CMakeFiles\pointerdeneme.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\ISMAIL\C\pointerdeneme\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pointerdeneme.dir/main.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\pointerdeneme.dir\main.c.obj /FdCMakeFiles\pointerdeneme.dir\ /FS -c C:\ISMAIL\C\pointerdeneme\main.c
<<

CMakeFiles\pointerdeneme.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pointerdeneme.dir/main.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\pointerdeneme.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\ISMAIL\C\pointerdeneme\main.c
<<

CMakeFiles\pointerdeneme.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pointerdeneme.dir/main.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\pointerdeneme.dir\main.c.s /c C:\ISMAIL\C\pointerdeneme\main.c
<<

# Object files for target pointerdeneme
pointerdeneme_OBJECTS = \
"CMakeFiles\pointerdeneme.dir\main.c.obj"

# External object files for target pointerdeneme
pointerdeneme_EXTERNAL_OBJECTS =

pointerdeneme.exe: CMakeFiles\pointerdeneme.dir\main.c.obj
pointerdeneme.exe: CMakeFiles\pointerdeneme.dir\build.make
pointerdeneme.exe: CMakeFiles\pointerdeneme.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\ISMAIL\C\pointerdeneme\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pointerdeneme.exe"
	"C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\pointerdeneme.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\pointerdeneme.dir\objects1.rsp @<<
 /out:pointerdeneme.exe /implib:pointerdeneme.lib /pdb:C:\ISMAIL\C\pointerdeneme\cmake-build-debug\pointerdeneme.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\pointerdeneme.dir\build: pointerdeneme.exe

.PHONY : CMakeFiles\pointerdeneme.dir\build

CMakeFiles\pointerdeneme.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointerdeneme.dir\cmake_clean.cmake
.PHONY : CMakeFiles\pointerdeneme.dir\clean

CMakeFiles\pointerdeneme.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\ISMAIL\C\pointerdeneme C:\ISMAIL\C\pointerdeneme C:\ISMAIL\C\pointerdeneme\cmake-build-debug C:\ISMAIL\C\pointerdeneme\cmake-build-debug C:\ISMAIL\C\pointerdeneme\cmake-build-debug\CMakeFiles\pointerdeneme.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\pointerdeneme.dir\depend
