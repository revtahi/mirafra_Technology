#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

employee* head = NULL;

void Delete_Employee(employee* emp);
employee* Search_Employee(char* user_name, char* s_id);
void Employee_details();


void Employee_details() {
	char user_name[20];
	char s_id[20];
	int ch;
	while(1)
	{
		printf("Enter the user name: ");
		scanf("%s", user_name);

		printf("Enter the user search id: ");
		scanf("%s", s_id);

		printf("Search the employee = 1\nDelete the employee = 2\nExit = 3\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch (ch) {
			case 1:
				Search_Employee(user_name, s_id);
				break;
			case 2:
				Delete_Employee(Search_Employee(user_name, s_id)); 
				break;
			case 3:
				return; 
			default:
				printf("\n\nEnter the right choice\n\n");
				break;
		}
	}
}

employee* Search_Employee(char* user_name, char* s_id) {
	employee* temp = head;
	while (temp != NULL) {
		if (!strcmp(temp->name, user_name) && !strcmp(temp->id, s_id)) {
			printf("######### Employee details found #########\n");
			return temp;
		}
		temp = temp->Next;
	}

	printf("######### Employee details not found #########\n");
	return 0; 
}

void Delete_Employee(employee* emp) {
	if (emp == NULL) {
		printf("Cannot delete NULL employee.\n");
		return;
	}

	if (head == emp) {
		head = emp->Next;
		free(emp);
		return;
	}

	employee* temp = head;
	while (temp != NULL && temp->Next != emp) {
		temp = temp->Next;
	}

	if (temp == NULL) {
		printf("Employee not found in the list.\n");
		return;
	}

	temp->Next = emp->Next;
	free(emp);
}

