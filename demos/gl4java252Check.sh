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
done

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
