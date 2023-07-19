/* Remove vowels from a string and print the output*/

#include<stdio.h>
int main()
{
	char s[100],s2[100];
	printf("Enter the string:\n");
	scanf("%99[^\n]s",s);
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'|| s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
		{

		}
		else
		{
		s2[j++]=s[i];
		}

	}
	printf("string after remove vowels :%s\n",s2);


}
