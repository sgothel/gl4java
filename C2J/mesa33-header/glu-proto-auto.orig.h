extern void  gluLookAt( GLdouble eyex, GLdouble eyey, GLdouble eyez,
                                  GLdouble centerx, GLdouble centery,
                                  GLdouble centerz,
                                  GLdouble upx, GLdouble upy, GLdouble upz );
extern void  gluOrtho2D( GLdouble left, GLdouble right,
                                   GLdouble bottom, GLdouble top );
extern void  gluPerspective( GLdouble fovy, GLdouble aspect,
                                       GLdouble zNear, GLdouble zFar );
extern void  gluPickMatrix( GLdouble x, GLdouble y,
                                      GLdouble width, GLdouble height,
                                      const GLint viewport[4] );
extern GLint  gluProject( GLdouble objx, GLdouble objy, GLdouble objz,
                                    const GLdouble modelMatrix[16],
                                    const GLdouble projMatrix[16],
                                    const GLint viewport[4],
                                    GLdouble *winx, GLdouble *winy,
                                    GLdouble *winz );
extern GLint  gluUnProject( GLdouble winx, GLdouble winy,
                                      GLdouble winz,
                                      const GLdouble modelMatrix[16],
                                      const GLdouble projMatrix[16],
                                      const GLint viewport[4],
                                      GLdouble *objx, GLdouble *objy,
                                      GLdouble *objz );
extern GLint  gluScaleImage( GLenum format,
                                     GLsizei widthin, GLsizei heightin,
                                     GLenum typein, const char *datain,
                                     GLsizei widthout, GLsizei heightout,
                                     GLenum typeout, char *dataout );
extern GLint  gluBuild1DMipmaps( GLenum target, GLint components,
                                           GLint width, GLenum format,
                                           GLenum type, const void *data );
extern GLint  gluBuild2DMipmaps( GLenum target, GLint components,
                                           GLint width, GLint height,
                                           GLenum format,
                                           GLenum type, const void *data );
extern GLUquadricObj*  gluNewQuadric( void );
extern void  gluQuadricDrawStyle( GLUquadricObj *quadObject,
                                            GLenum drawStyle );
extern void  gluQuadricOrientation( GLUquadricObj *quadObject,
                                              GLenum orientation );
extern void  gluQuadricNormals( GLUquadricObj *quadObject,
                                          GLenum normals );
extern void  gluQuadricTexture( GLUquadricObj *quadObject,
                                          GLboolean textureCoords );
extern void  gluCylinder( GLUquadricObj *qobj,
                                    GLdouble baseRadius,
                                    GLdouble topRadius,
                                    GLdouble height,
                                    GLint slices, GLint stacks );
extern void  gluSphere( GLUquadricObj *qobj,
                                  GLdouble radius, GLint slices,
                                  GLint stacks );
extern void  gluDisk( GLUquadricObj *qobj,
                                GLdouble innerRadius, GLdouble outerRadius,
                                GLint slices, GLint loops );
extern void  gluPartialDisk( GLUquadricObj *qobj, GLdouble innerRadius,
                                       GLdouble outerRadius, GLint slices,
                                       GLint loops, GLdouble startAngle,
                                       GLdouble sweepAngle );
extern GLUnurbsObj*  gluNewNurbsRenderer( void );
extern void  gluLoadSamplingMatrices( GLUnurbsObj *nobj,
                                                const GLfloat modelMatrix[16],
                                                const GLfloat projMatrix[16],
                                                const GLint viewport[4] );
extern void  gluNurbsProperty( GLUnurbsObj *nobj, GLenum property,
                                         GLfloat value );
extern void  gluGetNurbsProperty( GLUnurbsObj *nobj, GLenum property,
                                            GLfloat *value );
extern void  gluBeginCurve( GLUnurbsObj *nobj );
extern void  gluEndCurve( GLUnurbsObj * nobj );
extern void  gluNurbsCurve( GLUnurbsObj *nobj, GLint nknots,
                                      GLfloat *knot, GLint stride,
                                      GLfloat *ctlarray, GLint order,
                                      GLenum type );
extern void  gluBeginSurface( GLUnurbsObj *nobj );
extern void  gluEndSurface( GLUnurbsObj * nobj );
extern void  gluNurbsSurface( GLUnurbsObj *nobj,
                                        GLint sknot_count, GLfloat *sknot,
                                        GLint tknot_count, GLfloat *tknot,
                                        GLint s_stride, GLint t_stride,
                                        GLfloat *ctlarray,
                                        GLint sorder, GLint torder,
                                        GLenum type );
extern void  gluBeginTrim( GLUnurbsObj *nobj );
extern void  gluEndTrim( GLUnurbsObj *nobj );
extern void  gluPwlCurve( GLUnurbsObj *nobj, GLint count,
                                    GLfloat *array, GLint stride,
                                    GLenum type );
extern GLUtesselator*  gluNewTess( void );
extern void  gluTessBeginPolygon( GLUtesselator *tobj,
					    void *polygon_data );
extern void  gluTessBeginContour( GLUtesselator *tobj );
extern void  gluTessVertex( GLUtesselator *tobj, GLdouble coords[3],
				      void *vertex_data );
extern void  gluTessEndContour( GLUtesselator *tobj );
extern void  gluTessEndPolygon( GLUtesselator *tobj );
extern void  gluTessProperty( GLUtesselator *tobj, GLenum which,
					GLdouble value );
extern void  gluTessNormal( GLUtesselator *tobj, GLdouble x,
				      GLdouble y, GLdouble z );
extern void  gluGetTessProperty( GLUtesselator *tobj, GLenum which,
					   GLdouble *value );
extern void  gluBeginPolygon( GLUtesselator *tobj );
extern void  gluNextContour( GLUtesselator *tobj, GLenum type );
extern void  gluEndPolygon( GLUtesselator *tobj );
