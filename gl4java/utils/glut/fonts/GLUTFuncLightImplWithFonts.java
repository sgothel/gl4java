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

 
package gl4java.utils.glut.fonts;

import gl4java.utils.glut.*;
import gl4java.utils.glut.fonts.data.*;

import gl4java.GLFunc;
import gl4java.GLEnum;
import gl4java.GLUFunc;
import gl4java.GLUEnum;

import java.lang.*;

public class GLUTFuncLightImplWithFonts extends GLUTFuncLightImpl
implements GLEnum, GLUEnum
{
	public GLUTFuncLightImplWithFonts(GLFunc gl, GLUFunc glu)
	{
		super(gl, glu);
	}

    public final String glutGetFontDescription(int font)
    {
	switch(font) {
		case GLUT_STROKE_ROMAN:
			return "stroke roman";
		case GLUT_STROKE_MONO_ROMAN:
			return "stroke roman mono";
		case GLUT_BITMAP_9_BY_15:
			return "bitmap 9x15";
		case GLUT_BITMAP_8_BY_13:
			return "bitmap 8x13";
		case GLUT_BITMAP_TIMES_ROMAN_10:
			return "bitmap roman 10";
		case GLUT_BITMAP_TIMES_ROMAN_24:
			return "bitmap roman 24";
		case GLUT_BITMAP_HELVETICA_10:
			return "bitmap helvetica 10";
		case GLUT_BITMAP_HELVETICA_12:
			return "bitmap helvetica 12";
		case GLUT_BITMAP_HELVETICA_18:
			return "bitmap helvetica 18";
	}
	return "unknown font enumeration: "+font;
    }

    private final BitmapFontRec getFontInfo(int font) {
	try {
		switch(font) {
			case GLUT_BITMAP_HELVETICA_10:
			    return glutBitmapHelvetica10.getBitmapFontRec();
			case GLUT_BITMAP_HELVETICA_12:
			    return glutBitmapHelvetica12.getBitmapFontRec();
			case GLUT_BITMAP_HELVETICA_18:
			    return glutBitmapHelvetica12.getBitmapFontRec();
			case GLUT_BITMAP_8_BY_13:
			    return glutBitmap8By13.getBitmapFontRec();
			case GLUT_BITMAP_9_BY_15:
			    return glutBitmap9By15.getBitmapFontRec();
			case GLUT_BITMAP_TIMES_ROMAN_10:
			    return glutBitmapTimesRoman10.getBitmapFontRec();
			case GLUT_BITMAP_TIMES_ROMAN_24:
			    return glutBitmapTimesRoman24.getBitmapFontRec();
		}
	} catch (Exception ex) {
		System.out.println("Font not supported: "+ glutGetFontDescription(font));
	}
	return null;
    }

    private final StrokeFontRec getStrokeFontInfo(int font) {
	try {
		switch(font) {
			case GLUT_STROKE_MONO_ROMAN:
			    return glutStrokeMonoRoman.getStrokeFontRec();
			case GLUT_STROKE_ROMAN:
			    return glutStrokeRoman.getStrokeFontRec();
		}
	} catch (Exception ex) {
		System.out.println("Font not supported: "+ glutGetFontDescription(font));
	}
	return null;
    }
  
    public final void glutBitmapString(int font, String s) 
    { 
        BitmapCharRec ch;
        BitmapFontRec fontinfo;

	int[] swapbytes=new int[1];
	int[] lsbfirst=new int[1];
	int[] rowlength=new int[1];
	int[] skiprows=new int[1];
	int[] skippixels=new int[1];
	int[] alignment=new int[1];

	fontinfo=getFontInfo(font);

    	byte[] bytes=s.getBytes();
	int character;

	/* Save current modes. */
	gl.glGetIntegerv(GL_UNPACK_SWAP_BYTES, swapbytes);
	gl.glGetIntegerv(GL_UNPACK_LSB_FIRST, lsbfirst);
	gl.glGetIntegerv(GL_UNPACK_ROW_LENGTH, rowlength);
	gl.glGetIntegerv(GL_UNPACK_SKIP_ROWS, skiprows);
	gl.glGetIntegerv(GL_UNPACK_SKIP_PIXELS, skippixels);
	gl.glGetIntegerv(GL_UNPACK_ALIGNMENT, alignment);
	/* Little endian machines (DEC Alpha for example) could
	   benefit from setting GL_UNPACK_LSB_FIRST to GL_TRUE
	   instead of GL_FALSE, but this would require changing the
	   generated bitmaps too. */
	gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, 0); // GL_FALSE
	gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 0); // GL_FALSE
	gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
	gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
	gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	for (int i=0; i<s.length(); i++) 
	{
		character = bytes[i];
		if (character < fontinfo.first ||
		    character >= fontinfo.first + fontinfo.num_chars)
		    continue;
		ch = fontinfo.ch[character - fontinfo.first];
		if (ch == null) continue;

	        gl.glBitmap(ch.width, ch.height, ch.xorig, ch.yorig,
			    ch.advance, 0, ch.bitmap);
	}
	/* Restore saved modes. */
	gl.glPixelStorei(GL_UNPACK_SWAP_BYTES, swapbytes[0]);
	gl.glPixelStorei(GL_UNPACK_LSB_FIRST, lsbfirst[0]);
	gl.glPixelStorei(GL_UNPACK_ROW_LENGTH, rowlength[0]);
	gl.glPixelStorei(GL_UNPACK_SKIP_ROWS, skiprows[0]);
	gl.glPixelStorei(GL_UNPACK_SKIP_PIXELS, skippixels[0]);
	gl.glPixelStorei(GL_UNPACK_ALIGNMENT, alignment[0]);
    }

	public final int   glutBitmapWidth(int font, int character)
	{ 

	    BitmapFontRec fontinfo;
	    BitmapCharRec ch;

	    fontinfo = getFontInfo(font);

	    if ((character < fontinfo.first) || (character >= fontinfo.first + fontinfo.num_chars))
		return 0;
	    ch = fontinfo.ch[character - fontinfo.first];
	    if (ch != null)
		return (int) ch.advance;
	    else
		return 0;
	}

    public final void glutStrokeString(int font, String s)
    {
	StrokeCharRec ch;
	StrokeRec stroke;
	CoordRec coord;
	StrokeFontRec fontinfo;
	int i, j, k, c;
    	byte[] bytes=s.getBytes();

	fontinfo = getStrokeFontInfo(font);

	for (i=0; i<s.length(); i++) 
	{
		c = bytes[i];
		if (c < 0 || c >= fontinfo.num_chars)
		    continue;
		ch = fontinfo.ch[c];
		if (ch == null) continue;
		for (j=0; j< ch.num_strokes; j++) {
			stroke=ch.stroke[j];
			gl.glBegin(GL_LINE_STRIP);
			for (k = 0; k< stroke.num_coords; k++) {
			    coord = stroke.coord[k];
			    gl.glVertex2f(coord.x, coord.y);
			}
			gl.glEnd();
		    }
		gl.glTranslatef(ch.right, (float) 0.0, (float) 0.0);
	}
    }


	public final int   glutStrokeWidth(int font, int character)
	
	{
	    
	    StrokeFontRec fontinfo;
	    StrokeCharRec ch;
	    
	    fontinfo = getStrokeFontInfo(font);
	    
	    if (character < 0 || character >= fontinfo.num_chars)
		return 0;
	    ch = fontinfo.ch[character];
	    if (ch != null)
		return (int) ch.right;
	    else
		return 0;
	}
    
	public final int   glutBitmapLength(int font, String string)
        {
		int c;
		int length;
		int i;
		BitmapFontRec fontinfo;
		BitmapCharRec ch;
		byte[] bytestring=string.getBytes();

		fontinfo = getFontInfo(font);

		length = 0;
		for (i=0; i<string.length(); i++) {
		    c = bytestring[i];
		    if ((c >= fontinfo.first) && (c < fontinfo.first + fontinfo.num_chars)) {
			ch = fontinfo.ch[c - fontinfo.first];
			if (ch != null)
			    length += ch.advance;
		    }
		}
		return length;
    	}

	public final int   glutStrokeLength(int font, String string)
	{
	    int c, length;
	    StrokeFontRec fontinfo;
	    StrokeCharRec ch;
	    byte[] bytestring=string.getBytes();

	    fontinfo=getStrokeFontInfo(font);
	    
	    length = 0;
	    for (int i=0; i<string.length(); i++) {
		c = bytestring[i];
		if (c >= 0 && c < fontinfo.num_chars) {
		    ch = fontinfo.ch[c];
		    if (ch != null)
			length += ch.right;
		}
	    }
	    return length;
	}
}




