#include<stdio.h>
int main()
{
    int pa, temp;
    scanf("%d", &pa);
    temp=pa;
    printf("%d ano(s)\n", temp/365);
    temp=temp%365;
    printf("%d mes(es)\n", temp/30);
    temp=temp%30;
    printf("%d dia(s)\n", temp);
    return 0;
}
