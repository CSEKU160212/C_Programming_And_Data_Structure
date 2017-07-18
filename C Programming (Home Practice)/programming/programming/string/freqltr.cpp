#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],a[26];
    int i,l;
    gets(st);
    for(i=0; i<26; i++)
        a[i]=0;
    l = strlen(st);
    for(i=0; i<l; i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            a[st[i]-97]++;
        }
        else if(st[i]>='A'&& st[i]<='Z')
        {
            a[st[i]-65]++;
        }
    }
    for(i=0; i<26; i++)
    {
        if(a[i]>0)
            printf("\n%c=%d",i+65,a[i]);
    }

}
