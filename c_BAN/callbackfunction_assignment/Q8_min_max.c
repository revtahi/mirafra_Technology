/*8. Write a C program to find the largest or smallest element in an array using a callback function to compare the elements.
  Expected Output:

  Original array elements: 7 0 4 2 9 5 1 

  The minimum element is 0
  The maximum element is 9*/

#include<stdio.h>
int mme(int arr[],int n);
int min_max(int (*fptr)(int[] ,int),int arr[],int n);
int main()
{
	int n;
	printf("Enter the array size:\n");
	scanf("%d",&n);

	int arr[n],i;

	printf("Enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("array elements before processing:\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");


	int (*fptr)(int[],int)=mme;

	min_max(fptr,arr,n);
}
int min_max(int (*fptr)(int[] ,int),int arr[],int n)
{

	(*fptr)(arr,n);
}
int mme(int arr[],int n)
{
	int i,r,small,big;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			small=arr[i];
			big=arr[i];
		}
		else
		{
			if(arr[i]>big)
			{

				big=arr[i];
			}
			if(arr[i]<small)
			{
				small=arr[i];
			}
		}
	}
	printf("maximum elements is :%d\n",big);

	printf("smallest  elements is :%d\n",small);
}
