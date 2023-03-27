// To write a pgm primenumbers using linkedlist.

#include"header.h"
int main()
{
	int i,n,N,x;
	student *H=NULL,*last=NULL,*new=NULL;

	printf("Enter the number:\n");
	scanf("%d",&n);

	int prev_prime=1,current_prime,p;

	for(i=3;i<=n;i=i+2)
	{
		if(isprime(i))
		{
			current_prime=i;

			if(current_prime - prev_prime == 2)
			{

				printf("Previous :%d ",prev_prime);
				printf("Current :%d \n",current_prime);
				if(p!=prev_prime)
				{
					new=createnode(prev_prime);
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
				prev_prime=current_prime;
				p=prev_prime;

				new=createnode(current_prime);
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
			else
			{
				prev_prime=current_prime;
			}
		}
	}
	print_ll(H);
}
