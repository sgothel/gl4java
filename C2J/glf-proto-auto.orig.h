/* Library initialization (must be called before any usage of library) */
void glfInit(); 
/* Library closing (must be called after usage of library) */
void glfClose();

int	glfUnloadFont();						/* Unload font from memory */
int glfUnloadBFont();						/* Unload current BMF font */
int	glfUnloadFontD(int font_descriptor);	/* Unload font by font_descriptor */
int	glfUnloadBFontD(int bmf_descriptor);	/* Unload BMF font by bmf_descriptor */

/* Text drawing functions */
/* --------- Vector Fonts ---------------- */
void glfDrawWiredSymbol(char s);    /* Draw wired symbol    */
void glfDrawWiredString(const char *s);   /* Draw wired string    */
void glfDrawSolidSymbol(char s);    /* Draw solid symbol    */
void glfDrawSolidString(const char *s);   /* Draw wired string    */
void glfDraw3DWiredSymbol(char s);  /* Draw 3D wired symbol */
void glfDraw3DWiredString(const char *s); /* Draw 3D wired string */
void glfDraw3DSolidSymbol(char s);  /* Draw 3D solid symbol */
void glfDraw3DSolidString(const char *s); /* Draw 3D solid string */

/* --------- Bitmap Fonts ---------------- */
int glfBeginBFont(int Font_Descriptor);       /* Must be called before bitmap text drawing */
void glfEndBFont();       /* Must be called before bitmap text drawing */

void glfDrawBSymbol(char s);        /* Draw one symbol by bitmapped font */
void glfDrawBString(const char *s);       /* Draw string by bitmapped font */
void glfDrawBMaskSymbol(char s);	/* Draw one symbol by bitmapped font (using mask) */
void glfDrawBMaskString(const char *s);	/* Draw string by bitmapped font (using mask) */


/* Text drawing functions by specified font */
void glfDrawWiredSymbolF(int font_descriptor, char s);
void glfDrawWiredStringF(int font_descriptor, const char *s);
void glfDrawSolidSymbolF(int font_descriptor, char s);
void glfDrawSolidStringF(int font_descriptor, const char *s);
void glfDraw3DWiredSymbolF(int font_descriptor, char s);
void glfDraw3DWiredStringF(int font_descriptor, const char *s);
void glfDraw3DSolidSymbolF(int font_descriptor, char s);
void glfDraw3DSolidStringF(int font_descriptor, const char *s);

/* Text control functions */
void glfGetStringBoundsF(int fd, const char *s, float *minx, float *miny, float *maxx, float *maxy);
void glfGetStringBounds(const char *s, float *minx, float *miny, float *maxx, float *maxy);

void  glfSetSymbolSpace(float sp);   /* Set space between symbols */
float glfGetSymbolSpace();           /* Get space between symbols */
void  glfSetSpaceSize(float sp);     /* Set space size            */
float glfGetSpaceSize();             /* Get current space size    */

void  glfSetSymbolDepth(float dpth); /* Set depth of 3D symbol */
float glfGetSymbolDepth();           /* Get depth of 3D symbol */

int   glfSetCurrentFont(int Font_Descriptor);		/* Set current font */
int   glfSetCurrentBFont(int Font_Descriptor);	/* Set current bitmap font */
int   glfGetCurrentFont();							/* Get current font descriptor */
int   glfGetCurrentBFont();		                /* Get current bitmap font descriptor */

void  glfSetAnchorPoint(int anchp); /* Set symbol anchor point */
void  glfSetContourColor(float r, float g, float b, float a); /* Contour color */

/* Enable or Disable GLF features */

void glfEnable(int what); /* Enable GLF feature 'what' */
void glfDisable(int what); /* Disable GLF feature 'what' */

/* Console functions */
void glfSetConsoleParam(int width, int height);
int  glfSetConsoleFont(int Font_Descriptor);
void glfConsoleClear();
void glfPrint(const char *s, int lenght);
void glfPrintString(const char *s);
void glfPrintChar(char s);

void glfConsoleDraw();
void glfSetCursorBlinkRate(int Rate);

/* -------- Centering and direction ------------ */
void glfStringCentering(GLboolean center); /* Set string centering for vector fonts */
GLboolean glfGetStringCentering(); /* Get string centering for vector fonts */

void glfBitmapStringCentering(GLboolean center);  /* Set string centering for bitmap fonts */
GLboolean glfBitmapGetStringCentering();  /* Set string centering for bitmap fonts */

/* String direction for vector font (GLF_LEFT, GLF_RIGHT, GLF_UP, GLF_DOWN) */
/* GLF_LEFT by default */
void glfStringDirection(GLuint direction);
GLuint glfGetStringDirection();

/* -------- Rotating ------------ */
void glfSetRotateAngle(float angle); /* Set rotate angle for vector fonts */
void glfSetBRotateAngle(float angle); /* Set rotate angle for bitmap fonts */
