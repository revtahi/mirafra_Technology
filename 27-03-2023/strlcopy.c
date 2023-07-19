// wap strlcopy

#include<stdio.h>

void mystrlcopy(char s[],char d[],int n);
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
	mystrlcopy(s,d,n);
	printf("%s\n",d);
}

void mystrlcopy(char s[],char d[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		d[i]=s[i];
	}
	

}
