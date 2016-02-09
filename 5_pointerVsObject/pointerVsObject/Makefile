CPP = g++
CC = gcc



all: pointerVsObject

pointerVsObject: main.o Melody.o
	$(CPP) -o $@  main.o Melody.o -lpthread

Melody.o: Melody.cpp
		g++ -c Melody.cpp

main.o: main.cpp
		g++ -c main.cpp

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
