#! /bin/sh

rm -f xfont

gcc -I/usr/X11R6/include -g -O2 -Wall -o xfont xfont.c \
	-L/usr/X11R6/lib -lGLU -lGL

./xfont

