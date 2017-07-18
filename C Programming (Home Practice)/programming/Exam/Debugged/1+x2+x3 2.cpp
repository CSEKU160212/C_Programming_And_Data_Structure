#include<stdio.h>
int series(int x,int n)
{
    int sum =0,mul =1;
    for(int i=0; i<=n; i++,mul=1)
    {
        for(int j=1; j<=i; j++) mul*=x;
        {
            sum+=mul;
        }

    }
    return sum;
}
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    printf("%d",series(a,n));
}
