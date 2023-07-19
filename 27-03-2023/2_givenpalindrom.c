#include<stdio.h>
//int a[256];
int palindrom(char s[]);
int main()
{
	char s[100];
	printf("enter the string:\n");
	scanf("%[^\n]s",s);
	int c;
	c=palindrom(s);
	if(c)
		printf("palindrom\n");
	else
		printf("not palindrom");

}
int palindrom(char s[])
{
	int i,l,c=0,d=0;
	for(l=0;s[l]!='\0';l++)
	{
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==s[l])	
				c++;
		}	
		if(c%2==0)

			return 0;
		else
			d++;
	}
	if(d<=1)
		return 1;
}
