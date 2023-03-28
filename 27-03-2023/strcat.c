// wap strcat

#include<stdio.h>

void mystrcat(char s[],char d[]);
int main()
{
	char s[100];
	char d[100];
	printf("Enter source string:\n");
	scanf("%99[^\n]s",s);
	getchar();
	printf("Enter destination string:\n");
	scanf("%99[^\n]s",d);

	mystrcat(s,d);
	printf("%s\n",d);
}

void mystrcat(char s[],char d[])
{
	int i,j;
	for(i=0;d[i]!='\0';i++);

	for(j=0;s[j]!='\0';i++,j++)
	{
		d[i]=s[j];
	}

}
