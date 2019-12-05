all: main

main: main.o phi.o nwd.o
	clang -o zadanie3.out main.o phi.o nwd.o

main.o: main.c
	clang -c main.c

phi.o: phi.c
	clang -c phi.c

nwd.o: nwd.c
	clang -c nwd.c

clean:
	rm -f zadanie3.out *.o *~
