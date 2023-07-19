/*Count the number of 1's in a 32 bit number by two ways viz Using For Loop and without using For Loop  */

#include<stdio.h>
int main()
{
	int num,c=0,i;
	printf("Enter the number:\n");
	scanf("%x",&num);
	for(i=0;i<32;i++)
	{
		if(num&0x01)
		{
			c++;
		}
	num=num>>1;
	}
	printf("%d",c);

}
