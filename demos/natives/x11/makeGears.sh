#! /bin/sh
gcc -ogears -I/usr/X11R6/include/ gears.c \
	-lGL -lGLU -lglut -L/usr/X11R6/lib -lm
