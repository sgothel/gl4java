// Bitmap Character Record
// by Pontus Lidman
// based on GLUT 3.7 glutbitmap.h
// this file Copyright 2000 MathCore AB
//
// This file/package is licensed under the terms of the LPGL 
// with the permission of Pontus Lidman / Mathcore !
//

package gl4java.utils.glut.fonts;

public class BitmapCharRec {
  public int width=0;
  public int height=0;
  public float xorig=0;
  public float yorig=0;
  public float advance=0;
  public byte[] bitmap=null;

    public BitmapCharRec(int w,int h, float xo, float yo, float adv, byte[] bm) {
	width=w;
	height=h;
	xorig=xo;
	yorig=yo;
	advance=adv;
	bitmap=bm;
    }
}
