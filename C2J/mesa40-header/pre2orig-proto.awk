BEGIN { }
/^[ \t]*GL[U]?API/,/;/ { print $0; }
END { }
