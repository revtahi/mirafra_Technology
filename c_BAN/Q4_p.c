/* Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and print the biggest number and its position in the array, smallest number and its position in the array. Find both using a single loop. */

#include<stdio.h>
int main()
{
	int i,s,p;
	int m[10];
	int big,small;
	printf("enter 10  numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}		
	for(i=0;i<10;i++)
	{
		if(i==0)
		{

			big=m[i];
			p=0;
			small=m[i];
			s=0;
		}
		else
		{
			if(m[i]>=big)
			{
				big=m[i];
				p=i;
			}
			if(m[i]<small)
			{
				small=m[i];
				s=i;
			}
		}
	}
	printf("biggest:%d\n",big);
	printf("small:%d\n",small);
	printf("smallest number positison is:%d\n",s);
	printf("biggest number positison is:%d\n",p);
}


