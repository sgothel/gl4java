#! /bin/sh

#
# run
#
echo args: $*

#
# run java with increased memory, classpath arg
#
java -ms64m -mx64m GL4JTests2 $*

