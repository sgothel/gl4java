#! /bin/sh

echo WARNING WARNING
echo This generated files are heavily edited !
echo We exit now ...
#exit 0

grep "#define GL_" gl.h > gl-enum-auto.orig.pre
grep "#define GL_" glext.h >> gl-enum-auto.orig.pre
cat gl-enum-auto.orig.pre | sort -b -u | \
grep -v -e "?" -e "GL_FALSE" -e "GL_TRUE" \
	-e "= 1,$" | sort -b -u | \
awk -f pre2orig-enum.awk > gl-enum-auto.orig
rm -f gl-enum-auto.orig.pre
echo please check generated file gl-enum-auto.orig

grep "#define GLU_" glu.h > glu-enum-auto.orig.pre
cat glu-enum-auto.orig.pre | sort -b -u | \
awk -f pre2orig-enum.awk | \
grep -v -e "?" -e "= 1,$" > glu-enum-auto.orig
rm -f glu-enum-auto.orig.pre
echo please check generated file glu-enum-auto.orig
