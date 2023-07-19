/*Implement all the string functions like strlen */

#include<stdio.h>
int stringlength(char s[]);
int main()
{
	char s[25];
	printf("Enter the string:\n");
	scanf("%s",s);
	int l;
	l=stringlength(s);
	printf("string length is :%d\n",l);

}
int stringlength(char s[])
{
	int i;
	
	for(i=0;s[i]!='\0';i++);
	return i;
}
