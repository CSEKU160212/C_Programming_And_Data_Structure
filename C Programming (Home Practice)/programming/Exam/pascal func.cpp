#include<stdio.h>
long long int fact(int n)
{
    int c;
    long long int res=1;
    for(c=1;c<=n;c++)
    {
        res*=c;
    }
    return res;
}
int main()
{
    int c,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(c=0;c<=n-i+1;c++)
        {
            printf("  ");
        }
        for(c=0;c<=i;c++)
        {
            printf("%4lld",fact(i)/(fact(c)*fact(i-c)));
        }
        printf("\n");
    }
}
