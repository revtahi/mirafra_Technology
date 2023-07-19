#include<stdio.h>
// extern int r[0]={1};
void fun();
int main()
{
	int i;
	extern int r[5];
	r[1]=2;
/*	for(i=0;i<5;i++)
	 scanf("%d",&r[i]);

	for(i=0;i<5;i++)*/
	fun();
	 printf("%d",r[1]);

}
int r[5]={1};
void fun()
{


}
