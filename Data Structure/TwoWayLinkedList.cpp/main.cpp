#include <bits/stdc++.h>

using namespace std;

struct node
{

    int value;
    node *left;
    node *right;
};

node* create_new_node();
node* insert();
int main()
{
    node *root;

    node *temp;
    int v;
    while(1)
    {
        cin>>v;
        if(n>999)
        {
            break;
        }

        else
        {
            temp=create_new_node();
            insert(*temp, n);
        }
    }
    return 0;
}


node* create_new_node()
{
    node *ptr=new (node);
    ptr->left=NULL;
    ptr->right=NULL;
}


void insert(node *p, int n)
{
    if(p==NULLL)
    {
        p->value = n;
    }
    else if(n <p->value)
    {
        insert(p->left, p->value);
    }

    else
    {
        insert(p->right, p->value);
    }
}
