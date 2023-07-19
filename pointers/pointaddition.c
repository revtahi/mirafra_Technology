//pointer addition

#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,6};
	int *ptr=arr;//points to the 0th element
	ptr=ptr+2;
	printf("%d",*ptr);



}
