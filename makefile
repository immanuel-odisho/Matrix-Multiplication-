all: main main2

main: main.o fillrand.o dot.o matmat.o matvec.o checkres.o
	gcc -o main -Wall -ansi main.o fillrand.o dot.o matmat.o matvec.o checkres.o
   main.o: main.c
	gcc -c main.c
   fillrand.o: fillrand.c
	gcc -c fillrand.c
   dot.o: dot.c
	gcc -c dot.c
   matmat.o: matmat.c
	gcc -c matmat.c
   matvec.o: matvec.c
	gcc -c matvec.c
   checkres.o: checkres.c
	gcc -c checkres.c

main2: main2.o fillrand.o dot.o matmat.o matvec.o checkres.o
	gcc -o main2 -Wall -ansi main2.o fillrand.o dot.o matmat.o matvec.o checkres.o

   main2.o: main2.c
	gcc -c main2.c

   clean:
	rm *.o main main2


