/** THIS IS A MANUAL CODED PART
    glu-manualCodedImplJNI14.java
*/

static const char _glu_n_a_string[] = "GLU-String not available !";

static const char * _glu_lib_vendor_="Jausoft - Sven Goethel Software Development";
static const char * _glu_lib_version_="2.8.3.0";

/* ---------------------------------------------------------------------- */

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_gluErrorString ( JNIEnv *env, jobject obj,
	                                    jint errorCode ) 
{
    const char *tmpString=0;

    if ( disp__gluErrorString == NULL ) 
    	return (*env)->NewStringUTF(env, _glu_n_a_string);

    tmpString = disp__gluErrorString ( /* jint */ errorCode );
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_gluGetString ( JNIEnv *env, jobject obj,
	                                  jint name ) 
{
    const char *tmpString=0;

    if ( disp__gluGetString == NULL ) 
    	return (*env)->NewStringUTF(env, _glu_n_a_string);

    tmpString = disp__gluGetString ( /* jint */ name);
    if(tmpString==NULL)
    	tmpString=_glu_n_a_string;

    return (*env)->NewStringUTF(env, tmpString);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_getNativeVendor ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_vendor_);   
}

JNIEXPORT jstring JNICALL
Java_gl4java_GLUFuncJauJNI_getNativeVersion ( JNIEnv *env, jobject obj )
{
    return (*env)->NewStringUTF(env, _glu_lib_version_);   
}

static void _AddCallbackNode(JNIEnv *env,
	                          jlong qnt_obj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	char * strMethodName = jnitoolsGetJavaString(env, methodName);
	char * strSignature = jnitoolsGetJavaString(env, signature);
	jlong glx=0;

	glx = GetCurrentGLContext();

	AddCallbackNode(env, methodClassInstance, strMethodName, strSignature,
			arrayLen1, arrayLen2, arrayLen3,
			arrayLen4, arrayLen5,
			(void *)((PointerHolder)qnt_obj), which, glx);
	free(strMethodName);
	free(strSignature);
}

static void _AddCallbackNodeForCbObj(JNIEnv *env,
	                          jlong qnt_obj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	char * strMethodName = jnitoolsGetJavaString(env, methodName);
	char * strSignature = jnitoolsGetJavaString(env, signature);
	jlong glx=0;

	glx = GetCurrentGLContext();

	AddCallbackNodeForCbObj(env, methodClassInstance, strMethodName, strSignature,
			arrayLen1, arrayLen2, arrayLen3,
			arrayLen4, arrayLen5,
			(void *)((PointerHolder)qnt_obj), which, glx);
	free(strMethodName);
	free(strSignature);
}
                  

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluQuadricCallback( JNIEnv *env, jobject obj,
	                          jlong qobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	if ( disp__gluQuadricCallback == NULL )  return;

	switch(which)
	{
		case GLU_ERROR:
			disp__gluQuadricCallback((void *)((PointerHolder)qobj), 
			                   which, cbf_GLU_ERROR );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNode(env, 
			 qobj, which, methodClassInstance, methodName, 
			  signature, 
			  0, 0, 0, 0, 0);
}


JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluNurbsCallback( JNIEnv *env, jobject obj,
	                          jlong nobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature)
{
	if ( disp__gluNurbsCallback == NULL )  return;

	switch(which)
	{
		case GLU_ERROR:
			disp__gluNurbsCallback((void *)((PointerHolder)nobj), which, 
				         cbf_GLU_ERROR );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNode(env,
			 nobj, which, methodClassInstance, methodName, 
			  signature, 
			  0, 0, 0, 0, 0);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluTessCallback( JNIEnv *env, jobject obj,
	                          jlong tobj, jint which,
			          jobject methodClassInstance, 
			          jstring methodName, 
				  jstring signature,
				  jint arrayLen1,
				  jint arrayLen2,
				  jint arrayLen3,
				  jint arrayLen4,
				  jint arrayLen5)
{
	if ( disp__gluTessCallback == NULL )  return;
	
	switch(which)
	{
		case GLU_TESS_BEGIN:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_BEGIN );
			break;
		case GLU_TESS_BEGIN_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_BEGIN_DATA );
			break;
		case GLU_TESS_EDGE_FLAG:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_EDGE_FLAG );
			break;
		case GLU_TESS_EDGE_FLAG_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_EDGE_FLAG_DATA );
			break;
		case GLU_TESS_VERTEX:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_VERTEX );
			break;
		case GLU_TESS_VERTEX_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_VERTEX_DATA );
			break;
		case GLU_TESS_END:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_END );
			break;
		case GLU_TESS_END_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_END_DATA );
			break;
		case GLU_TESS_ERROR:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_ERROR );
			break;
		case GLU_TESS_ERROR_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_ERROR_DATA );
			break;
		case GLU_TESS_COMBINE:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_COMBINE );
			break;
		case GLU_TESS_COMBINE_DATA:
			disp__gluTessCallback((GLUtesselator *)((PointerHolder)tobj), 
			                which, 
				        cbf_GLU_TESS_COMBINE_DATA );
			break;
		default:
		    jnitoolsThrowByName(env, "java/lang/IllegalArgumentException", "Wrong Callback-Function type (\"which\") !");
		    return;
	}
	_AddCallbackNodeForCbObj(env,
			  tobj, which, methodClassInstance, methodName, 
			  signature, 
			  arrayLen1, arrayLen2, arrayLen3,
			  arrayLen4, arrayLen5);
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluDeleteQuadric( JNIEnv *env, jobject obj,
					     jlong qobj )
{
	if ( disp__gluDeleteQuadric == NULL )  return;

	disp__gluDeleteQuadric((void *)((PointerHolder)qobj));
	RemoveCallbackNodes((void *)((PointerHolder)qobj));
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluDeleteNurbsRenderer( JNIEnv *env, jobject obj,
						   jlong nobj )
{
	if ( disp__gluDeleteNurbsRenderer == NULL )  return;

	disp__gluDeleteNurbsRenderer((void *)((PointerHolder)nobj));
	RemoveCallbackNodes((void *)((PointerHolder)nobj));
}

JNIEXPORT void JNICALL
Java_gl4java_GLUFuncJauJNI_gluDeleteTess( JNIEnv *env, jobject obj,
					  jlong tobj )
{
	if ( disp__gluDeleteTess == NULL )  return;

	disp__gluDeleteTess((GLUtesselator *)((PointerHolder)tobj));
	RemoveCallbackNodes((void *)((PointerHolder)tobj));
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFuncJauJNI_gluNewQuadric( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewQuadric == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewQuadric());
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFuncJauJNI_gluNewNurbsRenderer( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewNurbsRenderer == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewNurbsRenderer());
}

JNIEXPORT jlong JNICALL
Java_gl4java_GLUFuncJauJNI_gluNewTess( JNIEnv *env, jobject obj)
{
	if ( disp__gluNewTess == NULL )  return 0;

	return (jlong)((PointerHolder)disp__gluNewTess());
}

#include "MemoryManager.h"

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginContour (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessBeginContour == NULL ) return;
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginContour (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessBeginPolygon ( GLUtesselator * tess , GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3B (
		JNIEnv *env, jobject obj,
		jlong tess,
		jbyteArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jbyte *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jbyte *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3S (
		JNIEnv *env, jobject obj,
		jlong tess,
		jshortArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jshort *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jshort *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3I (
		JNIEnv *env, jobject obj,
		jlong tess,
		jintArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jint *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jint *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3F (
		JNIEnv *env, jobject obj,
		jlong tess,
		jfloatArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jfloat *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jfloat *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3D (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jdouble *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3Z (
		JNIEnv *env, jobject obj,
		jlong tess,
		jbooleanArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jboolean *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jboolean *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessBeginPolygon__J_3J (
		JNIEnv *env, jobject obj,
		jlong tess,
		jlongArray data)
	{
		jboolean isCopiedArray1 = JNI_FALSE;
		jlong *ptr1 = NULL;

		if ( disp__gluTessBeginPolygon == NULL ) return;

		if(data!=NULL)
		{
			ptr1 = (jlong *) (*env)->GetPrimitiveArrayCritical(env, data, &isCopiedArray1);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessBeginPolygon (
			(GLUtesselator *) (PointerHolder) tess,
			(GLvoid *) ptr1
		);

		if(data!=NULL)
		{
			(*env)->ReleasePrimitiveArrayCritical(env,  data, ptr1, (isCopiedArray1 == JNI_TRUE)?0:JNI_ABORT);
		}
	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndContour ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndContour (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessEndContour == NULL ) return;
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessEndContour (
			(GLUtesselator *) (PointerHolder) tess
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessEndPolygon ( GLUtesselator * tess ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessEndPolygon (
		JNIEnv *env, jobject obj,
		jlong tess)
	{

		if ( disp__gluTessEndPolygon == NULL ) return;
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessEndPolygon (
			(GLUtesselator *) (PointerHolder) tess
		);
		FreeArrays(env, MEMM_TESSELATOR);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessNormal ( GLUtesselator * tess , GLdouble valueX , GLdouble valueY , GLdouble valueZ ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessNormal (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdouble valueX,
		jdouble valueY,
		jdouble valueZ)
	{

		if ( disp__gluTessNormal == NULL ) return;
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessNormal (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble) valueX,
			(GLdouble) valueY,
			(GLdouble) valueZ
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessProperty ( GLUtesselator * tess , GLenum which , GLdouble data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessProperty (
		JNIEnv *env, jobject obj,
		jlong tess,
		jint which,
		jdouble data)
	{

		if ( disp__gluTessProperty == NULL ) return;
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessProperty (
			(GLUtesselator *) (PointerHolder) tess,
			(GLenum) which,
			(GLdouble) data
		);

	}

/**
 * Original Function-Prototype :
 * <pre> 
   extern void gluTessVertex ( GLUtesselator * tess , GLdouble * location , GLvoid * data ) ;
 * </pre> 
 */
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3B (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jbyteArray data)
	{
		jdouble *ptr1 = NULL;
		jbyte *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jbyte *) (*env)->GetByteArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_BYTE_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3S (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jshortArray data)
	{
		jdouble *ptr1 = NULL;
		jshort *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jshort *) (*env)->GetShortArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_SHORT_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3I (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jintArray data)
	{
		jdouble *ptr1 = NULL;
		jint *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jint *) (*env)->GetIntArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_INT_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3F (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jfloatArray data)
	{
		jdouble *ptr1 = NULL;
		jfloat *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jfloat *) (*env)->GetFloatArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_FLOAT_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3D (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jdoubleArray data)
	{
		jdouble *ptr1 = NULL;
		jdouble *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jdouble *) (*env)->GetDoubleArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3Z (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jbooleanArray data)
	{
		jdouble *ptr1 = NULL;
		jboolean *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jboolean *) (*env)->GetBooleanArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_BOOLEAN_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
	JNIEXPORT void JNICALL
	Java_gl4java_GLUFuncJauJNI_gluTessVertex__J_3D_3J (
		JNIEnv *env, jobject obj,
		jlong tess,
		jdoubleArray location,
		jlongArray data)
	{
		jdouble *ptr1 = NULL;
		jlong *ptr2 = NULL;

		if ( disp__gluTessVertex == NULL ) return;

		if(location!=NULL)
		{
			ptr1 = (jdouble *) (*env)->GetDoubleArrayElements(env, location, 0);
			RegisterArray(env, location, ptr1, T_DOUBLE_ARRAY, MEMM_TESSELATOR);
		}
		if(data!=NULL)
		{
			ptr2 = (jlong *) (*env)->GetLongArrayElements(env, data, 0);
			RegisterArray(env, data, ptr2, T_LONG_ARRAY, MEMM_TESSELATOR);
		}
		SetCurrentCallbackObject((void *) (PointerHolder) tess);
		disp__gluTessVertex (
			(GLUtesselator *) (PointerHolder) tess,
			(GLdouble *) ptr1,
			(GLvoid *) ptr2
		);
	}
