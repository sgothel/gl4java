// Bitmap Font Record
// by Pontus Lidman
// based on GLUT 3.7 glutbitmap.h
// this file Copyright 2000 MathCore AB
//
// This file/package is licensed under the terms of the LPGL 
// with the permission of Pontus Lidman / Mathcore !
//

package gl4java.utils.glut.fonts;

public class BitmapFontRec {
  public String name=null;
  public int num_chars=0;
  public int first=0;
  public BitmapCharRec[] ch=null;

    public BitmapFontRec(String n,int num,int f,BitmapCharRec[] recs) {
	name=n;
	num_chars=num;
	first=f;
	ch=recs;
    }
}
