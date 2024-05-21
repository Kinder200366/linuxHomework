menu: main.o menu.o log.o
	gcc -o menu main.o menu.o log.o

main.o: main.c menu.h
	gcc -c main.c

menu.o: menu.c menu.h log.h
	gcc -c menu.c

log.o: log.c log.h
	gcc -c log.c

clean:
	rm *.o menu