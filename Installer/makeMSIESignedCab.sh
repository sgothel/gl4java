#! /bin/sh

. versiondef.sh

# The Microsft signing keys were created using the Microsoft makecert and
# cert2spc utilities, as follows:
# makecert -nscp -r -n CN=GL4JInst GL4JInst281.cer -sv GL4JInst281.pvk
#     (when prompted for a password, click "None")
# cert2spc GL4JInst281.cer GL4JInst281.spc

rm -f *.class GL4JInst.cab
/MSJVM/BIN/jvc -nomessage -x- -cp:p .\;..\\CAPSAPI_CLASSES.ZIP *.java

. versionundef.sh

/MSJVM/Bin/cabarc N GL4JInst.cab *.class
# signcode -j javasign.dll -jp low -spc GL4JInst.spc -k GL4JInst GL4JInst.cab
/MSJVM/Bin/signcode -j javasign.dll -jp low -spc GL4JInst281.spc -v GL4JInst281.pvk GL4JInst.cab
rm *.class
