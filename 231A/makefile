CC = g++
CFLAGS = -Wall -Wextra -g 

all: main run clean

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

run: main
	./main

clean:
	rm -f main