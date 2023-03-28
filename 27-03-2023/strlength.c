// wap strlength

#include<stdio.h>

int mystrlength(char s[]);
int main()
{
	char s[100];
	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);

	printf("string length:%u\n",mystrlength(s));
}

int mystrlength(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);

	return i;
}
