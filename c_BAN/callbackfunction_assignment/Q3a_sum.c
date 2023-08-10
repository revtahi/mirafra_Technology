/*3. Write a C program to calculate the sum or product of an array of integers using a callback function.
  Expected Output:

  Original array elements: 10 20 30 40 50 60 
Sum: 210
Product: 720000000 */

#include<stdio.h>
int sum(int arr[],int n);
int product(int arr[],int n);
int sum_product(int (*fptr[2])(int[] ,int),int arr[],int n,char ch);
int main()
{
	int n;
	char ch;
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


	int (*fptr[2])(int[],int)={sum,product};
	printf("Enter the character :\n sum=+ \n product = *\n");
	scanf(" %c",&ch);
	sum_product(fptr,arr,n,ch);
}
int sum_product(int (*fptr[2])(int[] ,int),int arr[],int n,char ch)
{
	int d;

	switch(ch)
	{
		case '+':
			d=fptr[0](arr,n);
			printf("Sum of array  elements is::%d\n",d);
			break;
		case '*':
			d=fptr[1](arr,n);
			printf("product of array elements is ::%d\n",d);
			break;

	}
}
int sum(int arr[],int n)
{
	int i,r,s=0,p=1;
	for(i=0;i<n;i++)
	{
		s= s+arr[i];

	}
	return s;

}
int product(int arr[],int n)
{
	int i,p=1;
	for(i=0;i<n;i++)
	{
		p= p*arr[i];

	}
	return p;
}
