
const GLubyte *(CALLBACK * disp__gluGetString )( GLenum name ) = NULL;

const GLubyte * (CALLBACK * disp__gluErrorString) ( GLenum) = NULL;

void (CALLBACK * disp__gluQuadricCallback) ( GLUquadricObj* quad, GLenum which, GLvoid (CALLBACK *)( )) = NULL;

void (CALLBACK * disp__gluNurbsCallback) ( GLUnurbsObj* nurb, GLenum which, GLvoid (CALLBACK *)( )) = NULL;

void (CALLBACK * disp__gluTessCallback) ( GLUtesselator* tess, GLenum which, GLvoid (CALLBACK *)( )) = NULL;

void (CALLBACK * disp__gluDeleteQuadric) ( GLUquadricObj* quad ) = NULL;   

void (CALLBACK * disp__gluDeleteNurbsRenderer) ( GLUnurbsObj* nurb ) = NULL;

void (CALLBACK * disp__gluDeleteTess) ( GLUtesselator* tess ) = NULL;

GLUquadricObj* (CALLBACK * disp__gluNewQuadric) ( void ) = NULL;

GLUnurbsObj* (CALLBACK * disp__gluNewNurbsRenderer) ( void ) = NULL;

GLUtesselator* (CALLBACK * disp__gluNewTess) ( void ) = NULL;

void (CALLBACK * disp__gluTessBeginContour) ( GLUtesselator* ) = NULL;

void (CALLBACK * disp__gluTessBeginPolygon) ( GLUtesselator* , GLvoid* ) = NULL;

void (CALLBACK * disp__gluTessEndContour) ( GLUtesselator* ) = NULL;

void (CALLBACK * disp__gluTessEndPolygon) ( GLUtesselator* ) = NULL;

void (CALLBACK * disp__gluTessNormal) ( GLUtesselator*, GLdouble, GLdouble, GLdouble ) = NULL;

void (CALLBACK * disp__gluTessProperty) ( GLUtesselator*, GLenum, GLdouble ) = NULL;

void (CALLBACK * disp__gluTessVertex ) ( GLUtesselator*, GLdouble*, GLvoid*) = NULL;

