// File "mac_console.c"

#include <stdio.h>
#include "mac_console.h"


static	JNIEnv	*gJNIenv			= nil;

static	char	kMessage[]			= "";
static	char	gMessage[BUFSIZ];


//
// InstallJavaConsole
//
void InstallJavaConsole(JNIEnv *env)
{
	gJNIenv = env;
}

//
// UninstallJavaConsole
//
void UninstallJavaConsole(void)
{
	gJNIenv = nil;
}


//
// InstallConsole
//
int InstallConsole(void)
{
}

//
// RemoveConsole
//
int RemoveConsole(void)
{
}

//
// WriteCharsToConsole
//
int WriteCharsToConsole(void)
{
	jclass		class_System;
	jfieldID	id_err;
	jobject		object_err;
	jclass		class_PrintStream;
	jmethodID	id_println;
	jmethodID	id_flush;
	jstring		string			= nil;
	int			messageLength	= 0;
	char		*message		= nil;
	
	
	// _FILE
	//debugstr((char*)stderr->buffer);
	
	if (gJNIenv != nil)
	{
		if (stderr->buffer_len > 0)
		{
			messageLength = stderr->buffer_len;
			message = (char*)stderr->buffer;
		}
		else if (stdout->buffer_len > 0)
		{
			messageLength = stdout->buffer_len;
			message = (char*)stdout->buffer;
		}
		
		if (messageLength < BUFSIZ)
		{
			strncpy(gMessage, message, messageLength);
			gMessage[messageLength] = '\0';
		}
		else
		{
			strncpy(gMessage, message, BUFSIZ);
			gMessage[BUFSIZ-1] = '\0';
		}
		
		string = (*gJNIenv)->NewStringUTF(gJNIenv, gMessage);
		if (string != nil)
		{
			class_System		= (*gJNIenv)->FindClass(gJNIenv, "java/lang/System");
			id_err				= (*gJNIenv)->GetStaticFieldID(gJNIenv, class_System, "err", "Ljava/io/PrintStream;");
			object_err			= (*gJNIenv)->GetStaticObjectField(gJNIenv, class_System, id_err);
			class_PrintStream	= (*gJNIenv)->GetObjectClass(gJNIenv, object_err);
			id_println			= (*gJNIenv)->GetMethodID(gJNIenv, class_PrintStream, "print", "(Ljava/lang/String;)V");
			
			(*gJNIenv)->CallVoidMethod(gJNIenv, object_err, id_println, string);
			
	    	(*gJNIenv)->DeleteLocalRef(gJNIenv, string);
	    	(*gJNIenv)->DeleteLocalRef(gJNIenv, class_PrintStream);
	    	(*gJNIenv)->DeleteLocalRef(gJNIenv, object_err);
	    	(*gJNIenv)->DeleteLocalRef(gJNIenv, class_System);
	    }
	    else
	    {
			//debugstr("string is null");
	    }
	}
	else
	{
		//debugstr("gJNIenv is null");
	}
}

//
// ReadCharsFromConsole
//
int ReadCharsFromConsole(void)
{
}
