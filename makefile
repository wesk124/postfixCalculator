all: main


main: main.o stack.o postfixCal.o
	gcc main.o stack.o postfixCal.o -o main

main.o: main.c
	gcc -c main.c

stack.o: stack.c
	gcc -c stack.c

postfixCal.o: postfixCal.c
	gcc -c postfixCal.c

clean: 
	rm *.o main
