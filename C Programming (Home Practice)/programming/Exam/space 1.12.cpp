#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    printf("Enter the number of lines to be printed: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
