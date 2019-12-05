all: main
	rm -f *.o

main: main.o rozwiazanie.o f.o
	clang -o zadanie2.out main.o f.o rozwiazanie.o -lm

main.o: main.c
	clang -c main.c

rozwiazanie.o: rozwiazanie.c
	clang -c rozwiazanie.c

f.o: f.c
	clang -c f.c

clean:
	rm -f zadanie2.out *.o *~