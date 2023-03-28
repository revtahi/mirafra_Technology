// wap strncmp

#include<stdio.h>

int mystrncmp(char s1[],char s2[],int n);
int main()
{
	char s1[100];
	char s2[100];
	int c,n;
	printf("Enter string1:\n");
	scanf("%99[^\n]s",s1);
	getchar();
	printf("Enter  string2:\n");
	scanf("%99[^\n]s",s2);
	printf("Enter howm many character to compare:\n");
	scanf("%d",&n);

	c=mystrncmp(s1,s2,n);
	printf("%d\n",c);
}

int mystrncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;i<n;i++)
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
