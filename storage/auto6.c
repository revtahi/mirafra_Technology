#include<stdio.h>
auto int func();
int main()
{
        int a=5;
//	int b=6,sum=0;
//	sum=a+b;
	//printf("%d\n",a);
	func();

	printf("main %d\n",a);
}
auto int func()
{
	int a=20;
	printf("fun %d\n",a);


}

//if we use auto  declared as before function it shows error bcz auto  is used only for variables inside afunctions.(variables are created  and destroyed).
