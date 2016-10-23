CC=gcc
CFLAGS=-Wall

all: hexcmp.tar.bz2

hexcmp:
	${CC} -I. hexcmp.c hexfile.c -o hexcmp

hexcmp.tar.bz2:hexcmp
	tar -cf hexcmp.tar hexcmp
	bzip2 -9 hexcmp.tar

clean:
	rm -f *.o hexcmp core

install: hexcmp
	sudo cp hexcmp /usr/local/bin
