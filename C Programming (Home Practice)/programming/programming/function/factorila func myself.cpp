#include<stdio.h>
long long int fact(int n)
{
    int i,s = 1;
    for(i=1; i<=n; i++)
    {
        s*=i;
    }
    return s;

}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%lld\n",fact(n));
    }
}
