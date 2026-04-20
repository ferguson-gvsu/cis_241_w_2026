default: example_program

test.o: test.c test.h
	gcc -O3 -Wall -c test.c -o test.o

example_program: main.c test.o
	gcc -O3 -Wall main.c test.o -o example_program

clean:
	rm test.o example_program

debug: main.c test.c test.h
	gcc -g main.c test.c -o example_program
