//WAP Add given number to 1

#include<stdio.h>

int main()
{
	int n,r=1,num;
	printf("Enter the number:\n");
	scanf("%d",&n);
//	num=n;
	while(n&r)
	{
	n=n^r;
	r=r<<1;
	}
	n=n^r;
	printf("%d",n);


}
