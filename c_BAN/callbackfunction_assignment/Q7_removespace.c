/*7. Write a C program to remove all whitespace from a string using a callback function.
  Expected Output:

  Enter a string: Original string: example     .   com
  String without whitespace: example.com*/

#include<stdio.h>
void removespace(char s[]);
void conversion(void (*fptr)(char [] ),char s[]);
int main()
{

	char s[100],ch;

	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);


	void  (*fptr)(char [])=removespace;

	conversion(fptr,s);
	//printf("%s\n",s);
}
void conversion(void (*fptr)(char [] ),char s[])
{
	fptr(s);
}
void removespace(char s[])
{
	int i,l,j;
	for(l=0;s[l]!=0;l++);

	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			for(j=i;j<l;j++)
			{
				s[j]=s[j+1];
			}
			l--;
			i--;
		}

	}
	printf("String without space:%s\n",s);

}
