/**
 * @(#) MatrixFuncs.java
 * @(#) author: Ronald B. Cemer
 * @(#) version: 1.0
 */

import java.io.*;

public class MatrixFuncs
{
    public static final float M_PI = 3.14159265359f;

    // Given the angle in degs, create a 4x4 matrix
    // in mtx which rotates around the X axis.
    public void rotateAroundX(float degs, float mtx[])
    {
        float rads, rsin, rcos;

        rads = degs*(M_PI/180.0f);
        rsin = (float)Math.sin(rads);
        rcos = (float)Math.cos(rads);
        mtx[0]  = 1.0f;
        mtx[1]  = 0.0f;
        mtx[2]  = 0.0f;
        mtx[3]  = 0.0f;
        mtx[4]  = 0.0f;
        mtx[5]  = rcos;
        mtx[6]  = rsin;
        mtx[7]  = 0.0f;
        mtx[8]  = 0.0f;
        mtx[9]  = -rsin;
        mtx[10] = rcos;
        mtx[11] = 0.0f;
        mtx[12] = 0.0f;
        mtx[13] = 0.0f;
        mtx[14] = 0.0f;
        mtx[15] = 1.0f;
    }

    // Given the angle in degs, create a 4x4 matrix
    // in mtx which rotates around the Y axis.
    public void rotateAroundY(float degs, float mtx[])
    {
        float rads, rsin, rcos;

        rads = degs*(M_PI/180.0f);
        rsin = (float)Math.sin(rads);
        rcos = (float)Math.cos(rads);
        mtx[0]  = rcos;
        mtx[1]  = 0.0f;
        mtx[2]  = -rsin;
        mtx[3]  = 0.0f;
        mtx[4]  = 0.0f;
        mtx[5]  = 1.0f;
        mtx[6]  = 0.0f;
        mtx[7]  = 0.0f;
        mtx[8]  = rsin;
        mtx[9]  = 0.0f;
        mtx[10] = rcos;
        mtx[11] = 0.0f;
        mtx[12] = 0.0f;
        mtx[13] = 0.0f;
        mtx[14] = 0.0f;
        mtx[15] = 1.0f;
    }

    // Given the angle in degs, create a 4x4 matrix
    // in mtx which rotates around the Z axis.
    public void rotateAroundZ(float degs, float mtx[])
    {
        float rads, rsin, rcos;

        rads = degs*(M_PI/180.0f);
        rsin = (float)Math.sin(rads);
        rcos = (float)Math.cos(rads);
        mtx[0]  = rcos;
        mtx[1]  = rsin;
        mtx[2]  = 0.0f;
        mtx[3]  = 0.0f;
        mtx[4]  = -rsin;
        mtx[5]  = rcos;
        mtx[6]  = 0.0f;
        mtx[7]  = 0.0f;
        mtx[8]  = 0.0f;
        mtx[9]  = 0.0f;
        mtx[10] = 1.0f;
        mtx[11] = 0.0f;
        mtx[12] = 0.0f;
        mtx[13] = 0.0f;
        mtx[14] = 0.0f;
        mtx[15] = 1.0f;
    }

    // Given two 4x4 matrices in mtx1 and mtx2, multiply
    // them and put the result in dest.
    // This routine uses a temporary buffer for the result,
    // so if dest is the same as mtx1 or mtx2, it will still
    // work properly.
    public void multiplyMatrices(float mtx1[], float mtx2[], float dest[])
    {
        float nmtx[] = new float[16];

        nmtx[0] =
            (mtx1[0]*mtx2[0]) +
            (mtx1[1]*mtx2[4]) +
            (mtx1[2]*mtx2[8]) +
            (mtx1[3]*mtx2[12]);
        nmtx[1] =
            (mtx1[0]*mtx2[1]) +
            (mtx1[1]*mtx2[5]) +
            (mtx1[2]*mtx2[9]) +
            (mtx1[3]*mtx2[13]);
        nmtx[2] =
            (mtx1[0]*mtx2[2]) +
            (mtx1[1]*mtx2[6]) +
            (mtx1[2]*mtx2[10]) +
            (mtx1[3]*mtx2[14]);
        nmtx[3] =
            (mtx1[0]*mtx2[3]) +
            (mtx1[1]*mtx2[7]) +
            (mtx1[2]*mtx2[11]) +
            (mtx1[3]*mtx2[15]);
        nmtx[4] =
            (mtx1[4]*mtx2[0]) +
            (mtx1[5]*mtx2[4]) +
            (mtx1[6]*mtx2[8]) +
            (mtx1[7]*mtx2[12]);
        nmtx[5] =
            (mtx1[4]*mtx2[1]) +
            (mtx1[5]*mtx2[5]) +
            (mtx1[6]*mtx2[9]) +
            (mtx1[7]*mtx2[13]);
        nmtx[6] =
            (mtx1[4]*mtx2[2]) +
            (mtx1[5]*mtx2[6]) +
            (mtx1[6]*mtx2[10]) +
            (mtx1[7]*mtx2[14]);
        nmtx[7] =
            (mtx1[4]*mtx2[3]) +
            (mtx1[5]*mtx2[7]) +
            (mtx1[6]*mtx2[11]) +
            (mtx1[7]*mtx2[15]);
        nmtx[8] =
            (mtx1[8]*mtx2[0]) +
            (mtx1[9]*mtx2[4]) +
            (mtx1[10]*mtx2[8]) +
            (mtx1[11]*mtx2[12]);
        nmtx[9] =
            (mtx1[8]*mtx2[1]) +
            (mtx1[9]*mtx2[5]) +
            (mtx1[10]*mtx2[9]) +
            (mtx1[11]*mtx2[13]);
        nmtx[10] =
            (mtx1[8]*mtx2[2]) +
            (mtx1[9]*mtx2[6]) +
            (mtx1[10]*mtx2[10]) +
            (mtx1[11]*mtx2[14]);
        nmtx[11] =
            (mtx1[8]*mtx2[3]) +
            (mtx1[9]*mtx2[7]) +
            (mtx1[10]*mtx2[11]) +
            (mtx1[11]*mtx2[15]);
        nmtx[12] =
            (mtx1[12]*mtx2[0]) +
            (mtx1[13]*mtx2[4]) +
            (mtx1[14]*mtx2[8]) +
            (mtx1[15]*mtx2[12]);
        nmtx[13] =
            (mtx1[12]*mtx2[1]) +
            (mtx1[13]*mtx2[5]) +
            (mtx1[14]*mtx2[9]) +
            (mtx1[15]*mtx2[13]);
        nmtx[14] =
            (mtx1[12]*mtx2[2]) +
            (mtx1[13]*mtx2[6]) +
            (mtx1[14]*mtx2[10]) +
            (mtx1[15]*mtx2[14]);
        nmtx[15] =
            (mtx1[12]*mtx2[3]) +
            (mtx1[13]*mtx2[7]) +
            (mtx1[14]*mtx2[11]) +
            (mtx1[15]*mtx2[15]);
        dest[0]  = nmtx[0];
        dest[1]  = nmtx[1];
        dest[2]  = nmtx[2];
        dest[3]  = nmtx[3];
        dest[4]  = nmtx[4];
        dest[5]  = nmtx[5];
        dest[6]  = nmtx[6];
        dest[7]  = nmtx[7];
        dest[8]  = nmtx[8];
        dest[9]  = nmtx[9];
        dest[10] = nmtx[10];
        dest[11] = nmtx[11];
        dest[12] = nmtx[12];
        dest[13] = nmtx[13];
        dest[14] = nmtx[14];
        dest[15] = nmtx[15];
    }
}
