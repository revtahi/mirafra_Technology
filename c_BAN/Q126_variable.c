/* Find the given number if it is a power of 2 or not ? */
#include<stdio.h>
int main()
{
	int p,f=0;
	printf("Enter the power value:\n");
	scanf("%d",&p);
	while(p!=1)
	{
		if(p%2!=0)
		{
			f=1;
		}
		p/=2;
	}
	//f=1;
	if(f==0)
	{
		printf(" it  is a  power of 2\n");
	}
	else
		printf(" not a power of 2\n");
	
	


}
