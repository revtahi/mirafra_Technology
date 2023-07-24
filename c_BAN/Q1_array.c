/*What happens when array is passed as a pointer in a function. Print the array from the function. */

#include<stdio.h>
int fun(int *ptr);
int main()
{
	int a[5]={1,2,3,4,5};
	fun(a);
}
int fun(int *ptr)
{
	int i;
	for(i=0;i<5;i++)
	printf("%d",ptr[i]);


}
