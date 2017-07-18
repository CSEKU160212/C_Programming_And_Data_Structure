#include<stdio.h>
void strcat(char a[],char b[])
{
    int i,j,l;
    for(i=0; ; i++)
    {
        if(a[i]==NULL)
            break;
    }
    for(j=0;b[j]!=NULL;i++,j++)
    {
        a[i] = b[j];
    }
    a[i]=NULL;
}
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    strcat(a,b);
    puts(a);
}
