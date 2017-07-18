#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node nd;
void print(struct node *nptr)
{
    while(nptr->next!=NULL)
    {
        printf("%d-->",nptr->data);
        nptr=nptr->next;
    }
    printf("%d-->NULL",nptr->data);
}
int main()
{
    nd *list,*nptr,*tptr;
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
            tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;
        }
    }
    tptr->next=NULL;
    print(list);
    int select;
    printf("press 1 for search\npress 2 for add\npress 3 for delete\n");
    scanf("%d",&select);
    if(select==1)
    {
        int search,flag=0;
        printf("\nnow we want to find a number from the list:\n");
        printf("\nenter the value to search\n");
        scanf("%d",&search);
        nptr=list;
        while(nptr->next!=NULL)
        {
            if(nptr->data==search)
            {
                flag=1;
                break;
            }
            nptr=nptr->next;
        }
        if(flag==0)
            if(nptr->data==search)
                flag=1;

        if(flag==1)
            printf("found it and it is==%d\n",nptr->data);
        else
            printf("not found\n");
    }

    else if(select==2)
    {
        int pos;
        tptr=(struct node*) malloc(sizeof(struct node));
        printf("\nnow we want to add a number into the list:\n");
        printf("\nenter the value to add\n");
        scanf("%d",&tptr->data);
        tptr->next=NULL;
        printf("\nenter the position value to AFTER where to add\n");
        scanf("%d",&pos);
        nptr=list;
        while(nptr->data!=pos)
        {
            nptr=nptr->next;
        }
        tptr->next=nptr->next;
        nptr->next=tptr;
        print(list);
    }

    else if(select==3)
    {
        int dlt;
        printf("\nnow we want to delete a number from the list:\n");
        printf("\nenter the value to delete\n");
        scanf("%d",&dlt);
        nptr=list;
        while(nptr->data!=dlt)
        {
            tptr=nptr;
            nptr=nptr->next;
        }
        tptr->next=nptr->next;
        free(nptr);
        print(list);
    }
    return 0;
}
