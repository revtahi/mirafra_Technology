// wap strcopy

#include<stdio.h>

void mystrcopy(char s[],char d[]);
int main()
{
	char s[100];
	char d[100];
	printf("Enter source string:\n");
	scanf("%99[^\n]s",s);
	getchar();
	printf("Enter destination string:\n");
	scanf("%99[^\n]s",d);

	mystrcopy(s,d);
	printf("%s\n",d);
}

void mystrcopy(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
	d[i]=0;

}
