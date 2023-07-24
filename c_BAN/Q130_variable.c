/*Write a program to convert decimal to binary and vice versa */

#include<stdio.h>

int main()
{
	int b,rem,decimal=0,mul=1,d;
	
	printf("enter binary number:\n");
	scanf("%d",&b);

	while(b!=0)
	{
		rem=b%10;
		b/=10;
		d=rem*mul;
		decimal+=d;
		mul*=2;
	}
	
	printf("Decimal number=%d\n",decimal);
}
