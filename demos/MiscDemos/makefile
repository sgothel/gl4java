include ../../symbols.mak

JAVA13_SOURCES = \
	DrawColoredPrimitives.java \
	DrawColoredPrimitives2.java \
	GLImageViewerCanvas.java \
	GLImageViewerWorld.java \
	GLImageWorld1.java \
	GearsVS.java \
	SharedGLTest.java \
	SharedGLTest2.java \
	Test.java \
	TestListener.java \
	TriangleRotate.java \
	accanti.java \
	alpha3D.java \
	anti.java \
	coloredCross.java \
	depthcue.java \
	gearRenderer.java \
	gears.java \
	gearsOffScreen2Tga.java \
	gearsOffScreenDrawImage.java \
	glJavaFontTest1.java \
	glutFontBitmapTest.java \
	glutFontBitmapTest2Applet.java \
	glutFontStrokeTest.java \
	morph3d.java \
	nurbs.java \
	pngTextureTestApplet.java \
	select.java \
	spectex.java \
	stencil.java \
	teaambient.java \
	teapots.java \
	tess.java \
	tessdemo.java \
	tesswind.java \
	jahuwaldt/gl/GLTools.java \
	jahuwaldt/gl/Matrix.java \
	jahuwaldt/gl/VirtualSphere.java

JAVA13_CLASSES = ${JAVA13_SOURCES:.java=.class})

ifdef JAVAC_14
	JAVA14_SOURCES = \
		gearsFullScreen.java \
		ScreenResSelector.java
	JAVA14_CLASSES = ${JAVA14_SOURCES:.java=.class})
	HAVE_JAVAC_14     = 1
else
	JAVA14_SOURCES =
	JAVA14_CLASSES =
endif

all: cleanup $(JAVA13_CLASSES) $(JAVA14_CLASSES)

$(JAVA13_CLASSES)       : $(JAVA13_SOURCES)
	$(JAVAC_13) -O -deprecation $^ | tee -a errors

$(JAVA14_CLASSES)       : $(JAVA14_SOURCES)
	$(JAVAC_14) -O -deprecation $^ | tee -a errors

cleanup:
	rm -f errors

