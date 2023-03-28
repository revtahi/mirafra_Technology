//WAP powerof2

#include<stdio.h>

int main()
{
	int a;

	printf("Enter a value:\n");
	scanf("%d",&a);

	if((a&(a-1))==0)
	{
		printf("%d is power of 2 \n",a);
	}
	
	else
	{	
		printf("%d is not a power of 2 \n",a);
	}
}
