CC=gcc
CFLAGS= -Wall


build: ex01numbers.c ex02sqrt.c
	gcc -o ex01numbers.o ex01numbers.c
	gcc -o ex02sqrt.o ex02sqrt.c

clean:
	rm -f ex01numbers.o
	rm -f ex02sqrt.o 

test: ex01numbers.o ex02sqrt.o 
	./ex01numbers.o
	./ex02sqrt.o 