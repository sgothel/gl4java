# Microsoft Developer Studio Project File - Name="GL4JavaJauGljJNI" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** NICHT BEARBEITEN **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=GL4JavaJauGljJNI - Win32 Release
!MESSAGE Dies ist kein g�ltiges Makefile. Zum Erstellen dieses Projekts mit NMAKE
!MESSAGE verwenden Sie den Befehl "Makefile exportieren" und f�hren Sie den Befehl
!MESSAGE 
!MESSAGE NMAKE /f "GL4JavaJauGljJNI.mak".
!MESSAGE 
!MESSAGE Sie k�nnen beim Ausf�hren von NMAKE eine Konfiguration angeben
!MESSAGE durch Definieren des Makros CFG in der Befehlszeile. Zum Beispiel:
!MESSAGE 
!MESSAGE NMAKE /f "GL4JavaJauGljJNI.mak" CFG="GL4JavaJauGljJNI - Win32 Release"
!MESSAGE 
!MESSAGE F�r die Konfiguration stehen zur Auswahl:
!MESSAGE 
!MESSAGE "GL4JavaJauGljJNI - Win32 Release" (basierend auf  "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe
# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../libs"
# PROP Intermediate_Dir "../temp"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "d:\jdk1.4\include" /I "d:\jdk1.4\include\win32" /I "..\..\CCLassHeaders" /I "..\..\CNativeCode" /D "NO_VSNPRINTF" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_WIN32_" /D "_MSVC_" /D "_MT" /D "_GL_DYNAMIC_BINDING_" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /o "NUL" /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /o "NUL" /win32
# ADD BASE RSC /l 0x407 /d "NDEBUG"
# ADD RSC /l 0x407 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# SUBTRACT LINK32 /pdb:none /incremental:yes /debug
# Begin Target

# Name "GL4JavaJauGljJNI - Win32 Release"
# Begin Source File

SOURCE=..\..\CNativeCode\GLCallbackHelperJNI.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\glcaps.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\glf.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\GLF_JNI_funcs.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\gltool.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\GLUCallbackJNI.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\jnitools.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGL_JauJNI_funcs.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGL_misc.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGL_Win32.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGL_Win32_common.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGL_Win32_common.h
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\OpenGLU_JauJNI_funcs.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\Tool_JNI_funcs.c
# End Source File
# Begin Source File

SOURCE=..\..\CNativeCode\wgltool.c
# End Source File
# End Target
# End Project
