all: postfixCalculator


postfixCalculator: main.o postfixCal.o
	gcc main.o postfixCal.o -o postfixCalculator

main.o: main.c
	gcc -c main.c

postfixCal.o: postfixCal.c
	gcc -c postfixCal.c

clean: 
	rm *.o postfixCalculator
