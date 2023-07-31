/*How to access the fixed memory location in embedded C */


/*In embedded systems programming, it is sometimes necessary to access a specific, fixed memory location in order to manipulate specific data values. This can be achieved in C by using pointers and type casting.*/


#include <stdio.h>
#define MEMORY_LOCATION 0x1234

int main() {
  volatile int *memory_pointer = (int *)MEMORY_LOCATION;
  *memory_pointer = 123;
  int value = *memory_pointer;
  printf("Value at memory location 0x%x is %d\n", MEMORY_LOCATION, value);
  return 0;
}

