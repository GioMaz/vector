CC=gcc
CFLAGS=-Wall

all: main

main: main.o
	$(CC) $(CFLAGS) -o main main.o

run: main
	./main

clean:
	rm -rf main *.o
