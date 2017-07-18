#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[20];
int top=-1;

void push(char a)
{
    stack[++top]=a;
}

char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char a)
{
    if(a=='*' || a=='/')
        return 2;
    if(a=='+' || a=='-')
        return 1;
    if(a=='(')
        return 0;
}

int main()
{
    char equation[20],x;
    int length,initial;
    gets(equation);
    length=strlen(equation);
    for(initial=0; initial<length; initial++)
    {
        if(isalnum(equation[initial]))
            printf("%c",equation[initial]);
        else if(equation[initial]=='(')
            push(equation[initial]);
        else if(equation[initial]==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(priority(stack[top]) >= priority(equation[initial]))
                printf("%c",pop());
            push(equation[initial]);
        }
    }
    while(top!=-1)
        printf("%c",pop());
    return 0;
}
