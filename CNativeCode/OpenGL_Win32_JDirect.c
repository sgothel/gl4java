/*
 * Original Author: Leo Chan -- 1995
 *
 * Adam King 1997
 *		Ported to Win32 from X
 *
 * Ron Cemer 1999
 *      Ported to MS Java VM, which supports JDirect instead of JNI
 *
 * This file takes care of the C implementation of finding the correct
 * Win32 window, assigning an OpenGL graphics context to it, storing that
 * graphics context in the java class data structure.
 *
 * also contains the use() and swap() functions for double buffering
 *
 * September 12, 1997	- Adam King
 *		- Added support for rendering directly into a Canvas ( BIG rewrite )
 *
 * Currently, only the windows special overlapping window procs are
 * implemented here !
 *
 * The other procs are implemented with JNI !
 */

#ifdef _WIN32_
	#include "winstuff.h"
#endif

#include "GL/gl.h"

#include <stdio.h>

/*--------------------------------------------------------------------------
 * here on in is just regular apple pie C
 */

#include <GL\gl.h>
#include <gl\glu.h>
#include <wingdi.h>

#define CLASS_NAME "GL4JavaOglRenderingWindowClass"
#define WINDOW_NAME "GL4JavaOglRenderingWindow"

#define MAX_WINDOWS 1024

static int verbose = 0;
static LONG classregistered = 0;

static LRESULT CALLBACK CallWndProc(int nCode,WPARAM wParam,LPARAM lParam);
static LRESULT CALLBACK CallWndRetProc(int nCode,WPARAM wParam,LPARAM lParam);

BOOL APIENTRY DllMain
	(HANDLE hModule, 
     DWORD ul_reason_for_call, 
     LPVOID lpReserved)
	{
    switch (ul_reason_for_call)
        {
        case DLL_PROCESS_ATTACH:
                /* Initialize various things the first time
                   that we attach this DLL to a process. */
            if (InterlockedIncrement(&classregistered) == 1)
		        {
		        WNDCLASS wndclass;
		        LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

		        wndclass.style         = CS_GLOBALCLASS | CS_SAVEBITS;
		        wndclass.lpfnWndProc   = (WNDPROC)WindowProc;
		        wndclass.cbClsExtra    = 0;
		        wndclass.cbWndExtra    = 0;
		        wndclass.hInstance     = hModule;
		        wndclass.hIcon         = LoadIcon(NULL,IDI_APPLICATION);
		        wndclass.hCursor       = LoadCursor(NULL,IDC_ARROW);
		        wndclass.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
		        wndclass.lpszMenuName  = NULL;
		        wndclass.lpszClassName = CLASS_NAME;
		        RegisterClass(&wndclass);
                }
            else
                InterlockedDecrement(&classregistered);
            break;
        case DLL_PROCESS_DETACH:
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
        }
    return TRUE;
	}	/* DllMain() */

// Select the pixel format for a given device context

static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
    return DefWindowProc(hwnd,uMsg,wParam,lParam);
	}	/* WindowProc() */

__declspec(dllexport) void OGLWindowMsgPumpJDirect(void)
    {
	MSG msg;

	while (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
		{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		}
    }   /* OGLWindowMsgPumpJDirect() */

__declspec(dllexport) void moveOGLWindowNativeJDirect(int _hdc, int x, int y, int width, int height)
	{
	HWND hwnd, hwndParent;
	HDC hdc = (HDC)_hdc;
    RECT rect;
    int parentx = 0, parenty = 0;
    int insetsleft = 0, insetstop = 0;

	if (hdc != NULL)
		{
		if ((hwnd = WindowFromDC(hdc)) != NULL)
            {
            if ((hwndParent = GetParent(hwnd)) != NULL)
                {
                GetWindowRect(hwndParent,&rect);
                parentx = rect.left;
                parenty = rect.top;
                }
            else
                parentx = parenty = 0;
            MoveWindow(hwnd,x-parentx,y-parenty,width,height,TRUE);
            GetWindowRect(hwnd,&rect);
            insetsleft = rect.left-x;
            insetstop = rect.top-y;
            if ( (insetsleft) || (insetstop) )
                MoveWindow(hwnd,x-(parentx+insetsleft),y-(parenty+insetstop),width,height,TRUE);
            }
		}
	}	/* moveOGLWindowNativeJDirect() */

__declspec(dllexport) int createOGLWindowNativeJDirect(int hwndParent, int x, int y, int width, int height)
	{
	HWND hwnd;
    HDC hdc;

	if ((hwnd = CreateWindow
		(CLASS_NAME,
		 WINDOW_NAME,
		 WS_CHILD | WS_VISIBLE | WS_DISABLED,
		 x,
		 y,
		 width,
		 height,
		 (HWND)hwndParent,
		 NULL,
		 NULL,
		 NULL)) == NULL)
		{
        fprintf(stderr,"createOGLWindowNativeJDirect(): CreateWindow failed!\n");
		fprintf(stderr,"GetLastError() returns: %d\n",(int)GetLastError());
		return(0);
		}
    hdc = GetDC(hwnd);
    moveOGLWindowNativeJDirect((int)hdc, x, y, width, height);
    return (int)hdc;
	}	/* createOGLWindowNativeJDirect() */

__declspec(dllexport) void destroyOGLWindowNativeJDirect(int _hdc)
	{
	HWND hwnd;
	HDC hdc = (HDC)_hdc;

	if (hdc != NULL)
		{
		if ((hwnd = WindowFromDC(hdc)) != NULL)
			{
			ReleaseDC(hwnd,hdc);
            DestroyWindow(hwnd);
			}
		}
	}	/* destroyOGLWindowNativeJDirect() */


