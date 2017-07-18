#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
