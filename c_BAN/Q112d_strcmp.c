/*Implement all the string functions like strcmp */

#include<stdio.h>
int stringcmp(char s1[],char s2[]);
int main()
{
	char s1[25],s2[25];
	printf("Enter the  string1:\n");
	scanf("%s",s1);
	printf("Enter the  string2:\n");
	scanf("%s",s2);
	int c;
	c=stringcmp(s1,s2);
	printf("string comparision  is  :%d\n",c);

}
int stringcmp(char s1[],char s2[])
{
	int i,j;

	for(i=0;(s1[i]!='\0'&&s2[i]!='\0');i++)
	{
		if(s1[i]<s2[i])
			return -1;	
		if(s1[i]>s2[i])
			return 1;	
	}
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]==0&&s2[i]!=0)
		return -1;
	if(s1[i]!=0&&s2[i]==0)
		return 1;
}
