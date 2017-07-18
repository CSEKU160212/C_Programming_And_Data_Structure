#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *nptr, *tptr, *List, *pptr;
    int n;
    List=NULL;
    cout<<"Enter the number of node: ";
    cin>>n;
    //List Creation & node creation

    cout<<"Enter the data for "<<n<<" nodes: ";
    for(int i=0; i<n; i++)
    {
        nptr=new(node);
        cin>>nptr->data;
        nptr->next=NULL;

        if(List==NULL)
        {
            List=nptr;
            tptr=nptr;
        }
        else
        {
            tptr->next=nptr;
            tptr=nptr;
        }
    }
    cout<<endl;
    tptr=List; // tptr is now list

    //List print out
    for(int i=0; i<n; i++)
    {
        cout<<tptr->data;
        tptr=tptr->next;
        cout<<" ";
    }
    cout<<endl<<endl;


    //searching a data from the list

    int item;
    cout<<"Enter the data you wanna search: ";
    cin>>item;

    tptr=List;
    int flag=0;
    while(tptr->next != NULL)
    {
        if(tptr->data==item)
        {
            flag=1;
            break;
        }
        else
            tptr=tptr->next;
    }
    if(flag==0)
        if(tptr->data==item)
            flag==1;

    if(flag==1)
        cout<<"Found: "<<item<<endl;
    else
        cout<<"Not Found"<<endl;


    //insert a node into list

    nptr=new (node);
    cout<<"Enter new node's data: ";
    cin>>nptr->data;
    nptr->next=NULL;

    tptr=List;

    while(tptr->next->data < nptr->data)
    {
        tptr=tptr->next;
    }
    nptr->next=tptr->next;
    tptr->next=nptr;

    cout<<"Adding node done"<<endl<<endl;

//updated Linked list print out

    tptr=List;
    while(tptr->next !=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
    cout<<tptr->data<<endl<<endl;

    cout<<"Enter The value you want to delete: ";
    int num;
    cin>>num;

    tptr=List;

    while(tptr->data != num)
    {
        pptr=tptr;
        tptr=tptr->next;
    }
    pptr->next=tptr->next;
    delete(tptr);

    cout<<"Done deleting"<<endl<<endl;

    tptr=List;
    while(tptr->next != NULL)
    {
        cout<<tptr->data<< " ";
        tptr=tptr->next;
    }
    cout<<tptr->data<<endl<<endl;

    //add node before the list

    nptr=new (node);
    cout<<"Enter the data you want to add before the list: ";
    cin>>nptr->data;
    nptr->next=NULL;

    nptr->next=List;
    List=nptr;

    cout<<"Done adding node before first node"<<endl<<endl;
    tptr=List;
    while(tptr->next!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
    cout<<tptr->data<<endl<<endl;



    //adding node after last node

    nptr=new (node);
    cout<<"Enter the data you want to add after the list: ";
    cin>>nptr->data;
    nptr->next=NULL;
    tptr=List;
    while(tptr->next!=NULL)
    {
        tptr=tptr->next;
    }
    tptr->next=nptr;
    cout<<"Done Adding node after last node"<<endl<<endl;

    tptr=List;
    while(tptr->next!=NULL)
    {
        cout<<tptr->data<<" ";
        tptr=tptr->next;
    }
    cout<<tptr->data<<endl<<endl;
    return 0;
}
