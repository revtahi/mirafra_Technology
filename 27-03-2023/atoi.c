//WAP atoi 

#include<stdio.h>

int atoi(char str[]);
int main()
{
	char str[10]="100";
//	char str[10];
//	scanf("%[^10\n]s",str);
	printf("Asic to integer :%d\n",atoi(str));
}

int atoi(char str[])
{
	int i,sum=0;

	for(i=0;str[i]!='\0';i++)
	{
		sum=sum*10+str[i]-48;
	}
	return sum;


}
