#include<stdio.h>
int CountWords(char str[]);
int main()
{
	int a;
	char str[55];
	printf("Enter the String : ");
	 scanf("%[^\n]s",str);
//	fgets(str);
	a=CountWords(str);
	printf("No.of words in the %s is %d\n",str,a);
	return 0;
}

int CountWords(char str[])
{
	int i,c=0;
	for(i=0;str[i]!=0;i++)
	{
		if(i==0)
		{
			if(str[i]>=65 && str[i]<=90 || str[i]>=97 &&str[i]<=122)
				c++;
		}

		if(str[i]==' '||str[i]=='.'||str[i]==','||str[i]=='?')
		{
			if(str[i+1]>=65&&str[i+1]<=90 || str[i+1]>=97&&str[i+1]<=122 || str[i+1]>='0'&&str[i+1]<='9')
				c++;
		}
	}
	return c;
}
