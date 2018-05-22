CXX = gcc
CFLAGS = $(CXX) -c -Wall -Werror
OBJECTS = build/main.o build/hack.o build/check_pawn.o build/check_rook.o build/check_knight.o build/check_bishop.o build/check_queen.o build/check_king.o
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

build/check_rook.o: src/check_rook.c src/func.h
	$(CFLAGS)  src/check_rook.c -o build/check_rook.o

build/check_knight.o: src/check_knight.c src/func.h
	$(CFLAGS)  src/check_knight.c -o build/check_knight.o

build/check_bishop.o: src/check_bishop.c src/func.h
	$(CFLAGS)  src/check_bishop.c -o build/check_bishop.o

build/check_queen.o: src/check_queen.c src/func.h
	$(CFLAGS)  src/check_queen.c -o build/check_queen.o

build/check_king.o: src/check_king.c src/func.h
	$(CFLAGS)  src/check_king.c -o build/check_king.o

bin:
	mkdir bin
build:
	mkdir build

clean:
	-rm -rf build/*.o bin/*
