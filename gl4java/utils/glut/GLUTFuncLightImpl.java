/* Copyright (c) Mark J. Kilgard, 1994. */

/**
(c) Copyright 1993, Silicon Graphics, Inc.

ALL RIGHTS RESERVED

Permission to use, copy, modify, and distribute this software
for any purpose and without fee is hereby granted, provided
that the above copyright notice appear in all copies and that
both the copyright notice and this permission notice appear in
supporting documentation, and that the name of Silicon
Graphics, Inc. not be used in adverti(float)Math.sing or publicity
pertaining to distribution of the software without specific,
written prior permission.

THE MATERIAL EMBODIED ON THIS SOFTWARE IS PROVIDED TO YOU
"AS-IS" AND WITHOUT WARRANTY OF ANY KIND, EXPRESS, IMPLIED OR
OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  IN NO
EVENT SHALL SILICON GRAPHICS, INC.  BE LIABLE TO YOU OR ANYONE
ELSE FOR ANY DIRECT, SPECIAL, INCIDENTAL, INDIRECT OR
CONSEQUENTIAL DAMAGES OF ANY KIND, OR ANY DAMAGES WHATSOEVER,
INCLUDING WITHOUT LIMITATION, LOSS OF PROFIT, LOSS OF USE,
SAVINGS OR REVENUE, OR THE CLAIMS OF THIRD PARTIES, WHETHER OR
NOT SILICON GRAPHICS, INC.  HAS BEEN ADVISED OF THE POSSIBILITY
OF SUCH LOSS, HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
ARISING OUT OF OR IN CONNECTION WITH THE POSSESSION, USE OR
PERFORMANCE OF THIS SOFTWARE.

US Government Users Restricted Rights

Use, duplication, or disclosure by the Government is subject to
restrictions set forth in FAR 52.227f.19(c)(2) or subparagraph
(c)(1)(ii) of the Rights in Technical Data and Computer
Software clause at DFARS 252.227f-7013 and/or in similar or
successor clauses in the FAR or the DOD or NASA FAR
Supplement.  Unpublished-- rights reserved under the copyright
laws of the United States.  Contractor/manufacturer is Silicon
Graphics, Inc., 2011 N.  Shoreline Blvd., Mountain View, CA
94039-7311.

OpenGL(TM) is a trademark of Silicon Graphics, Inc.
*/

 
package gl4java.utils.glut;

import gl4java.GLFunc;
import gl4java.GLEnum;
import gl4java.GLUFunc;
import gl4java.GLUEnum;

import java.lang.*;

public class GLUTFuncLightImpl
implements GLUTFunc, GLEnum, GLUEnum
{
	public GLUTFuncLightImpl(GLFunc gl, GLUFunc glu)
	{
		init(gl, glu);
	}

	public void   init(GLFunc gl, GLUFunc glu)
	{
		this.gl = gl;
		this.glu = glu;
	  	initQuadObj();
		dodec = new float[20][3];
		initDodecahedron();
		initTeapot();
	}

    public String glutGetFontDescription(int font)
    {
	return "GLUTFuncLightImpl: no font support avaiable !";
    }

    public void glutBitmapString(int font, String s) 
    { 
	System.out.println("GLUTFuncLightImpl: no font support avaiable !");
    }

	public int   glutBitmapWidth(int font, int character)
	{ 
	    System.out.println("GLUTFuncLightImpl: no font support avaiable !");
	    return 0;
	}

    public void glutStrokeString(int font, String s)
    {
	    System.out.println("GLUTFuncLightImpl: no font support avaiable !");
    }


	public int   glutStrokeWidth(int font, int character)
	
	{
	    System.out.println("GLUTFuncLightImpl: no font support avaiable !");
	    return 0;
	}
    
	public int   glutBitmapLength(int font, String string)
        {
	    System.out.println("GLUTFuncLightImpl: no font support avaiable !");
	    return 0;
    	}

	public int   glutStrokeLength(int font, String string)
	{
	    System.out.println("GLUTFuncLightImpl: no font support avaiable !");
	    return 0;
	}
    
	public final void   glutWireSphere
					(double radius, int slices, int stacks)
	{
	  glu.gluQuadricDrawStyle(quadObj, GLU_LINE);
	  glu.gluQuadricNormals(quadObj, GLU_SMOOTH);
	  /* If we ever changed/used the texture or orientation state
	     of quadObj, we'd need to change it to the defaults here
	     with gluQuadricTexture and/or gluQuadricOrientation. */
	  glu.gluSphere(quadObj, radius, slices, stacks);
	}

	public final void   glutSolidSphere
					(double radius, int slices, int stacks)
	{
	  glu.gluQuadricDrawStyle(quadObj, GLU_FILL);
	  glu.gluQuadricNormals(quadObj, GLU_SMOOTH);
	  /* If we ever changed/used the texture or orientation state
	     of quadObj, we'd need to change it to the defaults here
	     with gluQuadricTexture and/or gluQuadricOrientation. */
	  glu.gluSphere(quadObj, radius, slices, stacks);
	}

	public final void   glutWireCone
			(double base, double height, int slices, int stacks)
	{
	  glu.gluQuadricDrawStyle(quadObj, GLU_LINE);
	  glu.gluQuadricNormals(quadObj, GLU_SMOOTH);
	  /* If we ever changed/used the texture or orientation state
	     of quadObj, we'd need to change it to the defaults here
	     with gluQuadricTexture and/or gluQuadricOrientation. */
	  glu.gluCylinder(quadObj, base, 0.0, height, slices, stacks);
	}

	public final void   glutSolidCone
			(double base, double height, int slices, int stacks)
	{
	  glu.gluQuadricDrawStyle(quadObj, GLU_FILL);
	  glu.gluQuadricNormals(quadObj, GLU_SMOOTH);
	  /* If we ever changed/used the texture or orientation state
	     of quadObj, we'd need to change it to the defaults here
	     with gluQuadricTexture and/or gluQuadricOrientation. */
	  glu.gluCylinder(quadObj, base, 0.0, height, slices, stacks);
	}

	public final void   glutWireCube(double size)
	{
	  drawBox(size, GL_LINE_LOOP);
	}

	public final void   glutSolidCube(double size)
	{
	  drawBox(size, GL_QUADS);
	}

	public final void   glutWireTorus
				(double innerRadius, double outerRadius, 
			     	 int sides, int rings)
	{
	  gl.glPushAttrib(GL_POLYGON_BIT);
	  gl.glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	  doughnut((float)innerRadius, (float)outerRadius, sides, rings);
	  gl.glPopAttrib();
	}

	public final void   glutSolidTorus
				(double innerRadius, double outerRadius, 
			      	 int sides, int rings)
	{
	  doughnut((float)innerRadius, (float)outerRadius, sides, rings);
	}

	public final void   glutWireDodecahedron()
	{
	  dodecahedron(GL_LINE_LOOP);
	}

	public final void   glutSolidDodecahedron()
	{
	  dodecahedron(GL_TRIANGLE_FAN);
	}

	public final void   glutWireOctahedron()
	{
	  octahedron(GL_LINE_LOOP);
	}

	public final void   glutSolidOctahedron()
	{
	  octahedron(GL_TRIANGLES);
	}

	public final void   glutWireIcosahedron()
	{
	  icosahedron(GL_LINE_LOOP);
	}

	public final void   glutSolidIcosahedron()
	{
	  icosahedron(GL_TRIANGLES);
	}

	public final void   glutWireTetrahedron()
	{
	  tetrahedron(GL_LINE_LOOP);
	}

	public final void   glutSolidTetrahedron()
	{
	  tetrahedron(GL_TRIANGLES);
	}

	public final void   glutWireTeapot(double size)
	{
	  teapot(10, size, GL_LINE);
	}

	public final void   glutSolidTeapot(double size)
	{
	  teapot(14, size, GL_FILL);
	}

	public final int   glutVideoResizeGet(int param)
	{ System.out.println("Not implemented in GLUT light implementation !");
          return 0;
        }

	public final void   glutSetupVideoResizing()
	{ System.out.println("Not implemented in GLUT light implementation !");
        }

	public final void   glutStopVideoResizing()
	{ System.out.println("Not implemented in GLUT light implementation !");
        }

	public final void   glutVideoResize(int x, int y, int width, int height)
	{ System.out.println("Not implemented in GLUT light implementation !");
        }

	public final void   glutVideoPan(int x, int y, int width, int height)
	{ System.out.println("Not implemented in GLUT light implementation !");
        }

	public final void   glutReportErrors()
	{
	  int error;

	  while ((error = gl.glGetError()) != GL_NO_ERROR)
	    __glutWarning("GL error: "+glu.gluErrorString(error));
	}

	/***************************************************************/

	protected GLFunc  gl  = null;
	protected GLUFunc glu = null;

	protected long quadObj=0;

	protected final void initQuadObj()
	{
	  if(0==quadObj) quadObj = glu.gluNewQuadric();
	  if (0==quadObj)
	    __glutFatalError("out of memory.");
	}

	protected static final float n[/*6*/][/*3*/] =
	  {
	    {-1.0f, 0.0f, 0.0f},
	    {0.0f, 1.0f, 0.0f},
	    {1.0f, 0.0f, 0.0f},
	    {0.0f, -1.0f, 0.0f},
	    {0.0f, 0.0f, 1.0f},
	    {0.0f, 0.0f, -1.0f}
	  };
	protected static final int faces[/*6*/][/*4*/] =
	  {
	    {0, 1, 2, 3},
	    {3, 2, 6, 7},
	    {7, 6, 5, 4},
	    {4, 5, 1, 0},
	    {5, 6, 2, 1},
	    {7, 4, 0, 3}
	  };

	protected final void drawBox(double size, int type)
	{
	  float v[][] = new float[8][3];
	  float sz = (float)size;
	  int i;

	  v[0][0] = v[1][0] = v[2][0] = v[3][0] = -sz / 2.0f;
	  v[4][0] = v[5][0] = v[6][0] = v[7][0] = sz / 2.0f;
	  v[0][1] = v[1][1] = v[4][1] = v[5][1] = -sz / 2.0f;
	  v[2][1] = v[3][1] = v[6][1] = v[7][1] = sz / 2.0f;
	  v[0][2] = v[3][2] = v[4][2] = v[7][2] = -sz / 2.0f;
	  v[1][2] = v[2][2] = v[5][2] = v[6][2] = sz / 2.0f;

	  for (i = 5; i >= 0; i--) {
	    gl.glBegin(type);
	    gl.glNormal3fv( n[i] );
	    gl.glVertex3fv( v[ faces[i][0] ] );
	    gl.glVertex3fv( v[ faces[i][1] ] );
	    gl.glVertex3fv( v[ faces[i][2] ] );
	    gl.glVertex3fv( v[ faces[i][3] ] );
	    gl.glEnd();
	  }
	}

	protected static final float M_PI = 3.14159265358979323846f ;

	protected final void doughnut(float r, float R, int nsides, int rings)
	{
	  int i, j;
	  float theta, phi, theta1;
	  float cosTheta, sinTheta;
	  float cosTheta1, sinTheta1;
	  float ringDelta, sideDelta;

	  ringDelta = 2.0f * M_PI / rings;
	  sideDelta = 2.0f * M_PI / nsides;

	  theta = 0.0f;
	  cosTheta = 1.0f;
	  sinTheta = 0.0f;
	  for (i = rings - 1; i >= 0; i--) 
	  {
	    theta1 = theta + ringDelta;
	    cosTheta1 = (float)Math.cos(theta1);
	    sinTheta1 = (float)Math.sin(theta1);
	    gl.glBegin(GL_QUAD_STRIP);
	    phi = 0.0f;
	    for (j = nsides; j >= 0; j--) {
	      float cosPhi, sinPhi, dist;

	      phi += sideDelta;
	      cosPhi = (float)Math.cos(phi);
	      sinPhi = (float)Math.sin(phi);
	      dist = R + r * cosPhi;

	      gl.glNormal3f(cosTheta1 * cosPhi, -sinTheta1 * cosPhi, sinPhi);
	      gl.glVertex3f(cosTheta1 * dist, -sinTheta1 * dist, r * sinPhi);
	      gl.glNormal3f(cosTheta * cosPhi, -sinTheta * cosPhi, sinPhi);
	      gl.glVertex3f(cosTheta * dist, -sinTheta * dist,  r * sinPhi);
	    }
	    gl.glEnd();
	    theta = theta1;
	    cosTheta = cosTheta1;
	    sinTheta = sinTheta1;
	  }
	}

	protected static float dodec[/*20*/][/*3*/] = null;

	protected static int dodec_inited = 0;

	protected static final void initDodecahedron()
	{
	  if (dodec_inited != 0) {
		return;
	  }

          dodec_inited = 1;
          dodec = new float [20][3];

	  float alpha, beta;

	  alpha = (float)Math.sqrt(2.0f / (3.0f + (float)Math.sqrt(5.0f)));
	  beta = 1.0f + (float)Math.sqrt(6.0f / (3.0f + (float)Math.sqrt(5.0f)) 
	         -
	    2.0f + 2.0f * (float)Math.sqrt(2.0f / (3.0f + (float)Math.sqrt(5.0f))));
	  /* *INDENT-OFF* */
	  dodec[0][0] = -alpha; dodec[0][1] = 0; dodec[0][2] = beta;
	  dodec[1][0] = alpha; dodec[1][1] = 0; dodec[1][2] = beta;
	  dodec[2][0] = -1; dodec[2][1] = -1; dodec[2][2] = -1;
	  dodec[3][0] = -1; dodec[3][1] = -1; dodec[3][2] = 1;
	  dodec[4][0] = -1; dodec[4][1] = 1; dodec[4][2] = -1;
	  dodec[5][0] = -1; dodec[5][1] = 1; dodec[5][2] = 1;
	  dodec[6][0] = 1; dodec[6][1] = -1; dodec[6][2] = -1;
	  dodec[7][0] = 1; dodec[7][1] = -1; dodec[7][2] = 1;
	  dodec[8][0] = 1; dodec[8][1] = 1; dodec[8][2] = -1;
	  dodec[9][0] = 1; dodec[9][1] = 1; dodec[9][2] = 1;
	  dodec[10][0] = beta; dodec[10][1] = alpha; dodec[10][2] = 0;
	  dodec[11][0] = beta; dodec[11][1] = -alpha; dodec[11][2] = 0;
	  dodec[12][0] = -beta; dodec[12][1] = alpha; dodec[12][2] = 0;
	  dodec[13][0] = -beta; dodec[13][1] = -alpha; dodec[13][2] = 0;
	  dodec[14][0] = -alpha; dodec[14][1] = 0; dodec[14][2] = -beta;
	  dodec[15][0] = alpha; dodec[15][1] = 0; dodec[15][2] = -beta;
	  dodec[16][0] = 0; dodec[16][1] = beta; dodec[16][2] = alpha;
	  dodec[17][0] = 0; dodec[17][1] = beta; dodec[17][2] = -alpha;
	  dodec[18][0] = 0; dodec[18][1] = -beta; dodec[18][2] = alpha;
	  dodec[19][0] = 0; dodec[19][1] = -beta; dodec[19][2] = -alpha;
	  /* *INDENT-ON* */

	}

	protected static final void DIFF3f(float[] _a, float[] _b, float[] _c) 
	{
	    (_c)[0] = (_a)[0] - (_b)[0];
	    (_c)[1] = (_a)[1] - (_b)[1];
	    (_c)[2] = (_a)[2] - (_b)[2];
	}

	protected static final void crossprod
		(float v1[/*3*/], float v2[/*3*/], float prod[/*3*/])
	{
	  float p[] = new float[3];   /* in case prod == v1 or v2 */

	  p[0] = v1[1] * v2[2] - v2[1] * v1[2];
	  p[1] = v1[2] * v2[0] - v2[2] * v1[0];
	  p[2] = v1[0] * v2[1] - v2[0] * v1[1];
	  prod[0] = p[0];
	  prod[1] = p[1];
	  prod[2] = p[2];
	}

	protected static final void normalize(float v[/*3*/])
	{
	  float d;

	  d = (float)Math.sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
	  if (d == 0.0f) {
	    __glutWarning("normalize: zero length vector");
	    v[0] = d = 1.0f;
	  }
	  d = 1 / d;
	  v[0] *= d;
	  v[1] *= d;
	  v[2] *= d;
	}

	protected final void 
	pentagon(int a, int b, int c, int d, int e, int shadeType)
	{
	  float n0[] = new float[3];
	  float d1[] = new float[3];
	  float d2[] = new float[3];

	  DIFF3f(dodec[a], dodec[b], d1);
	  DIFF3f(dodec[b], dodec[c], d2);
	  crossprod(d1, d2, n0);
	  normalize(n0);

	  gl.glBegin(shadeType);
	  gl.glNormal3fv(n0);
	  gl.glVertex3fv(dodec[a]);
	  gl.glVertex3fv(dodec[b]);
	  gl.glVertex3fv(dodec[c]);
	  gl.glVertex3fv(dodec[d]);
	  gl.glVertex3fv(dodec[e]);
	  gl.glEnd();
	}

	protected final void dodecahedron(int type)
	{

	  pentagon(0, 1, 9, 16, 5, type);
	  pentagon(1, 0, 3, 18, 7, type);
	  pentagon(1, 7, 11, 10, 9, type);
	  pentagon(11, 7, 18, 19, 6, type);
	  pentagon(8, 17, 16, 9, 10, type);
	  pentagon(2, 14, 15, 6, 19, type);
	  pentagon(2, 13, 12, 4, 14, type);
	  pentagon(2, 19, 18, 3, 13, type);
	  pentagon(3, 0, 5, 12, 13, type);
	  pentagon(6, 15, 8, 10, 11, type);
	  pentagon(4, 17, 8, 15, 14, type);
	  pentagon(4, 12, 5, 16, 17, type);
	}

	protected final void 
	recorditem(float[] n1, float[] n2, float[] n3, int shadeType)
	{
	  float q0[] = new float[3];
	  float q1[] = new float[3];

	  DIFF3f(n1, n2, q0);
	  DIFF3f(n2, n3, q1);
	  crossprod(q0, q1, q1);
	  normalize(q1);

	  gl.glBegin(shadeType);
	  gl.glNormal3fv(q1);
	  gl.glVertex3fv(n1);
	  gl.glVertex3fv(n2);
	  gl.glVertex3fv(n3);
	  gl.glEnd();
	}

	protected final void 
	subdivide(float[] v0, float[] v1, float[] v2, int shadeType)
	{
	  int depth;
	  float w0[] = new float[3];
	  float w1[] = new float[3];
	  float w2[] = new float[3];
	  float l;
	  int i, j, k, n;

	  depth = 1;
	  for (i = 0; i < depth; i++) {
	    for (j = 0; i + j < depth; j++) {
	      k = depth - i - j;
	      for (n = 0; n < 3; n++) {
		w0[n] = (i * v0[n] + j * v1[n] + k * v2[n]) / depth;
		w1[n] = ((i + 1) * v0[n] + j * v1[n] + (k - 1) * v2[n])
		  / depth;
		w2[n] = (i * v0[n] + (j + 1) * v1[n] + (k - 1) * v2[n])
		  / depth;
	      }
	      l = (float)Math.sqrt(w0[0] * w0[0] + w0[1] * w0[1] + w0[2] * w0[2]);
	      w0[0] /= l;
	      w0[1] /= l;
	      w0[2] /= l;
	      l = (float)Math.sqrt(w1[0] * w1[0] + w1[1] * w1[1] + w1[2] * w1[2]);
	      w1[0] /= l;
	      w1[1] /= l;
	      w1[2] /= l;
	      l = (float)Math.sqrt(w2[0] * w2[0] + w2[1] * w2[1] + w2[2] * w2[2]);
	      w2[0] /= l;
	      w2[1] /= l;
	      w2[2] /= l;
	      recorditem(w1, w0, w2, shadeType);
	    }
	  }
	}

	protected final void 
	drawtriangle(int i, float data[][/*3*/], int ndx[][/*3*/], 
		     int shadeType)
	{
	  float x0[], x1[], x2[];

	  x0 = data[ndx[i][0]];
	  x1 = data[ndx[i][1]];
	  x2 = data[ndx[i][2]];
	  subdivide(x0, x1, x2, shadeType);
	}

	/* octahedron data: The octahedron produced is centered at the
	   origin and has radius 1.0f */
	protected static final float odata[/*6*/][/*3*/] =
	{
	  {1.0f, 0.0f, 0.0f},
	  {-1.0f, 0.0f, 0.0f},
	  {0.0f, 1.0f, 0.0f},
	  {0.0f, -1.0f, 0.0f},
	  {0.0f, 0.0f, 1.0f},
	  {0.0f, 0.0f, -1.0f}
	};

	protected static final int ondex[/*8*/][/*3*/] =
	{
	  {0, 4, 2},
	  {1, 2, 4},
	  {0, 3, 4},
	  {1, 4, 3},
	  {0, 2, 5},
	  {1, 5, 2},
	  {0, 5, 3},
	  {1, 3, 5}
	};

	protected final void 
	octahedron(int shadeType)
	{
	  int i;

	  for (i = 7; i >= 0; i--) {
	    drawtriangle(i, odata, ondex, shadeType);
	  }
	}

	protected static final float X = .525731112119133606f;
	protected static final float Z = .850650808352039932f;

	protected static final float idata[/*12*/][/*3*/] =
	{
	  {-X, 0, Z},
	  {X, 0, Z},
	  {-X, 0, -Z},
	  {X, 0, -Z},
	  {0, Z, X},
	  {0, Z, -X},
	  {0, -Z, X},
	  {0, -Z, -X},
	  {Z, X, 0},
	  {-Z, X, 0},
	  {Z, -X, 0},
	  {-Z, -X, 0}
	};

	protected static final int index[/*20*/][/*3*/] =
	{
	  {0, 4, 1},
	  {0, 9, 4},
	  {9, 5, 4},
	  {4, 5, 8},
	  {4, 8, 1},
	  {8, 10, 1},
	  {8, 3, 10},
	  {5, 3, 8},
	  {5, 2, 3},
	  {2, 7, 3},
	  {7, 10, 3},
	  {7, 6, 10},
	  {7, 11, 6},
	  {11, 0, 6},
	  {0, 1, 6},
	  {6, 1, 10},
	  {9, 0, 11},
	  {9, 11, 2},
	  {9, 2, 5},
	  {7, 2, 11},
	};

	protected final void icosahedron(int shadeType)
	{
	  int i;

	  for (i = 19; i >= 0; i--) {
	    drawtriangle(i, idata, index, shadeType);
	  }
	}

	protected static final float T = 1.73205080756887729f;

	protected static final float tdata[/*4*/][/*3*/] =
	{
	  {T, T, T},
	  {T, -T, -T},
	  {-T, T, -T},
	  {-T, -T, T}
	};

	protected static final int tndex[/*4*/][/*3*/] =
	{
	  {0, 1, 3},
	  {2, 1, 0},
	  {3, 2, 0},
	  {1, 2, 3}
	};

	protected final void tetrahedron(int shadeType)
	{
	  int i;

	  for (i = 3; i >= 0; i--)
	    drawtriangle(i, tdata, tndex, shadeType);
	}

	/**
 	 * The Teapot
	 */

	/* Rim, body, lid, and bottom data must be reflected in x and
	   y; handle and spout data across the y axis only.  */
    private static final int patchdata[][] =
    {
        /* rim */
      {102, 103, 104, 105, 4, 5, 6, 7, 8, 9, 10, 11,
        12, 13, 14, 15},
        /* body */
      {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
        24, 25, 26, 27},
      {24, 25, 26, 27, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40},
        /* lid */
      {96, 96, 96, 96, 97, 98, 99, 100, 101, 101, 101,
        101, 0, 1, 2, 3,},
      {0, 1, 2, 3, 106, 107, 108, 109, 110, 111, 112,
        113, 114, 115, 116, 117},
        /* bottom */
      {118, 118, 118, 118, 124, 122, 119, 121, 123, 126,
        125, 120, 40, 39, 38, 37},
        /* handle */
      {41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
        53, 54, 55, 56},
      {53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
        28, 65, 66, 67},
        /* spout */
      {68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
        80, 81, 82, 83},
      {80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91,
        92, 93, 94, 95}
    };
    private static final float cpdata[][] =
    {
        {0.2f, 0.0f, 2.7f}, {0.2f, -0.112f, 2.7f}, {0.112f, -0.2f, 2.7f}, {0.0f,
        -0.2f, 2.7f}, {1.3375f, 0.0f, 2.53125f}, {1.3375f, -0.749f, 2.53125f},
        {0.749f, -1.3375f, 2.53125f}, {0.0f, -1.3375f, 2.53125f}, {1.4375f,
        0.0f, 2.53125f}, {1.4375f, -0.805f, 2.53125f}, {0.805f, -1.4375f,
        2.53125f}, {0.0f, -1.4375f, 2.53125f}, {1.5f, 0.0f, 2.4f}, {1.5f, -0.84f,
        2.4f}, {0.84f, -1.5f, 2.4f}, {0.0f, -1.5f, 2.4f}, {1.75f, 0.0f, 1.875f},
        {1.75f, -0.98f, 1.875f}, {0.98f, -1.75f, 1.875f}, {0.0f, -1.75f,
        1.875f}, {2f, 0.0f, 1.35f}, {2f, -1.12f, 1.35f}, {1.12f, -2f, 1.35f},
        {0.0f, -2f, 1.35f}, {2f, 0.0f, 0.9f}, {2f, -1.12f, 0.9f}, {1.12f, -2f,
        0.9f}, {0.0f, -2f, 0.9f}, {-2f, 0.0f, 0.9f}, {2f, 0.0f, 0.45f}, {2f, -1.12f,
        0.45f}, {1.12f, -2f, 0.45f}, {0.0f, -2f, 0.45f}, {1.5f, 0.0f, 0.225f},
        {1.5f, -0.84f, 0.225f}, {0.84f, -1.5f, 0.225f}, {0.0f, -1.5f, 0.225f},
        {1.5f, 0.0f, 0.15f}, {1.5f, -0.84f, 0.15f}, {0.84f, -1.5f, 0.15f}, {0.0f,
        -1.5f, 0.15f}, {-1.6f, 0.0f, 2.025f}, {-1.6f, -0.3f, 2.025f}, {-1.5f,
        -0.3f, 2.25f}, {-1.5f, 0.0f, 2.25f}, {-2.3f, 0.0f, 2.025f}, {-2.3f, -0.3f,
        2.025f}, {-2.5f, -0.3f, 2.25f}, {-2.5f, 0.0f, 2.25f}, {-2.7f, 0.0f,
        2.025f}, {-2.7f, -0.3f, 2.025f}, {-3f, -0.3f, 2.25f}, {-3f, 0.0f,
        2.25f}, {-2.7f, 0.0f, 1.8f}, {-2.7f, -0.3f, 1.8f}, {-3f, -0.3f, 1.8f},
        {-3f, 0.0f, 1.8f}, {-2.7f, 0.0f, 1.575f}, {-2.7f, -0.3f, 1.575f}, {-3f,
        -0.3f, 1.35f}, {-3f, 0.0f, 1.35f}, {-2.5f, 0.0f, 1.125f}, {-2.5f, -0.3f,
        1.125f}, {-2.65f, -0.3f, 0.9375f}, {-2.65f, 0.0f, 0.9375f}, {-2f,
        -0.3f, 0.9f}, {-1.9f, -0.3f, 0.6f}, {-1.9f, 0.0f, 0.6f}, {1.7f, 0.0f,
        1.425f}, {1.7f, -0.66f, 1.425f}, {1.7f, -0.66f, 0.6f}, {1.7f, 0.0f,
        0.6f}, {2.6f, 0.0f, 1.425f}, {2.6f, -0.66f, 1.425f}, {3.1f, -0.66f,
        0.825f}, {3.1f, 0.0f, 0.825f}, {2.3f, 0.0f, 2.1f}, {2.3f, -0.25f, 2.1f},
        {2.4f, -0.25f, 2.025f}, {2.4f, 0.0f, 2.025f}, {2.7f, 0.0f, 2.4f}, {2.7f,
        -0.25f, 2.4f}, {3.3f, -0.25f, 2.4f}, {3.3f, 0.0f, 2.4f}, {2.8f, 0.0f,
        2.475f}, {2.8f, -0.25f, 2.475f}, {3.525f, -0.25f, 2.49375f},
        {3.525f, 0.0f, 2.49375f}, {2.9f, 0.0f, 2.475f}, {2.9f, -0.15f, 2.475f},
        {3.45f, -0.15f, 2.5125f}, {3.45f, 0.0f, 2.5125f}, {2.8f, 0.0f, 2.4f},
        {2.8f, -0.15f, 2.4f}, {3.2f, -0.15f, 2.4f}, {3.2f, 0.0f, 2.4f}, {0.0f, 0.0f,
        3.15f}, {0.8f, 0.0f, 3.15f}, {0.8f, -0.45f, 3.15f}, {0.45f, -0.8f,
        3.15f}, {0.0f, -0.8f, 3.15f}, {0.0f, 0.0f, 2.85f}, {1.4f, 0.0f, 2.4f}, {1.4f,
        -0.784f, 2.4f}, {0.784f, -1.4f, 2.4f}, {0.0f, -1.4f, 2.4f}, {0.4f, 0.0f,
        2.55f}, {0.4f, -0.224f, 2.55f}, {0.224f, -0.4f, 2.55f}, {0.0f, -0.4f,
        2.55f}, {1.3f, 0.0f, 2.55f}, {1.3f, -0.728f, 2.55f}, {0.728f, -1.3f,
        2.55f}, {0.0f, -1.3f, 2.55f}, {1.3f, 0.0f, 2.4f}, {1.3f, -0.728f, 2.4f},
        {0.728f, -1.3f, 2.4f}, {0.0f, -1.3f, 2.4f}, {0.0f, 0.0f, 0.0f}, {1.425f,
        -0.798f, 0.0f}, {1.5f, 0.0f, 0.075f}, {1.425f, 0.0f, 0.0f}, {0.798f, -1.425f,
        0.0f}, {0.0f, -1.5f, 0.075f}, {0.0f, -1.425f, 0.0f}, {1.5f, -0.84f, 0.075f},
        {0.84f, -1.5f, 0.075f}
    };
    private static final float tex[] =
    {
      0.0f, 0.0f,
      1.0f, 0.0f,
      0.0f, 1.0f,
      1.0f, 1.0f
    };

    boolean _tp_init = false;
    float _tp_p[] = null;
    float _tp_q[] = null;
    float _tp_r[] = null;
    float _tp_s[] = null;

    private final void initTeapot()
    {
    	if(_tp_init==true)
		return;

	_tp_p = new float[4*4*3];
	_tp_q = new float[4*4*3];
	_tp_r = new float[4*4*3];
	_tp_s = new float[4*4*3];
    }

        // Imported from glut.
        private final void teapot(int grid, double scale, int type)
        {
            float sc = (float)(0.5*scale);

            gl.glPushAttrib(GL_ENABLE_BIT | GL_EVAL_BIT);
            gl.glEnable(GL_AUTO_NORMAL);
            gl.glEnable(GL_NORMALIZE);
            gl.glEnable(GL_MAP2_VERTEX_3);
            gl.glEnable(GL_MAP2_TEXTURE_COORD_2);
            gl.glPushMatrix();
            gl.glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
            gl.glScalef(sc, sc, sc);
            gl.glTranslatef(0.0f, 0.0f, -1.5f);
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        for (int l = 0; l < 3; l++)
                        {
                            _tp_p[(j*12)+(k*3)+l] = cpdata[patchdata[i][j * 4 + k]][l];
                            _tp_q[(j*12)+(k*3)+l] = cpdata[patchdata[i][j * 4 + (3 - k)]][l];
                            if (l == 1)
                                _tp_q[(j*12)+(k*3)+l] *= -1.0f;
                            if (i < 6)
                            {
                                _tp_r[(j*12)+(k*3)+l] =
                                    cpdata[patchdata[i][j * 4 + (3 - k)]][l];
                                if (l == 0)
                                    _tp_r[(j*12)+(k*3)+l] *= -1.0f;
                                _tp_s[(j*12)+(k*3)+l] =
                                    cpdata[patchdata[i][j * 4 + k]][l];
                                if (l == 0)
                                    _tp_s[(j*12)+(k*3)+l] *= -1.0f;
                                if (l == 1)
                                    _tp_s[(j*12)+(k*3)+l] *= -1.0f;
                            }
                        }
                    }
                }
                gl.glMap2f
                    (GL_MAP2_TEXTURE_COORD_2, 0, 1, 2, 2, 0, 1, 4, 2, tex);
                gl.glMap2f
                    (GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, _tp_p);
                gl.glMapGrid2f(grid, 0.0f, 1.0f, grid, 0.0f, 1.0f);
                gl.glEvalMesh2(type, 0, grid, 0, grid);
                gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, _tp_q);
                gl.glEvalMesh2(type, 0, grid, 0, grid);
                if (i < 6)
                {
                    gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, _tp_r);
                    gl.glEvalMesh2(type, 0, grid, 0, grid);
                    gl.glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, _tp_s);
                    gl.glEvalMesh2(type, 0, grid, 0, grid);
                }
            }
            gl.glPopMatrix();
            gl.glPopAttrib();
        }

	protected static final void __glutWarning(String str)
	{
	  System.out.println("GLUT: Warning in (unamed): "+str+"\n");
	}

	protected static final void __glutFatalError(String str)
	{
	  System.out.println("GLUT: Fatal Error in (unamed): "+str+"\n");
	  Exception ex = new Exception();
	  ex.printStackTrace();
	  System.exit(1);
	}

}




