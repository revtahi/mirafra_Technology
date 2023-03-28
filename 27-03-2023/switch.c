#include<stdio.h>

int main()
{
	int x=10;
	int *p=&x;
	switch(*p)
		{
			case 10: printf("division is accepted\n");
				break;

			case 10%3:printf("floating is not  accepted\n");
		}

}
//string ,float is not accepted.
//division is acceepted.
//we can perfoarm arithmetic operations.
