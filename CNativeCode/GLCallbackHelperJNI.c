
#include "GLCallbackHelperJNI.h"
#include "jnitools.h"

#ifdef _WIN32_
	#include "wgltool.h"
#else
  #ifdef _MAC_OS9_
	#include <agl.h>
	#include <string.h>
  #else
	#include "glxtool.h"
  #endif
#endif

/*
#define DEBUG
*/

static CallbackNode * pCallbackNodeRoot = 0;

void LIBAPIENTRY PrintCallbackEntry(const char *title, CallbackEntry * cbe)
{
	if(cbe==NULL)
	{
		printf("%s> NULL cbe/cbn entry\n", title);
		return;
	}

	printf("%s> cbe entry 4 glu-obj=%ld, glx:=%ld (env=%ld, jobj=%ld)\n", 
		title, (long)(cbe->cb_obj), (long)(cbe->glx),
		(long)(cbe->env), (long)(cbe->jobj));

	printf(" which, method, argNumber, signature\n");
	printf(" %d %s %d: %s\n", 
		cbe->which, 
		cbe->methodName, 
		cbe->argListNumber, 
		cbe->signature);

	printf(" array element number\n");
	printf(" %d %d %d %d %d\n",
		cbe->arrayLen1, 
		cbe->arrayLen2, 
		cbe->arrayLen3, 
		cbe->arrayLen4, 
		cbe->arrayLen5);
	fflush(NULL);
}

void LIBAPIENTRY PrintCallbackNode(const char *title, CallbackNode * cbn)
{
	CallbackEntry * cbe=NULL;
	if(cbn!=NULL) cbe=cbn->this;
	PrintCallbackEntry(title, cbe);
}

#ifdef DEBUG
	#define DBG_PRINT_CBE(a,b) PrintCallbackEntry(a,b)
	#define DBG_PRINT_CBN(a,b) PrintCallbackNode(a,b)
#else
	#define DBG_PRINT_CBE(a,b)
	#define DBG_PRINT_CBN(a,b)
#endif

static void CleanCallbackEntry(CallbackEntry * cbe)
{
	DBG_PRINT_CBE("CleanCallbackEntry", cbe);

	if(cbe==NULL) return;
	(*(cbe->env))->DeleteGlobalRef(cbe->env, cbe->jobj);
	cbe->jobj=0;
	if(cbe->methodName!=NULL)
	{
		free(cbe->methodName);
		cbe->methodName=NULL;
	}
	if(cbe->signature!=NULL)
	{
		free(cbe->signature);
		cbe->signature=NULL;
	}
	cbe->argListNumber=0;
	cbe->arrayLen1=0;
	cbe->arrayLen2=0;
	cbe->arrayLen3=0;
	cbe->arrayLen4=0;
	cbe->arrayLen5=0;
	cbe->cb_obj=NULL;
	cbe->which=0;
	cbe->glx=0;
	cbe->env=NULL;
}

CallbackNode * LIBAPIENTRY LastCallbackNode()
{
	CallbackNode * cbn = pCallbackNodeRoot;
	if(cbn==NULL) return NULL;

	while(cbn->next!=NULL)
		cbn=cbn->next;

	return cbn;
}

CallbackNode * LIBAPIENTRY FindNextCallbackNodeOfCbObj(void *cb_obj)
{
	CallbackNode * cbn = pCallbackNodeRoot;

	while(cbn!=NULL && cbn->this->cb_obj!=cb_obj)
	{
		cbn=cbn->next;
	}
	return cbn;
}

CallbackNode * LIBAPIENTRY FindCallbackNode(GLenum which, jlong glx)
{
	CallbackNode * cbn = pCallbackNodeRoot;

	#ifdef DEBUG
		CallbackEntry * cbe = NULL;
		printf("FindCallbackNode> which:=%d, glx:=%ld\n",
			which, (long)glx);
		while(cbn!=NULL)
		{
			cbe=cbn->this;
			printf(" test cbe(%s %s): which:=%d, glx:=%ld\n",
				cbe->methodName, cbe->signature,
				cbe->which, (long)(cbe->glx));

			if(cbe->which==which && cbe->glx==glx)
				break;
			cbn=cbn->next;
		}
	#else
		while(cbn!=NULL && 
		      (cbn->this->which!=which || cbn->this->glx!=glx)
		     )
			cbn=cbn->next;
	#endif

	return cbn;
}

CallbackEntry * LIBAPIENTRY FindCallbackEntry(GLenum which, jlong glx)
{
	CallbackNode * cbn = FindCallbackNode(which, glx);
	if(cbn==NULL) return NULL;
	return cbn->this;
}

void  LIBAPIENTRY AddCallbackNode(JNIEnv * env, jobject jobj, 
		      const char *methodName, const char *signature,
		      int arrayLen1, int arrayLen2, int arrayLen3,
		      int arrayLen4, int arrayLen5,
		      void *cb_obj, GLenum which, jlong glx)
{
	CallbackNode * cbn = NULL;
	CallbackNode * last_cbn = NULL;
	CallbackEntry * cbe = NULL;

	cbn = FindCallbackNode (which, glx);
	if(cbn != NULL)
	{
		cbe = cbn->this;
		CleanCallbackEntry(cbe);
	} else {
		cbe = calloc(1, sizeof(CallbackEntry));
	}

	cbe->env=env;
	cbe->jobj= (*env)->NewGlobalRef(env, jobj);
	if(methodName!=NULL)
	{
		cbe->methodName=calloc(strlen(methodName)+1, 1);
		strcpy(cbe->methodName, methodName);
	}
	if(signature!=NULL)
	{
		cbe->signature=calloc(strlen(signature)+1, 1);
		strcpy(cbe->signature, signature);
	}
	cbe->argListNumber= jnitoolsGetArgNumber(env, signature, cbe->methodName);
	cbe->arrayLen1=arrayLen1;
	cbe->arrayLen2=arrayLen2;
	cbe->arrayLen3=arrayLen3;
	cbe->arrayLen4=arrayLen4;
	cbe->arrayLen5=arrayLen5;
	cbe->cb_obj=cb_obj;
	cbe->which=which;
	cbe->glx=glx;

	if(cbn == NULL)
	{
		cbn = calloc(1, sizeof(CallbackNode)); 
		cbn->this = cbe;
		last_cbn = LastCallbackNode();
		if(last_cbn==NULL)
			pCallbackNodeRoot=cbn;
		else {
			last_cbn->next=cbn;
			cbn->prev=last_cbn;
		}
	}
	DBG_PRINT_CBN("AddCallbackNode", cbn);
}

void  LIBAPIENTRY RemoveCallbackNodes(void *cb_obj)
{
	CallbackNode * cbn =  NULL;
	while ( (cbn =  FindNextCallbackNodeOfCbObj(cb_obj) ) != NULL )
	{
		DBG_PRINT_CBN("RemoveCallbackNodes", cbn);
		if(cbn->prev!=NULL)
			cbn->prev->next=cbn->next;
		else
			pCallbackNodeRoot=cbn->next;
		if(cbn->next!=NULL)
			cbn->next->prev=cbn->prev;
		CleanCallbackEntry(cbn->this);
		free(cbn->this);
		free(cbn);
	}
}

jlong  LIBAPIENTRY GetCurrentGLContext()
{
	#ifdef _WIN32_
                return (jlong) disp__wglGetCurrentContext();
        #else
          #ifdef _MAC_OS9_
                return (jlong) aglGetCurrentContext();
          #else
                return (jlong) disp__glXGetCurrentContext();   
	  #endif
        #endif
}


