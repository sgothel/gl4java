#! /bin/sh
gcc -E gl.h | \
awk -f pre2orig-proto.awk | \
sed -e 's/GLAPIENTRY//g' -e 's/GLAPI/extern/g' > gl-proto-auto.orig
echo please check generated file gl-proto-auto.orig

gcc -E glu.h | \
awk -f pre2orig-proto.awk | \
sed -e 's/GLAPIENTRY//g' -e 's/GLUAPI/extern/g' > glu-proto-auto.orig
echo please check generated file glu-proto-auto.orig
