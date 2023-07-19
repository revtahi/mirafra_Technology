#include <stdio.h>

int main() 
{
	int c=5;
	void *ptr;
	ptr=&c;
      printf("The void pointer variable is.%d",*((int*)ptr));
   

   return 0;
}
