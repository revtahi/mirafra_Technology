#include<stdio.h>
int a[256];
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
	int i,l,c=0;
	for(l=0;s[l]!='\0';l++);
	
	for(i=0;i<l;i++)
	{
		a[s[i]]++;
	}
	for(i=0;i<=256;i++)
	{
		if((a[i]&1))
		c++;
	}	
	if(c<=1)
	
		return 1;
	else
		return 0;

}
