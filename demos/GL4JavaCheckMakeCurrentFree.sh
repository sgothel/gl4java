#! /bin/sh

verbose=1

if [ "$1" = "-quiet" ] ; then
	verbose=0
fi

#
# MakeCurrent/Free check
#
for i in *.java ; do
	a=$(grep -h -c gljMakeCurrent $i)
	b=$(grep -h -c gljFree $i)
	if [ ! \( $a -eq $b \) ] ; then
	    if [ $verbose -eq 1 ] ; then
		echo $i MakeCurrent/Free ERROR
	    else
		echo $i
	    fi
	fi
	if [ \( $a -eq 0 \) ] ; then
	    if [ $verbose -eq 1 ] ; then
		echo $i MakeCurrent never called ERROR
	    else
		echo $i
	    fi
	fi
done

