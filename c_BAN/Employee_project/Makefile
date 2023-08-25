all:out
	echo "build done"
out: main.o employee.o billing2.o 
	gcc main.o employee.o billing2.o -o out
main.o:main.c
	gcc -c main.c
employee.o:employee.c
	gcc -c employee.c
billing2.o:billing2.c
	gcc -c billing2.c

clean:
	rm *.o out
install:
	sudo cp out /bin/
