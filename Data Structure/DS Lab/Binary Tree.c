#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder( struct node *root )
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder( struct node *root )
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder( struct node *root )
{
    if (root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        printf("%d ", root->data);
    }
}
struct node* create_node(int data)
{
    struct node *nptr=(struct node*)malloc (sizeof(struct node));
    nptr->data=data;
    nptr->left=NULL;
    nptr->right=NULL;

    return nptr;
}

int search(struct node *root,int a)
{
    if(root==NULL)
        return 0;
    else
    {
        if(root->data==a)
            return 1;
        else if(root->data > a)
            search(root->left,a);
        else
            search(root->right,a);
    }
}

void addnode(struct node *root,int a)
{
    if(root->data >= a){
            if(root->left==NULL)
                root->left=create_node(a);
            else
                addnode(root->left,a);
    }
    else
        {
            if(root->right==NULL)
                root->right=create_node(a);
            else
                addnode(root->right,a);
        }
}

struct node* findmin(struct node *root)
{
    if(root->left==NULL)
        root=root;
    else
        findmin(root->left);

        return root;
}

void deletenode(struct node *root,int a)
{
    struct node *nptr,*p,*min;
    int flag;
    if(root==NULL)
        flag=0;
    else
    {
        if(root->data==a)
            flag=1;
        else if(root->data > a)
            deletenode(root->left,a);
        else
            deletenode(root->right,a);
    }
    if(flag==0)
        printf("value is not in BST..\n");
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            root=NULL;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            nptr=root;
            root=root->right;
            free(nptr);
        }
        else if(root->left!=NULL && root->right==NULL)
        {
            nptr=root;
            root=root->left;
            free(nptr);
        }
        else
        {
            p=root;
            min=findmin(p->right);
            root->data=min->data;
            deletenode(root->right,min->data);
        }

    }

}

int main()
{
    int a,b,c,flag;
    struct node *root,*p;

    root=NULL;

    printf("input integers to make a tree.\ninput 0 to end input: \n");

    scanf("%d",&a);
    while(a!=0)
    {
        if(root ==NULL)
            root=create_node(a);
        else
        {
            p=root;
            addnode(p,a);
        }
        scanf("%d",&a);
    }
    p=root;
    inorder(root);
    printf("\n");
    p=root;
    preorder(root);
    printf("\n");
    p=root;
    postorder(root);
    while(1)
    {
        printf("\npress 1 to search:\npress 2 to add:\npress 3 to delete:\n");
        scanf("%d",&b);
        if(b==1)
        {
            printf("input value to search:\n");
            scanf("%d",&a);
            p=root;
            flag=search(p,a);
            if(flag==1)
                printf("FOUND!!!!");
            else
                printf("NOT FOUND!!!!");
        }
        if(b==2)
        {
            printf("input value to add:\n");
            scanf("%d",&a);
            p=root;
            addnode(p,a);
            p=root;
            inorder(p);
            printf("\n");
            p=root;
            preorder(p);
            printf("\n");
            p=root;
            postorder(p);
        }
        if(b==3)
        {
            printf("input value to delete:\n");
            scanf("%d",&a);
            p=root;
            deletenode(p,a);
            p=root;
            inorder(root);
            printf("\n");
            p=root;
            preorder(root);
            printf("\n");
            p=root;
            postorder(root);
        }
    }

    return 0;
}
