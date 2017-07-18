#include<stdio.h>
int top=-1;
int stack[5];
int max=4;
int isempty()
{

    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if(top == max)
        return 1;
    else
        return 0;
}
int peek()
{
    if(top!=-1)
        return stack[top];
    else
        printf("no value bcz stack is empty\n");
}
void push(int data)
{
    if(!isfull())
    {
        top=top+1;
        stack[top]=data;
    }
    else
        printf("insert is not possible bcz stack is full\n");
}
int pop()
{
    int data;
    if(!isempty())
    {
        data=stack[top];
        top=top-1;
        return data;
    }
    else
        printf("could not return data coz stack is empty\n");
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    printf("stack is full:%s\n",isfull()?"true":"false");
    printf("top: %d\n",peek());
    printf("elements:::\n");
    while(!isempty())
    {
        printf("%d\n",pop());
    }
    printf("stack is empty:%s\n",isempty()?"true":"false");
}
