/* 2. Write C program to sort an array of integers in ascending or descending order using a callback function to compare the elements.
   Expected Output:

   Original array: 7 2 0 5 8 9 

   Ascending order: 0 2 5 7 8 9 

   Descending order: 9 8 7 5 2 0*/

#include<stdio.h>
int order(int arr[],int n,char ch);
int ascending_descending(int (*fptr)(int[] ,int,char),int arr[],int n,char ch);
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


	int (*fptr)(int[],int,char)=order;
	printf("Enter the character :\n Ascending=1 \n Descending = 2\n");
	scanf(" %c",&ch);
	ascending_descending(fptr,arr,n,ch);
}
int ascending_descending(int (*fptr)(int[] ,int,char),int arr[],int n,char ch)
{
	fptr(arr,n,ch);
}

int order(int arr[],int n,char ch)
{
	int i=0,j,temp;

	switch(ch)
	{
		case '1':
			printf("##### Ascending order #####\n");
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
			for(i=0;i<n;i++)
				printf("arr[%d]=%d\n",i,arr[i]);
				break;
		case '2':
			printf("##### Descending order #####\n");
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]<arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			for(i=0;i<n;i++)
				printf("arr[%d]=%d\n",i,arr[i]);

				break;
	}

}
