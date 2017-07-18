#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        for(k=0;k<(2*n-2*j);k++)
        {
            printf(" ");
        }
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");

    }

}
