#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, n,k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
     for(j=1; j<=n-i; j++)
        printf(" ");
     for(j=1;j<=i;j++)
        printf("%4d ", i);
     printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
     for(j=1; j<=n-i; j++)
        printf("  ");

     for(j=1;j<=i;j++)
        printf("%4d ", i);
     printf("\n");
    }
}
