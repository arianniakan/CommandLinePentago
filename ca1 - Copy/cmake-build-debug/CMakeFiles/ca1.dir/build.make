# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programing shit\c shit\ca1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programing shit\c shit\ca1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\ca1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\ca1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ca1.dir\flags.make

CMakeFiles\ca1.dir\main.c.obj: CMakeFiles\ca1.dir\flags.make
CMakeFiles\ca1.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programing shit\c shit\ca1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ca1.dir/main.c.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\ca1.dir\main.c.obj /FdCMakeFiles\ca1.dir\ /FS -c "E:\programing shit\c shit\ca1\main.c"
<<

CMakeFiles\ca1.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ca1.dir/main.c.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\ca1.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\programing shit\c shit\ca1\main.c"
<<

CMakeFiles\ca1.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ca1.dir/main.c.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\ca1.dir\main.c.s /c "E:\programing shit\c shit\ca1\main.c"
<<

# Object files for target ca1
ca1_OBJECTS = \
"CMakeFiles\ca1.dir\main.c.obj"

# External object files for target ca1
ca1_EXTERNAL_OBJECTS =

ca1.exe: CMakeFiles\ca1.dir\main.c.obj
ca1.exe: CMakeFiles\ca1.dir\build.make
ca1.exe: CMakeFiles\ca1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programing shit\c shit\ca1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ca1.exe"
	"C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\ca1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\ca1.dir\objects1.rsp @<<
 /out:ca1.exe /implib:ca1.lib /pdb:"E:\programing shit\c shit\ca1\cmake-build-debug\ca1.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\ca1.dir\build: ca1.exe

.PHONY : CMakeFiles\ca1.dir\build

CMakeFiles\ca1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ca1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ca1.dir\clean

CMakeFiles\ca1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "E:\programing shit\c shit\ca1" "E:\programing shit\c shit\ca1" "E:\programing shit\c shit\ca1\cmake-build-debug" "E:\programing shit\c shit\ca1\cmake-build-debug" "E:\programing shit\c shit\ca1\cmake-build-debug\CMakeFiles\ca1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\ca1.dir\depend

