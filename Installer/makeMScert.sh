#! /bin/sh

# The Microsft signing keys were created using the Microsoft makecert and
/MSJVM/Bin/makecert -nscp -r -n CN=GL4JInst282 GL4JInst282.cer -sv GL4JInst282.pvk
#     (when prompted for a password, click "None")
/MSJVM/Bin/cert2spc GL4JInst282.cer GL4JInst282.spc

