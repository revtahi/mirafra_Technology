/* Implement searching algorithms Binary search*/
#include<stdio.h>
int main()
{
	int n,s_e,i,s=0,e,m;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the searching elements:\n");
	scanf("%d",&s_e);
	e=n-1;
	while(s<=e)
	{
		m=(s+e)/2;

		if(a[m]==s_e)
		{
			printf("array element is found at %d position\n",m);
			break;
		}
		else if(s_e>a[m])
		{
			s=m+1;	
		}
		else 
		{
			e=m-1;

		}

	}



}
