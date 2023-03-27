#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int prime;
	int a;
	struct student *next;
}student;
int isprime(int n);
student *createnode(int);
void print_ll(student *p);
