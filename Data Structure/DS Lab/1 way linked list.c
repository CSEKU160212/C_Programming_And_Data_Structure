#include<stdio.h>
#include<stdlib.h>

struct list
{
    int data;
    struct list *next;
};

typedef struct list node;
void create(node *nptr)
{
    scanf("%d",&nptr->data);
    if(nptr->data==-1)
        nptr->next=NULL;
    else
    {
        nptr->next=(node*) malloc(sizeof(node));
        create(nptr->next);
    }
}
void print(node *nptr)
{
    if(nptr->next!=NULL){
        printf("%d-->",nptr->data);
        print(nptr->next);
    }
}

int main()
{
    node *head;
    head=(node*) malloc(sizeof(node));
    create(head);
    print(head);
}
