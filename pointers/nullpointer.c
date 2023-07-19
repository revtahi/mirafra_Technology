#include <stdio.h>

int main() {
	int *ptr =0;  // declare and initialize a null pointer

	if(ptr == NULL) 
	{
		printf("The pointer is a null pointer%d",*ptr);
	} 
	else 
	{
		printf("The pointer is not a null pointer.");
	}

	return 0;
}

