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

    disp__gluTessVertex = (void (CALLBACK *)(GLUtesselator *, GLdouble *, GLvoid *))
	GET_GL_PROCADDRESS ("gluTessVertex");

    disp__gluTessBeginContour = (void (CALLBACK *)(GLUtesselator* tess))
	GET_GL_PROCADDRESS ("gluTessBeginContour");

    disp__gluTessBeginPolygon = (void (CALLBACK *)(GLUtesselator* tess, GLvoid* data))
	GET_GL_PROCADDRESS ("gluTessBeginPolygon");

    disp__gluTessEndContour = (void (CALLBACK *)(GLUtesselator* tess))
	GET_GL_PROCADDRESS ("gluTessEndContour");

    disp__gluTessEndPolygon = (void (CALLBACK *)(GLUtesselator* tess))
	GET_GL_PROCADDRESS ("gluTessEndPolygon");

    disp__gluTessNormal = (void (CALLBACK *)(GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ))
	GET_GL_PROCADDRESS ("gluTessNormal");

    disp__gluTessProperty = (void (CALLBACK *)(GLUtesselator* tess, GLenum which, GLdouble data))
	GET_GL_PROCADDRESS ("gluTessProperty");

