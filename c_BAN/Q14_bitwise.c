/*Reverse the bits position in a number  */

#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Reverse of a number is:\n");
	for(i=0;i<32;i++)
	{
		if(num&0x01)
		{
			printf("1");
		}
		else
		{
			printf("0");

		}
	num=num>>1;
	
	}
	printf("\n");

}
