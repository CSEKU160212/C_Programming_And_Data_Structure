#include<bits/stdc++.h>

using namespace std;
#define m 10

struct  node{
int data;
node *next;

};

int main()
{
    // creation a stack using linked list
    node *nptr, *tptr, *top;

    top=NULL;

    for(int i=0; i<5; i++)
    {
        nptr=new (node);
        cin>>nptr->data;
        nptr->next=NULL;
        if(top== NULL)
        {
            top=nptr;
        }

        else
        {
            nptr->next=top;
            top=nptr;
        }
    }

    // displaying data
    cout<<endl<<endl;
    tptr=top;
     for(int i=0; i<5; i++)
     {
         if(top==NULL)
            cout<<"Empty"<<endl;
         else
         {
             cout<<tptr->data<<" ";
             tptr=tptr->next;
         }
     }

     cout<<endl<<endl;


    return 0;
}
