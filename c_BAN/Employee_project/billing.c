#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"employee.h"

employee *head;
void Delete_Employee(employee *emp);
void Search_Employee(char* user_name ,char* s_id);
void Employee_details()
{
	char user_name[20] ;
	char s_id[20] ;

	printf("Enter the user name : ");
	scanf("%s",user_name);

	printf("Enter the user search id : ");
	scanf("%s",s_id);


	  Search_Employee(user_name,s_id) ;

}
void Search_Employee(char* user_name ,char* s_id)
{
	employee *temp = head;
	do
	{
		if(!(strcmp(temp->name,user_name)))
		{
			if(!(strcmp(temp->address,s_id)))
			{
				printf("#########Employee details found#########\n");
				return temp;
			}
			else
			{
				printf("######### Employee details not found ######\n");
				return 0;

			}

		}
		temp=temp->Next;
	}
	while(temp->Next != NULL);
	printf("####### wrong Employee Naame ########\n");
//	return 0;
}

void Delete_Employee(employee *emp) {


	employee *temp = head, *prev= head;

	if(temp!=NULL && (temp==emp))
	{
		head = temp->Next;
		free(temp);
		temp= 0  ;
		return;
	}

	while(temp != NULL)
	{
		if(temp==emp)
		{
			prev->Next = temp->Next ;
			free(temp);
			temp= 0  ;
			return ;

		}
		else
		{
			prev = temp ;
			temp=temp->Next;
		}
	}

}


