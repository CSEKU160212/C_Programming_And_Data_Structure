#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}