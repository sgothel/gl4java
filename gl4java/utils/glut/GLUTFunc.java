 
package gl4java.utils.glut;

import gl4java.GLFunc;
import gl4java.GLUFunc;

public interface GLUTFunc
extends GLUTEnum
{
	public void   init(GLFunc gl, GLUFunc glu);

        public String glutGetFontDescription(int font);
        public void glutBitmapString(int font, String s); 
	public int   glutBitmapWidth(int font, int character);
	public void   glutStrokeString(int font, String s);
	public int   glutStrokeWidth(int font, int character);

	public int   glutBitmapLength(int font, String string);
	public int   glutStrokeLength(int font, String string);

	public void   glutWireSphere(double radius, int slices, int stacks);
	public void   glutSolidSphere(double radius, int slices, int stacks);
	public void   glutWireCone(double base, double height, int slices, int stacks);
	public void   glutSolidCone(double base, double height, int slices, int stacks);
	public void   glutWireCube(double size);
	public void   glutSolidCube(double size);
	public void   glutWireTorus(double innerRadius, double outerRadius, int sides, int rings);
	public void   glutSolidTorus(double innerRadius, double outerRadius, int sides, int rings);
	public void   glutWireDodecahedron();
	public void   glutSolidDodecahedron();
	public void   glutWireTeapot(double size);
	public void   glutSolidTeapot(double size);
	public void   glutWireOctahedron();
	public void   glutSolidOctahedron();
	public void   glutWireTetrahedron();
	public void   glutSolidTetrahedron();
	public void   glutWireIcosahedron();
	public void   glutSolidIcosahedron();


	 
	public int   glutVideoResizeGet(int param);
	public void   glutSetupVideoResizing();
	public void   glutStopVideoResizing();
	public void   glutVideoResize(int x, int y, int width, int height);
	public void   glutVideoPan(int x, int y, int width, int height);

	 
	public void   glutReportErrors();
}




