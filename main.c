// Author: Sheng Wei
// File Name: main.c
// File Description: the main.c contains a main function which will call a posfixCal();
// Date: 15/11/2015
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "stack.h"
#include "postfixCal.h"
#define MAXSIZE 100

int main()
{

    char in_str [256];
    fgets (in_str, 256, stdin);
    printf("%g\n", postfixCal(in_str, MAXSIZE));


    return 0;
    
}
