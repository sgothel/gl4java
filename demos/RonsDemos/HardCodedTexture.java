/**
 * @(#) HardCodedTexture.java
 * @(#) author: Ronald B. Cemer
 * @(#) version: 1.0
 */

import java.io.*;

public interface HardCodedTexture
{
    public void dispose();

        /* GL_RGBA, etc. arg #3 in glTexImage2D() */
    public int getComponents();

        /* arg #4 in glTexImage2D() */
    public int getWidth();

        /* arg #5 in glTexImage2D() */
    public int getHeight();

        /* GL_RGBA, etc. arg #7 in glTexImage2D() */
    public int getFormat();

        /* GL_UNSIGNED_BYTE, etc. arg #8 in glTexImage2D() */
    public int getType();

        /* arg #9 in glTexImage2D() */
    public byte[] getBits();
}

