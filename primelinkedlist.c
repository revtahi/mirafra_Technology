// To write a pgm primenumbers using linkedlist.

#include"header.h"
int main()
{
	int i,n,N;
	student *H=NULL,*last=NULL,*new=NULL;

	printf("Enter the starting index and ending index:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(isprime(i))
		{
			new=createnode(i);
			if(H==NULL)
			{
				H=new;
			}
			else
			{
				last->next=new;
			}
			last=new;
		}
	}
	print_ll(H);
}
