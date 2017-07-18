#include<stdio.h>
int main()
{
    char st[100];
    int i,l;
    gets(st);
    for(i=0;;i++)
    {
        if(st[i]=='\0') break;
    }
    l=i;
    for(i=0;i<l;i++)
    {
        if(st[i]>='A' && st[i]<='Z')
        {
            printf("%c", st[i]+32);
        }
        if(st[i]>='a' && st[i]<='z')
        {
            printf("%c", st[i]-32);
        }

        else
        {
            printf("%c",st[i]);
        }
    }

}

