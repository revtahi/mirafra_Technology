#include<stdio.h>
int main()
{
        int a=5;
	printf("%d\n",a);
	{
		int a=90;
		printf("main %d\n",a);
	}
	printf("main %d\n",a);
}


