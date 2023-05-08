#!/usr/bin/make -f

CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
DEP=search_algos.h

main:*.o
	$(CC) -o main $(TAG) *.o

%.o:%.c $(DEP)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm *.o

