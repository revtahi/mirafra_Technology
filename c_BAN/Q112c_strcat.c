/*Implement all the string functions like strcat */

#include<stdio.h>
void stringcat(char d[],char s[]);
int main()
{
	char s[25],d[25];
	printf("Enter the source string:\n");
	scanf("%s",s);
	printf("Enter the destination string:\n");
	scanf("%s",d);

	stringcat(d,s);
	printf("string cat is  :%s\n",d);

}
void stringcat(char d[],char s[])
{
	int i,j;
	
	for(i=0;d[i]!='\0';i++);
	
	for(j=0;s[j]!='\0';j++)
	{
		d[i++]=s[j];
	}
}
