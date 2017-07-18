#include <bits/stdc++.h>
#include<stack>
using namespace std;

struct node
{
    char data;
    node *link;
};

node *head=new (node);
head=NULL;
void push(char value)
{
    node *temp;
    temp= new node();
    temp->data=value;
    temp->next=top;
    top=temp;
    cout<<"\n\n";
}


void print()
{
	node *p = head;
	while(p)
	{
		printf(" %d",p->data);
		p = p->link;
	}
	printf(" \n\n ");
}
void Reverse()
{
	stack<node*> Stack;
	node *traverse = head;

	/* Pushing to Stack */
	while(traverse!=NULL)
	{
		Stack.push(traverse);
		traverse = traverse->link;
	}
	node *temp = Stack.top();
	head = temp;
	Stack.pop();
	while(!Stack.empty())
	{

		temp->link = Stack.top();
		Stack.pop();
		temp = temp->link;
	}
	temp->link = NULL;
}
int main()
{
 int n;
 char val;
 cout<<"Enter the total number of value to be pushed"<<endl;
 cin>>n;

 cout<<"Enter the value one by one: "<<endl;
 for(int i=0; i<n; i++)
 {
     cin>>val;
     push(val);
 }

 node *head=top;
reverse(&head);
printList(head);

    return 0;
}
