/*Write a program to check if the number is a palindrome  */

#include<stdio.h>
int main()
{
	int num,a,sum=0,rem;

	printf("Enter the palindrom number:\n");
	scanf("%d",&num);
	a=num;
	while(a>0)
	{
		rem=a%10;

		sum=sum*10+rem;
		a=a/10;

	}

//	printf("sum %d\n",sum);
	if(sum==num)
	{
		printf("Given number is a palindrom\n");
	}
	else
	{
		printf("Given number is not a palindrom\n");
	}

}
