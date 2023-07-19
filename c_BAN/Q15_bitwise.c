/*Swap the 7th & 8th bits position in a number */

#include<stdio.h>
int main()
{
	int num,result,pos7,pos8;
	printf("Enter the number is:\n");
	scanf("%X",&num);
	pos7=(num>>6)&1;
	pos8=(num>>7)&1;
	num^=(pos7^pos8)<<6;
	num^=(pos7^pos8)<<7;
	printf("After swaping result is %X\n",num);
	
	
}
