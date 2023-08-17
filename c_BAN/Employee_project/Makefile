all:out
	echo "build done"
out: main.o employee.o billing.o 
	gcc main.o employee.o billing.o -o out
main.o:main.c
	gcc -c main.c
employee.o:employee.c
	gcc -c employee.c
billing.o:billing.c
	gcc -c billing.c

clean:
	rm *.o out
install:
	sudo cp out /bin/
