/*How to ascertain if the machine is little or big endian? */

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	char *c=(char *)&num;
	if(*c==12)
		printf("It is a big endian\n");
	else
		printf("It is a little endian\n");

}
