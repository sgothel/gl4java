/*****************************************************************

  Xmame OpenGL driver

  Written based on the x11 driver by Mike Oliphant - oliphant@ling.ed.ac.uk

    http://www.ling.ed.ac.uk/~oliphant/glmame

  This code may be used and distributed under the terms of the
  Mame license

*****************************************************************/
/* pretend we're x11.c otherwise display and a few other crucial things don't
   get declared */
#define __X11_C_   
#define __XOPENGL_C_

#define RRand(range) (random()%range)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <assert.h>
#include <string.h>
#include <excpt.h>
#include "common.h"
#include "usrintrf.h"
#include "osdepend.h"
#include "mame.h"
#include "driver.h"
#include "MAME32.h"
#include "Display.h"
#include "Sound.h"
#include "Keyboard.h"
#include "Joystick.h"
#include "Trak.h"
#include "resource.h"
#include "M32Util.h"

#include "wgl.h"

/*
#ifndef NOSEAL
#include "SealSound.h"      /* For sound devices. 
#endif
*/

struct GameOptions mame_options;
static void MamePlayGame();
static int              page_index;
static game_data_type*  game_data; 
static int              game_count;

static int  last_sort = 0;

/* global data--know where to send messages */
static BOOL in_emulation;

/* quit after game */
static BOOL quit;

/* idle work at startup */
static BOOL idle_work;
static int  game_index;

int winwidth=640;
int winheight=480;
float fxgamma=1.0;

static HDC thisWin;
static HWND thisHwnd;
/*
static wglWnd thisCwnd;
*/
static HGLRC cx;

static int fx=0;
static int fxwin=0;
extern int screendirty;
extern int doublebuffer;
extern int dodepth;

/***************************************************************************
    Function prototypes
 ***************************************************************************/

static LRESULT CALLBACK     MAME32_MessageProc(HWND, UINT, WPARAM, LPARAM);
static HWND                 MAME32_CreateWindow(void);
static void                 MAME32_ProcessMessages(void);
static BOOL                 MAME32_PumpAndReturnMessage(MSG* pMsg);
static void                 MAME32_Quit(void);
static BOOL                 OnMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
static void                 OnActivateApp(HWND hWnd, BOOL fActivate, DWORD dwThreadId);
static void                 OnSysCommand(HWND hWnd, UINT cmd, int x, int y);
static void                 OnClose(HWND hWnd);

/***************************************************************************
    External variables
 ***************************************************************************/

/*
struct tMAME32App   MAME32App = 
{
    { NULL },                   /* m_hwndUI          
    { NULL },                   /* m_hWnd            
    { "MAME32" },               /* m_pName           
    { FALSE },                  /* m_bIsInitialized  
    { FALSE },                  /* m_bIsActive       
    { FALSE },                  /* m_bPaused         
    { FALSE },                  /* m_bMMXDetected    
    { FALSE },                  /* m_bUseAIMouse     
    { NULL },                   /* m_pDisplay        
    { NULL },                   /* m_pSound          
    { NULL },                   /* m_pKeyboard       
    { NULL },                   /* m_pJoystick       
    { NULL },                   /* m_pTrak           
    { NULL },                   /* m_pFMSynth        

    { MAME32_CreateWindow },            /* CreateMAMEWindow     
    { MAME32_ProcessMessages },         /* ProcessMessages      
    { MAME32_PumpAndReturnMessage },    /* PumpAndReturnMessage 
    { MAME32_Quit },                    /* Quit                 
    { NULL }					/* detect MMX           
};
*/

/***************************************************************************
    Internal structures
 ***************************************************************************/

/***************************************************************************
    Internal variables
 ***************************************************************************/

static BOOL auto_pause;

/***************************************************************************
    External functions  
 ***************************************************************************/

/*
void MAME32App_init(options_type *options)
{
    MAME32App.m_hWnd = NULL;

    MAME32App.m_bIsInitialized = FALSE;
    MAME32App.m_bIsActive      = FALSE;
    MAME32App.m_bIsPaused      = FALSE;

    MAME32App.m_pDisplay    = NULL;
    MAME32App.m_pSound      = NULL;
    MAME32App.m_pKeyboard   = NULL;
    MAME32App.m_pJoystick   = NULL;
    MAME32App.m_pTrak       = NULL;
    MAME32App.m_pFMSynth    = NULL;

    auto_pause = options->auto_pause;

    /*
        Machine->scrbitmap is not initialized in the mame source
        until after the call to osd_create_display().
        This causes a problem if osd_create_display() detects an error,
        then shows the error message box, which causes focus to change,
        which causes OnPause() to be called, which uses Machine->scrbitmap.
        Whew. So it needs to be set to NULL so it doesn't crash in OnPause().
    /
    Machine->scrbitmap = NULL;
}
*/



/***************************************************************************
    Internal OPENGL functions
 ***************************************************************************/

// Color Palette handle
HPALETTE hPalette = NULL;
// Set Pixel Format function - forward declaration
void SetDCPixelFormat(HDC hDC);
HPALETTE GetOpenGLPalette(HDC hDC);
HGLRC tempRC;

static HGLRC get_GC( HDC hDC )
{
        if( hDC == 0 )
			return 0; /* printf( "get_GC: Error, HDC is zero\n"); */

	// Select the pixel format
	SetDCPixelFormat(hDC);

	// Create palette if needed
	hPalette = GetOpenGLPalette(hDC);

    tempRC = wglCreateContext( hDC );

    /* check if the context could be created */
    if( tempRC == NULL ) {
        /* fprintf(stderr, "getGC context could NOT be created \n"); */
        return( 0 );
    }

    /* associated the context with the X window */
    if( wglMakeCurrent( hDC, tempRC ) == FALSE) {
     wglDeleteContext( tempRC );
        return( 0 );
    }

    return tempRC;
}

// Select the pixel format for a given device context
void SetDCPixelFormat(HDC hDC)
{
    int nPixelFormat=0;

    static PIXELFORMATDESCRIPTOR pfd = {
	    sizeof(PIXELFORMATDESCRIPTOR),  // Size of this structure
	    1,                              // Version of this structure
	    PFD_DRAW_TO_WINDOW |            // Draw to Window (not to bitmap)
	    PFD_SUPPORT_OPENGL |	    // Support OpenGL calls in window
	    PFD_DOUBLEBUFFER,               // Double buffered
	    PFD_TYPE_RGBA,                  // RGBA Color mode
	    24,                             // Want 24bit color
	    0,0,0,0,0,0,                    // Not used to select mode
	    0,0,                            // Not used to select mode
	    0,0,0,0,0,                      // Not used to select mode
	    32,                             // Size of depth buffer
	    0,                              // Not used to select mode
	    0,                              // Not used to select mode
	    PFD_MAIN_PLANE,                 // Draw in main plane
	    0,                              // Not used to select mode
	    0,0,0 };                        // Not used to select mode

    // Choose a pixel format that best matches that described in pfd
    nPixelFormat = ChoosePixelFormat(hDC, &pfd);

    // Set the pixel format for the device context
    if(SetPixelFormat(hDC, nPixelFormat, &pfd)==FALSE)
	    MessageBox(thisHwnd, "could not set PixelFormat", "ERROR", 
			       MB_OK|MB_ICONERROR); 

}


// If necessary, creates a 3-3-2 palette for the device context listed.
HPALETTE GetOpenGLPalette(HDC hDC)
{
    HPALETTE hRetPal = NULL;	// Handle to palette to be created
    PIXELFORMATDESCRIPTOR pfd;	// Pixel Format Descriptor
    LOGPALETTE *pPal;			// Pointer to memory for logical palette
    int nPixelFormat;			// Pixel format index
    int nColors;				// Number of entries in palette
    int i;						// Counting variable
    BYTE RedRange,GreenRange,BlueRange;
							    // Range for each color entry (7,7,and 3)


    // Get the pixel format index and retrieve the pixel format description
    nPixelFormat = GetPixelFormat(hDC);
    DescribePixelFormat(hDC, nPixelFormat, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

    // Does this pixel format require a palette?  If not, do not create a
    // palette and just return NULL
    if(!(pfd.dwFlags & PFD_NEED_PALETTE))
	    return NULL;

    // Number of entries in palette.  8 bits yeilds 256 entries
    nColors = 1 << pfd.cColorBits;	

    // Allocate space for a logical palette structure plus all the palette entries
    pPal = (LOGPALETTE*)malloc(sizeof(LOGPALETTE) + nColors*sizeof(PALETTEENTRY));

    // Fill in palette header
    pPal->palVersion = 0x300;		// Windows 3.0
    pPal->palNumEntries = nColors; // table size

    // Build mask of all 1's.  This creates a number represented by having
    // the low order x bits set, where x = pfd.cRedBits, pfd.cGreenBits, and
    // pfd.cBlueBits.  
    RedRange = (1 << pfd.cRedBits) -1;
    GreenRange = (1 << pfd.cGreenBits) - 1;
    BlueRange = (1 << pfd.cBlueBits) -1;

    // Loop through all the palette entries
    for(i = 0; i < nColors; i++)
	    {
	    // Fill in the 8-bit equivalents for each component
	    pPal->palPalEntry[i].peRed = (i >> pfd.cRedShift) & RedRange;
	    pPal->palPalEntry[i].peRed = (unsigned char)(
		    (double) pPal->palPalEntry[i].peRed * 255.0 / RedRange);

	    pPal->palPalEntry[i].peGreen = (i >> pfd.cGreenShift) & GreenRange;
	    pPal->palPalEntry[i].peGreen = (unsigned char)(
		    (double)pPal->palPalEntry[i].peGreen * 255.0 / GreenRange);

	    pPal->palPalEntry[i].peBlue = (i >> pfd.cBlueShift) & BlueRange;
	    pPal->palPalEntry[i].peBlue = (unsigned char)(
		    (double)pPal->palPalEntry[i].peBlue * 255.0 / BlueRange);

	    pPal->palPalEntry[i].peFlags = (unsigned char) NULL;
	    }
	    

    // Create the palette
    hRetPal = CreatePalette(pPal);

    // Go ahead and select and realize the palette for this device context
    SelectPalette(hDC,hRetPal,FALSE);
    RealizePalette(hDC);

    // Free the memory used for the logical palette structure
    free(pPal);

    // Return the handle to the new palette
    return hRetPal;
}


/***************************************************************************
    Internal functions
 ***************************************************************************/

/* Create display */

static BOOL Win32UI_init(HINSTANCE hInstance, LPSTR lpCmdLine, int nCmdShow)
{
    static BOOL     bRegistered = FALSE;

    if (bRegistered == FALSE)
    {
        WNDCLASS    WndClass;

        WndClass.style          = CS_SAVEBITS | CS_BYTEALIGNCLIENT | CS_OWNDC;
        WndClass.lpfnWndProc    = MAME32_MessageProc;
        WndClass.cbClsExtra     = 0;
        WndClass.cbWndExtra     = 0;
        WndClass.hInstance      = hInstance;
        WndClass.hIcon          = LoadIcon(hInstance, MAKEINTATOM(IDI_MAME32_ICON));
        WndClass.hCursor        = LoadCursor(NULL, IDC_ARROW);
        WndClass.hbrBackground  = (HBRUSH)GetStockObject(NULL_BRUSH);
        WndClass.lpszMenuName   = NULL;
        WndClass.lpszClassName  = (LPCSTR)"classMAME32";
        
        if (RegisterClass(&WndClass) == 0)
            return FALSE;
        bRegistered = TRUE;
    }

    thisHwnd = CreateWindowEx(0,
                          "classMAME32",
                          "WGLMAME" ,
                          WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME | WS_BORDER,
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          640, 480,
                          NULL,
                          NULL,
                          hInstance,
                          NULL);

	ShowWindow(thisHwnd, nCmdShow);

	/* thisCwnd.attach(thisHwnd); */
	thisWin = GetDC(thisHwnd);

    wglMakeCurrent(NULL, NULL);

    /* get the graphics context for this widget */
    if( (cx = get_GC( thisWin )) == 0 )
    {
	    MessageBox(thisHwnd, "could not create GLContext", "ERROR", 
			       MB_OK|MB_ICONERROR); 

    } else {
	    MessageBox(thisHwnd, "could create GLContext", "OK", MB_OK); 
    }

    SetFocus(thisHwnd);

	return thisHwnd!=NULL;
}

static LRESULT CALLBACK MAME32_MessageProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    LRESULT Result = 0;
	HDC hdc = 0;

	switch(Msg)
	{
		case WM_DESTROY: 
			PostQuitMessage(0);
			return 0L;

		case WM_QUIT:
			OnClose(thisHwnd);
			return 0;

		case WM_PAINT:
			hdc = (HDC) wParam; 
			return DefWindowProc(hWnd, Msg, wParam, lParam);
	}
    return DefWindowProc(hWnd, Msg, wParam, lParam);
}


static void OnClose(HWND hWnd)
{
    /* Don't call DestroyWindow, it will be called by osd_exit. */
    wglMakeCurrent(NULL, NULL);
	DestroyWindow(thisHwnd);
}


static BOOL idle_work;


int WINAPI WinMain(HINSTANCE    hInstance,
                   HINSTANCE    hPrevInstance,
                   LPSTR        lpCmdLine,
                   int          nCmdShow)
{
    MSG     msg;

    if (!Win32UI_init(hInstance, lpCmdLine, nCmdShow))
	{
	    MessageBox(thisHwnd, "could not create window ...", "ERROR", 
			       MB_OK|MB_ICONERROR); 
		OnClose(thisHwnd);
        return 1;
	}

	/* Set the samplerate to 0 if sound is disabled,
	   this should notify mame not to "render" it (speed improvement) */
	Machine->sample_rate = 0;
	mame_options.samplerate = 0;

    /*
        Simplified MFC Run() alg. See mfc/src/thrdcore.cpp.
    */
        /* phase2: pump messages while available */
		while (GetMessage(&msg, NULL, 0, 0)) 
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

    return 0;
}


void MamePlayGame()
{
	char buf[1000];
	int index = 0;

    if (run_game(index ,&mame_options) != 0)
    {
        const struct RomModule *romp = drivers[index]->rom;

        /* This needs to be changed to use a window with a scrollbar
         * because the list can be too large to fit on the screen.
         */
        sprintf(buf, "Unable to initialize machine emulation.\r\n\r\n"
                     "Most likely you have a corrupt ROM file.\r\n"
                     "The following files must exist in the specified\r\n"
                     "directory or .zip file for %s to run.\r\n\r\n",
                     drivers[index]->description);

        sprintf(buf + strlen(buf), "Directory:\r\n");
        GetCurrentDirectory(sizeof(buf) - strlen(buf), buf + strlen(buf));
        sprintf(buf + strlen(buf), "\\%s\r\n\r\n", drivers[index]->name);
        sprintf(buf + strlen(buf), "or .zip file:\r\n");
        GetCurrentDirectory(sizeof(buf) - strlen(buf), buf + strlen(buf));
        sprintf(buf + strlen(buf), "\\roms\\%s.zip\r\n\r\n", drivers[index]->name);

        sprintf(buf + strlen(buf), "Files:\r\n");
        while (romp->name || romp->offset || romp->length)
        {
            romp++; /* skip memory region definition */

            while (romp->length)
            {
                char name[100];
                int length;

                sprintf(name, romp->name, drivers[index]->name);

                length = 0;

                do
                {
                    /* ROM_RELOAD */
                    if (romp->name == (char *)-1)
                        length = 0; /* restart */

                    length += romp->length & ~0x80000000;

                    romp++;
                } while (romp->length && (romp->name == 0 || romp->name == (char *)-1));

                sprintf(buf + strlen(buf), "%-12s\t%u bytes\n", name, length);
            }
        }

        MessageBox(thisHwnd, buf, "MAME32 Error", MB_OK | MB_ICONERROR);
    }

    in_emulation = FALSE;
    
    if (quit)
    {
       PostMessage(thisHwnd, WM_CLOSE, 0, 0);
       return;
    }

}
