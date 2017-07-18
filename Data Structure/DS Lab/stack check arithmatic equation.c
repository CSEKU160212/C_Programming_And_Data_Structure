#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char stack[200];

void push(char start)
{
    top+=1;
    stack[top]=start;
}
void pop(char end)
{
    if(end==']')
    {
        if(stack[top]=='[')
            top-=1;
        else
        {
            printf("expression is invalid\n");
            return;
        }
    }
    else if(end=='}')
    {
        if(stack[top]=='{')
            top-=1;
        else
        {
            printf("expression is invalid\n");
            return;
        }
    }
    else if(end==')')
    {
        if(stack[top]=='(')
            top-=1;
        else
        {
            printf("expression is invalid\n");
            return;
        }
    }
}

void TopFind()
{
    if(top==-1)
        printf("expression is invalid\n");
    else
        printf("expression is invalid\n");
}

int main()
{
    char equation[200];
    int length,i;
    while(1)
    {
        printf("Input The Equation You want To Evaluate:\n");
        gets(equation);
        length=strlen(equation);
        for(i=0; i<length; i++)
        {
            if(equation[i]=='[' || equation[i]=='{' || equation[i]=='(')
                push(equation[i]);
            else if(equation[i]==']' || equation[i]=='}' || equation[i]==')')
                if(top==-1)
                {
                    break;
                }
                else
                    pop(equation[i]);
        }
        TopFind();
    }
    return 0;
}
