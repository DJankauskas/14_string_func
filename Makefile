all: main.o function.o
	gcc -o strtest function.o main.o

main.o: main.c function.h
	gcc -c main.c

function.o: function.c function.h
	gcc -c function.c

clean:
	rm *.o
	rm strtest

run:
	./strtest

