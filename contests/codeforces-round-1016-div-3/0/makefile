CC = g++
CFLAGS = -Wall -Wextra -g 

all: clear main run clean

clear:
	clear

main: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

run: main
	./main

clean:
	rm -f main

