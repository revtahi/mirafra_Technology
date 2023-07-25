/* WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?*/

#include<stdio.h>
int main()
{
	int x,c=0,i;
	printf("Enter number:\n");
	scanf("%x",&x);
	while(x!=0x00)
	{
		x=x&(x-1);
		c++;
	}
	printf("Number of 1's in :%d\n",c);
	
}
