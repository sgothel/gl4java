// Stroke Character Record
// by Pontus Lidman
// based on GLUT 3.7 glutstroke.h
// this file Copyright 2000 MathCore AB
//
// This file/package is licensed under the terms of the LPGL 
// with the permission of Pontus Lidman / Mathcore !
//

package gl4java.utils.glut.fonts;

public class StrokeCharRec {
    public int num_strokes;
    public StrokeRec[] stroke;
    public float center;
    public float right;

    public StrokeCharRec(int n, StrokeRec[] strk, float c, float r) {
	num_strokes=n;
	stroke=strk;
	center=c;
	right=r;
    }
}
