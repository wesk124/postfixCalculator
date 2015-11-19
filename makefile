all: rpn

rpn: main.o stack.o postfixCal.o
	gcc main.o stack.o postfixCal.o -o rpn

main.o: main.c
	gcc -c main.c

stack.o: stack.c
	gcc -c stack.c

postfixCal.o: postfixCal.c
	gcc -c postfixCal.c

clean: 
	rm *.o rpn
