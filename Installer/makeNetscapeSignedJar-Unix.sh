#! /bin/sh

. versiondef.sh

# The Netscape signing keys were created using the Netscape signtool
# utility, as follows:
# copy key3.db and cert7.db from one of the users directories.
# signtool -d . -G GL4JInst205
# Enter the following information:
# certificate common name: GL4JInst205
# organization: GL4Java Development Team
# organization unit: GL4JInst
# state or province: NRW
# country (must be exactly 2 characters): DE
# username: GL4JInst
# email address: gl4java@jausoft.com
# When the certificate has been created, copy x509.cacert to x509.crt using
# the following command: copy x509.cacert x509.crt
# Copy key3.db and cert7.db back to the users directories.

cp ~/.netscape/key3.db .
cp ~/.netscape/cert7.db .

rm -f *.class GL4JInst_ns.jar
javac -classpath ".:../capsapi_classes.zip" *.java

. versionundef.sh

rm -rf META-INF
signtool -d . -e .class -k GL4JInst205 -Z GL4JInst_ns.jar -c9 --norecurse .
rm -rf META-INF

rm -f key3.db cert7.db *.class
