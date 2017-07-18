#include <stdio.h>
#include <stdlib.h>

struct student
{
    int x;
    struct student *ptr;
};

typedef struct student node;

void create (node *list);

void print (node *list);

int main()
{
    node *head;
    head= (node*) malloc(sizeof(node));
    create(head);
    print(head);
    return 0;
}

void create (node *list)
{
    scanf("%d",&list->x);
    if(list->x == -1)
        list->ptr = NULL;
    else{
        list->ptr = (node*) malloc(sizeof(node));
        create(list->ptr);
    }
}

void print (node *list)
{
    if(list->ptr != NULL)
    {printf("%d--->",list->x);
    print(list->ptr);}
}


