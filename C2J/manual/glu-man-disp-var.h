LIBAPI const GLubyte *(CALLBACK * disp__gluGetString )( GLenum name );

LIBAPI const GLubyte * (CALLBACK * disp__gluErrorString) ( GLenum);

LIBAPI void (CALLBACK * disp__gluQuadricCallback) ( GLUquadricObj* quad, GLenum which, GLvoid (CALLBACK *)());

LIBAPI void (CALLBACK * disp__gluNurbsCallback) ( GLUnurbsObj* nurb, GLenum which, GLvoid (CALLBACK *)());

LIBAPI void (CALLBACK * disp__gluTessCallback) ( GLUtesselator* tess, GLenum which, GLvoid (CALLBACK *)());

LIBAPI void (CALLBACK * disp__gluDeleteQuadric) ( GLUquadricObj* quad );   

LIBAPI void (CALLBACK * disp__gluDeleteNurbsRenderer) ( GLUnurbsObj* nurb );

LIBAPI void (CALLBACK * disp__gluDeleteTess) ( GLUtesselator* tess );

LIBAPI GLUquadricObj* (CALLBACK * disp__gluNewQuadric) ( void );

LIBAPI GLUnurbsObj* (CALLBACK * disp__gluNewNurbsRenderer) ( void );

LIBAPI GLUtesselator* (CALLBACK * disp__gluNewTess) ( void );

LIBAPI void (CALLBACK * disp__gluTessVertex )(GLUtesselator *, GLdouble *, GLvoid *);

LIBAPI void (CALLBACK * disp__gluTessBeginContour)(GLUtesselator* tess);

LIBAPI void (CALLBACK * disp__gluTessBeginPolygon)(GLUtesselator* tess, GLvoid* data);

LIBAPI void (CALLBACK * disp__gluTessEndContour)(GLUtesselator* tess);

LIBAPI void (CALLBACK * disp__gluTessEndPolygon)(GLUtesselator* tess);

LIBAPI void (CALLBACK * disp__gluTessNormal)(GLUtesselator* tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ);

LIBAPI void (CALLBACK * disp__gluTessProperty)(GLUtesselator* tess, GLenum which, GLdouble data);

