/*How to access the fixed memory location in embedded C? Demonstrate a program */

//In C, you can access a fixed memory location using a pointer. The following is an example that demonstrates how to access a fixed memory location in C

#include<stdio.h>
int main()
{
	int x=55;
	int *ptr;
	ptr=&x;

	printf("Value stored in the fixed memory location in :%d\n",*ptr);
}
