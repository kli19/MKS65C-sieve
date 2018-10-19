all : sieve.o demo.o
	gcc sieve.o demo.o -lm
run :
	./a.out
clean: 
	rm *.o
	rm *~
sieve.o: sieve.c sieve.h
	gcc -c sieve.c 
demo.o: demo.c sieve.h
	gcc -c demo.c 
