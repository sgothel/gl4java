#! /bin/sh
#gcc -E gl.h | \
cat gl.h glext.h | \
awk -f pre2orig-proto.awk | \
sed -e 's/GLAPIENTRY//g' -e 's/APIENTRY//g' -e 's/GLAPI/extern/g' | \
grep -v MESA > gl-proto-auto.orig
echo please check generated file gl-proto-auto.orig

#gcc -E glu.h | \
cat glu.h | \
awk -f pre2orig-proto.awk | \
sed -e 's/GLAPIENTRY//g' -e 's/GLUAPI/extern/g' -e 's/GLAPI/extern/g' > glu-proto-auto.orig
echo please check generated file glu-proto-auto.orig
