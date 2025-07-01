CC=gcc
CFLAGS=-Wall -g
TARGET=helloworld
SRC=main.c


terminal: terminal.c
	$(CC) $(CFLAGS) terminal.c -o terminal
