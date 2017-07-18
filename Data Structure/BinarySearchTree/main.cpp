/* **********Md. Abdul Lotif***********************
***********Student Id:160212***********************
**********Data Structure lab homework**************
*/

#include <bits/stdc++.h>

using namespace std;

struct BSTnode
{
    int data;
    BSTnode *leftptr;
    BSTnode *rightptr;
};
BSTnode* createNewNode(int value);
BSTnode* insertNode(BSTnode *root, int value);
bool searchFromTree(BSTnode *root,int value);

int main()
{
    BSTnode *root;
    root=NULL;
    int n, nodeData;
    cout << "Enter the total number of node:" << endl;
    cin>>n;
    cout<<"Enter "<<n<<" data one by one: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>nodeData;
        root=insertNode(root, nodeData);
    }

    int sData;
    cout<<"Enter a data for searching"<<endl;
    cin>>sData;
    if(searchFromTree(root, sData) == true)
    {
        cout<<"Found the data"<<endl;
    }
    else
    {
        cout<<"Data not found !!!!!"<<endl;
    }
    return 0;
}

BSTnode* createNewNode(int value)
{
    BSTnode *newNode= new BSTnode();
    newNode->data=value;
    newNode->leftptr=NULL;
    newNode->rightptr=NULL;
    return newNode;
}

BSTnode* insertNode(BSTnode *root, int value)
{
    if(root==NULL)
    {
        root=createNewNode(value);
    }

    else if(value<=root->data)
    {
        root->leftptr=insertNode(root->leftptr, value);
    }
    else
    {
        root->rightptr=insertNode(root->rightptr, value);
    }
    return root;
}

bool searchFromTree(BSTnode *root, int value)
{
    if(root==NULL)
    {
        return false;
    }
    else if (root->data==value)
    {
        return true;
    }
    else if(value<=root->data)
    {
        return searchFromTree(root->leftptr, value);
    }

    else
    {
        return searchFromTree(root->rightptr, value);
    }

}
