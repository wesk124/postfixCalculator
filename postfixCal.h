#ifndef POSTFIXCAL_H
#define POSTFIXCAL_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "stack.h"

void terminate(const char *err);

stack_elem postfixCal(char *s, const int stack_size);


#endif
