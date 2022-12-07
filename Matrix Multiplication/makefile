main: main.o mylib.o
	gcc -Wall -O0 -o main.out main.o mylib.o

time: time.o mylib.o
	gcc -Wall -O0 -o time.out time.o mylib.o

space: space.o mylib.o
	gcc -Wall -O0 -o space.out space.o mylib.o

main.o:
	gcc -o main.o -c main_test.c

mylib.o: 
	gcc -o mylib.o -c mylib/mylib.c

time.o: 
	gcc -o time.o -c main_b_time.c

space.o: 
	gcc -o space.o -c main_b_space.c


	

clear:
	rm -f *.o
	rm -f *.out
	rm -f *.dat