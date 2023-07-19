/*Implement all the string functions like strcopy */

#include<stdio.h>
void stringcopy(char d[],char s[]);
int main()
{
	char s[25],d[25];
	printf("Enter the source string:\n");
	scanf("%s",s);
	printf("Enter the destination string:\n");
	scanf("%s",d);

	stringcopy(d,s);
	printf("After copy the string:%s\n",d);

}
void stringcopy(char d[],char s[])
{
	int i,j;
	
	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
}
