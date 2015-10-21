CC=g++
CFLAGS=-I

DiscreteMathematics: main.o ./Chapter-3/largestInteger.o
	$(CC) -o DiscreteMathematics main.o ./Chapter-3/largestInteger.o
