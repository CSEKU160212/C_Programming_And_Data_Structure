#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("*");
        }
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(l=1;l<=i-1;l++)
        {
            printf(" ");
        }
        for(m=1;m<=n-i+1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
}
