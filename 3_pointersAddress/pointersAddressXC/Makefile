CPP = g++
CC = gcc
CFLAGS = -I/usr/local/include -Wall
LDFLAGS= -L/usr/local/lib -lportaudio -lpthread

all: pointersAddress

pointersAddress: main.o telOp.o
	$(CPP) -o $@  main.o telOp.o -lpthread

telOp.o: telOp.cpp
		g++ -c telOp.cpp

main.o: main.cpp
		g++ -c main.cpp

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
