// wap strncopy

#include<stdio.h>

void mystrncopy(char s[],char d[],int n);
int main()
{
	char s[100];
	char d[100];
	int n;

	printf("Enter source string:\n");
	scanf("%99[^\n]s",s);
	getchar();
	printf("Enter destination string:\n");
	scanf("%99[^\n]s",d);
	printf("Enter how many characters to copy:\n");
	scanf("%d",&n);
	mystrncopy(s,d,n);
	printf("%s\n",d);
}

void mystrncopy(char s[],char d[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	

}
