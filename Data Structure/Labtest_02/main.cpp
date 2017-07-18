#include <bits/stdc++.h>

using namespace std;

struct node
{
    char data;
    node *next;
    int node[10];
};

node *top=NULL;
int i=1;

void push(char value);
void pop();
void Display();
int main()
{
    char ch1, ch2;

    int max =10;
    while(1){
       cin>> ch1;
    if(i>10)
        cout<<"Stack overflow"<<endl;
        switch(ch1){
    case 'p':
    case 'P':
        cin>>ch2;
        push(ch2);
    break;

    case 'u':
    case 'U':
        pop();
    }
    }
    return 0;
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
void push(char value)
{
    node *temp;
    temp= new node();
    temp->data=value;
    temp->next=top;
    top=temp;
    display();
    i++;

    cout<<"\n\n";
}

void pop()
{
    node *temp;
    if(top==NULL) return;
    temp=top;
    top=top->next;
    delete(temp);
    display();
    cout<<"\n";
}

