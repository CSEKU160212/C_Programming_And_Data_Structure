#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node *nptr)
{
    struct node *list;
    list=nptr;
    while(nptr->next!=list)
    {
        printf("%d-->",nptr->data);
        nptr=nptr->next;
    }
    printf("%d",nptr->data);
}
int main()
{
    struct node *list,*nptr,*tptr;
    int i;
    list=NULL;
    for(i=0; i<5; i++)
    {
        nptr=(struct node*) malloc(sizeof(struct node));
        scanf("%d",&nptr->data);
        nptr->next=NULL;
        if(list==NULL)
        {
            list=nptr;
            list->next=list;
            tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            nptr->next=list;
            tptr=nptr;
        }
    }
    print(list);
    return 0;
}
