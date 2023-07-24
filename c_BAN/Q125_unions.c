/*How to convert endianness using unions concept? */

#include<stdio.h>

union LE
{
	int i;
	char c[4];

};
int main()
{
	union LE BE;
	BE.i=0X12345678;
	printf("LE :%x %x %x %x",BE.c[0],BE.c[1],BE.c[2],BE.c[3]);
	printf("\n");	
	int j;
	char temp;
	for(j=0;j<4/2;j++)
	{
		temp=BE.c[j];
		BE.c[j]=BE.c[3-j];
		BE.c[3-j]=temp;

	}

	printf("BE :%x %x %x %x",BE.c[0],BE.c[1],BE.c[2],BE.c[3]);
	printf("\n");
	
}
