#include<stdio.h>

static int x;
//x=5;

int main()
{
	//printf("before main\n");

	static int x;
	x=25;
	printf("%d\n" ,x);

}

/* storge2.c:3:10: error: file-scope declaration of ‘x’ specifies ‘auto’
 auto int x;
          ^
storge2.c:4:1: warning: data definition has no type or storage class
 x=5;
 ^
storge2.c:4:1: warning: type defaults to ‘int’ in declaration of ‘x’ [-Wimplicit-int]
*/
