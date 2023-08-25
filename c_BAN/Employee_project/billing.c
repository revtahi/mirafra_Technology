#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"employee.h"

employee *head;
void Delete_Employee(employee *emp);
employee* Search_Employee(char* user_name ,char* s_id);
void Employee_details()
{
	char user_name[20] ;
	char s_id[20] ;

	printf("Enter the user name : ");
	scanf("%s",user_name);

	printf("Enter the user search id : ");
	scanf("%s",s_id);

	int ch;
	while(1)
	{
		printf("Search the employee =1 \n Delete the employee =2 \n Exit =3\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:

				Search_Employee(user_name,s_id) ;
				break;
			case 2:
//				Delete_Employee(emp);
				//				Delete_Employee();
				Delete_Employee(Search_Employee(user_name, s_id));
				break;
			default:
				printf("\n\n Enter the right choice\n\n");
				break;
		}
		if(ch==3)
			break;
	}

}
employee* Search_Employee(char* user_name ,char* s_id)
{
	employee *temp = head;
	while(temp!=NULL)
	{
		if (!strcmp(temp->name, user_name) && !strcmp(temp->id, s_id))
		{
			printf("######### Employee details found #########\n");
			return temp;
		}
		else
		{
			printf("######### Employee details not found ######\n");
			return 0;

		}

	}
	temp=temp->Next;


printf("####### wrong Employee Name ########\n");
return 0;
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


