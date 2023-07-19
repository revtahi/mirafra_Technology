//pointer to constant
#include<stdio.h>
int main()
{
	const int x=5;
	int *ptr=&x;
	printf("before changing %d",x);
	//*ptr=20;
	x=30;//if you wright like this your getting error bcz x is constant int if you want to change x value you can use indirect operator
	printf("after changing %d",x);


}
