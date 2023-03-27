#include"header.h"
int isprime(int n)
{
	int i,c=0;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		//	c++;
			break;
		}
	}
	if(i==(n/2)+1)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}
