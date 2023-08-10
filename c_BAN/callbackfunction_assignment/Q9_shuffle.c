/* 9. Write a C program to shuffle the elements of an array using a callback function to generate random numbers for swapping.
   Expected Output:

   Original array elements: 1 2 3 4 5 
   Shuffled array elements: 3 5 2 1 4 */

#include<stdio.h>
int shuffle(int arr[],int n,int p[]);
int sorting(int (*fptr)(int[] ,int,int[]),int arr[],int n,int[]);
int main()
{
	int n;
	printf("Enter the array size:\n");
	scanf("%d",&n);

	int arr[n],i,p[n];

	printf("Enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("Enter the position  array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);

	}

	printf("array elements before processing:\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");


	int (*fptr)(int[],int,int[])=shuffle;
	sorting(fptr,arr,n,p);

	printf("array elements after processing:\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int sorting(int (*fptr)(int[] ,int,int []),int arr[],int n,int p[])
{
	fptr(arr,n,p);
}

int shuffle(int arr[],int n, int p[])
{
	int arr2[n],i;

	for ( i = 0; i < n; i++) {
		arr2[p[i]] = arr[i];
	}

	for ( i = 0; i < n; i++) {
		arr[i] = arr2[i];
	}
} 
