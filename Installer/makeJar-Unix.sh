#! /bin/sh

. versiondef.sh


rm -f *.class GL4JInstaller.jar

javac -classpath ".:../capsapi_classes.zip" *.java

. versionundef.sh

rm -rf META-INF

jar cf GL4JInstaller.jar *.class

rm -f *.class
