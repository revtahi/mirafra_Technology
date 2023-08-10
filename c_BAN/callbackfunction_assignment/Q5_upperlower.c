/*5. Write a program in C program to convert a string to uppercase or lowercase using a callback function to modify each character.
  Expected Output:

  Input a string: w3resource
  Select an option:
  1. Convert to uppercase
  2. Convert to lowercase
  1
  Uppercase string: W3RESOURCE */

#include<stdio.h>
void upper_lowercase(char s[],char ch);
void conversion(void (*fptr)(char [] ,char),char s[],char ch);
int main()
{

	char s[100],ch;

	printf("Enter the string:\n");
	scanf("%s",s);


	printf("Enter the character :\n lower=2 \n upper = 1\n");

	scanf(" %c",&ch);
	void  (*fptr)(char [],char)=upper_lowercase;

	conversion(fptr,s,ch);
	//printf("%s\n",s);
}
void conversion(void (*fptr)(char [] ,char),char s[],char ch)
{
	fptr(s,ch);
}
void upper_lowercase(char s[],char ch)
{
	int i;

	switch(ch)
	{
		case '1':
			for(i=0;s[i]!=0;i++)
			{
				if(s[i]>='a'&&s[i]<='z')
					s[i]=s[i]-32;
			}
			s[i]=0;

			printf("Uppercase string :%s\n",s);
			break;
		case '2':
			for(i=0;s[i]!=0;i++)
			{
				if(s[i]>='A'&&s[i]<'Z')
					s[i]=s[i]+32;
			}
			s[i]=0;
			printf("Lowercase string :%s\n",s);
			break;

	}
}
