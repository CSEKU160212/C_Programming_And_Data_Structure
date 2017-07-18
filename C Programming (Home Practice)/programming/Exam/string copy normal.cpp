#include<stdio.h>
int main()
{
    char a[100],b[100];
    gets(b);
    int i,j;
    for(i=0;b[i-1]!=NULL;i++)
    {
        a[i] = b[i];
    }
    puts(a);
}
