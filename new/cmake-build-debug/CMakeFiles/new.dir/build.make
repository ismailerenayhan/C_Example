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
CMAKE_SOURCE_DIR = C:\ISMAIL\C\new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\ISMAIL\C\new\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\new.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\new.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\new.dir\flags.make

CMakeFiles\new.dir\main.c.obj: CMakeFiles\new.dir\flags.make
CMakeFiles\new.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\ISMAIL\C\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/new.dir/main.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\new.dir\main.c.obj /FdCMakeFiles\new.dir\ /FS -c C:\ISMAIL\C\new\main.c
<<

CMakeFiles\new.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/new.dir/main.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\new.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\ISMAIL\C\new\main.c
<<

CMakeFiles\new.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/new.dir/main.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\new.dir\main.c.s /c C:\ISMAIL\C\new\main.c
<<

CMakeFiles\new.dir\deneme2.c.obj: CMakeFiles\new.dir\flags.make
CMakeFiles\new.dir\deneme2.c.obj: ..\deneme2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\ISMAIL\C\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/new.dir/deneme2.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\new.dir\deneme2.c.obj /FdCMakeFiles\new.dir\ /FS -c C:\ISMAIL\C\new\deneme2.c
<<

CMakeFiles\new.dir\deneme2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/new.dir/deneme2.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\new.dir\deneme2.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\ISMAIL\C\new\deneme2.c
<<

CMakeFiles\new.dir\deneme2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/new.dir/deneme2.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\new.dir\deneme2.c.s /c C:\ISMAIL\C\new\deneme2.c
<<

# Object files for target new
new_OBJECTS = \
"CMakeFiles\new.dir\main.c.obj" \
"CMakeFiles\new.dir\deneme2.c.obj"

# External object files for target new
new_EXTERNAL_OBJECTS =

new.exe: CMakeFiles\new.dir\main.c.obj
new.exe: CMakeFiles\new.dir\deneme2.c.obj
new.exe: CMakeFiles\new.dir\build.make
new.exe: CMakeFiles\new.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\ISMAIL\C\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable new.exe"
	"C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\new.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\new.dir\objects1.rsp @<<
 /out:new.exe /implib:new.lib /pdb:C:\ISMAIL\C\new\cmake-build-debug\new.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\new.dir\build: new.exe

.PHONY : CMakeFiles\new.dir\build

CMakeFiles\new.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\new.dir\cmake_clean.cmake
.PHONY : CMakeFiles\new.dir\clean

CMakeFiles\new.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\ISMAIL\C\new C:\ISMAIL\C\new C:\ISMAIL\C\new\cmake-build-debug C:\ISMAIL\C\new\cmake-build-debug C:\ISMAIL\C\new\cmake-build-debug\CMakeFiles\new.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\new.dir\depend
