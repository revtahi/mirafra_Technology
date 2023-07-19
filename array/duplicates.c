/*Find the duplicate element in a limited range array
Google Translate Icon
Given a limited range array of size n containing elements between 1 and n-1 with one element repeating, find the duplicate number in it without using any extra space.

For example,

Input:  { 1, 2, 3, 4, 4 }
Output: The duplicate element is 4

######################################################################################*/
// Online C compiler to run C program online
#include <stdio.h>
void findpr(int num[],int n);

int main() {
	int n=11;
    int num[n]={1,2,3,3,4,4,5,8,9,6,5,6};
    
    /*int n=sizeof(num)/sizeof(num[0]);
    printf("sie %d\n",n);*/
    findpr(num,n);

    return 0;
}
void findpr(int num[],int n)
{
    int i=0,j ,c=0;
    for(i=0;i<=n;i++)
    {
        
        for(j=i+1;j<=n-1;j++)
        {
            if(i==j)
                continue;
            if(num[i]==num[j])
            {
                c++;
                //printf("count :%d\n",c++);
                 printf("found (%d,%d)\t ,indexs:%d ,%d\n",num[i],num[j],i,j);
                 
            }
            

        }
    }
   printf("count :%d\n",c);
}
