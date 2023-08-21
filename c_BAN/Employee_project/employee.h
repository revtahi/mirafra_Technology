#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Emp {
   char employee_type[100];
    char name[50];
    char id[50];
    char dob[20];
    char gender[10];
    char address[100];
    float salary;
    float basicSalary;
    float hra;
    float specialAllowance;
    char clientAllocated[50];
    float clientBilling;
	struct Emp *Next;
}employee;

//void createEmployee(struct Employee *emp, char employeeType);
//float calculateBilling(struct Employee emp, char *clientName);
//float calculateSalary(struct Employee emp);
