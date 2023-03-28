#include<stdio.h>

//auto int x;


//int add(register int a,static int b);
int add(int a,static int b);
// error:storage class specified for parameter ‘b’ dont use static as formala parameters.
 int add(register int a,static int b)

//int add(register int a,static int b);
int main()
{
	//printf("global auto is not worked");
	int a=5,b=10;
	//add(a,b);
	printf("%d\n",add(a,b));
}
int add(register int a,static int b)
{
	int sum;
	sum=a+b;
	return sum;
}


/*error: file-scope declaration of ‘x’ specifies ‘auto’
 auto int x;*/
          

