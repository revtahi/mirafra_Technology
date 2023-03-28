//WAP Bitwise even and Odd.

#include<stdio.h>

int main()
{
	int a;

	printf("Enter a value:\n");
	scanf("%d",&a);

	if(a&0x1)
	{
		printf("Given number is odd :%d\n",a);
	}	
	else
	{
		printf("Given number is even :%d\n",a);
	}
}
