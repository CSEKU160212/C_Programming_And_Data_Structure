#include<stdio.h>
int mian()
{
    char st[100];
    gets(st);
    char i,j;
    scanf("%c %c",&i,&j);
    for(int k=0;st[k]!=NULL;k++)
    {
        if(st[k]==i)
        {
            st[k]=j;
        }
    }
    puts(st);
}
