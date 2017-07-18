#include<stdio.h>
int main()
{
    int i,j, num[30],num2[30];
    for(i=0;i<10;i++)
    {
        num[i]=i*i;
        num2[i]=i*i*i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",num2[i]);
    }



}
