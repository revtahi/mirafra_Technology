//constant to pointer
#include<stdio.h>
int main()
{
	 int x=5;
	int const *ptr=&x;
	printf("before changing %d",x);
	//*ptr=20;
	x=30;
	printf("after changing %d",x);


}
