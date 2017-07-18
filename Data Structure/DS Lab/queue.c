#include<stdio.h>
int queue[5];
int max=4;
int front=-1;
int rear=-1;
int print()
{
    int data;
    if(front<=rear){
        data=queue[front];
    return data;
    }
    else
        printf("there have no query element\n");
}
int main()
{
    int a;
    while(rear!=max)
    {
        scanf("%d",&a);
        if(front==-1)
        {
            front=front+1;
            rear=rear+1;
            queue[front]=a;
        }
        else
        {
            rear+=1;
            queue[rear]=a;
        }
    }
    while(front<=rear)
    {
        printf("%d ",print());
        front=front+1;
    }
    return 0;
}
