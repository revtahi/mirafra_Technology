/*4.Reverse of array*/
#include<stdio.h>
int reversearray(int a[],int n);
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   reversearray(a,n);
  printf("the reverse array is:");
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
}
int reversearray(int a[],int n)
{
    int i,j,t;
    
    for(i=0,j=n-1; i<j;i++,j--)
    {

        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}

