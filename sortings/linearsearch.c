//WAP linearsearch

#include<stdio.h>
int main()
{
	int n,i,search,f=0;
	printf("Enter the array size:\n");
	scanf("%d",&n);

	int arr[n];
	printf("Enter the array element:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the search element:\n");
	scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{	
			printf("search found at %d  positon\n",i+1);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("search not found\n");
	}


}
