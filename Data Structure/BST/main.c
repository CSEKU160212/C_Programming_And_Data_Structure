#include <stdio.h>
#include <stdlib.h>
struct BST
{

    int value;
    struct BST *left;
    struct BST *right;
};

typedef struct BST node;

node* create_new_node();
void insert(node *p, int n);

int main()
{
    node *temp, *root;
    int v;
    //node *root=(node*)malloc(sizeof(node));
    //root= create_new_node();
    root=NULL;
    while(1)
    {
        scanf("%d", &v);
        if (v>9999)
        {
            break;
        }
        else
        {
            temp= create_new_node();
            insert(temp, v);
        }
    }
    insert(root, 10);

    return 0;
}

node* create_new_node()
{
    node* ptr=(node*)malloc(sizeof(node));
    ptr->left=NULL;
    ptr->right=NULL;

    return ptr;
}

void insert(node *p, int n)
{
    if(p==NULL)
    {
        p=create_new_node();
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
