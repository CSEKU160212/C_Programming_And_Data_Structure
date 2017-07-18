#include<stdio.h>
int main()
{


    double i,j,sum=0,n;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    printf("%lf",sum);
}
