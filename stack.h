#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef double stack_elem;
typedef struct myStack *Stack;

struct myStack
{
    int size;
    int depth;
    stack_elem *array;
}; // defined type stack;

Stack initStack(int size);

void push(stack_elem v, Stack s);

stack_elem pop(Stack s);

void freeStack(Stack s);






#endif
