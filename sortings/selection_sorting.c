//WAP selection sorting

#include<stdio.h>

int main()
{
	int n,i,t,j,min;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("before  sorting  array elements:\n");

	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);

	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}

		t=arr[i];
		arr[i]=arr[min];
		arr[min]=t;

	}
	printf("after  sorting  array elements:\n");

	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
