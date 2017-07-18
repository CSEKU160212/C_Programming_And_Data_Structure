#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *top=NULL;

void push(int value)
{
    node *temp;
    temp= new node();
    temp->data=value;
    temp->next=top;
    top=temp;
    cout<<"\n\n";
}

void pop()
{
    node *temp;
    if(top==NULL) return;
    temp=top;
    top=top->next;
    delete(temp);
    cout<<"\n\n";
}

void display()
{
    cout << "Displaying Stack: ";
    while(top->next!=NULL)
    {
        cout<<top->data<< " ";
        top = top->next;
    }
        cout<<top->data<<endl<<endl;
}
int main()
{
    int choice, val;
    do
    {
        cout<<"Operation: "<<endl<<"push: 1"<<endl<<"pop: 2"<<endl<<"Display: 3"<<endl<<"exit: 0"<<endl<<"Please select the operation: "<<endl;
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the value to be pushed: "<<endl;
            cin>>val;
            push(val);
        }
        else if(choice==2)
        {
            pop();
        }

        else if(choice==3)
        {
            display();
        }

        else
        {
            cout<<"No such operation found"<<endl<<endl;
        }
    }
    while(choice!=0);
    return 0;
}
