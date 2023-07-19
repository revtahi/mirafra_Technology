#include<stdio.h>
int mystrstr(char s[],char sub[] );
int main()
{
	char s[200];
	char sub[200];
	int r;
	printf("Enter the string:\n");
	scanf("%[^\n]s",s);	
	getchar();
	printf("Enter the sub string:\n");
	scanf("%[^\n]s",sub);
	r=mystrstr(s,sub);
	printf("%d",r);	
}
int mystrstr(char s[],char sub[] )
{
	int i,j=0,n;
	for(i=0;s[i]!=0;i++)
	{
		n=i;
		for(j=0;sub[j]!=0;j++,n++)
		{
			if(s[n]!=sub[j])
			{
				break;
			}
			if(sub[j+1]==0)
				return i;

		}
		//return -1;
	}
		return -1;
}
