/*3. Write a C program to calculate the sum or product of an array of integers using a callback function.
  Expected Output:

  Original array elements: 10 20 30 40 50 60 
Sum: 210
Product: 720000000 */

#include<stdio.h>
int sop(int arr[],int n);
int sum_product(int (*fptr)(int[] ,int),int arr[],int n);
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


	int (*fptr)(int[],int)=sop;

	sum_product(fptr,arr,n);
}
int sum_product(int (*fptr)(int[] ,int),int arr[],int n)
{

	(*fptr)(arr,n);
}
int sop(int arr[],int n)
{
	int i,r,s=0,p=1;
	for(i=0;i<n;i++)
	{
		s= s+arr[i];

		p= p*arr[i];
	}
	printf("Sum of array elements is :%d\n",s);

	printf("Product of array elements is :%d\n",p);
}
