/*Write a recursion program to implement Factorial. */

#include<stdio.h>
int factorial(int num);
int main()
{
	int f,num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Factorial %d\n",factorial(num));
	
}

int factorial(int num)
{
	if(num==0)
		return 1;
	return num*factorial(num-1);



}
