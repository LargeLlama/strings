all: driver.o mystring.o
	gcc -o strings.out driver.o mystring.o

driver.o: driver.c mystring.h
	gcc -c driver.c

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

clean:
	rm *.o

run:
	./strings
