#! /bin/sh

verbose=1

if [ "$1" = "-quiet" ] ; then
	verbose=0
fi

#
# gluNew check !
#
for i in *.java ; do
	a=$(grep -h -c gluNew $i)
	if [ ! \( $a -eq 0 \) ] ; then
	    if [ $verbose -eq 1 ] ; then
		echo $i gluNew used WARNING
	    else
		echo $i
	    fi
	fi
done
