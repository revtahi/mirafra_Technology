/*Implement searching algorithms Liner search .*/
#include<stdio.h>
int linearsearch(int a[],int n,int s_e);
int main()
{
	int n,s_e;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the searching element:\n");
	scanf("%d",&s_e);

	int result=linearsearch(a,n,s_e);
	if(result)
	{
		printf("elements is present at %d position\n",result);
	}
	else
	{
		printf("Element is not found in array\n");
	}
}
int linearsearch(int a[],int n,int s_e)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==s_e)
			return i;
	}
	return 0;

}
