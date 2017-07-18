#include<stdio.h>
int main()
{
    int r,c,n,a=1;
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",a);
            printf(" ");
            a++;
        }
        printf("\n");
    }
}
