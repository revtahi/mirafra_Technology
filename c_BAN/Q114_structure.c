/*Find out the size of a structure without using sizeof operator.  */

#include<stdio.h>
struct size
{
	int a;
	char b;
	double c;

};
int main()
{
	struct size e;
	char *p1=(char *)&e;
	char *p2=(char *)&e.c;
	printf("size :%ld\n",p2-p1);

}
