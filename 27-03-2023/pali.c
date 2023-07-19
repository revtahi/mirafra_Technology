#include<stdio.h>
int palindrom(char s[]);
int main()
{
	char s[100];
	int c;
	printf("Enter the name:\n");
	scanf("%[^\n]s",s);
	c=palindrom(s);
	if(c)
	{
		printf("it is a palindrom\n");
	}
	else
	{
		printf("not palindrom\n");

	}

}
int palindrom(char s[])
{
	int l,i,k=0,j;
	for(l=0;s[l]!='\0';l++);

	for(i=0,j=l-1;i<j/2;i++,j--)
	{
		if(s[i]==s[j])
		{
			//k=1;

		}
		else
		{
			return 0;
		}
	}
	/*if(k==1)
		return 1;
	else
		return 0;*/
	return 1;

}



