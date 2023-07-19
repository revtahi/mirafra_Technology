/*Write a program to get maximum repeating element in an array*/

#include<stdio.h>
int main()
{
	int a[10]={9,9,9,4,4,4,4,4,2,2};
	int i,max_element=0,c=0,j,m_c=0;
	printf("Enter tha array elements:\n");

	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	printf("Maximum repeating element is:\n");

	for(i=0;i<10;i++)
	{
		c=0;
		for(j=i+1;j<10;j++)
			if(a[i]==a[j])
			{
				c++;
			}
		//printf("%d\n",a[i]);

		if(c>m_c)
		{
			//printf("%d",a[i]);
			m_c=c;
			max_element=a[i];
		}
	}
	printf("%d\n",max_element);
}
