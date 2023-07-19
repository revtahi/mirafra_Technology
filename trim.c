#include<stdio.h>
void trim(char s[]);
int main()
{
	char s[200];
	printf("Enter the string:\n");
	scanf("%[^\n]s",s);
	trim(s);
	printf("%s",s);
}
void trim(char s[])
{
	int i,j=0;
	for(i=0;s[i]==' ';i++)
	{
		j++;
	}
	for(i=0,j;s[i]!=0;i++,j++)
	{
		s[i]=s[j];
	}
	s[i]=0;
	for(j=0;s[j]!=0;j++);

	for(;j>=0;j--)
	{
		if(s[j]==' '||s[j]==0)
		{
			s[j]='\0';
		}
		else
		{     
			s[j+1]='\0';
			break;
		}
	}
}

