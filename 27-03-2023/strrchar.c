// wap strrchar

#include<stdio.h>

int mystrrchar(char s[],char c);
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

	d=mystrrchar(s,c);
	printf("%d\n",d);
}

int mystrrchar(char s[],char c)
{
	int i,s_i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		s_i=i;
	}
	return s_i;

}
