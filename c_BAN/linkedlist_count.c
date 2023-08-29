#include <stdio.h>
#include<stdlib.h>
static int c=0;
typedef struct student
{
    int id;
    char name[90];
    struct student *next;
}student;
student *createnode()
{
    student *new=(student *)malloc(sizeof(student));
    printf("Enter the id name:\n");
    scanf("%d %s",&new->id,new->name);
    new->next=NULL;
    c++;
    return new;
}
void print_ll(student *p)
{
    while(p)
    {
        printf("%d \t%s \n",p->id,p->name);
        p=p->next;
    }
}

int main() {
    student *Head=NULL,*s=NULL,*last=NULL;
    char ch;
    while(1)
    {
        s=createnode();
        if(Head==NULL)
        {
            Head=s;
        }
        else
        {
            last->next=s;
        }
        last=s;
        
        printf("do you add:\n");
        getchar();
        scanf("%c",&ch);
        if(ch=='n'||ch=='N')
        break;
       
    }
     printf(" count the number of nodes %d\n",c);
    print_ll(Head);
}
