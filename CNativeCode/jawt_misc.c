/*----------------------------------------------------------------------
 * JNI routines for handle access via JAWT
 */
 
#include "jawt_misc.h"
 
static JAWT     _awt ;
static jboolean _awt_init = JNI_FALSE ;

jboolean LIBAPIENTRY
jawt_create_offscreen (JNIEnv *env, JAWTDataHolder **ppJData, jboolean verbose) 
{
  if(ppJData==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: create offscrn failed -> para's == NULL\n");
          fflush(stderr);
        }
  	return JNI_FALSE;
  }
  
  *ppJData = calloc(1, sizeof(JAWTDataHolder));

  // Get the drawing surface
  (*ppJData)->ds  			= NULL;
  (*ppJData)->dsi 			= NULL;
  (*ppJData)->dsi_os 			= NULL;
  (*ppJData)->dsi_win			= NULL;
  (*ppJData)->dsi_win_created		= 1;
  (*ppJData)->dsi_display		= NULL;
  (*ppJData)->dsi_display_created	= 1;
  (*ppJData)->lock 			= JAWT_LOCK_ERROR ;
  (*ppJData)->offScreen			= 1;
  (*ppJData)->result 			= JNI_TRUE;

  return JNI_TRUE;
}

jboolean LIBAPIENTRY
jawt_create_open (JNIEnv *env, jobject component, 
		  JAWTDataHolder **ppJData, jboolean verbose) 
{
  if(ppJData==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: create failed -> para's == NULL\n");
          fflush(stderr);
        }
  	return JNI_FALSE;
  }
  
  *ppJData = calloc(1, sizeof(JAWTDataHolder));

  // Get the drawing surface
  (*ppJData)->ds  			= NULL;
  (*ppJData)->dsi 			= NULL;
  (*ppJData)->dsi_os 			= NULL;
  (*ppJData)->dsi_win			= NULL;
  (*ppJData)->dsi_win_created		= 0;
  (*ppJData)->dsi_display		= NULL;
  (*ppJData)->dsi_display_created	= 0;
  (*ppJData)->lock 			= 0;
  (*ppJData)->offScreen			= 0;
  (*ppJData)->result 			= JNI_TRUE;

  return jawt_open(env, component, *ppJData, verbose);
}

jboolean LIBAPIENTRY 
jawt_free_close_unlock (JNIEnv *env, JAWTDataHolder **ppJData, jboolean verbose)
{
  jboolean res = JNI_TRUE;

  if(ppJData==NULL || *ppJData==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: free failed -> para's == NULL\n");
          fflush(stderr);
        }
  	return JNI_FALSE;
  }

  if( ! (*ppJData)->offScreen )
	  res = jawt_close_unlock(env, *ppJData, verbose);

  free(*ppJData);
  *ppJData=NULL;

  return res;
}

jboolean LIBAPIENTRY
jawt_open (JNIEnv *env, jobject component, JAWTDataHolder *pJData, jboolean verbose) 
{
  if(pJData==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: open failed -> para's == NULL\n");
          fflush(stderr);
        }
  	return JNI_FALSE;
  }
 
  if( pJData->offScreen )
  	return JNI_TRUE;

  // Get the AWT
  if(_awt_init==JNI_FALSE)
  {
	  _awt.version = JAWT_VERSION_1_3;
  	  pJData->result = JAWT_GetAWT(env, &_awt);
	  if(pJData->result==JNI_TRUE)
	  {
		 if(verbose)
		 {
		     fprintf(stderr, "GL4Java-JAWT: _awt initialized\n");
		     fflush(stderr);
		 }
	  	 _awt_init=JNI_TRUE;
	  } else {
		 if(verbose)
		 {
		     fprintf(stderr, "GL4Java-JAWT: _awt init failed\n");
		     fflush(stderr);
		 }
	  	return pJData->result;
	  }
  }
 
  // Get the drawing surface
  pJData->ds  			= _awt.GetDrawingSurface(env, component);
  pJData->result 		= pJData->ds != NULL;

  if(verbose && pJData->result==JNI_FALSE)
  {
     if(verbose)
     {
         fprintf(stderr, "GL4Java-JAWT: open failed -> GetDrawingSurface()==NULL\n");
         fflush(stderr);
     }
  }

  return pJData->result;
}

jboolean LIBAPIENTRY
jawt_close_unlock (JNIEnv *env, JAWTDataHolder *pJData, jboolean verbose) 
{
  if(pJData!=NULL && pJData->offScreen )
  	return JNI_TRUE;

  if(pJData==NULL || _awt_init==JNI_FALSE)
  	return JNI_FALSE;
 
  pJData->result=jawt_unlock(env, pJData, verbose);

  // Free the drawing surface
  if(pJData->ds!=0)
	  _awt.FreeDrawingSurface(pJData->ds);
  pJData->ds=0;
 
  return  pJData->result;
}

jboolean LIBAPIENTRY
jawt_lock (JNIEnv *env, JAWTDataHolder *pJData, jboolean ignoreSurfaceChanged, 
           jboolean verbose) 
{
  jthrowable exc;

  if(pJData!=NULL && pJData->offScreen )
  	return JNI_TRUE;

  if(pJData==NULL || _awt_init==JNI_FALSE || pJData->ds==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: lock failed -> para's == NULL\n\t(pData==%p, _awt_init=%d, pData->ds=%p)\n",
	  	pJData, _awt_init, (pJData!=NULL)?pJData->ds:NULL);
          fflush(stderr);
        }
  	return JNI_FALSE;
  }
 
  // Lock the drawing surface
  pJData->lock = pJData->ds->Lock(pJData->ds);
  exc = (*env)->ExceptionOccurred(env);
  if(exc) {
          if(verbose)
          {
              fprintf(stderr, "GL4Java-JAWT: lock failed -> lock exception\n");
              fflush(stderr);
          }
	  pJData->result = JNI_FALSE;
          if(verbose)
		  (*env)->ExceptionDescribe(env);
	  (*env)->ExceptionClear(env);
	  return pJData->result;
  }

  pJData->result = (pJData->lock & JAWT_LOCK_ERROR) == 0;

  if(pJData->result ==JNI_FALSE)
  {
       if(verbose)
       {
          fprintf(stderr, "GL4Java-JAWT: lock failed -> JAWT_LOCK_ERROR\n");
          fflush(stderr);
       }
       return pJData->result;
  }
 
  if( (pJData->lock & JAWT_LOCK_SURFACE_CHANGED) != 0 )
  {
	if(verbose)
	{
	  if(ignoreSurfaceChanged==JNI_TRUE)
	     fprintf(stderr, "GL4Java-JAWT: lock JAWT_LOCK_SURFACE_CHANGED ignored\n");
	  else
	     fprintf(stderr, "GL4Java-JAWT: lock failed -> JAWT_LOCK_SURFACE_CHANGED\n");
          fflush(stderr);
	}
	if(ignoreSurfaceChanged==JNI_FALSE)
	{
		pJData->result = JNI_FALSE;
		return pJData->result;
	}
  }

  // Get the drawing surface info
  pJData->dsi = pJData->ds->GetDrawingSurfaceInfo(pJData->ds);
  exc = (*env)->ExceptionOccurred(env);
  if(exc) {
          if(verbose)
          {
              fprintf(stderr, "GL4Java-JAWT: lock failed -> get-dsi exception\n");
              fflush(stderr);
          }
	  pJData->result = JNI_FALSE;
          if(verbose)
		  (*env)->ExceptionDescribe(env);
	  (*env)->ExceptionClear(env);
	  pJData->dsi=0;
  }

 
  if(pJData->dsi!=NULL)
	  // Get the platform-specific drawing info
	  pJData->dsi_os = (void *) pJData->dsi->platformInfo;
  else
  	  pJData->dsi_os = 0;

  if(pJData->dsi_os == NULL)
  {
	if(verbose)
	{
	     fprintf(stderr, "GL4Java-JAWT: lock failed -> dsi->platformInfo==NULL\n");
	     fflush(stderr);
	}
	pJData->result = JNI_FALSE;
  	return pJData->result;
  }

  if(pJData->dsi_win_created==0)
  {
    pJData->dsi_win = (void *) (PointerHolder)
      #ifdef _X11_ 
  	( ((JAWT_X11DrawingSurfaceInfo *)(pJData->dsi_os))->drawable );
      #endif
      #ifdef _MAC_OS9_  
        NULL;
      #endif
      #ifdef _WIN32_ 
  	( ((JAWT_Win32DrawingSurfaceInfo*)(pJData->dsi_os))->hdc );
      #endif
  }

  if(pJData->dsi_display_created==0)
  {
    pJData->dsi_display = (void *) (PointerHolder)
      #ifdef _X11_ 
  	( ((JAWT_X11DrawingSurfaceInfo *)(pJData->dsi_os))->display );
      #endif
      #ifdef _MAC_OS9_  
        NULL;
      #endif
      #ifdef _WIN32_ 
        NULL;
      #endif
  }

  return pJData->result;
}

jboolean LIBAPIENTRY
jawt_unlock (JNIEnv *env, JAWTDataHolder *pJData, jboolean verbose) 
{
  jthrowable exc;

  if(pJData!=NULL && pJData->offScreen )
  	return JNI_TRUE;

  if(pJData==NULL || _awt_init==JNI_FALSE || pJData->ds==NULL)
  {
        if(verbose)
        {
          fprintf(stderr, "GL4Java-JAWT: unlock failed -> para's == NULL\n\t(pData==%p, _awt_init=%d, pData->ds=%p)\n",
	  	pJData, _awt_init, (pJData!=NULL)?pJData->ds:NULL);
          fflush(stderr);
        }
	pJData->result=JNI_FALSE;
  	return JNI_FALSE;
  }
 
  pJData->result=JNI_TRUE;

  if(pJData->dsi!=NULL)
  {
	  // Free the drawing surface info
	  pJData->ds->FreeDrawingSurfaceInfo(pJData->dsi);
	  exc = (*env)->ExceptionOccurred(env);
	  if(exc) {
		  if(verbose)
		  {
		      fprintf(stderr, "GL4Java-JAWT: unlock failed -> free-dsi exception\n");
		      fflush(stderr);
		  }
		  pJData->result = JNI_FALSE;
		  if(verbose)
			  (*env)->ExceptionDescribe(env);
		  (*env)->ExceptionClear(env);
		  return pJData->result;
	  }
  }
  pJData->dsi=0;
 
  // Unlock the drawing surface
  if ( (pJData->lock & JAWT_LOCK_ERROR) == 0 )
  {
	pJData->ds->Unlock(pJData->ds);
	exc = (*env)->ExceptionOccurred(env);
	if(exc) 
	{
          if(verbose)
          {
              fprintf(stderr, "GL4Java-JAWT: unlock failed -> unlock exception\n");
              fflush(stderr);
          }
		  pJData->result = JNI_FALSE;
          if(verbose)
			(*env)->ExceptionDescribe(env);
		  (*env)->ExceptionClear(env);
		  return pJData->result;
	}
	pJData->lock = 0;
  }

  return JNI_TRUE;
}
