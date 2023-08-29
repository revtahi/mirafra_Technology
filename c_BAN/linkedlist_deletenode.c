#include <stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[30];
	struct student *next;
}student;
student *createnode()
{
	student *new=(student*)malloc(sizeof(student));
	printf("Enter the id name:\n");
	scanf("%d %s",&new->id,new->name);
	new->next=NULL;
	return new;
}
void print_ll(student *p)
{
	while(p)
	{
		printf("%d \t%s\t \n",p->id,p->name);
		p=p->next;
	}
}
student *deletenode(student *Head)
{
	student *temp=Head;
	student *ptr=(student*)malloc(sizeof(student));
	printf("delete the id name:\n");
	scanf("%d %s",&ptr->id,ptr->name);
	Head=Head->next;
	temp->next=NULL;
	//return new;
	free(temp);
	return Head;
}
student *deletelastnode(student *Head)
{
	student *temp=Head;
	student *ptr2=(student*)malloc(sizeof(student));

	if(Head==NULL)
	{
		return NULL;
	}
	else if (Head->next == NULL)
	{
		free(Head);
		return NULL;
	}
	while(temp->next->next!=NULL)
		temp=temp->next;
	free(temp->next);
	temp->next=NULL;
	return Head;
}
student *deletepositionnode(student *Head)
{
	student *temp=Head;
	student *ptr3=(student*)malloc(sizeof(student));
	int pos,i;
	printf("Enter the position:\n");
	scanf("%d",&pos);

	for(i=0;i<pos-1;i++)
		temp=temp->next;
	temp->next=temp->next->next;
	free(temp->next);

	return Head;
}
int main() {
	student *Head=NULL,*s=NULL,*last=NULL;
	char ch;
	while(1)
	{
		s=createnode();
		if(Head==NULL)
		{
			Head=s;
		}
		else
		{
			last->next=s;
		}
		last=s;
		printf("want to add node:\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='n'||ch=='N')
			break;
	}
	print_ll(Head);  
	//Head=deletenode(Head);
	//print_ll(Head);  
	// Head=deletelastnode(Head);
	//print_ll(Head);  
	Head=deletepositionnode(Head);
	print_ll(Head);




}
