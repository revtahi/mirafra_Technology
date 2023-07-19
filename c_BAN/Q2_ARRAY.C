/*What will happen if you try to access a value which is out of array boundary*/

#include<stdio.h>
int main()
{
	int n=3,i;
	/*printf("Enter the array size:\n");
	scanf("%d\n",&n);*/
	int a[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("print the array elements:\n");
	for(i=0;i<8;i++)
		printf("%d",a[i]);


}
