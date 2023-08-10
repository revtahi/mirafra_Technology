/*10. Write a C program to implement quick sort using callback function.
  Expected Output:

  Before sorting: 5 2 8 9 1 6 7 4 
  After sorting: 1 2 3 4 5 6 7 8*/ 

#include<stdio.h>
int quicksort(int arr[],int s,int e);
int sorting(int (*fptr)(int[] ,int ,int),int arr[],int n);
int main()
{
	int n,e,s;
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


	int (*fptr)(int[],int,int)=quicksort;
	sorting(fptr,arr,n);
	printf("array elements after processing:\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int sorting(int (*fptr)(int[] ,int,int),int arr[],int n)
{
	fptr(arr,0,n-1);
}

int quicksort(int arr[],int s,int e)
{
	int i, j, pivot, temp;
	
	if(s<e){
		pivot=s;
		i=s;
		j=e;
		while(i<j){
			while(arr[i]<=arr[pivot]&&i<e)
				i++;
			while(arr[j]>arr[pivot])
				j--;
			if(i<j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quicksort(arr,s,j-1);
		quicksort(arr,j+1,e);
	}
}
