// wap strcmp

#include<stdio.h>

int mystrcmp(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];
	int c;
	printf("Enter source string:\n");
	scanf("%99[^\n]s",s1);
	getchar();
	printf("Enter destination string:\n");
	scanf("%99[^\n]s",s2);

	c=mystrcmp(s1,s2);
	printf("%d\n",c);
}

int mystrcmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]<s2[i])
			return -1;
		else if(s1[i]>s2[i])
			return 1;
	}
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return -1;
	if(s1[i]!=0&&s2[i]==0)
		return 1;
}
