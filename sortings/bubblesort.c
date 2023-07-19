//wap bubblesort

#include<stdio.h>
void bubblesort(int arr[],int n);
int main()
{
	int n,i;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Before sorting  array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	bubblesort(arr,n);


	printf("after sorting  array elements:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
void bubblesort(int arr[],int n)
{
	int i,temp,j;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

}
