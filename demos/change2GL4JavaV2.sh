#! /bin/sh

if [ -z $1 -a -z $2 ] ; then
	echo usage: $0 input-file output-file
	exit 0
fi
sed -e 's/gljGetFpsCounter/cvsGetFpsCounter/g' \
    -e 's/gljResetFpsCounter/cvsResetFpsCounter/g' \
    -e 's/gljGetWidth/cvsGetWidth/g' \
    -e 's/gljGetHeight/cvsGetHeight/g' \
    -e 's/gljDispose/cvsDispose/g' \
    -e 's/gljUse()/gljMakeCurrent(true)/g' \
    -e 's/glj/glj.glj/g' \
    -e 's/gl[^a-z]/gl.&\1/g' \
    -e 's/glut/glut.&\1/g' \
    -e 's/glu/glu.&\1/g' \
    -e 's/GLCanvasV2.gl.glClassDebug/GLContext.gljClassDebug/g' \
    -e 's/GLCanvasV2.gl.glNativeDebug/GLContext.gljNativeDebug/g' \
    -e 's/gl.glClassDebug/GLContext.gljClassDebug/g' \
    -e 's/gl.glNativeDebug/GLContext.gljNativeDebug/g' \
    -e 's/import GL4Java/import gl4java.awt/g' \
    -e 's/GL4Java/gl4java/g' \
    $1 > $2
