	disp__gluGetString = (const GLubyte *(CALLBACK *)( GLenum))
		GET_GL_PROCADDRESS ("gluGetString");


    disp__gluErrorString = ( const GLubyte * (CALLBACK *) ( GLenum) )
    	GET_GL_PROCADDRESS("gluErrorString");

    disp__gluQuadricCallback= ( void (CALLBACK *) ( GLUquadricObj*, GLenum, GLvoid (CALLBACK *)()) )
    	GET_GL_PROCADDRESS("gluQuadricCallback");

    disp__gluNurbsCallback=  ( void (CALLBACK *) ( GLUnurbsObj*, GLenum, GLvoid (CALLBACK *)()) )
    	GET_GL_PROCADDRESS("gluNurbsCallback");

    disp__gluTessCallback=  ( void (CALLBACK *) ( GLUtesselator*, GLenum, GLvoid (CALLBACK *)()) )
    	GET_GL_PROCADDRESS("gluTessCallback");

    disp__gluDeleteQuadric= ( void (CALLBACK *) ( GLUquadricObj*) )
    	GET_GL_PROCADDRESS("gluDeleteQuadric");

    disp__gluDeleteNurbsRenderer= ( void (CALLBACK *) ( GLUnurbsObj*) )
    	GET_GL_PROCADDRESS("gluDeleteNurbsRenderer");

    disp__gluDeleteTess= ( void (CALLBACK *) ( GLUtesselator*) )
    	GET_GL_PROCADDRESS("gluDeleteTess");

    disp__gluNewQuadric= ( GLUquadricObj* (CALLBACK *) (void) )
    	GET_GL_PROCADDRESS("gluNewQuadric");

    disp__gluNewNurbsRenderer=  ( GLUnurbsObj* (CALLBACK *) (void) )
    	GET_GL_PROCADDRESS("gluNewNurbsRenderer");

    disp__gluNewTess= ( GLUtesselator* (CALLBACK *) (void) )
    	GET_GL_PROCADDRESS("gluNewTess");

