# Makefile to generate java classes from X fonts
# (including compilation of capturexfont.c)
# by Pontus Lidman
# Copyright 2000 MathCore AB
#
# This file/package is licensed under the terms of the LPGL 
# with the permission of Pontus Lidman / Mathcore !
#

all: cxf strokegen fonts

cxf: capturexfont.c
	gcc -g -Wall capturexfont.c -o cxf -L/usr/X11/lib -lX11

strokegen : strokegen.o strokelex.o
	$(CC) -o $@ $(CFLAGS) strokegen.o strokelex.o 

glut_roman.c : Roman.stroke strokegen
	./strokegen -s glutStrokeRoman < Roman.stroke > $@

glut_mroman.c : MonoRoman.stroke strokegen
	./strokegen -s glutStrokeMonoRoman < MonoRoman.stroke > $@

strokegen.h strokegen.c : strokegen.y
	$(YACC) -d strokegen.y
	mv y.tab.c strokegen.c
	mv y.tab.h strokegen.h

strokelex.c : strokelex.l
	$(LEX) strokelex.l
	mv lex.yy.c strokelex.c

fonts:	data/glutBitmapHelvetica10.java \
	data/glutBitmapHelvetica12.java \
	data/glutBitmapHelvetica18.java \
	data/glutBitmapTimesRoman10.java \
	data/glutBitmapTimesRoman24.java \
	data/glutBitmap8By13.java \
	data/glutBitmap9By15.java \
	data/glutStrokeRoman.java \
	data/glutStrokeMonoRoman.java

data/glutBitmapHelvetica12.java: cxf
	./cxf \
	'-adobe-helvetica-medium-r-*--12-*-*-*-p-*-iso8859-1' \
	glutBitmapHelvetica12 \
	>data/glutBitmapHelvetica12.java

data/glutBitmapHelvetica10.java: cxf
	./cxf \
	'-adobe-helvetica-medium-r-*--10-*-*-*-p-*-iso8859-1' \
	glutBitmapHelvetica10 \
	>data/glutBitmapHelvetica10.java

data/glutBitmapHelvetica18.java: cxf
	./cxf \
	'-adobe-helvetica-medium-r-*--18-*-*-*-p-*-iso8859-1' \
	glutBitmapHelvetica18 \
	>data/glutBitmapHelvetica18.java

data/glutBitmapTimesRoman10.java: cxf
	./cxf \
	'-adobe-times-medium-r-*--10-*-*-*-p-*-iso8859-1' \
	glutBitmapTimesRoman10 \
	>data/glutBitmapTimesRoman10.java

data/glutBitmapTimesRoman24.java: cxf
	./cxf \
	'-adobe-times-medium-r-*--24-*-*-*-p-*-iso8859-1' \
	glutBitmapTimesRoman24 \
	>data/glutBitmapTimesRoman24.java

data/glutBitmap8By13.java: cxf
	./cxf \
	8x13 \
	glutBitmap8By13 \
	>data/glutBitmap8By13.java

data/glutBitmap9By15.java: cxf
	./cxf \
	9x15 \
	glutBitmap9By15 \
	>data/glutBitmap9By15.java

data/glutStrokeMonoRoman.java: strokegen
	./strokegen -s glutStrokeMonoRoman <MonoRoman.stroke >data/glutStrokeMonoRoman.java

data/glutStrokeRoman.java: strokegen
	./strokegen -s glutStrokeRoman <Roman.stroke >data/glutStrokeRoman.java

clean:
	rm -f   *.o cxf strokegen \
		glut_roman.c \
		glut_mroman.c \
		strokegen.h \
		strokegen.c \
		strokelex.c

cleanall: clean
	rm -f   *.class \
		data/glutBitmapHelvetica10.java \
		data/glutBitmapHelvetica12.java \
		data/glutBitmapHelvetica18.java \
		data/glutBitmapTimesRoman10.java \
		data/glutBitmapTimesRoman24.java \
		data/glutBitmap8By13.java \
		data/glutBitmap9By15.java \
		data/glutStrokeRoman.java \
		data/glutStrokeMonoRoman.java

