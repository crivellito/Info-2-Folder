aplicacion: main.o operaciones.o operaciones-copia.o
	gcc -Wall -o aplicacion main.o operaciones.o

main.o: main.c
	gcc -Wall -c main.c

operaciones.o: operaciones.c
	gcc -Wall -c operaciones.c

operaciones-copia.o: operaciones-copia.c
	gcc -Wall -c operaciones-copia.c

clean:
	rm -f *.o main
