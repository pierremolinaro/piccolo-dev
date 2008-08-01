CC=gcc
CFLAGS=-Wall

all: hexcmp

hexcmp:
	${CC} -I. hexcmp.c hexfile.c -o hexcmp

clean:
	rm -f *.o hexcmp core

install: hexcmp
	sudo cp hexcmp /usr/local/bin
