/* 6. Write a program in C program to calculate the average or median of an array of integers using a callback function to perform the calculation.
   Expected Output:

   Original array elements: 2 5 4 7 1 8 4 6 5 9 10 

   Select an option:
   1. Calculate average of the said array elements:
   2. Calculate median of the said array elements:
Average: 5.545455*/


#include<stdio.h>
int average(int arr[],int n);
int median(int arr[],int n);
int avg_median(int (*fptr[2])(int[] ,int),int arr[],int n,char ch);
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


	int (*fptr[2])(int[],int)={average,median};
	printf("Enter the character :\n average=1 \n median = 2\n");
	scanf(" %c",&ch);
	avg_median(fptr,arr,n,ch);
}
int avg_median(int (*fptr[2])(int[] ,int),int arr[],int n,char ch)
{
	int d;

	switch(ch)
	{
		case '1':
			d=fptr[0](arr,n);
			printf("Sum of array  elements is::%d\n",d);
			break;
		case '2':
			d=fptr[1](arr,n);
			printf("median of array elements is ::%d\n",arr[d]);
			break;

	}
}
int average(int arr[],int n)
{
	int i,s=0,r;

	for(i=0;i<n;i++)
	{
		s= s+arr[i];

	}
	r=s/n;
	return r;

}
int median(int arr[],int n)
{
	int i,j,temp,z;
	printf("sorted array is:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}


	}
	printf("After sorted array is:\n");
	for(i=0;i<n;i++)

		printf("%d\n",arr[i]);
	int k=n%2;
	if(k!=0)
	{
		return k;
	}

}
