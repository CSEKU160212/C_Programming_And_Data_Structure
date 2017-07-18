#include<stdio.h>
void strcpy(char a[],char b[])
{
    int i;
    for(i=0;b[i-1]!=NULL;i++)
    {
        a[i] = b[i];
    }
}
int main()
{
    char a[100],b[100];
    gets(b);
    strcpy(a,b);
    puts(a);
}
