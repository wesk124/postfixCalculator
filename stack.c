#include "stack.h"
#include "postfixCal.h"
Stack initStack(int size)
{
    Stack s;
    s = malloc (sizeof (struct myStack));
    s->array = malloc (sizeof(stack_elem) *size );
    s->size = size;
    s->depth = 0;
    return s;
}

void push (stack_elem v, Stack s)
{
  s->array[s->depth++] = v;
}

stack_elem pop (Stack s)
{
    if (!s->depth)
        terminate("ERROR: OPERAND IS NOT ENOUGH!\n");
    return s->array[--(s->depth)];

}

void freeStack(Stack s)
{
    free(s->array);
    free(s);
}
