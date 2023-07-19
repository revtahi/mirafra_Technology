/* Toggle bits in a number within a Range */

#include<stdio.h>
int main()
{
	int num,pos;
	printf("Enter the number:\n");
	scanf("%x",&num);
	printf("Enter the position:\n");
	scanf("%d",&pos);

	num=num^(0x01<<pos);
	printf("%x\n",num);
	



}
