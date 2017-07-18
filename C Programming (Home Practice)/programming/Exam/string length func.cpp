#include<stdio.h>
int strlen(char st[])
{
    int i;
    for(i=0; ; i++)
    {
        if(st[i]==NULL)
            break;
    }
    return i;
}
int main()
{
    char st[1000];
    gets(st);
    int i=strlen(st);
    printf("%s length is %d",st,i);
}
