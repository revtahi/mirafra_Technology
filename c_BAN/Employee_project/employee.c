#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"employee.h"

employee *head;
void displaydetails(employee* emp);
void Permanent_Employee()
{
	employee *emp=NULL;
	emp=(employee*)malloc(sizeof(employee));
	printf("Enter the employee type:\n");
	scanf("%s",emp->employee_type);
	printf("Enter the name:\n");
	scanf("%s",emp->name);
	printf("Enter the id:\n");
	scanf("%s",emp->id);
	printf("Enter the dob:\n");
	scanf("%s",emp->dob);
	printf("Enter the gender:\n");
	scanf("%s",emp->gender);
	printf("Enter the address:\n");
	scanf("%s",emp->address);
	printf("Enter the basic salary:\n");
	scanf("%f",&emp->basicSalary);
	printf("Enter the hra:\n");
	scanf("%f",&emp->hra);
	printf("Enter the special allowance:\n");
	scanf("%f",&emp->specialAllowance);
	printf("Enter the clientallocated:\n");
	scanf("%s",emp->clientAllocated);
	printf("Enter the clientbilling:\n");
	scanf("%f",&emp->clientBilling);
	emp->Next=head;
	head=emp;
	displaydetails(emp);

}
void Contractual_Employee()
{
	employee *emp=NULL;
	emp=(employee*)malloc(sizeof(employee));
	printf("Enter the employee type:\n");
	scanf("%s",emp->employee_type);
	printf("Enter the name:\n");
	scanf("%s",emp->name);
	printf("Enter the id:\n");
	scanf("%s",emp->id);
	printf("Enter the dob:\n");
	scanf("%s",emp->dob);
	printf("Enter the gender:\n");
	scanf("%s",emp->gender);
	printf("Enter the address:\n");
	scanf("%s",emp->address);
	printf("Enter the basic salary::give to 0\n");
	scanf("%f",&emp->basicSalary);
	printf("Enter the hra::give to 0\n");
	scanf("%f",&emp->hra);
	printf("Enter the special allowance:\n");
	scanf("%f",&emp->specialAllowance);
	printf("Enter the clientallocated:\n");
	scanf("%s",emp->clientAllocated);
	printf("Enter the clientbilling:\n");
	scanf("%f",&emp->clientBilling);
	emp->Next=head;
	head=emp;
	displaydetails(emp);
}
void  Shortterm_Employee()
{
	employee *emp=NULL;
	emp=(employee*)malloc(sizeof(employee));
	printf("Enter the employee type:\n");
	scanf("%s",emp->employee_type);
	printf("Enter the name:\n");
	scanf("%s",emp->name);
	printf("Enter the id:\n");
	scanf("%s",emp->id);
	printf("Enter the dob:\n");
	scanf("%s",emp->dob);
	printf("Enter the gender:\n");
	scanf("%s",emp->gender);
	printf("Enter the address:\n");
	scanf("%s",emp->address);
	printf("Enter the basic salary::give to 0\n");
	scanf("%f",&emp->basicSalary);
	printf("Enter the hra::give to 0\n");
	scanf("%f",&emp->hra);
	printf("Enter the special allowance:\n");
	scanf("%f",&emp->specialAllowance);
	printf("Enter the clientallocated:\n");
	scanf("%s",emp->clientAllocated);
	printf("Enter the clientbilling:\n");
	scanf("%f",&emp->clientBilling);
	emp->Next=head;
	head=emp;
	displaydetails(emp);
}

void displaydetails(employee* emp)
{
	printf("Employee type :%s\n",emp->employee_type);

	printf("Employee Name :%s\n",emp->name);
	printf("Employee DOB :%s\n",emp->dob);
	printf("Employee gender :%s\n",emp->gender);
	printf("Employee adress :%s\n",emp->address);
	printf("Employee basic salary :%f\n",emp->basicSalary);
	printf("Employee hra :%f\n",emp->hra);
	printf("Employee specialallowance :%f\n",emp->specialAllowance);
	printf("Client allocated:%s\n",emp->clientAllocated);
	printf("client billing :%f\n",emp->clientBilling);
	printf("Employee type :%s\n",emp->employee_type);
}
