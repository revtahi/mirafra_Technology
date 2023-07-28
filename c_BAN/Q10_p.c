// WAP implement addition functionality with out using ADD('+') Operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a,b values:\n");
	scanf("%x%x",&a,&b);
	printf("%x\n",(a-~b-1));

}
