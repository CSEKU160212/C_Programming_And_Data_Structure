#include<Stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
int main()
{
    node *list,*nptr,*tptr;
    list = NULL;
        while(1)
        {
            nptr = (node*) malloc (sizeof(node));
            scanf("%d",&nptr->data);
            if(nptr->data == -1)
                break;
            nptr->next = NULL;
            if(list == NULL)
            {
                list = nptr;
                tptr = nptr;
            }
            else
            {
                tptr->next = nptr;
                tptr = nptr;

        }


}
 tptr = list;
while( tptr->next!= NULL)
        {
            printf("%d\n",tptr->data);
            tptr = tptr->next;
        }
        printf("%d\n",tptr->data);
        // tptr = list;
printf("insert data that you want to enter into the node:");

        nptr = (node*) malloc (sizeof(node));
scanf("%d",&nptr->data);
nptr->next = NULL;
       /* while( tptr->next->data < nptr->data)
        {
            tptr = tptr->next;
        }
        nptr->next = tptr->next;
        tptr->next = nptr;*/
        //nptr->next = list;
        //list = nptr;

        tptr->next = nptr;//Adding new node after last node
        tptr = nptr;

 tptr = list;
while( tptr != NULL)
        {
            printf("%d\n",tptr->data);
            tptr = tptr->next;
        }
return 0;
}
