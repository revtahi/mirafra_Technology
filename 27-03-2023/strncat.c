// wap strncat

#include<stdio.h>

void mystrncat(char s[],char d[],int n);
int main()
{
	int n;
	char s[100];
	char d[100];
	printf("Enter source string:\n");
	scanf("%99[^\n]s",s);
	getchar();
	printf("Enter destination string:\n");
	scanf("%99[^\n]s",d);
	printf("Enter how many charcters do you copy:\n");
	scanf("%d",&n);

	mystrncat(s,d,n);
	printf("%s\n",d);
}

void mystrncat(char s[],char d[],int n)
{
	int i,j;
	for(i=0;d[i]!='\0';i++);

	for(j=0;j<n;i++,j++)
	{
		d[i]=s[j];
	}

}
