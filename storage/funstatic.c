#include<stdio.h>
static void  func();
int main()
{
	func();
	func();
	func();
	func();
	//printf("main %d\n",a);
}
static void func()
{
	 int a=20;
	printf("fun %d\n",a);
	a++;

}
