/*
 * Original Author: Leo Chan -- 1995
 *
 * Adam King 1997
 *		Ported to Win32 from X
 *
 * This file takes care of the C implementation of finding the correct
 * Win32 window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * September 12, 1997	- Adam King
 *		- Added support for rendering directly into a Canvas ( BIG rewrite )
 */

#include "OpenGL_Win32_common.h"




jboolean LIBAPIENTRY testWin32Java()
{
    jboolean ret=JNI_TRUE;

    /* NON DEPENDENCE CHECKS */

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR WIN32-TYPE FITS IN ´jint´ */

    if( sizeof(jlong) < sizeof(int *) )
    {
        fprintf(stderr,"(int *) fits not in jlong\n");
		  ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(HDC) )
    {
        fprintf(stderr,"HDC fits not in jlong\n");
        ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(HGLRC) )
    {
        fprintf(stderr,"HGLRC fits not in jlong\n");
        ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
			fflush(stderr);
    }

    return ret;
}


