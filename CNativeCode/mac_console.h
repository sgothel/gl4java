// File "mac_console.h"

#include <jni.h>
#include <stdio.h>
#include <string.h>
#include <MacTypes.h>
#include <MacMemory.h>


void InstallJavaConsole(JNIEnv *env);
void UninstallJavaConsole(void);
int InstallConsole(void);
int RemoveConsole(void);
int WriteCharsToConsole(void);
int ReadCharsFromConsole(void);

