#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

int main()
{
    //add stack
    int stack[10];
    int top;
    cout<<"Enter Top: ";
    cin>>top;

    int item;
    cout<<endl<<"Enter Item";
    cin>>item;

    if(top<10)
{
    top=top+1;
    stack[top]=item;
    cout<<stack[top]<<endl;
}
    else
            cout<<"Over Flow: "<<endl;



    return 0;
}
