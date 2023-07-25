//WAP Bitwise swap

#include<stdio.h>

int main()
{
	int a,b;

	printf("enter the a,b values:\n");
	scanf("%x%X",&a,&b);

	printf("Before swaping a:%X b:%X\n",a,b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("After swaping a:%X b:%X\n",a,b);

}
