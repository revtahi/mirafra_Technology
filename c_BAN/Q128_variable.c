/* Change decimal number into binary and print the same. */

#include<stdio.h>
int main()
{
	int d,a[50],i;
	printf("Enter a decimal number:\n");
	scanf("%d",&d);
	while(d>0)
	{
		a[i]=d%2;
		d=d/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");


}
