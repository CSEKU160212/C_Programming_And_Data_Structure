#include<stdio.h>
int main()
{
    int r,c,sp,n=6;
    //scanf("%d",&n);
    for(r=1;r<=6;r++)
    {
        for(sp=1;sp<=n;sp++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
            printf(" ");
        }
        printf("\n");
        n = n-1;
    }
}
