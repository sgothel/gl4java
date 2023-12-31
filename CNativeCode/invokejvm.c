
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#ifdef _X11_
	#include <dlfcn.h>
#endif

#ifdef _WIN32_	 
	#include <windows.h>
#endif

#include <jni.h>

static char * defargs[] = { "-loadgljlibs", "gl4java.GLContext", "-info" };

#ifdef _X11_
static char * libname="libGL4JavaJauGljJNI13.so";
#endif

#ifdef _WIN32_	 
static char * libname="GL4JavaJauGljJNI13.DLL";
#endif

int main(int argc, char ** argv)
{
     JNIEnv *env;
     JavaVM *jvm=NULL;
     JavaVMInitArgs jvm_args;
     JavaVMOption options[100];
     jstring jstrargs[100];
     jstring jstrdummy;
     jobjectArray jargs;
     int jargnum=0;
     jint res;
     jclass cls;
     jmethodID mid;
     int opt_num=0, i;
     int argidx=1;
#ifdef _WIN32_	 
     HMODULE lib;
#endif
#ifdef _X11_
     void * lib;
     const char *err=NULL;
#endif
     char ** myargv;
  
     if(argc<2)
     {
        printf("loading default gl4java arguments !\n");
        myargv=calloc(4, sizeof(char *));
	memcpy(myargv, argv, sizeof(char *));
     	myargv[argidx] = defargs[0];
     	myargv[argidx+1] = defargs[1];
     	myargv[argidx+2] = defargs[2];
	argv=myargv;
	argc=argidx+3;
     }

     for ( i = 0; i< argc; i++)
     	printf("calling argv[%d]: %s\n", i, argv[i]);

     if(strcmp(argv[argidx],"-loadgljlibs")==0)
     {
        printf("loading default gl4java libraries !\n");
     	argidx++;
#ifdef _X11_
	lib = dlopen (libname, RTLD_LAZY | RTLD_GLOBAL);
	if (lib == NULL)
	{
                err=dlerror();
		printf ("GLERROR: cannot access library %s\n", libname);
                if(err!=NULL) printf("\t dlerror: %s\n", err);
		exit(1);
	}
#endif
#ifdef _WIN32_
    lib = LoadLibrary (libname);
	if (lib == NULL)
	{
		printf ("GLERROR: cannot access library %s\n", libname);
		exit(1);
	}
#endif

     }

     options[opt_num++].optionString = 
     	"-Djava.compiler=NONE";     /* disable JIT */
     options[opt_num++].optionString = 
     	"-Djava.class.path=."; /* user classes */

/*
     options[opt_num++].optionString = 
     	"-verbose:jni"; 
     options[opt_num++].optionString = 
     	"-Djava.library.path=c:\mylibs";
*/

     for(i=0; i<opt_num; i++)
        printf("jvm option[%d]: %s\n", i, options[i].optionString);

     jvm_args.version = JNI_VERSION_1_2;
     jvm_args.options = options;
     jvm_args.nOptions = opt_num;
     jvm_args.ignoreUnrecognized = 1;

     /* Note that in the Java 2 SDK, there is no longer any need to call 
      * JNI_GetDefaultJavaVMInitArgs. 
      */
     res = JNI_CreateJavaVM(&jvm, (void **)&env, &jvm_args);

     if (res == 0)
     {

	cls = (*env)->FindClass(env, argv[argidx]);

	if (cls == 0) {
		fprintf(stderr, "Can't find %s class\n", argv[argidx]);
		exit(1);
	}

	printf("jvm calling class %s\n", argv[argidx]);

	mid = (*env)->GetStaticMethodID(env, cls, "main", "([Ljava/lang/String;)V");
	if (mid == 0) {
		fprintf(stderr, "Can't find %s.main\n", argv[argidx]);
		exit(1);
	}
	argidx++;

	jstrdummy = (*env)->NewStringUTF(env, " ");
	if (jstrdummy == 0) {
		fprintf(stderr, "Out of memory\n");
		exit(1);
	}

	if(argidx==argc)
	{
		jstrargs[jargnum] = jstrdummy;
		printf("jvm calling jstrargs[%d]: %s\n",
		                        jargnum, " ");
		jargnum++;
	}

        for(; argidx<argc; argidx++, jargnum++)
	{
		jstrargs[jargnum] = (*env)->NewStringUTF(env, argv[argidx]);
		if (jstrargs[jargnum] == 0) {
			fprintf(stderr, "Out of memory\n");
			exit(1);
		}
		printf("jvm calling jstrargs[%d]: %s\n", 
			jargnum, argv[argidx]);
        }

	if(jargnum>0)
	{
	        jargs = (*env)->NewObjectArray(env, jargnum, 
			(*env)->FindClass(env, "java/lang/String"), jstrdummy);
		if (jargs == 0) {
			fprintf(stderr, "Out of memory\n");
			exit(1);
		}
		for(i=0; i<jargnum; i++)
			(*env)->SetObjectArrayElement(env, jargs, 
			                              i, jstrargs[i]);
	        (*env)->CallStaticVoidMethod(env, cls, mid, jargs);
	} 


	(*jvm)->DestroyJavaVM(jvm);
     }

#ifdef _X11_
     if(lib!=NULL)
     {
	      dlclose (lib);
	      lib = NULL;
     }
#endif

#ifdef _WIN32_
     if(lib!=NULL)
     {
	      FreeLibrary(lib);
	      lib = NULL;
     }
#endif

     return 1;
}
