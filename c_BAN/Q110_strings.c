/*Write a program to arrange the alphabet in a string from z to a.   */
#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter the string:\n");
	scanf("%s",s);
	int i,j,l,t;
	for(l=0;s[l]!='\0';l++);

	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]<s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("After arranged string is : %s \n",s);

}
