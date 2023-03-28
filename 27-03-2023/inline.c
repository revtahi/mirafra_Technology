#include<stdio.h>

register inline void swap(int *,int *);
int main()
{
	int a=5,b=10;
	printf("Before swaping a:%d b:%d\n",a,b);
	swap(&a,&b);
	printf("after swaping a:%d b:%d\n",a,b);

}
register inline void swap(int *a,int *b)
{
	(*a)=(*a)+(*b);

	(*b)=(*a)-(*b);
	(*a)=(*a)-(*b);

}
