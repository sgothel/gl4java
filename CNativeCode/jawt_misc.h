
#ifndef _JAWT_MISC_H
#define _JAWT_MISC_H

	#include "OpenGL_misc.h"

	#include <jawt_md.h>
	#include <assert.h>

	typedef struct {
		  JAWT_DrawingSurface* ds;
		  JAWT_DrawingSurfaceInfo* dsi;

		  /**
		   * just the java native window handle,
		   * valid, if ds is locked !
		   * but this is just an old copy ..
		   * updated via jawt_lock !
		   */
		  void * dsi_os; 

		  /**
		   * This is, if dsi_win_created != 0,
		   * the:
		   *	- the own created child window, or
		   *    - the GLXPixmap of the offscreenRendering data
		   *
		   * 	This ressource is created manually,
		   * 	so it must be destroyed manually either !
		   *
		   * Otherwise (dsi_win_created==0), 
		   * this is just the backup
		   * of the dsi_os->drawable, of the last lock !
		   */
		  void * dsi_win;
		  int    dsi_win_created;

		  /**
		   * This is, if dsi_display_created != 0,
		   * the:
		   *	- the own fetched display (XopenDisplay)
		   *
		   * 	This ressource is fetched manually !
		   *
		   * Otherwise (dsi_display_created==0), 
		   * this is just the backup
		   * of the dsi_os->display, of the last lock !
		   */
		  void * dsi_display;
		  int    dsi_display_created;

		  jint lock;

		  /* this JAWTDataHolder is a NOT a holder for a true JAWT
		   * component, it is used for an offScreen drawable !
		   */
		  jint offScreen;

		  jboolean result;
	} JAWTDataHolder;
	 
	LIBAPI jboolean LIBAPIENTRY
	jawt_create_offscreen (JNIEnv *env, JAWTDataHolder **ppJData, 
			       jboolean verbose); 

	LIBAPI jboolean LIBAPIENTRY
	jawt_create_open (JNIEnv *env, jobject component, JAWTDataHolder **ppJData, jboolean verbose);

	LIBAPI jboolean LIBAPIENTRY 
	jawt_free_close_unlock (JNIEnv *env, JAWTDataHolder **ppJData, jboolean verbose);

	LIBAPI jboolean LIBAPIENTRY 
	jawt_open (JNIEnv *env, jobject component, JAWTDataHolder *pJData, jboolean verbose);

	LIBAPI jboolean LIBAPIENTRY 
	jawt_close_unlock (JNIEnv *env, JAWTDataHolder *pJData, jboolean verbose);

	LIBAPI jboolean LIBAPIENTRY 
	jawt_lock (JNIEnv *env, JAWTDataHolder *pJData, jboolean ignoreSurfaceChanged, 
	           jboolean verbose);

	LIBAPI jboolean LIBAPIENTRY 
	jawt_unlock (JNIEnv *env, JAWTDataHolder *pJData, jboolean verbose);
#endif 
