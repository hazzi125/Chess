CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = build/main.o build/check_bishop.o build/check_king.o build/check_knight.o build/check_pawn.o build/check_queen.o build/check_rook.o build/hack.o 

OB = build/main_test.o build/check_bishop.o build/check_king.o build/check_knight.o build/check_pawn.o build/check_queen.o build/check_rook.o build/hack.o 

.PHONY: clean all bin build default test

all: bin build default test

default: bin/prog

test: bin/prog_test
	bin/prog_test

bin/prog: $(OBJECTS) 
	$(CXX) $(FLAGS) $(OBJECTS) -o bin/prog

build/main.o: scr/main.c scr/func.h 
	$(CXX) $(CFLAGS) scr/main.c  -o build/main.o

build/check_bishop.o: scr/check_bishop.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_bishop.c -o build/check_bishop.o

build/check_king.o: scr/check_king.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_king.c -o build/check_king.o

build/check_knight.o: scr/check_knight.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_knight.c -o build/check_knight.o

build/check_pawn.o: scr/check_pawn.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_pawn.c -o build/check_pawn.o

build/check_queen.o: scr/check_queen.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_queen.c -o build/check_queen.o

build/check_rook.o: scr/check_rook.c scr/func.h 
	$(CXX) $(CFLAGS) scr/check_rook.c -o build/check_rook.o

build/hack.o: scr/hack.c scr/func.h 
	$(CXX) $(CFLAGS) scr/hack.c -o build/hack.o



bin/prog_test: $(OB) 
	$(CXX) $(FLAGS) $(OB) -o bin/prog_test

build/main_test.o: Test/main_test.c thirdparty/ctest.h scr/func.h 
	$(CXX) $(CFLAGS) -I thirdparty -I scr -c Test/main_test.c -o build/main_test.o

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin
