#include<stdio.h>
static int a=7; 
void func();
int main()
{
	func();
	func();
	func();
	func();
	//printf("main %d\n",a);
}
void func()
{
	//static int a=20;
	printf("fun %d\n",a);
	a++;

}
