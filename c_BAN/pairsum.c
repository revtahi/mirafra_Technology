/*1.Find a pair with the given sum in an array?*/

#include <stdio.h>
int findpair(int n,int a[],int t);
int main() {
        int n=5,t=10;
        int a[n],i;
        
        printf("Enter the array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        findpair(n,a,t);
    return 0;
}
int findpair(int n,int a[],int t)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t==a[i]+a[j])
            {
                printf("findingpair(%d %d)\n",a[i],a[j]);
            }
        }
    }
}

