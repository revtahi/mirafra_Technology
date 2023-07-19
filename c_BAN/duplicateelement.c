/*2.Find the duplicate element in a limited range array*/
#include <stdio.h>
int duplicatetarray(int a[],int n);
int main() {
        int n;
        printf("Enter the array size:\n");
        scanf("%d",&n);
        int a[n],i;
        
        printf("Enter the array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        duplicatetarray(a,n);
    return 0;
}
int duplicatetarray(int a[],int n)
{
    int i,j;
    int count = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count > 0)
        {
           // printf("duplicate elements %d\n", a[i]);
            count = 0;
        }
    }
	printf("duplicate element is  %d\n", a[i]);
}

