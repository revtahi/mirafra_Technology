//WAP insertion sorting

#include<stdio.h>

int main()
{
	int n,i,t,j;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("before  sorting  array elements:\n");

	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);

	for(i=1;i<n;i++)
	{
		t=arr[i];
		for(j=i-1;(j>=0&&arr[j]>t);j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=t;


	}
	printf("after  sorting  array elements:\n");

	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
