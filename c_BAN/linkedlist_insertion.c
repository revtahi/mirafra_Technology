#include <stdio.h>
#include <stdlib.h>

typedef struct student 
{
	int id;
	char name[30];
	struct student *next;
} student;

student *createnode()
{
	student *new = (student *)malloc(sizeof(student));
	printf("Enter the id, name:\n");
	scanf("%d %s", &new->id, new->name);
	new->next = NULL;
	return new;
}

void print_ll(student *p)
{
	while (p)
	{
		printf("%d %s\n", p->id, p->name);
		p = p->next;
	}
}

student *insertingnode(student *Head)
{
	student *ptr = (student *)malloc(sizeof(student));
	printf("Adding first node. Enter the id, name:\n");
	scanf("%d %s", &ptr->id, ptr->name);
	ptr->next = Head;
	Head = ptr;
	return Head;
}

student *lastnode(student *Head)
{
	student *temp = Head;
	student *ptr2 = (student *)malloc(sizeof(student));
	printf("Adding last node. Enter the id, name:\n");
	scanf("%d %s", &ptr2->id, ptr2->name);
	ptr2->next = NULL;

	if (Head == NULL)
	{
		Head = ptr2;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr2;
	}

	return Head;
}

student *middlenode(student *Head)
{
	student *temp = Head;
	student *ptr3 = (student *)malloc(sizeof(student));
	printf("Adding middle node. Enter the id, name:\n");
	scanf("%d %s", &ptr3->id, ptr3->name);
	int pos,i;
	printf("Enter the position:\n");
	scanf("%d", &pos);

	if (pos <= 1) // Insert at the beginning
	{
		ptr3->next = Head;
		Head = ptr3;
	}
	else
	{
		for(i = 0; i < pos - 2 && temp != NULL; i++)
			temp = temp->next;

		if (temp != NULL)
		{
			ptr3->next = temp->next;
			temp->next = ptr3;
		}
		else
		{
			printf("Invalid position\n");
			free(ptr3); // Release memory if not used
		}
	}

	return Head;
}

int main() {
	student *Head = NULL, *s = NULL, *last = NULL;
	char ch;

	while (1)
	{
		s = createnode();
		if (Head == NULL)
		{
			Head = s;
		}
		else
		{
			last->next = s;
		}
		last = s;

		printf("Add node:\n");
		getchar();
		scanf("%c", &ch);

		if (ch == 'n' || ch == 'N')
			break;
	}

	//	Head = insertingnode(Head);
	print_ll(Head);

	//	Head = lastnode(Head);
	//	print_ll(Head);
	Head=middlenode(Head);
	print_ll(Head);

	return 0;
}
