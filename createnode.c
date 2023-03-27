#include"header.h"

struct student *createnode(int n)
{
	student *new=(student *)malloc(sizeof(student));
	new->prime=n;
	new->next=NULL;
	return new;
}
