
package gl4java.utils.glut;

public abstract interface GLUTEnum
{

	static final int GLUT_XLIB_IMPLEMENTATION	= 15;

	/* Color index component selection values. */
	static final int GLUT_RED			= 0;
	static final int GLUT_GREEN			= 1;
	static final int GLUT_BLUE			= 2;

	/* Stroke font constants (use these in GLUT program). */
	static final int GLUT_STROKE_ROMAN		= 0;
	static final int GLUT_STROKE_MONO_ROMAN		= 1;

	/* Bitmap font constants (use these in GLUT program). */
	static final int GLUT_BITMAP_9_BY_15		= 2;
	static final int GLUT_BITMAP_8_BY_13		= 3;
	static final int GLUT_BITMAP_TIMES_ROMAN_10	= 4;
	static final int GLUT_BITMAP_TIMES_ROMAN_24	= 5;
	static final int GLUT_BITMAP_HELVETICA_10	= 6;
	static final int GLUT_BITMAP_HELVETICA_12	= 7;
	static final int GLUT_BITMAP_HELVETICA_18	= 8;

	/* glutVideoResizeGet parameters. */
	static final int GLUT_VIDEO_RESIZE_POSSIBLE	= 900;
	static final int GLUT_VIDEO_RESIZE_IN_USE	= 901;
	static final int GLUT_VIDEO_RESIZE_X_DELTA	= 902;
	static final int GLUT_VIDEO_RESIZE_Y_DELTA	= 903;
	static final int GLUT_VIDEO_RESIZE_WIDTH_DELTA	= 904;
	static final int GLUT_VIDEO_RESIZE_HEIGHT_DELTA	= 905;
	static final int GLUT_VIDEO_RESIZE_X		= 906;
	static final int GLUT_VIDEO_RESIZE_Y		= 907;
	static final int GLUT_VIDEO_RESIZE_WIDTH        = 908;
	static final int GLUT_VIDEO_RESIZE_HEIGHT	= 909;
}


