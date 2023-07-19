/*c program to get parity corrected byte from the user input  */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number is:\n");
	scanf("%X",&a);
	if(a&0x01)
	printf("given parity number %X is odd\n",a);
	else
	printf("Given parity number %X is even\n",a);


}
