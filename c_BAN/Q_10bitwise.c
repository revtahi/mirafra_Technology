/*How to set/unset 17 and 18 bit of a given number? */

#include<stdio.h>
int main()
{
	int num,mask,set_result,clear_result;
	printf("Enter the number:\n");
	scanf("%X",&num);

	mask=((0x01<<17)|(0x01<<18));
	//printf("%X\n",mask);
	set_result=num|mask;
	printf("atfter set the result is %X\n",set_result);
	clear_result=(num & ~(mask));
	printf("atfter clear the result is %X\n",clear_result);


}
