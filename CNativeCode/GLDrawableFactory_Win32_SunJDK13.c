#include "gl4java_drawable_Win32SunJDK13GLDrawableFactory.h"
#include <windows.h>

/* FIXME: extend to support multiple monitors on Win2K/98 */
static HDC getScreenDC(int screen)
{
    return CreateDC("DISPLAY", NULL, NULL, NULL);
}

static void freeScreenDC(HDC dc)
{
    DeleteDC(dc);
}


JNIEXPORT jboolean JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualSupportsOpenGL(JNIEnv *env,
                                                                    jclass unused,
                                                                    jint screen,
                                                                    jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jboolean res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = (jboolean) (pfd.dwFlags & PFD_SUPPORT_OPENGL != 0);
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualDoubleBuffered(JNIEnv *env,
                                                                    jclass unused,
                                                                    jint screen,
                                                                    jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jboolean res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = (jboolean) (pfd.dwFlags & PFD_DOUBLEBUFFER != 0);
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualTrueColor(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jboolean res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = (jboolean) (pfd.iPixelType == PFD_TYPE_RGBA);
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jboolean JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualStereo(JNIEnv *env,
                                                            jclass unused,
                                                            jint screen,
                                                            jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jboolean res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = (jboolean) (pfd.dwFlags & PFD_STEREO != 0);
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualDepthBits(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cDepthBits;
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualStencilBits(JNIEnv *env,
                                                                 jclass unused,
                                                                 jint screen,
                                                                 jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cStencilBits;
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualColorBits(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cColorBits;
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualColorShiftBits(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cRedShift+pfd.cGreenShift+pfd.cBlueShift+pfd.cAlphaShift;
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualAlphaBits(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cAlphaBits;
    freeScreenDC(dc);
    return res;
}

JNIEXPORT jint JNICALL
Java_gl4java_drawable_Win32SunJDK13GLDrawableFactory_getVisualAccumBits(JNIEnv *env,
                                                               jclass unused,
                                                               jint screen,
                                                               jint pixId)
{
    HDC dc;
    PIXELFORMATDESCRIPTOR pfd;
    jint res;
    dc = getScreenDC(screen);
    DescribePixelFormat(dc, pixId, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
    res = pfd.cAccumBits;
    freeScreenDC(dc);
    return res;
}
