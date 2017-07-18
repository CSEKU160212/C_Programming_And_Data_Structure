#include<stdio.h>
int main()
{
    char st[100];
    gets(st);
    int i,j,count =0;
    for(i=0;;i++)
    {
        if(st[i]==NULL)
        {
            break;
        }
    }
    int l = i;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<l;i++)
    {
        if(ch==st[i])
        {
            count++;
        }
    }
    printf("%d",count);
}
