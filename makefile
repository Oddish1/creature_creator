CC=g++
CFLAGS=-std=c++20
SRC=src/main.cpp
BIN=bin/main

all:
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

clean:
	rm -f $(BIN)
