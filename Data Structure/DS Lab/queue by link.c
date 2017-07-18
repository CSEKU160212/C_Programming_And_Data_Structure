#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node *front)
{
    while(front->next!=NULL)
    {
        printf("%d-->",front->data);
        front=front->next;
    }
    printf("%d",front->data);
}
int main()
{
    struct node *front,*rear,*nptr;
    front=NULL;
    int i;
    for(i=0;i<5;i++)
    {
        nptr=(struct node*) malloc(sizeof(struct node));
        scanf("%d",&nptr->data);
        nptr->next=NULL;
        if(front==NULL)
        {
            front=nptr;
            rear=nptr;
        }
        else
        {
            rear->next=nptr;
            rear=nptr;
        }
    }
    rear->next=NULL;
    print(front);
    return 0;
}
