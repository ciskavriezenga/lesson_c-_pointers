CPP = g++
CC = gcc
CFLAGS = -I/usr/local/include -Wall
LDFLAGS= -L/usr/local/lib -lportaudio -lpthread

all: simplePointerExample

simplePointerExample: main.o
	$(CPP) -o $@  main.o -lpthread

main.o: main.cpp
		g++ -c main.cpp

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
