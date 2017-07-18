#include<stdio.h>

int main()
{
    long long int t,N,sum,n,i,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        sum = 0;
        N = 0;
        scanf("%lld",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0; j<n; j++)
        {
            if(N<a[j])
            {
                sum+=(a[j]-N);
            }
            N = a[j];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
