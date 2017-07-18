#include<stdio.h>
int main()
{
    int sum =0,mul = 1,x,n;
    scanf("%d %d",&x,&n);
    int i,j;
    for(i=0;i<=n;i++,mul=1)
    {
        for(j=1;j<=i;j++) mul*=x;
        {
            sum+=mul;
        }

    }
    printf("%d",sum);
}
