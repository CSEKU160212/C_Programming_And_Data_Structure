#include<bits/stdc++.h>
#include<stack>	//Use Standard template library to create Stack data structure
using namespace std;

typedef struct Node
{
	int data;
	struct Node *link;
}node;

node *head = NULL;		// Head node to keep track of linked list

/* Driver functions */
void Reverse();
void insert(int data, int position);
void print();

/* Main method */
int main()
{
	insert(0,1);	// Insert Element at first position LINKED-LIST =  / 0 /
	insert(1,2);	// Insert Element at second position LINKED-LIST = / 0 1 /
	insert(2,3);	// Insert Element at third position LINKED-LIST =  / 0 1 2 /
	insert(3,4);	// Insert Element at fourth position LINKED-LIST = / 0 1 2 3/

	print();		// Printing Elements of Linked List

	Reverse();

	print();		// Printing Elements of Linked List

	return 0;
}

/* Function for Inserting nodes at defined position */
void insert(int data, int position)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->link = NULL;

	if(position==1)
	{
		temp->link = head;
		head = temp;
		return ;
	}

	node *traverse = head;

	for(int i=0; i<position-2; i++)
	{
		traverse = traverse->link;
	}

	temp->link = traverse->link;
	traverse->link = temp;

}

/* Function for Printing Linked List */
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

/* Function for Reversing Linked List */
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

	/* Poping from Stack */
	node *temp = Stack.top();
	head = temp;
	Stack.pop();
	while(!Stack.empty())
	{

		temp->link = Stack.top();
		Stack.pop();
		temp = temp->link;
	}
	temp->link = NULL;				// Make last node link to zero which not linked to other node
}
