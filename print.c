#include"header.h"
void print_ll(student *p)
{
	while(p)
	{
		printf("trversing %d \n",p->prime);
		p=p->next;
	}
}
