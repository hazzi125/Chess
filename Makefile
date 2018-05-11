CXX = gcc
CFLAGS = $(CXX) -c -Wall -Werror
OBJECTS = build/main.o build/hack.o build/check_pawn.o 
.PHONY: all clean

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/main.o: src/main.c src/func.h
	$(CFLAGS) src/main.c -o build/main.o

build/hack.o: src/hack.c src/func.h
	$(CFLAGS)  src/hack.c -o build/hack.o

build/check_pawn.o: src/check_pawn.c src/func.h
	$(CFLAGS)  src/check_pawn.c -o build/check_pawn.o

bin:
	mkdir bin
build:
	mkdir build

clean:
	-rm -rf build/*.o bin/*
