#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"employee.h"

employee *head;
void displaydetails(employee* emp);
void salareycmp(employee* emp);
void calculate_employeesalary(employee* emp);
void calculate_clientbilling(employee* emp);
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
	printf("Enter the  salary:\n");
	scanf("%f",&emp->salary);
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
	calculate_employeesalary(emp);
 	calculate_clientbilling(emp);
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
	printf("Enter the  salary:\n");
	scanf("%f",&emp->salary);
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
	salareycmp(emp);
	calculate_employeesalary(emp);
 	calculate_clientbilling(emp);
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
	printf("Enter the  salary:\n");
	scanf("%f",&emp->salary);
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
	salareycmp(emp);
	calculate_employeesalary(emp);
 	calculate_clientbilling(emp);
}

void displaydetails(employee* emp)
{
	printf("Employee type :%s\n",emp->employee_type);

	printf("Employee Name :%s\n",emp->name);
	printf("Employee DOB :%s\n",emp->dob);
	printf("Employee id :%s\n",emp->id);
	printf("Employee gender :%s\n",emp->gender);
	printf("Employee adress :%s\n",emp->address);
	printf("Enter the  salary:%f\n",emp->salary);
	printf("Employee basic salary :%f\n",emp->basicSalary);
	printf("Employee hra :%f\n",emp->hra);
	printf("Employee specialallowance :%f\n",emp->specialAllowance);
	printf("Client allocated:%s\n",emp->clientAllocated);
	printf("client billing :%f\n",emp->clientBilling);
	printf("Employee type :%s\n",emp->employee_type);
}
void salareycmp(employee* emp)
{

	if(emp->salary>=0.8*emp->clientBilling)
	{
		printf("Employee salary is above 80%% of billing rate:\n");

	}
}
void calculate_employeesalary(employee* emp)
{
	printf("Employee per day salary is :%f\n ",(emp->salary)/30);

}
void calculate_clientbilling(employee* emp)
{
	printf("Employee client billing per day :%f\n ",(emp->clientBilling)/30);
}
