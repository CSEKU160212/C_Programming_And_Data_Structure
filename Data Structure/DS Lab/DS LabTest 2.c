#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stack[10];

void push(char a)
{
    if(top<9)
        stack[++top]=a;
    else
        printf("overflow,stack size is 10\n");
}

void delet()
{
    top=top-1;
}

void print()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%c",stack[i]);
    }
    printf("\n");
}
int main()
{
    char c,add,del,pot;
    while(1)
    {
        printf("for push a character press P:\nfor undo press U:\n");
        scanf("%c%*c",&c);
        if(c=='p' || c=='P')
        {
            scanf("%c%*c",&add);
            push(add);
            print();
        }
        else if(c=='u' || c=='U')
        {
            delet();
            print();
        }

    }
    return 0;

}
