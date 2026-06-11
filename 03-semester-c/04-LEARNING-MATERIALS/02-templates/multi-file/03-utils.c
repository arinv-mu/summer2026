/* utils.c - Implementation of utility functions */

#include <stdio.h>
#include <string.h>
#include "utils.h"

/* Add two numbers */
int add(int a, int b)
{
  return a + b;
}

/* Create greeting message */
void greet(const char *name, char *output)
{
  sprintf(output, "Hello, %s!", name);
}
