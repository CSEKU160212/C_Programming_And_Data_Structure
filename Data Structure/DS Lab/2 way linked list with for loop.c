#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *back;
    int data;
    struct node *next;
};

void print(struct node *nptr)
{
    while(nptr->next!=NULL)
    {
        printf("%d-->",nptr->data);
        nptr=nptr->next;
    }
    printf("%d-->NULL",nptr->data);
}
void printlast(struct node *nptr)
{
    while(nptr->back!=NULL)
    {
        printf("%d-->",nptr->data);
        nptr=nptr->back;
    }
    printf("%d-->NULL",nptr->data);
}
int main()
{
    struct node *list,*nptr,*tptr,*last;
    list=NULL;
    last=NULL;
    int i;
    for(i=0; i<5; i++)
    {
        nptr=(struct node*) malloc(sizeof(struct node));
        nptr->back=NULL;
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
            nptr->back=tptr;
            tptr=nptr;
            last=tptr;
        }
    }
    print(list);
    printf("\n");
    printlast(last);

    int select;
    printf("\npress 1 for search\npress 2 for add\npress 3 for delete\n");
    scanf("%d",&select);
    if(select==1)
    {
        int search,flag=0;
        printf("\nnow we want to find a number from the list:\n");
        printf("\nenter the value to search\n");
        scanf("%d",&search);
        nptr=last;
        while(nptr->back!=NULL)
        {
            if(nptr->data==search)
            {
                flag=1;
                break;
            }
            nptr=nptr->back;
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
        tptr->back=NULL;
        printf("\nenter the position value to AFTER where to add\n");
        scanf("%d",&pos);
        nptr=last;
        while(nptr->data!=pos)
        {
            nptr=nptr->back;
        }
        printf("%d\n",nptr->data);
        tptr->next=nptr->next;
        tptr->back=(tptr->next)->back;
        (tptr->next)->back=nptr;
        nptr->next=tptr;
        print(list);
        printf("\n");
        printlast(last);
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
        (nptr->next)->back=nptr->back;
        free(nptr);
        print(list);
        printf("\n");
        printlast(last);
    }
    return 0;
}
