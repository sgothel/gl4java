// Stroke Record
// by Pontus Lidman
// based on GLUT 3.7 glutstroke.h
// this file Copyright 2000 MathCore AB
//
// This file/package is licensed under the terms of the LPGL 
// with the permission of Pontus Lidman / Mathcore !
//

package gl4java.utils.glut.fonts;

public class StrokeRec {
    public int num_coords;
    public CoordRec[] coord;

    public StrokeRec(int num, CoordRec[] c) {
	num_coords=num;
	coord=c;
    }
}
