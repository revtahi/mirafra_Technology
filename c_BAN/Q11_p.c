// WAP implement XOR functionality with out using XOR(^) operator.

#include<stdio.h>
int main()
{
	int a,b,z;
	printf("Enter a,b value:\n");
	scanf("%x%x",&a,&b);
	z=(~a&b)|a&(~b);
	printf("%x",z);
}
