/*----------------------------------------------------------------------
 * JNI DUMMY routines for handle access via JAWT
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include <jni.h>

#include "jnitools.h"

 
jboolean LIBAPIENTRY
jawt_init (char* jawtLibName)
{
  (void) jawtLibName;
  return JNI_FALSE;
}

void LIBAPIENTRY
jawt_unload ()
{

}

