#include "postfixCal.h"


stack initStack(int size)
{
    stack S;
    S = malloc(sizeof(struct myStack));

    if (S == NULL)
    {
        printf("Error: the stack is empty \n");
    }
    S->array = malloc(sizeof(char)*size);
    if (S->array == NULL)
    {
        printf("Error: the stack is empty");
    }

    S->stack_size = size;
    S->top_of_stack = 0;

    return S;
}



//void destroyStack(stack S)
//{
  //  if (S != NULL)   
    
//}
