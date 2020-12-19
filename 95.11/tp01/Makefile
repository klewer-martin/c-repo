$(CC)=gcc

all: make_main clean


make_main: main.o arguments.o
	$(CC) main.o arguments.o -o main

main.o: src/main.c include/main.h include/arguments.h include/macros.h
	$(CC) -c src/main.c

arguments.o: src/arguments.c include/arguments.h include/macros.h
	$(CC) -c src/arguments.c

clean:
	rm -f *.o


