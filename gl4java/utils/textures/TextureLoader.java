package gl4java.utils.textures;

import gl4java.*;
import gl4java.utils.glut.*;

import java.awt.*;
import java.awt.Color.*;
import java.awt.event.*;
import java.applet.*;
import java.io.*;
import java.net.*;

/**
 * This abstract Class defines the interface
 * for ALL texture loaders !
 *
 * @see TextureTool
 * @see	GLImageCanvas
 */   
public abstract class TextureLoader
extends TextureTool
{
	protected TextureLoader(GLFunc gl, GLUFunc glu)
	{ super(gl, glu); }

    /**
     * Loads an Texture 
     *
     * @param fname The filename
     */
     public abstract boolean readTexture(String fname);

    /**
     * Loads an Texture 
     *
     * @param base The base URL
     * @param uri  The additional uri for the base URL
     */
     public abstract boolean readTexture(URL base, String uri);
}

