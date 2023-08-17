#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

int main()
{
	int ch; 
	while(1)
	{
		printf("\n##########  Employee billing System ########## \n");
		printf("\nEXIT = 5 \n Permanent Employee  = 1 \n Contractual Employee = 2 \n ");
		printf("Short Term Employee = 3\n");
		printf("Delete Employee = 4\n");
		printf("Enter your chice:\n");
		scanf("%d", &ch); 

		switch(ch)
		{
			case 1:
				Permanent_Employee();
				break;

			case 2:
				Contractual_Employee();
				break;

			case 3:
				Shortterm_Employee();
				break;
			case 4:
				//Delete_Employee();
				Employee_details();
				break;

			default :
				printf("\n\nError: enter the right choice\n\n");
				break;
		}
		if(ch==5)
			break;
	}
}
