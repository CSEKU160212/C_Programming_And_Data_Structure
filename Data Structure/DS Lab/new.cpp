#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

void inorder( node *root ) {
    if (root != NULL){
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
}
void preorder( node *root ) {
    if (root != NULL){
        cout<<root->data;
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder( node *root ) {
    if (root != NULL){
        inorder(root->left);
        inorder(root->right);
        cout<<root->data;
    }
}
node* create_node(int data){
    node *nptr=new node;
    nptr->data=data;
    nptr->left=NULL;
    nptr->right=NULL;

    return nptr;
}

int searchin(node *root,int a)
{
    if(root==NULL)
        return 0;
    else
    {
        if(root->data==a)
            return 1;
        else if(root->data > a)
            searchin(root->left,a);
        else
            searchin(root->right,a);
    }
}

void add(node *p,int b)
{
    while(true){
            if(p->data >= b){
                if(p->left==NULL)
                {
                    p->left=create_node(b);
                    break;
                }
                else
                    p=p->left;
            }
            else
            {
                if(p->right==NULL)
                {
                    p->right=create_node(b);
                    break;
                }
                else
                    p=p->right;
            }
            }
}

int main()
{
    int a,b,c,flag;
    node *root,*p;

    root=NULL;

    cout<<"input integers to make a tree.\ninput 0 to end input: \n";

    cin>>a;
    while(a!=0)
    {
        if(root ==NULL)
            root=create_node(a);
        else
        {
            p=root;
            while(1)
            {
                if(p->data >= a)
                {
                    if(p->left==NULL){
                        p->left=create_node(a);
                        break;
                    }
                    else{
                        p=p->left;
                    }
                }
                else
                {
                    if(p->right == NULL)
                    {
                        p->right = create_node(a);
                        break;
                    }
                    else{
                        p=p->right;
                    }
                }
            }
        }
        cin>>a;
    }
    p=root;
    inorder(root);
    cout<<"\n";
    p=root;
    preorder(root);
    cout<<"\n";
    p=root;
    postorder(root);
    while(1)
    {
        cout<<"\npress 1 to search:\npress 2 to add:\npress 3 to delete:\n";
        scanf("%d",&b);
        if(b==1){
            cout<<"input value to search:\n";
            cin>>b;
            p=root;
            flag=searchin(p,b);
            if(flag==1)
                cout<<"FOUND!!!!";
            else
                cout<<"NOT FOUND!!!!";
        }
        if(b==2)
        {
            cout<<"input value to add:\n";
            cin>>b;
            p=root;
            add(p,b);
            p=root;
            inorder(root);
            cout<<"\n";
            p=root;
            preorder(root);
            cout<<"\n";
            p=root;
            postorder(root);
            cout<<"\n";
        }
    }

    return 0;
}

