#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;
};
struct node *top;
int main()
{
    struct node *nptr;
    top=NULL;
    char equation[200];
    int length,i;
    printf("Input The Equation You want To Evaluate:\n");
    gets(equation);
    length=strlen(equation);
    for(i=0; i<length; i++)
    {
        if(equation[i]=='[' || equation[i]=='{' || equation[i]=='(')
        {
            nptr=(struct node*)malloc(sizeof(struct node));
            nptr->data=equation[i];
            nptr->next=NULL;
            if(top==NULL)
                top=nptr;
            else
            {
                nptr->next=top;
                top=nptr;
            }
        }
        else if(equation[i]==']' || equation[i]=='}' || equation[i]==')')
        {
            if(top==NULL)
                break;
            else
            {
                if(equation[i]==']')
                {
                    if(top->data=='[')
                        top=top->next;
                    else
                    {
                        printf("expression is invalid\n");
                        return 0;
                    }
                }
                else if(equation[i]=='}')
                {
                    if(top->data=='{')
                        top=top->next;
                    else
                    {
                        printf("expression is invalid\n");
                        return 0;
                    }
                }
                else if(equation[i]==')')
                {
                    if(top->data=='(')
                        top=top->next;
                    else
                    {
                        printf("expression is invalid\n");
                        return 0;
                    }
                }
            }
        }
    }
    if(top==NULL)
        printf("expression is valid\n");
    else
        printf("expression is invalid\n");
    return 0;
}
