/*
 * This file takes care of the C implementation of opening up an
 * X window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * Leo Chan  -- 1995
 *
 * Adam King -- 1997
 *
 * Modified Creation window code to use the currently showing Java Frame
 * window instead of creating a new window.
 * ---------------
 *
 * Many improvements and changes are made !
 *
 * Sven Goethel
 *
 * September 1997
 *
 * some X stuff is also modified/debugged to run on aix ...
 */

/* 
 * need to include the JAVA internal header files for macros and function
 * prototypes required to maipulated JAVA data structures and functions
 *
 * StubPreamble.h includes the structure and macro definitions neede to
 * convert JAVA data structures into C data structures.
 *
 */

#include "OpenGL_X11_common.h"

jboolean LIBAPIENTRY testX11Java()
{
    jboolean ret=JNI_TRUE;

    /* NON DEPENDENCE CHECKS */

    /* FIRST OF ALL CHECK IF A NATIVE POINTER OR X11-TYPE FITS IN ´jint´ */

    if( sizeof(jlong) < sizeof(Display *) )
    {
        fprintf(stderr,"GL4Java: (Display *) fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(GLXContext) )
    {
        fprintf(stderr,"GL4Java: GLXContext fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if( sizeof(jlong) < sizeof(Window) )
    {
        fprintf(stderr,"GL4Java: Window fits not in jlong\n");
	ret = JNI_FALSE;
    }

    if(ret==JNI_FALSE)
    {
	fflush(stderr);
    }

    return ret;
}

