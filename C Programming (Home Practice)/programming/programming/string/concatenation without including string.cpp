#include<stdio.h>

int main()

{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i;
    for(i=0;a[i]!='\0';i++){}
    for(int k=0;;k++)
    {
        a[i]=b[k];
        if(b[k]=='\0') break;
        i++;

    }
    puts(a);
}
