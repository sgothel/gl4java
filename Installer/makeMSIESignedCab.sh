#! /bin/sh

. versiondef.sh

# The Microsft signing keys were created using the Microsoft makecert and
# cert2spc utilities, as follows:
# makecert -nscp -r -n CN=GL4JInst GL4JInst.cer -sv GL4JInst.pvk
#     (when prompted for a password, click "None")
# cert2spc GL4JInst.cer GL4JInst.spc

rm -f *.class GL4JInst.cab
//D/MSJAVASDK/BIN/jvc -nomessage -x- -cp:p .\;..\\CAPSAPI_CLASSES.ZIP *.java

. versionundef.sh

//D/MSJAVASDK/Bin/cabarc N GL4JInst.cab *.class
# signcode -j javasign.dll -jp low -spc GL4JInst.spc -k GL4JInst GL4JInst.cab
//D/MSJAVASDK/Bin/signcode -j javasign.dll -jp low -spc GL4JInstDemo.spc -v GL4JInstDemo.pvk GL4JInst.cab
rm *.class
