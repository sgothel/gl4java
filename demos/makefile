JAVAC = javac


JAVA_APPL_FILES 	= olympicCvs.java \
			  starCvs.java \
			  waveCvs.java \
			  glOlympicCvsApplet.java \
			  glOlympicSwingApplet.java \
			  glLogoCvs.java \
			  glLogoCvsApplet.java \
			  glDemosCvs.java   \
			  testTextPPM1.java  

.SUFFIXES 		: .java .class

.java.class:    
	$(JAVAC) -deprecation $< 2>&1 | tee -a errors 

all: ${JAVA_APPL_FILES:.java=.class}

showdest:
	echo ${JAVA_APPL_FILES:.java=.class} ${C_APPL_FILES:.c=.o}

clean: 
	rm -f *.o *~ errors *.dll

cleanall: clean
	rm -f *.class ${C_APPL_FILES:.c=}
	rm -f $(find . -name \*.o -o -name \*.exe )


