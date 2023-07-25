/* Print the first n Fibonacci numbers.*/
#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n,i;
	printf("Enter the n value:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("The first n Fibonnaci numbers :%d\n",fibonacci(i));
	printf("\n");
	return 0;
}
int fibonacci(int n)
{
	if(n == 0 || n == 1)
		return 1;
	return  (fibonacci(n-1)+fibonacci(n-2));
}
