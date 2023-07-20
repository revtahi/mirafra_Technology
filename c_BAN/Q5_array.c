/*Demonstrate the addition and multiplication of 2X2, 2X3,3X3 matrix */
#include<stdio.h>
#define R 3
#define C 3
int main()
{
	int a[R][C],b[R][C],c[R][C],i,j,m,e=0;
	char d;
	printf("want to perform 3*3 matrix addition or multiplication:\n");
	scanf("%c",&d);
	if(d=='y')
	{
		printf("enter first array:\n\n");
		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
				scanf("%d",&a[i][j]);
		printf("Enter the second array:\n");
		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
				scanf("%d",&b[i][j]);
		printf("array1::");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				printf("%d\t",a[i][j]);
			printf("\n\t");
		}
		printf("\b\b\b\b\b\b\b\barray2::");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				printf("%d\t",b[i][j]);
			printf("\n\t");
		}
		printf("Addition:\n");
		for(i=0;i<R;i++)
			for(j=0;j<C;j++)
				c[i][j]=a[i][j]+b[i][j];
		printf("\b\b\b\b\b\b\b\bafter addition::\n\t");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				printf("%d\t",c[i][j]);
			printf("\n\t");
		}
		printf("Multiplication:\n");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				e=0;
				for(m=0;m<R;m++)
					e=e+a[i][m]*b[m][j];
				c[i][j]=e;
			}
		}
		printf("\b\b\b\b\b\b\b\bafter multiplication::\n\t");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				printf("%d\t",c[i][j]);
			printf("\n\t");
		}
	}
	else
	{
		printf("perform the 2*3 addition and multiplication:\n");
		int d[2][3] ,f[2][3],g[2][3],k,l=0;	

		printf("enter first array:\n\n");
		for(i=0;i<2;i++)
			for(j=0;j<3;j++)
				scanf("%d",&d[i][j]);
		printf("Enter the second array:\n");
		for(i=0;i<2;i++)
			for(j=0;j<3;j++)
				scanf("%d",&f[i][j]);
		printf("array1::");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				printf("%d\t",d[i][j]);
			printf("\n\t");
		}
		printf("\b\b\b\b\b\b\b\barray2::");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				printf("%d\t",f[i][j]);
			printf("\n\t");
		}
		printf("Addition:\n");
		for(i=0;i<2;i++)
			for(j=0;j<3;j++)
				g[i][j]=d[i][j]+f[i][j];
		printf("\b\b\b\b\b\b\b\bafter addition::\n\t");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				printf("%d\t",g[i][j]);
			printf("\n\t");
		}
		printf("Multiplication:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				l=0;
				for(k=0;k<2;k++)
					l=l+d[i][k]*f[k][j];
				g[i][j]=l;
			}
		}
		printf("\b\b\b\b\b\b\b\bafter multiplication::\n\t");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				printf("%d\t",g[i][j]);
			printf("\n\t");

		}
	}
}
