default: example_program 

example_program: test.o main.c
	gcc -O3 test.o main.c -o example_program

test.o: test.c test.h
	gcc -O3 -c test.c -o test.o

clean:
	rm test.o example_program

debug: main.c test.c test.h
	gcc -g main.c test.c -o example_program

git: 
	git add main.c test.c test.h
	git commit
