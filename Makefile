kryptinfo : kryptinfo.c
	clang -Wall -o kryptinfo kryptinfo.c

install : 
	install -Dm744 /usr/bin kryptinfo
