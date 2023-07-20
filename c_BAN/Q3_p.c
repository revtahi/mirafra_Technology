/* Insert an element in a particular position in an  array*/ 

#include<stdio.h>
int insertarray(int a[],int n,int p,int e);
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int a[n],p,e,i;
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the position:\n");
    scanf("%d",&p);
    printf("Enter the replacing element:\n");
    scanf("%d",&e);
    insertarray(a,n,p,e);
     for(i=0;i<n;i++)
    printf("%d",a[i]);
}
int insertarray(int a[],int n,int p,int e)
{
    int i,j;
    for(i=0;i<p;i++)
    {
        a[p]=e;
    }
}

