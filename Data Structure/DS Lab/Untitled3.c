#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void creatlinklist(struct node *nptr)
{
    printf("\n\n Enter data to the LinkedList:");
    scanf("%d",&nptr->data);
    if(nptr->data !=-1)
    {
        nptr->next=(struct node*)malloc(sizeof(struct node));
        creatlinklist(nptr->next);
    }
    else
    {
        nptr->next=NULL;
        printf("data entry end\n");
        return;
    }
}
void displ(struct node *list)
{
    if(list->next!=NULL)
    {
        while(list->next->next!=NULL)
        {
            printf("%d-->",list->data);
            list=list->next;
        }
        printf("%d",list->data);
    }
    else
    {
        printf("\n\nThe list is Empty...");
    }
}


int main()
{
    int ch;
    struct node *list;
    do
    {
        printf("\n1.create Linked List");
        printf("\n2.display Linked List");
        printf("\n3.Exit");
        printf("\n4.Enter your choice:-");
        scanf("%d",&ch);
        if(ch==1){
            list=(struct node*)malloc(sizeof(struct node));
            creatlinklist(list);
        }
        else if(ch==2)
            displ(list);
        else if(ch==3)
            return 0;
        else
            printf("\n\n\t Wrong Entry..try again....");
        }
    while(ch!=3);
    return 0;
}
