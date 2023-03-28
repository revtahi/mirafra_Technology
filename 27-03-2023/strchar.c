// wap strchar

#include<stdio.h>

int mystrchar(char s[],char c);
int main()
{
	char s[100];
	char c;
	int d;
	printf("Enter string:\n");
	scanf("%99[^\n]s",s);
	getchar();
	printf("Enter charactger:\n");
	scanf("%c",&c);

	d=mystrchar(s,c);
	printf("%d\n",d);
}

int mystrchar(char s[],char c)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		break;
	}
	return -1;

}
