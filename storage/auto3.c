#include<stdio.h>

int fun( auto int a,int b);
int main()
{
	auto int a=5;
	int b=6,sum=0;
//	sum=a+b;
	printf("%d",fun(a,b));


}
int fun( auto int a,int b)
{
	int s=0;
	s=a+b;
	return s;


}
