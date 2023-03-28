#include<stdio.h>
#include<string.h>

int string(char s[],char sub[]);
int substring(char sub[]); 

int main()
{
	int a,b;
	char s[25]="kernelmasters";
	char sub[25]="ern";
	a=string(s,sub);
	b=substring(sub);
	printf("%d\n",a-b);

}
int substring(char sub[])
{
	int i;
	for(i=0;sub[i]!='\0';i++);
	return i;
}

int string(char s[] ,char sub[])
{
	int j,i;
	for(j=0;s[j]!='\0';j++)
	{
		if(s[j]==sub[i])
		{
			i++;
		}
		else
		{
			i=0;
		}
		if(sub[i]==0)
			return j+1;

	}
}
