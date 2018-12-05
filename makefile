pgm2: main.o readclasses.o breakApart.o reorder.o printtypes.o specifictime.o specificclass.o
	gcc -o pgm2 main.o readclasses.o breakApart.o reorder.o printtypes.o specifictime.o specificclass.o -lm
	./pgm2

main.o: main.c class.h
	gcc -c -Wall main.c 

readclasses.o: readclasses.c class.h
	gcc -c -Wall readclasses.c

breakApart.o: breakApart.c class.h
	gcc -c -Wall breakApart.c

reorder.o: reorder.c class.h
	gcc -c -Wall reorder.c

printtypes.o: printtypes.c class.h
	gcc -c -Wall printtypes.c

specifictime.o: specifictime.c class.h
	gcc -c -Wall specifictime.c

specificclass.o: specificclass.c class.h
	gcc -c -Wall specificclass.c
