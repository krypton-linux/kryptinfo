kryptinfo : kryptinfo.c
	clang -Wall -o kryptinfo kryptinfo.c

install : 
	install -n /usr/bin kryptinfo
