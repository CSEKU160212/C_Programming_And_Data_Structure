#include<stdio.h>
int main()
{
    char st[100],rev_st[100];
    int i,j,l;
    gets(st);
    for(l=0;st[l]!=NULL;l++)
    {
        for(i=l,j=0;i>=0;i--,j++)
        {
            rev_st[j] = st[i];
        }
        rev_st[j]=NULL;
    }
    puts(rev_st);
}
