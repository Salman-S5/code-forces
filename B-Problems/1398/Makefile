CC = g++
CFLAGS = -Wall -Wextra -g -std=c++17

all: main run clean

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

run: main
	./main

clean:
	rm -f main
