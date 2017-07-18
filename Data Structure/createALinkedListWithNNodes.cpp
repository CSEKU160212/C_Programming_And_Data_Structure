#include<bits/stdc++.h>


using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int n, item;
    node *list, *tptr, *nptr, *nnptr, *pptr;
    list=NULL;
    cout<<"Enter the nodes number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        nptr = new(node);
        cout<<"Enter the value data for the "<<i<<"th node: ";
        cin>>item;                                                 //item = (10, 20, 30, 40, 50, 60, 70, 80, 90, 100)

        nptr->data=item;
        nptr->next=NULL;

        if(list==NULL)
        {
            list=nptr;
            tptr=nptr;
        }
        else{
            tptr->next=nptr;
            tptr=nptr;
        }
    }

    //displaying data from linked list
    tptr=list;

    cout<<endl<<endl<<"Displaying full linked list: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }

    cout<<endl<<endl;

    //search a data from a linked list

    tptr=list;
    int val, found=0;
    cout<<"Enter the value to be searched: ";
    cin>>val;
    while(tptr->data != item)
    {
        if(tptr->data==val)  // or tptr->next!=NULL
        {
            found=1;
            break;
        }

        else
            tptr=tptr->next;
    }

    if(found==1)
        cout<<"Data found"<<endl;
    else
        cout<<"Data not found"<<endl<<endl;

    //insert a new node after 40
    tptr=list;
   // value will add after 40
    nnptr=new (node);
    nnptr->data=45;

    while(tptr->next->data < nnptr->data)
    {
        tptr=tptr->next;
    }

    nnptr->next=tptr->next;
    tptr->next=nnptr;

    // displaying updated node;

    cout<<"Displaying updated Linked List after adding: "<<endl;

    tptr=list;
    while(tptr->next!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }

    //Delete a node;
     int value2=45;

      tptr=list;
      while(tptr->data!=value2)
      {
          pptr=tptr;
          tptr=tptr->next;
      }

      pptr->next=tptr->next;
      //delete(ttptr);

      //displaying updated linked list

      tptr=list;
      cout<<endl<<endl<<"Updated Lisked list after deleted: "<<endl;
      while(tptr->next!=NULL)
      {
          cout<<tptr->data<<" ";
          tptr=tptr->next;
      }

      cout<<endl<<endl;


    return 0;
}
