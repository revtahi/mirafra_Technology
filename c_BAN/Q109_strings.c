/*Write a program to check if the string is a palindrome  */

#include<stdio.h>
void stringpalindrom(char str[]);
int main()
{
	char str[100];
	int c;
	printf("Enter the string:\n");
	scanf("%s",str);

	stringpalindrom(str);

}
void stringpalindrom(char str[])
{
	int i,j,l,f=0;
	for(l=0;str[l]!='\0';l++);

	for(i=0,j=l-1;j>i;i++,j--)
	{
		if(str[i]==str[j])
		{
			f=1;

		}
		else
		{
			f=0;
			break;
		}	


	}

	if(f==1)
	{
		printf("Given string is a palindrom\n");
	}
	else
	{
		printf("Given string is not a palindrom\n");
	}
}
