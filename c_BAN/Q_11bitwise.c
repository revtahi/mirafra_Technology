/*How to convert little to big endian and vice versa?*/

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%x",&a);
	
	a=((0x000000ff&a)<<24)|((0x0000ff00&a)<<8)|((0x00ff0000&a)>>8)|((0xff000000&a)>>24);
	printf("little to big convert is%x",a);

}
