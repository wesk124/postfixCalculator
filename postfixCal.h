#include <curses.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>


typedef double stackEle;

typedef struct myStack *stack;

typedef struct myStack
{
    int stackSize;
    int top_of_stack; // The index of the array;
    stackEle *array; // The array used for storing the elements of stack
} myStack;



