
#ifndef GLUCALLBACKJNI
	#define GLUCALLBACKJNI

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>

	#ifdef _WIN32_
		#include "winstuff.h"
	#endif

	#include <jni.h>

	#include<GL/gl.h>
	#include <GL/glu.h>

	#ifndef LIBAPIENTRY
		#define LIBAPIENTRY
	#endif
	#ifndef LIBAPI
		#define LIBAPI
	#endif

	typedef int (*CBF_ANY_FUNCTION) (); 

	typedef void (*CBF_GLU_TESS_BEGIN) (GLenum type); 
	typedef void (*CBF_GLU_TESS_BEGIN_DATA) (GLenum type, void *udata); 
	typedef void (*CBF_GLU_TESS_EDGE_FLAG) (GLboolean flag); 
	typedef void (*CBF_GLU_TESS_EDGE_FLAG_DATA) (GLboolean flag, void *udata); 
	typedef void (*CBF_GLU_TESS_VERTEX) (void * vdata); 
	typedef void (*CBF_GLU_TESS_VERTEX_DATA) (void * vdata, void * udata); 
	typedef void (*CBF_GLU_TESS_END) (void); 
	typedef void (*CBF_GLU_TESS_END_DATA) (void * udata); 
	typedef void (*CBF_GLU_TESS_ERROR) (GLenum errno); 
	typedef void (*CBF_GLU_TESS_ERROR_DATA) (GLenum errno, void * udata); 
	typedef void (*CBF_GLU_TESS_COMBINE) (GLdouble coords[3], void *vdata[4],
					     GLfloat weight[4], void **outdata);
	typedef void (*CBF_GLU_TESS_COMBINE_DATA) (GLdouble coords[3], void *vdata[4],
					          GLfloat weight[4], void **outdata,
					          void *udata);
	typedef void (*CBF_GLU_ERROR) (GLenum errno); 

	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_BEGIN (GLenum type);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_BEGIN_DATA (GLenum type, void *udata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_EDGE_FLAG (GLboolean flag);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_EDGE_FLAG_DATA (GLboolean flag, void *udata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_VERTEX (void * vdata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_VERTEX_DATA (void * vdata, void * udata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_END (void);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_END_DATA (void * udata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_ERROR (GLenum errno);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_ERROR_DATA (GLenum errno, void * udata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_COMBINE (GLdouble coords[3], void *vdata[4],
					   GLfloat weight[4], void **outdata);
	LIBAPI void LIBAPIENTRY cbf_GLU_TESS_COMBINE_DATA (GLdouble coords[3], void *vdata[4],
						GLfloat weight[4], void **outdata,
						void *udata);

	LIBAPI void LIBAPIENTRY cbf_GLU_ERROR (GLenum errno);

#endif
