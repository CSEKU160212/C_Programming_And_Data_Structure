#include<stdio.h>
int main()
{
    char st[100],a[256];
    gets(st);
    int i,l;
    for(i=0;i<256;i++)
        a[i]=0;
    for(i=0;;i++)
    {
        if(st[i]=='\0')
            break;
    }
    l = i;
    for(i=0;i<l;i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            a[st[i]]++;
        }
    }
    for(i=0;i<256;i++)
    {
        if(a[i]>0)
        {
            printf("\n%c = %2d",i,a[i]);
        }
    }

}
