#include<stdio.h>
void func();
int main()
{
        int a=5;
//	int b=6,sum=0;
//	sum=a+b;
	//printf("%d\n",a);
	func();

	printf("main %d\n",a);
}
void func()
{
	int a=20;
	printf("fun %d\n",a);


}
