#! /bin/sh

#
# Prerequisites:
#
# 	- Unix Shell Environment, e.g. A Unix :-), cygwin32, ...
#
#   	- The native gears executabel in your PATH environment
#
#	- The Shell Setup scripts for all your installed java1.1.X-java2 JVM's
#	  under ./PerformanceEtc/profile.jdk* !!!
#	  Here you have to setup the PATH, CLASSPATH well !
#

if [ -z "$1" -o -z "$2" ] ; then
	echo usage: $0 \<nativeprog and java class\> \<logfilename\>
	echo e.g.: $0 gears gl4j2.4.1-linux-xf68-4.0.1-tdfx-gears.log
	exit 1
fi

testdelay=40s

tstprog=$1
logfile=$2
rm -f $logfile

echo >>  $logfile
echo =============================================== >> $logfile
echo >>  $logfile
echo using native $tstprog >>  $logfile
($tstprog -info >>  $logfile 2>&1) &
sleep $testdelay && kill -15 $!
sleep 5s
echo >>  $logfile
echo >>  $logfile

for i in ./PerformanceEtc/profile.jdk* ; do
	echo >>  $logfile
	echo =============================================== >> $logfile
	echo >>  $logfile
	echo using $tstprog on $i >> $logfile
	echo >>  $logfile
	. $i
	if [ -z "$(echo $i | grep ibm)" ] ; then 
		java -version >> $logfile 2>&1
	else
		java -fullversion >> $logfile 2>&1
	fi
	echo JAVA_COMPILER $JAVA_COMPILER >> $logfile
	echo >>  $logfile
	( java $tstprog -perftest >> $logfile 2>&1) &
	sleep $testdelay && kill -15 $!
	sleep 5s
	echo >>  $logfile
	echo >>  $logfile
done
