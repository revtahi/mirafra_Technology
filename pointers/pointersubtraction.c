//pointer subtraction

#include<stdio.h>
int main()
{
	int arr[]={2,30,40,5,6};
	int *ptr=&arr[4];
	int *ptr2=&arr[2];
	int d=ptr2-ptr;//pointer to pointer subtraction

	int e=*(ptr-2);//
	printf("%d",e);



}
