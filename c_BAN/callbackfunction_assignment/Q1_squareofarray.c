/*1. Write a C program to print the square of array elements using callback function.
  Expected Output:
  Array elements before processing: 1 2 3 4 5 6 
  Square of the array elements after processing: 1 4 9 16 25 36  */

#include<stdio.h>
int square(int arr[],int n);

int squareofarray(int (*fptr)(int[] ,int),int arr[],int n);
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

	int (*fptr)(int[],int)=square;

	squareofarray(fptr,arr,n);
}
int squareofarray(int (*fptr)(int[] ,int),int arr[],int n)
{
	int d,i;
	(*fptr)(arr,n);
	printf("Square of the array elements after processing:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int square(int arr[],int n)
{
	int i,r;
	for(i=0;i<n;i++)
	{
		arr[i]= arr[i]*arr[i];

	}

}
