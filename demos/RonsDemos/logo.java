/**
 * @(#) logo.java
 * @(#) author unknown (converted to Java by Ron Cemer)
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLCanvas;

public class logo extends Applet 
{
        // [3*CHECKIMAGEWIDTH*CHECKIMAGEHEIGHT]
    private static final byte checkImage[] =
    {
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff,
        (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff,
        (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, (byte)0xff, (byte)0xff, (byte)0xff, (byte)0x00, (byte)0x00, (byte)0x00, 
    };
        // [4*BRICKIMAGEWIDTH*BRICKIMAGEHEIGHT]
    private static final byte brickImage[] =
    {
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff,
        (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff,
        (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff, (byte)0xff,(byte)0xff,(byte)0xff,(byte)0xff, (byte)0xa4,(byte)0x00,(byte)0x00,(byte)0xff
    };
        // [4*32]
    private static final byte stipple[] =
    {
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
    
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
    
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
        (byte)0x00, (byte)0x0F, (byte)0xF0, (byte)0x00,
    
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
        (byte)0x00, (byte)0x00, (byte)0x00, (byte)0x00,
    };
        // [18][2]
    private static final float tscp[][] =
    {
        { 0.0f, 0.0f },
        { 1.0f, 0.0f },
        { 0.0f, 0.125f },
        { 1.0f, 0.125f },
        { 0.0f, 0.250f },
        { 1.0f, 0.25f },
        { 0.0f, 0.375f },
        { 1.0f, 0.375f },
        { 0.0f, 0.50f },
        { 1.0f, 0.50f },
        { 0.0f, 0.625f },
        { 1.0f, 0.625f },
        { 0.0f, 0.75f },
        { 1.0f, 0.75f },
        { 0.0f, 0.875f },
        { 1.0f, 0.875f },
        { 0.0f, 1.0f },
        { 1.0f, 1.0f }
    };
        // [18][3]
    private static final float scp[][] =
    {
        { 1.000000f, 0.000000f, 0.000000f },
        { 1.000000f, 0.000000f, 5.000000f },
        { 0.707107f, 0.707107f, 0.000000f },
        { 0.707107f, 0.707107f, 5.000000f },
        { 0.000000f, 1.000000f, 0.000000f },
        { 0.000000f, 1.000000f, 5.000000f },
        { -0.707107f, 0.707107f, 0.000000f },
        { -0.707107f, 0.707107f, 5.000000f },
        { -1.000000f, 0.000000f, 0.000000f },
        { -1.000000f, 0.000000f, 5.000000f },
        { -0.707107f, -0.707107f, 0.000000f },
        { -0.707107f, -0.707107f, 5.000000f },
        { 0.000000f, -1.000000f, 0.000000f },
        { 0.000000f, -1.000000f, 5.000000f },
        { 0.707107f, -0.707107f, 0.000000f },
        { 0.707107f, -0.707107f, 5.000000f },
        { 1.000000f, 0.000000f, 0.000000f },
        { 1.000000f, 0.000000f, 5.000000f }
    };
        // [18][3]
    private static final float dcp[][] =
    {
        { 1.000000f, 0.000000f, 0.000000f },
        { 1.000000f, 0.000000f, 7.000000f },
        { 0.707107f, 0.707107f, 0.000000f },
        { 0.707107f, 0.707107f, 7.000000f },
        { 0.000000f, 1.000000f, 0.000000f },
        { 0.000000f, 1.000000f, 7.000000f },
        { -0.707107f, 0.707107f, 0.000000f },
        { -0.707107f, 0.707107f, 7.000000f },
        { -1.000000f, 0.000000f, 0.000000f },
        { -1.000000f, 0.000000f, 7.000000f },
        { -0.707107f, -0.707107f, 0.000000f },
        { -0.707107f, -0.707107f, 7.000000f },
        { 0.000000f, -1.000000f, 0.000000f },
        { 0.000000f, -1.000000f, 7.000000f },
        { 0.707107f, -0.707107f, 0.000000f },
        { 0.707107f, -0.707107f, 7.000000f },
        { 1.000000f, 0.000000f, 0.000000f },
        { 1.000000f, 0.000000f, 7.000000f }
    };
        // [7][9][3]
    private static final float ep[][][] =
    {
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.707107f, 0.000000f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.707107f, 0.000000f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.707107f, 0.000000f },
            { 0.000000f, -1.000000f, 0.000000f },
            { 0.707107f, -0.707107f, 0.000000f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.034074f, 0.258819f },
            { 0.707107f, 0.717087f, 0.075806f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.717087f, 0.075806f },
            { -1.000000f, 0.034074f, 0.258819f },
            { -0.707107f, -0.648939f, 0.441832f },
            { 0.000000f, -0.931852f, 0.517638f },
            { 0.707107f, -0.648939f, 0.441832f },
            { 1.000000f, 0.034074f, 0.258819f }
        },
        {
            { 1.000000f, 0.133975f, 0.500000f },
            { 0.707107f, 0.746347f, 0.146447f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.746347f, 0.146447f },
            { -1.000000f, 0.133975f, 0.500000f },
            { -0.707107f, -0.478398f, 0.853553f },
            { 0.000000f, -0.732051f, 1.000000f },
            { 0.707107f, -0.478398f, 0.853553f },
            { 1.000000f, 0.133975f, 0.500000f }
        },
        {
            { 1.000000f, 0.292893f, 0.707107f },
            { 0.707107f, 0.792893f, 0.207107f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.792893f, 0.207107f },
            { -1.000000f, 0.292893f, 0.707107f },
            { -0.707107f, -0.207107f, 1.207107f },
            { 0.000000f, -0.414214f, 1.414214f },
            { 0.707107f, -0.207107f, 1.207107f },
            { 1.000000f, 0.292893f, 0.707107f }
        },
        {
            { 1.000000f, 0.500000f, 0.866025f },
            { 0.707107f, 0.853553f, 0.253653f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.853553f, 0.253653f },
            { -1.000000f, 0.500000f, 0.866025f },
            { -0.707107f, 0.146447f, 1.478398f },
            { 0.000000f, 0.000000f, 1.732051f },
            { 0.707107f, 0.146447f, 1.478398f },
            { 1.000000f, 0.500000f, 0.866025f }
        },
        {
            { 1.000000f, 0.741181f, 0.965926f },
            { 0.707107f, 0.924194f, 0.282913f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.924194f, 0.282913f },
            { -1.000000f, 0.741181f, 0.965926f },
            { -0.707107f, 0.558168f, 1.648939f },
            { 0.000000f, 0.482362f, 1.931852f },
            { 0.707107f, 0.558168f, 1.648939f },
            { 1.000000f, 0.741181f, 0.965926f }
        },
        {
            { 1.000000f, 1.000000f, 1.000000f },
            { 0.707107f, 1.000000f, 0.292893f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 1.000000f, 0.292893f },
            { -1.000000f, 1.000000f, 1.000000f },
            { -0.707107f, 1.000000f, 1.707107f },
            { 0.000000f, 1.000000f, 2.000000f },
            { 0.707107f, 1.000000f, 1.707107f },
            { 1.000000f, 1.000000f, 1.000000f }
        }
    };
        // [7][9][3]
    private static final float en[][][] =
    {
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.707107f, 0.000000f },
            { 0.000000f, 1.000000f, 0.000000f },
            { -0.707107f, 0.707107f, 0.000000f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.707107f, 0.000000f },
            { 0.000000f, -1.000000f, 0.000000f },
            { 0.707107f, -0.707107f, 0.000000f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.683013f, -0.183013f },
            { 0.000000f, 0.965926f, -0.258819f },
            { -0.707107f, 0.683013f, -0.183013f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.683013f, 0.183013f },
            { 0.000000f, -0.965926f, 0.258819f },
            { 0.707107f, -0.683013f, 0.183013f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.612372f, -0.353553f },
            { 0.000000f, 0.866025f, -0.500000f },
            { -0.707107f, 0.612372f, -0.353553f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.612372f, 0.353553f },
            { 0.000000f, -0.866025f, 0.500000f },
            { 0.707107f, -0.612372f, 0.353553f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.000000f, 0.707107f, -0.707107f },
            { -0.707107f, 0.500000f, -0.500000f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.500000f, 0.500000f },
            { 0.000000f, -0.707107f, 0.707107f },
            { 0.707107f, -0.500000f, 0.500000f },
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.000000f, 0.000000f, 0.000000f }    /// ???
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.353553f, -0.612372f },
            { 0.000000f, 0.500000f, -0.866025f },
            { -0.707107f, 0.353553f, -0.612372f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.353553f, 0.612372f },
            { 0.000000f, -0.500000f, 0.866025f },
            { 0.707107f, -0.353553f, 0.612372f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.183013f, -0.683013f },
            { 0.000000f, 0.258819f, -0.965926f },
            { -0.707107f, 0.183013f, -0.683013f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, -0.183013f, 0.683013f },
            { 0.000000f, -0.258819f, 0.965926f },
            { 0.707107f, -0.183013f, 0.683013f },
            { 1.000000f, 0.000000f, 0.000000f }
        },
        {
            { 1.000000f, 0.000000f, 0.000000f },
            { 0.707107f, 0.000000f, -0.707107f },
            { 0.000000f, 0.000000f, -1.000000f },
            { -0.707107f, 0.000000f, -0.707107f },
            { -1.000000f, 0.000000f, 0.000000f },
            { -0.707107f, 0.000000f, 0.707107f },
            { 0.000000f, 0.000000f, 1.000000f },
            { 0.707107f, 0.000000f, 0.707107f },
            { 1.000000f, 0.000000f, 0.000000f }
        }
    };
        // [7][9][2]
    private static final float tep[][][] =
    {
        {
            { 0.0f,   0.0f },
            { 0.125f, 0.0f },
            { 0.25f,  0.0f },
            { 0.375f, 0.0f },
            { 0.5f,   0.0f },
            { 0.625f, 0.0f },
            { 0.75f,  0.0f },
            { 0.875f, 0.0f },
            { 1.0f,   0.0f }
        },
        {
            { 0.0f,   0.16667f },
            { 0.125f, 0.16667f },
            { 0.25f,  0.16667f },
            { 0.375f, 0.16667f },
            { 0.5f,   0.16667f },
            { 0.625f, 0.16667f },
            { 0.75f,  0.16667f },
            { 0.875f, 0.16667f },
            { 1.0f,   0.16667f }
        },
        {
            { 0.0f,   0.33333f },
            { 0.125f, 0.33333f },
            { 0.25f,  0.33333f },
            { 0.375f, 0.33333f },
            { 0.5f,   0.33333f },
            { 0.625f, 0.33333f },
            { 0.75f,  0.33333f },
            { 0.875f, 0.33333f },
            { 1.0f,   0.33333f }
        },
        {
            { 0.0f,   0.5f },
            { 0.125f, 0.5f },
            { 0.25f,  0.5f },
            { 0.375f, 0.5f },
            { 0.5f,   0.5f },
            { 0.625f, 0.5f },
            { 0.75f,  0.5f },
            { 0.875f, 0.5f },
            { 1.0f,   0.5f }
        },
        {
            { 0.0f,   0.6667f },
            { 0.125f, 0.6667f },
            { 0.25f,  0.6667f },
            { 0.375f, 0.6667f },
            { 0.5f,   0.6667f },
            { 0.625f, 0.6667f },
            { 0.75f,  0.6667f },
            { 0.875f, 0.6667f },
            { 1.0f,   0.6667f }
        },
        {
            { 0.0f,   0.83333f },
            { 0.125f, 0.83333f },
            { 0.25f,  0.83333f },
            { 0.375f, 0.83333f },
            { 0.5f,   0.83333f },
            { 0.625f, 0.83333f },
            { 0.75f,  0.83333f },
            { 0.875f, 0.83333f },
            { 1.0f,   0.83333f }
        },
        {
            { 0.0f,   1.0f },
            { 0.125f, 1.0f },
            { 0.25f,  1.0f },
            { 0.375f, 1.0f },
            { 0.5f,   1.0f },
            { 0.625f, 1.0f },
            { 0.75f,  1.0f },
            { 0.875f, 1.0f },
            { 1.0f,   1.0f }
        }
    };

    logoCanvas canvas = null;


        /* Initialize the applet */


	public void init()
	{
        Dimension d = getSize();
        setLayout(new BorderLayout());
        canvas = new logoCanvas(d.width, d.height);
	canvas.requestFocus();
        add("Center", canvas);
	}


        /* Start the applet */


    public void start()
    {
    }


        /* Stop the applet */


    public void stop()
    {
    }


        /* Destroy the applet */


    public void destroy()
    {
        canvas.cvsDispose();
    }


        /* Local GLCanvas extension class */


    private class logoCanvas extends GLCanvas
    	implements KeyListener, MouseListener
    {
        byte BLACK = (byte)0;
        byte GRAY = (byte)128;
        byte WHITE = (byte)255;
        int CHECKIMAGEWIDTH = 8;
        int CHECKIMAGEHEIGHT = 8;
        int BRICKIMAGEWIDTH = 16;
        int BRICKIMAGEHEIGHT = 16;
        float black[] = {0.0f, 0.0f, 0.0f};
        float white[] = {1.0f, 1.0f, 1.0f};
        float gray[] = {0.5f, 0.5f, 0.5f};
        float blue[] = {0.0f, 0.0f, 1.0f};
        int colorIndexes[] = {0, 200, 255};
        double plane[] = {1.0f, 0.0f, -1.0f, 12.0f};
        float yRotation = 30.0f;
        float zTranslation = -15.0f;
        int singleCylinder;
        int doubleCylinder;
        int elbow, logo;
        byte[] image = checkImage;
        int imageHeight = CHECKIMAGEHEIGHT;
        int imageWidth = CHECKIMAGEWIDTH;
        float decal[] = { (float)GL_DECAL };
        float modulate[] = { (float)GL_MODULATE };
        float repeat[] = { (float)GL_REPEAT };
        float nearest[] = { (float)GL_NEAREST };

        public logoCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            float ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
            float diffuse[] = {0.5f, 1.0f, 1.0f, 1.0f};
            float position[] = {90.0f, 90.0f, 150.0f, 0.0f};
            float front_mat_shininess[] = {30.0f};
            float front_mat_specular[] = {0.2f, 0.2f, 0.2f, 1.0f};
            float front_mat_diffuse[] = {0.5f, 0.28f, 0.38f, 1.0f};
            float back_mat_shininess[] = {50.0f};
            float back_mat_specular[] = {0.5f, 0.5f, 0.2f, 1.0f};
            float back_mat_diffuse[] = {1.0f, 1.0f, 0.2f, 1.0f};
            float lmodel_ambient[] = {1.0f, 1.0f, 1.0f, 1.0f};
            float lmodel_twoside[] = {(float)1.0};
            
            gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            
            gl.glFrontFace(GL_CW);
            
            gl.glEnable(GL_DEPTH_TEST);
            
            gl.glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
            gl.glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, lmodel_twoside);
            gl.glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
            gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
            gl.glLightfv(GL_LIGHT0, GL_POSITION, position);
            gl.glEnable(GL_LIGHTING);
            gl.glEnable(GL_LIGHT0);
            
            gl.glMaterialfv(GL_FRONT, GL_SHININESS, front_mat_shininess);
            gl.glMaterialfv(GL_FRONT, GL_SPECULAR, front_mat_specular);
            gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, front_mat_diffuse);
            gl.glMaterialfv(GL_BACK, GL_SHININESS, back_mat_shininess);
            gl.glMaterialfv(GL_BACK, GL_SPECULAR, back_mat_specular);
            gl.glMaterialfv(GL_BACK, GL_DIFFUSE, back_mat_diffuse);
            
            gl.glEnable(GL_CLIP_PLANE0);
            
            gl.glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, modulate);
            gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, repeat);
            gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, repeat);
            gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, nearest);
            gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, nearest);
            gl.glTexImage2D
                (GL_TEXTURE_2D,
                 0,
                 4,
                 BRICKIMAGEWIDTH,
                 BRICKIMAGEHEIGHT,
                 0,
                 GL_RGBA,
                 GL_UNSIGNED_BYTE,
                 brickImage);
            gl.glEnable(GL_TEXTURE_2D);
            
            gl.glCullFace(GL_BACK);
            gl.glEnable(GL_CULL_FACE);
            
            BuildLists();
            
            glj.gljCheckGL();

            addKeyListener(this);
	    addMouseListener(this);    
        }
    
        public void cvsDispose()
        {
            System.out.println("destroy(): " + this);
            removeKeyListener(this);
            super.cvsDispose();
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(90.0f, 1.0f, 1.0f, 200.0f);
            gl.glMatrixMode(GL_MODELVIEW);
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
            
            gl.glPushMatrix();
            
            gl.glTranslatef(0.0f, 0.0f, zTranslation);
            gl.glRotatef(30.0f, 1.0f, 0.0f, 0.0f);
            gl.glRotatef(yRotation, 0.0f, 1.0f, 0.0f);
            gl.glClipPlane(GL_CLIP_PLANE0, plane);
            gl.glCallList(logo);
            
            gl.glPopMatrix();
            
            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
        }

        // Methods required for the implementation of KeyListener
        public void keyPressed(KeyEvent e)
        {
            switch (e.getKeyCode())
            {
            case KeyEvent.VK_LEFT:
                yRotation -= 0.5f;
                repaint();
                break;
            case KeyEvent.VK_RIGHT:
                yRotation += 0.5f;
                repaint();
                break;
            case KeyEvent.VK_UP:
                plane[3] -= 2.0;
                repaint();
                break;
            case KeyEvent.VK_DOWN:
                plane[3] += 2.0;
                repaint();
                break;
            }
        }

        public void keyReleased(KeyEvent e)
        {
        }

        public void keyTyped(KeyEvent e)
        {
            if (glj.gljMakeCurrent() == false) return;
            boolean dorepaint = false;
            switch ((char)e.getKeyChar())
            {
            case 'z':
                zTranslation -= 1.0f;
                dorepaint = true;
                break;
            case 'Z':
                zTranslation += 1.0f;
                dorepaint = true;
                break;
            case '1':
                gl.glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
                dorepaint = true;
                break;
            case '2':
                gl.glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
                dorepaint = true;
                break;
            case '3':
                gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
                dorepaint = true;
                break;
            case '4':
                gl.glEnable(GL_POLYGON_SMOOTH);
                gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE);
                gl.glEnable(GL_BLEND);
                gl.glDisable(GL_DEPTH_TEST);
                dorepaint = true;
                break;
            case '5':
                gl.glDisable(GL_POLYGON_SMOOTH);
                gl.glBlendFunc(GL_ONE, GL_ZERO);
                gl.glDisable(GL_BLEND);
                gl.glEnable(GL_DEPTH_TEST);
                dorepaint = true;
                break;
            case '6':
                gl.glEnable(GL_DITHER);
                dorepaint = true;
                break;
            case '7':
                gl.glDisable(GL_DITHER);
                dorepaint = true;
                break;
            case '8':
                gl.glPolygonStipple(stipple);
                gl.glEnable(GL_POLYGON_STIPPLE);
                dorepaint = true;
                break;
            case '9':
                gl.glDisable(GL_POLYGON_STIPPLE);
                dorepaint = true;
                break;
            case '-':
                gl.glShadeModel(GL_SMOOTH);
                dorepaint = true;
                break;
            case '=':
                gl.glShadeModel(GL_FLAT);
                dorepaint = true;
                break;
            case 'q':
                gl.glDisable(GL_CULL_FACE);
                dorepaint = true;
                break;
            case 'w':
                gl.glEnable(GL_CULL_FACE);
                gl.glCullFace(GL_BACK);
                dorepaint = true;
                break;
            case 'e':
                gl.glEnable(GL_CULL_FACE);
                gl.glCullFace(GL_FRONT);
                dorepaint = true;
                break;
            case 'r':
                gl.glFrontFace(GL_CCW);
                dorepaint = true;
                break;
            case 't': 
                gl.glFrontFace(GL_CW);
                dorepaint = true;
                break;
            case 'y':
                gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
                gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 0);
                gl.glPolygonStipple(stipple);
                dorepaint = true;
                break;
            case 'u':
                gl.glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
                gl.glPixelStorei(GL_UNPACK_LSB_FIRST, 1);
                gl.glPolygonStipple(stipple);
                dorepaint = true;
                break;
            case 'a':
                gl.glEnable(GL_TEXTURE_2D);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, repeat);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, repeat);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, nearest);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, nearest);
                gl.glTexImage2D
                    (GL_TEXTURE_2D,
                     0,
                     4,
                     BRICKIMAGEWIDTH,
                     BRICKIMAGEHEIGHT,
                     0,
                     GL_RGBA,
                     GL_UNSIGNED_BYTE,
                     brickImage);
                dorepaint = true;
                break;
            case 's':
                gl.glEnable(GL_TEXTURE_2D);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, repeat);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, repeat);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, nearest);
                gl.glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, nearest);
                gl.glTexImage2D
                    (GL_TEXTURE_2D,
                     0,
                     3,
                     CHECKIMAGEWIDTH,
                     CHECKIMAGEHEIGHT,
                     0,
                     GL_RGB,
                     GL_UNSIGNED_BYTE,
                     checkImage);
                dorepaint = true;
                break;
            case 'd':
                gl.glDisable(GL_TEXTURE_2D);
                dorepaint = true;
                break;
            case 'f':
                gl.glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, modulate);
                dorepaint = true;
                break;
            case 'g':
                gl.glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, decal);
                dorepaint = true;
                break;
            }
            glj.gljFree();
            if (dorepaint) repaint();
        }

        private void BendForward()
        {
            gl.glTranslatef(0.0f, 1.0f, 0.0f);
            gl.glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, -1.0f, 0.0f);
        }
        
        private void BendLeft()
        {
            gl.glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);
            gl.glTranslatef(0.0f, 1.0f, 0.0f);
            gl.glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
            gl.glTranslatef(0.0f, -1.0f, 0.0f);
        }
        
        private void BendRight()
        {
            gl.glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
            gl.glTranslatef(0.0f, 1.0f, 0.0f);
            gl.glRotatef(90.0f, 1.0f, 0f, 0.0f);
            gl.glTranslatef(0.0f, -1.0f, 0.0f);
        }

        private void BuildSingleCylinder()
        {
            gl.glNewList(singleCylinder, GL_COMPILE);
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(scp[0]); gl.glTexCoord2fv(tscp[0]); gl.glVertex3fv(scp[0]);
            gl.glNormal3fv(scp[0]); gl.glTexCoord2fv(tscp[1]); gl.glVertex3fv(scp[1]);
            gl.glNormal3fv(scp[2]); gl.glTexCoord2fv(tscp[2]); gl.glVertex3fv(scp[2]);
            gl.glNormal3fv(scp[2]); gl.glTexCoord2fv(tscp[3]); gl.glVertex3fv(scp[3]);
            gl.glNormal3fv(scp[4]); gl.glTexCoord2fv(tscp[4]); gl.glVertex3fv(scp[4]);
            gl.glNormal3fv(scp[4]); gl.glTexCoord2fv(tscp[5]); gl.glVertex3fv(scp[5]);
            gl.glNormal3fv(scp[6]); gl.glTexCoord2fv(tscp[6]); gl.glVertex3fv(scp[6]);
            gl.glNormal3fv(scp[6]); gl.glTexCoord2fv(tscp[7]); gl.glVertex3fv(scp[7]);
            gl.glNormal3fv(scp[8]); gl.glTexCoord2fv(tscp[8]); gl.glVertex3fv(scp[8]);
            gl.glNormal3fv(scp[8]); gl.glTexCoord2fv(tscp[9]); gl.glVertex3fv(scp[9]);
            gl.glNormal3fv(scp[10]); gl.glTexCoord2fv(tscp[10]); gl.glVertex3fv(scp[10]);
            gl.glNormal3fv(scp[10]); gl.glTexCoord2fv(tscp[11]); gl.glVertex3fv(scp[11]);
            gl.glNormal3fv(scp[12]); gl.glTexCoord2fv(tscp[12]); gl.glVertex3fv(scp[12]);
            gl.glNormal3fv(scp[12]); gl.glTexCoord2fv(tscp[13]); gl.glVertex3fv(scp[13]);
            gl.glNormal3fv(scp[14]); gl.glTexCoord2fv(tscp[14]); gl.glVertex3fv(scp[14]);
            gl.glNormal3fv(scp[14]); gl.glTexCoord2fv(tscp[15]); gl.glVertex3fv(scp[15]);
            gl.glNormal3fv(scp[16]); gl.glTexCoord2fv(tscp[16]); gl.glVertex3fv(scp[16]);
            gl.glNormal3fv(scp[16]); gl.glTexCoord2fv(tscp[17]); gl.glVertex3fv(scp[17]);
            gl.glEnd();
            gl.glEndList();
        }

        private void BuildDoubleCylinder()
        {
            gl.glNewList(doubleCylinder, GL_COMPILE);
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(dcp[0]); gl.glTexCoord2fv(tscp[0]); gl.glVertex3fv(dcp[0]);
            gl.glNormal3fv(dcp[0]); gl.glTexCoord2fv(tscp[1]); gl.glVertex3fv(dcp[1]);
            gl.glNormal3fv(dcp[2]); gl.glTexCoord2fv(tscp[2]); gl.glVertex3fv(dcp[2]);
            gl.glNormal3fv(dcp[2]); gl.glTexCoord2fv(tscp[3]); gl.glVertex3fv(dcp[3]);
            gl.glNormal3fv(dcp[4]); gl.glTexCoord2fv(tscp[4]); gl.glVertex3fv(dcp[4]);
            gl.glNormal3fv(dcp[4]); gl.glTexCoord2fv(tscp[5]); gl.glVertex3fv(dcp[5]);
            gl.glNormal3fv(dcp[6]); gl.glTexCoord2fv(tscp[6]); gl.glVertex3fv(dcp[6]);
            gl.glNormal3fv(dcp[6]); gl.glTexCoord2fv(tscp[7]); gl.glVertex3fv(dcp[7]);
            gl.glNormal3fv(dcp[8]); gl.glTexCoord2fv(tscp[8]); gl.glVertex3fv(dcp[8]);
            gl.glNormal3fv(dcp[8]); gl.glTexCoord2fv(tscp[9]); gl.glVertex3fv(dcp[9]);
            gl.glNormal3fv(dcp[10]); gl.glTexCoord2fv(tscp[10]); gl.glVertex3fv(dcp[10]);
            gl.glNormal3fv(dcp[10]); gl.glTexCoord2fv(tscp[11]); gl.glVertex3fv(dcp[11]);
            gl.glNormal3fv(dcp[12]); gl.glTexCoord2fv(tscp[12]); gl.glVertex3fv(dcp[12]);
            gl.glNormal3fv(dcp[12]); gl.glTexCoord2fv(tscp[13]); gl.glVertex3fv(dcp[13]);
            gl.glNormal3fv(dcp[14]); gl.glTexCoord2fv(tscp[14]); gl.glVertex3fv(dcp[14]);
            gl.glNormal3fv(dcp[14]); gl.glTexCoord2fv(tscp[15]); gl.glVertex3fv(dcp[15]);
            gl.glNormal3fv(dcp[16]); gl.glTexCoord2fv(tscp[16]); gl.glVertex3fv(dcp[16]);
            gl.glNormal3fv(dcp[16]); gl.glTexCoord2fv(tscp[17]); gl.glVertex3fv(dcp[17]);
            gl.glEnd();
            gl.glEndList();
        }

        private void BuildElbow()
        {
            gl.glNewList(elbow, GL_COMPILE);
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[0][0]); gl.glTexCoord2fv(tep[0][0]); gl.glVertex3fv(ep[0][0]);
            gl.glNormal3fv(en[1][0]); gl.glTexCoord2fv(tep[1][0]); gl.glVertex3fv(ep[1][0]);
            gl.glNormal3fv(en[0][1]); gl.glTexCoord2fv(tep[0][1]); gl.glVertex3fv(ep[0][1]);
            gl.glNormal3fv(en[1][1]); gl.glTexCoord2fv(tep[1][1]); gl.glVertex3fv(ep[1][1]);
            gl.glNormal3fv(en[0][2]); gl.glTexCoord2fv(tep[0][2]); gl.glVertex3fv(ep[0][2]);
            gl.glNormal3fv(en[1][2]); gl.glTexCoord2fv(tep[1][2]); gl.glVertex3fv(ep[1][2]);
            gl.glNormal3fv(en[0][3]); gl.glTexCoord2fv(tep[0][3]); gl.glVertex3fv(ep[0][3]);
            gl.glNormal3fv(en[1][3]); gl.glTexCoord2fv(tep[1][3]); gl.glVertex3fv(ep[1][3]);
            gl.glNormal3fv(en[0][4]); gl.glTexCoord2fv(tep[0][4]); gl.glVertex3fv(ep[0][4]);
            gl.glNormal3fv(en[1][4]); gl.glTexCoord2fv(tep[1][4]); gl.glVertex3fv(ep[1][4]);
            gl.glNormal3fv(en[0][5]); gl.glTexCoord2fv(tep[0][5]); gl.glVertex3fv(ep[0][5]);
            gl.glNormal3fv(en[1][5]); gl.glTexCoord2fv(tep[1][5]); gl.glVertex3fv(ep[1][5]);
            gl.glNormal3fv(en[0][6]); gl.glTexCoord2fv(tep[0][6]); gl.glVertex3fv(ep[0][6]);
            gl.glNormal3fv(en[1][6]); gl.glTexCoord2fv(tep[1][6]); gl.glVertex3fv(ep[1][6]);
            gl.glNormal3fv(en[0][7]); gl.glTexCoord2fv(tep[0][7]); gl.glVertex3fv(ep[0][7]);
            gl.glNormal3fv(en[1][7]); gl.glTexCoord2fv(tep[1][7]); gl.glVertex3fv(ep[1][7]);
            gl.glNormal3fv(en[0][8]); gl.glTexCoord2fv(tep[0][8]); gl.glVertex3fv(ep[0][8]);
            gl.glNormal3fv(en[1][8]); gl.glTexCoord2fv(tep[1][8]); gl.glVertex3fv(ep[1][8]);
            gl.glEnd();
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[1][0]); gl.glTexCoord2fv(tep[1][0]); gl.glVertex3fv(ep[1][0]);
            gl.glNormal3fv(en[2][0]); gl.glTexCoord2fv(tep[2][0]); gl.glVertex3fv(ep[2][0]);
            gl.glNormal3fv(en[1][1]); gl.glTexCoord2fv(tep[1][1]); gl.glVertex3fv(ep[1][1]);
            gl.glNormal3fv(en[2][1]); gl.glTexCoord2fv(tep[2][1]); gl.glVertex3fv(ep[2][1]);
            gl.glNormal3fv(en[1][2]); gl.glTexCoord2fv(tep[1][2]); gl.glVertex3fv(ep[1][2]);
            gl.glNormal3fv(en[2][2]); gl.glTexCoord2fv(tep[2][2]); gl.glVertex3fv(ep[2][2]);
            gl.glNormal3fv(en[1][3]); gl.glTexCoord2fv(tep[1][3]); gl.glVertex3fv(ep[1][3]);
            gl.glNormal3fv(en[2][3]); gl.glTexCoord2fv(tep[2][3]); gl.glVertex3fv(ep[2][3]);
            gl.glNormal3fv(en[1][4]); gl.glTexCoord2fv(tep[1][4]); gl.glVertex3fv(ep[1][4]);
            gl.glNormal3fv(en[2][4]); gl.glTexCoord2fv(tep[2][4]); gl.glVertex3fv(ep[2][4]);
            gl.glNormal3fv(en[1][5]); gl.glTexCoord2fv(tep[1][5]); gl.glVertex3fv(ep[1][5]);
            gl.glNormal3fv(en[2][5]); gl.glTexCoord2fv(tep[2][5]); gl.glVertex3fv(ep[2][5]);
            gl.glNormal3fv(en[1][6]); gl.glTexCoord2fv(tep[1][6]); gl.glVertex3fv(ep[1][6]);
            gl.glNormal3fv(en[2][6]); gl.glTexCoord2fv(tep[2][6]); gl.glVertex3fv(ep[2][6]);
            gl.glNormal3fv(en[1][7]); gl.glTexCoord2fv(tep[1][7]); gl.glVertex3fv(ep[1][7]);
            gl.glNormal3fv(en[2][7]); gl.glTexCoord2fv(tep[2][7]); gl.glVertex3fv(ep[2][7]);
            gl.glNormal3fv(en[1][8]); gl.glTexCoord2fv(tep[1][8]); gl.glVertex3fv(ep[1][8]);
            gl.glNormal3fv(en[2][8]); gl.glTexCoord2fv(tep[2][8]); gl.glVertex3fv(ep[2][8]);
            gl.glEnd();
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[2][0]); gl.glTexCoord2fv(tep[2][0]); gl.glVertex3fv(ep[2][0]);
            gl.glNormal3fv(en[3][0]); gl.glTexCoord2fv(tep[3][0]); gl.glVertex3fv(ep[3][0]);
            gl.glNormal3fv(en[2][1]); gl.glTexCoord2fv(tep[2][1]); gl.glVertex3fv(ep[2][1]);
            gl.glNormal3fv(en[3][1]); gl.glTexCoord2fv(tep[3][1]); gl.glVertex3fv(ep[3][1]);
            gl.glNormal3fv(en[2][2]); gl.glTexCoord2fv(tep[2][2]); gl.glVertex3fv(ep[2][2]);
            gl.glNormal3fv(en[3][2]); gl.glTexCoord2fv(tep[3][2]); gl.glVertex3fv(ep[3][2]);
            gl.glNormal3fv(en[2][3]); gl.glTexCoord2fv(tep[2][3]); gl.glVertex3fv(ep[2][3]);
            gl.glNormal3fv(en[3][3]); gl.glTexCoord2fv(tep[3][3]); gl.glVertex3fv(ep[3][3]);
            gl.glNormal3fv(en[2][4]); gl.glTexCoord2fv(tep[2][4]); gl.glVertex3fv(ep[2][4]);
            gl.glNormal3fv(en[3][4]); gl.glTexCoord2fv(tep[3][4]); gl.glVertex3fv(ep[3][4]);
            gl.glNormal3fv(en[2][5]); gl.glTexCoord2fv(tep[2][5]); gl.glVertex3fv(ep[2][5]);
            gl.glNormal3fv(en[3][5]); gl.glTexCoord2fv(tep[3][5]); gl.glVertex3fv(ep[3][5]);
            gl.glNormal3fv(en[2][6]); gl.glTexCoord2fv(tep[2][6]); gl.glVertex3fv(ep[2][6]);
            gl.glNormal3fv(en[3][6]); gl.glTexCoord2fv(tep[3][6]); gl.glVertex3fv(ep[3][6]);
            gl.glNormal3fv(en[2][7]); gl.glTexCoord2fv(tep[2][7]); gl.glVertex3fv(ep[2][7]);
            gl.glNormal3fv(en[3][7]); gl.glTexCoord2fv(tep[3][7]); gl.glVertex3fv(ep[3][7]);
            gl.glNormal3fv(en[2][8]); gl.glTexCoord2fv(tep[2][8]); gl.glVertex3fv(ep[2][8]);
            gl.glNormal3fv(en[3][8]); gl.glTexCoord2fv(tep[3][8]); gl.glVertex3fv(ep[3][8]);
            gl.glEnd();
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[3][0]); gl.glTexCoord2fv(tep[3][0]); gl.glVertex3fv(ep[3][0]);
            gl.glNormal3fv(en[4][0]); gl.glTexCoord2fv(tep[4][0]); gl.glVertex3fv(ep[4][0]);
            gl.glNormal3fv(en[3][1]); gl.glTexCoord2fv(tep[3][1]); gl.glVertex3fv(ep[3][1]);
            gl.glNormal3fv(en[4][1]); gl.glTexCoord2fv(tep[4][1]); gl.glVertex3fv(ep[4][1]);
            gl.glNormal3fv(en[3][2]); gl.glTexCoord2fv(tep[3][2]); gl.glVertex3fv(ep[3][2]);
            gl.glNormal3fv(en[4][2]); gl.glTexCoord2fv(tep[4][2]); gl.glVertex3fv(ep[4][2]);
            gl.glNormal3fv(en[3][3]); gl.glTexCoord2fv(tep[3][3]); gl.glVertex3fv(ep[3][3]);
            gl.glNormal3fv(en[4][3]); gl.glTexCoord2fv(tep[4][3]); gl.glVertex3fv(ep[4][3]);
            gl.glNormal3fv(en[3][4]); gl.glTexCoord2fv(tep[3][4]); gl.glVertex3fv(ep[3][4]);
            gl.glNormal3fv(en[4][4]); gl.glTexCoord2fv(tep[4][4]); gl.glVertex3fv(ep[4][4]);
            gl.glNormal3fv(en[3][5]); gl.glTexCoord2fv(tep[3][5]); gl.glVertex3fv(ep[3][5]);
            gl.glNormal3fv(en[4][5]); gl.glTexCoord2fv(tep[4][5]); gl.glVertex3fv(ep[4][5]);
            gl.glNormal3fv(en[3][6]); gl.glTexCoord2fv(tep[3][6]); gl.glVertex3fv(ep[3][6]);
            gl.glNormal3fv(en[4][6]); gl.glTexCoord2fv(tep[4][6]); gl.glVertex3fv(ep[4][6]);
            gl.glNormal3fv(en[3][7]); gl.glTexCoord2fv(tep[3][7]); gl.glVertex3fv(ep[3][7]);
            gl.glNormal3fv(en[4][7]); gl.glTexCoord2fv(tep[4][7]); gl.glVertex3fv(ep[4][7]);
            gl.glNormal3fv(en[3][8]); gl.glTexCoord2fv(tep[3][8]); gl.glVertex3fv(ep[3][8]);
            gl.glNormal3fv(en[4][8]); gl.glTexCoord2fv(tep[4][8]); gl.glVertex3fv(ep[4][8]);
            gl.glEnd();
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[4][0]); gl.glTexCoord2fv(tep[4][0]); gl.glVertex3fv(ep[4][0]);
            gl.glNormal3fv(en[5][0]); gl.glTexCoord2fv(tep[5][0]); gl.glVertex3fv(ep[5][0]);
            gl.glNormal3fv(en[4][1]); gl.glTexCoord2fv(tep[4][1]); gl.glVertex3fv(ep[4][1]);
            gl.glNormal3fv(en[5][1]); gl.glTexCoord2fv(tep[5][1]); gl.glVertex3fv(ep[5][1]);
            gl.glNormal3fv(en[4][2]); gl.glTexCoord2fv(tep[4][2]); gl.glVertex3fv(ep[4][2]);
            gl.glNormal3fv(en[5][2]); gl.glTexCoord2fv(tep[5][2]); gl.glVertex3fv(ep[5][2]);
            gl.glNormal3fv(en[4][3]); gl.glTexCoord2fv(tep[4][3]); gl.glVertex3fv(ep[4][3]);
            gl.glNormal3fv(en[5][3]); gl.glTexCoord2fv(tep[5][3]); gl.glVertex3fv(ep[5][3]);
            gl.glNormal3fv(en[4][4]); gl.glTexCoord2fv(tep[4][4]); gl.glVertex3fv(ep[4][4]);
            gl.glNormal3fv(en[5][4]); gl.glTexCoord2fv(tep[5][4]); gl.glVertex3fv(ep[5][4]);
            gl.glNormal3fv(en[4][5]); gl.glTexCoord2fv(tep[4][5]); gl.glVertex3fv(ep[4][5]);
            gl.glNormal3fv(en[5][5]); gl.glTexCoord2fv(tep[5][5]); gl.glVertex3fv(ep[5][5]);
            gl.glNormal3fv(en[4][6]); gl.glTexCoord2fv(tep[4][6]); gl.glVertex3fv(ep[4][6]);
            gl.glNormal3fv(en[5][6]); gl.glTexCoord2fv(tep[5][6]); gl.glVertex3fv(ep[5][6]);
            gl.glNormal3fv(en[4][7]); gl.glTexCoord2fv(tep[4][7]); gl.glVertex3fv(ep[4][7]);
            gl.glNormal3fv(en[5][7]); gl.glTexCoord2fv(tep[5][7]); gl.glVertex3fv(ep[5][7]);
            gl.glNormal3fv(en[4][8]); gl.glTexCoord2fv(tep[4][8]); gl.glVertex3fv(ep[4][8]);
            gl.glNormal3fv(en[5][8]); gl.glTexCoord2fv(tep[5][8]); gl.glVertex3fv(ep[5][8]);
            gl.glEnd();
            gl.glBegin(GL_TRIANGLE_STRIP);
            gl.glNormal3fv(en[5][0]); gl.glTexCoord2fv(tep[5][0]); gl.glVertex3fv(ep[5][0]);
            gl.glNormal3fv(en[6][0]); gl.glTexCoord2fv(tep[6][0]); gl.glVertex3fv(ep[6][0]);
            gl.glNormal3fv(en[5][1]); gl.glTexCoord2fv(tep[5][1]); gl.glVertex3fv(ep[5][1]);
            gl.glNormal3fv(en[6][1]); gl.glTexCoord2fv(tep[6][1]); gl.glVertex3fv(ep[6][1]);
            gl.glNormal3fv(en[5][2]); gl.glTexCoord2fv(tep[5][2]); gl.glVertex3fv(ep[5][2]);
            gl.glNormal3fv(en[6][2]); gl.glTexCoord2fv(tep[6][2]); gl.glVertex3fv(ep[6][2]);
            gl.glNormal3fv(en[5][3]); gl.glTexCoord2fv(tep[5][3]); gl.glVertex3fv(ep[5][3]);
            gl.glNormal3fv(en[6][3]); gl.glTexCoord2fv(tep[6][3]); gl.glVertex3fv(ep[6][3]);
            gl.glNormal3fv(en[5][4]); gl.glTexCoord2fv(tep[5][4]); gl.glVertex3fv(ep[5][4]);
            gl.glNormal3fv(en[6][4]); gl.glTexCoord2fv(tep[6][4]); gl.glVertex3fv(ep[6][4]);
            gl.glNormal3fv(en[5][5]); gl.glTexCoord2fv(tep[5][5]); gl.glVertex3fv(ep[5][5]);
            gl.glNormal3fv(en[6][5]); gl.glTexCoord2fv(tep[6][5]); gl.glVertex3fv(ep[6][5]);
            gl.glNormal3fv(en[5][6]); gl.glTexCoord2fv(tep[5][6]); gl.glVertex3fv(ep[5][6]);
            gl.glNormal3fv(en[6][6]); gl.glTexCoord2fv(tep[6][6]); gl.glVertex3fv(ep[6][6]);
            gl.glNormal3fv(en[5][7]); gl.glTexCoord2fv(tep[5][7]); gl.glVertex3fv(ep[5][7]);
            gl.glNormal3fv(en[6][7]); gl.glTexCoord2fv(tep[6][7]); gl.glVertex3fv(ep[6][7]);
            gl.glNormal3fv(en[5][8]); gl.glTexCoord2fv(tep[5][8]); gl.glVertex3fv(ep[5][8]);
            gl.glNormal3fv(en[6][8]); gl.glTexCoord2fv(tep[6][8]); gl.glVertex3fv(ep[6][8]);
            gl.glEnd();
            gl.glEndList();
        }

        private void BuildLogo()
        {
            gl.glNewList(logo, GL_COMPILE);
            gl.glTranslatef(5.5f, -3.5f, 4.5f);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendRight();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendLeft();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendRight();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendLeft();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendRight();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -7.0f);
            gl.glCallList(doubleCylinder);
            BendForward();
            gl.glCallList(elbow);
            gl.glTranslatef(0.0f, 0.0f, -5.0f);
            gl.glCallList(singleCylinder);
            BendLeft();
            gl.glCallList(elbow);
            gl.glEndList();
        }

        private void BuildLists()
        {
            singleCylinder = gl.glGenLists(1);
            doubleCylinder = gl.glGenLists(1);
            elbow = gl.glGenLists(1);
            logo = gl.glGenLists(1);
            BuildSingleCylinder();
            BuildDoubleCylinder();
            BuildElbow();
            BuildLogo();
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
        }

        public void mouseExited( MouseEvent evt )
        { }
        public void mousePressed( MouseEvent evt )
        { }
        public void mouseReleased( MouseEvent evt )                                     
	{ }
        public void mouseClicked( MouseEvent evt )
        { 
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
	}
    }
}
