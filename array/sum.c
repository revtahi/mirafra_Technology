/*Given an unsorted integer array, find a pair with the given sum in it.

For example,

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)*/


#include<stdio.h>
int main()
{
	int i,j,n,t,sum=0;
	printf("enter the array size:\n");
	scanf("%d",&n);

	printf("enter the target element:\n");
	scanf("%d",&t);

	int r[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&r[i]);

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{	
			sum=r[i]+r[j];
			if(sum==t)
			{
				printf("(%d %d)\n",r[i],r[j]);
			}
		}
//	printf("pair not found\n");

	}
	printf("pair not found\n");

}
