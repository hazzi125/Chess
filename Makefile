CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = build/main.o build/check_bishop.o build/check_king.o build/check_knight.o build/check_pawn.o build/check_pawn2.o build/check_queen.o build/check_rook.o build/hack.o 

OB = build/main_test.o build/check_bishop.o build/check_king.o build/check_knight.o build/check_pawn.o build/check_pawn2.o build/check_queen.o build/check_rook.o build/hack.o 

.PHONY: clean all bin build bin/chess bin/chess_test default test

all: bin build bin/chess bin/chess_test default test

default: bin/chess/prog

test: bin/chess_test/prog_test
	bin/chess_test/prog_test

bin/chess/prog: $(OBJECTS) 
	$(CXX) $(FLAGS) $(OBJECTS) -o bin/chess/prog

build/main.o: src/main.c src/func.h 
	$(CXX) $(CFLAGS) src/main.c  -o build/main.o

build/check_bishop.o: src/check_bishop.c src/func.h 
	$(CXX) $(CFLAGS) src/check_bishop.c -o build/check_bishop.o

build/check_king.o: src/check_king.c src/func.h 
	$(CXX) $(CFLAGS) src/check_king.c -o build/check_king.o

build/check_knight.o: src/check_knight.c src/func.h 
	$(CXX) $(CFLAGS) src/check_knight.c -o build/check_knight.o

build/check_pawn.o: src/check_pawn.c src/func.h 
	$(CXX) $(CFLAGS) src/check_pawn.c -o build/check_pawn.o

build/check_pawn2.o: src/check_pawn2.c src/func.h 
	$(CXX) $(CFLAGS) src/check_pawn2.c -o build/check_pawn2.o

build/check_queen.o: src/check_queen.c src/func.h 
	$(CXX) $(CFLAGS) src/check_queen.c -o build/check_queen.o

build/check_rook.o: src/check_rook.c src/func.h 
	$(CXX) $(CFLAGS) src/check_rook.c -o build/check_rook.o

build/hack.o: src/hack.c src/func.h 
	$(CXX) $(CFLAGS) src/hack.c -o build/hack.o



bin/chess_test/prog_test: $(OB) 
	$(CXX) $(FLAGS) $(OB) -o bin/chess_test/prog_test

build/main_test.o: Test/main_test.c thirdparty/ctest.h src/func.h 
	$(CXX) $(CFLAGS) -I thirdparty -I src -c Test/main_test.c -o build/main_test.o

build:
	mkdir build
bin:
	mkdir bin 
bin/chess:
	mkdir bin/chess
bin/chess_test:
	mkdir bin/chess_test
clean:
	-rm -rf build bin
