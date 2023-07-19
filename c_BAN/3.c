/*What happens if you try to add an element to array which falls outside the boundary.
Example - int A[10], int A[21]=11;*/

#include<stdio.h>
int main()
{
	int a[5]={1,2,3};
	a[21]=11;
	printf("%d ",a[21]);
}
