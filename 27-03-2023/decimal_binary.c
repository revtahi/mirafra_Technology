//WAP decimal to binary

#include<stdio.h>
int main()
{
	int d,i,j;
	int arr[100];
	printf("enter decimal number:\n");
	scanf("%d",&d);

	for(i=0;d>0;i++)
	{
		arr[i]=d%2;
		d=d/2;

	}
	
	printf("decimal to binary number is\n"); 
	for(j=i-1;j>=0;j--)

		printf("%d ",arr[j]);
}
