//WAP binaryserching

#include<stdio.h>

int main()
{
	int n,i,mid ,left,right,search,f=0;
	printf("Enter the array size:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the searching element:\n");
	scanf("%d",&search);

	left=0;
	right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(search==arr[mid])
		{
			printf("search found at %d\n",mid);
			f=1;
			break;
		}
		else if(search<arr[mid])
			right=mid-1;
		else
			left=mid+1;
	}
		if(f==0)
			printf("serch not found\n");


}
