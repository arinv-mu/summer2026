/* Example multi-file C project structure */

#include <stdio.h>
#include "utils.h"

int main()
{
  int result = add(5, 3);
  printf("5 + 3 = %d\n", result);

  char msg[100];
  greet("World", msg);
  printf("%s\n", msg);

  return 0;
}
