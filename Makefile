CC = gcc
CFLAGS = -Wall -Wextra -Iinclude 

all: build/contacts

run:
	./build/contacts

build/contacts: build/main.o build/contact.o build/cli.o
	$(CC) build/main.o build/contact.o build/cli.o -o build/contacts

build/cli.o: src/cli.c | build
	$(CC) $(CFLAGS) -c src/cli.c -o build/cli.o 

build/main.o: src/main.c | build
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/contact.o: src/contact.c | build
	$(CC) $(CFLAGS) -c src/contact.c -o build/contact.o

build:
	mkdir -p build

clean:
	rm -rf build