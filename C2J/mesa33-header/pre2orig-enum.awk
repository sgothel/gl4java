BEGIN { printf "typedef enum {\n" }
	{ print "\t" $2 "\t\t = " $3 "," }
END { printf "};\n" }
