kryptinfo : kryptinfo.c
  clang -Wall -o kryptinfo kryptinfo.c

install : 
  install -f /usr/bin -o -s kryptinfo
