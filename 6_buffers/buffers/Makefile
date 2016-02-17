CPP = g++
CC = gcc
CFLAGS = -I/usr/local/include -Wall
LDFLAGS= -L/usr/local/lib -lpthread

all: buffer

buffer: main.o buffer.o dynacBuffer.o
	$(CPP) -o $@  main.o buffer.o dynacBuffer.o -lpthread

dynacBuffer.o: dynacBuffer.cpp
	g++ -c dynacBuffer.cpp

buffer.o: buffer.cpp
		g++ -c buffer.cpp

main.o: main.cpp
		g++ -c main.cpp

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
