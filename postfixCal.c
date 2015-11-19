// Author: Sheng Wei
// File Name: postfixCal.c
// File Description: Source file 
//
//
//



#include "postfixCal.h"




void terminate(const char* err)
{
    fprintf(stderr, "%s", err);
    exit(0);
}

stack_elem postfixCal(char *s)
{
    stack_elem a, b;
   
    int stack_size  = strlen(s);  

    struct myStack *my_stack = initStack(stack_size);
    
    char *e, *w = " \t\n\r\f";

    for (s = strtok(s, w); s; s = strtok(0, w))
    {
        a = strtod(s, &e);
        if (e > s)
             push(a, my_stack);
    else if (*s == '+')
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(a+b, my_stack);
    }
    else if (*s == '-')
    {
        b = pop(my_stack);
        a = pop(my_stack);
        push(a-b, my_stack);
    }
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
    else
    {
        fprintf(stderr, "'%c:'", *s);
        terminate("ERROR: WRONG OPERATOR, PLEASE ENTER + - * /\n");
    }

    }
    if (my_stack->depth != 1)
       { terminate("ERROR: OPERATOR IS NOT ENOUGH\n");}
        return pop(my_stack);
        freeStack(my_stack);
}




