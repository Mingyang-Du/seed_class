CC=gcc
CFLAGS=-Wall -g
TARGET=helloworld
SRC=main.c

main: main.c
	$(CC) $(CFLAGS) main.c -o main
