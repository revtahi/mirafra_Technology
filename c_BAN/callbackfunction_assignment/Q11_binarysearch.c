/* 11. Write a program in C program to use to perform a binary search for an element in a sorted array using callback function.
   Expected Output:

   Before sorting: 5 2 8 9 1 6 7 4
   After sorting: 1 2 3 4 5 6 7 8*/

#include<stdio.h>
int bubblesort(int arr[],int n);
int sorting(int (*fptr)(int[] ,int),int arr[],int n);
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


	int (*fptr)(int[],int)=bubblesort;
	/*printf("Enter the character :\n Ascending=1 \n Descending = 2\n");
	  scanf(" %c",&ch);*/
	sorting(fptr,arr,n);
}
int sorting(int (*fptr)(int[] ,int),int arr[],int n)
{
	fptr(arr,n);
}

int bubblesort(int arr[],int n)
{
	int i=0,j,temp,s_e,s=0,e,m;

	printf("##### bubble sort #####\n");
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
	printf("Enter the searching elements:\n");
	scanf("%d",&s_e);

	e=n-1;
	while(s<=e)
	{
		m=(s+e)/2;

		if(arr[m]==s_e)
		{
			printf("array element is found at %d position\n",m);
			break;
		}
		else if(s_e>arr[m])
		{
			s=m+1;	
		}
		else 
		{
			e=m-1;

		}

	}

} 
