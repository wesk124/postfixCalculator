#include "postfixCal.h"




void terminate(const char* err)
{
    fprintf(stderr, "%s", err);
    exit(0);
}

stack_elem postfixCal(char *s, const int stack_size)
{
    stack_elem a, b;
    
    struct myStack *my_stack = initStack(stack_size);
    

 //   int i;
    char *e, *w = " \t\n\r\f";

    for (s = strtok(s, w); s; s = strtok(0, w))
    {
        a = strtod(s, &e);
        if (e > s)
             push(a, my_stack);
#define binop(x)  b = pop(my_stack), a = pop(my_stack), push(x, my_stack)
    else if (*s == '+')
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(a+b, my_stack);
    }
    //binop(a + b);
    else if (*s == '-')
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(a-b, my_stack);
    }
    //binop(a - b);
    else if (*s == '*') 
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(b*a, my_stack);
    }
    else if (*s == '/')
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(a/b, my_stack);
    }
   // binop(a / b);
#undef binop
    else
    {
        fprintf(stderr, "'%c:'", *s);
        terminate("ERROR: WRONG OPERATOR, PLEASE ENTER + - * /\n");
    }
   // for (i = my_stack->depth; i-- || 0 * putchar('\n');)
     //   printf(" %g", my_stack->array[i]);

    }
    if (my_stack->depth != 1)
       { terminate("ERROR: OPERATOR IS NOT ENOUGH\n");}
        return pop(my_stack);
        freeStack(my_stack);
}




