#ifndef POSTFIXCAL_H
#define POSTFIXCAL_H


#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>


typedef char *stackEle;

typedef struct myStack *stack;


typedef struct myStack
{
    int stack_size;
    int top_of_stack; // The index of the array;
    stackEle *array; // The array used for storing the elements of stack
} myStack;

stack initStack(int size);

void destroyStack(stack S);

int isEmpty();

int isFull();

int push(stackEle input, stack S);

int pop(stack S);

stackEle peek(stack S);



#endif

