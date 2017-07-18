#include<stdio.h>
#include<string.h>

int main()
{
    char st1[50],st2[50];
    gets(st1);
    gets(st2);
    int n;
    n= strcmp(st1,st2);
    printf("%d ",n);


}
