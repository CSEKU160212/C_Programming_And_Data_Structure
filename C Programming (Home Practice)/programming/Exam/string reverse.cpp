#include<stdio.h>
void strrev(char st[],char st2[])
{
    int i,j,l;
    for(l=0;st[l]!=NULL;l++)
    {
        for(i=l,j=0;i>=0;i--,j++)
            st2[j]=st[i];
    }
    st2[j]=NULL;
}
int main()
{
    char st[100],st2[100];
    gets(st);
    strrev(st,st2);
    puts(st2);
}
