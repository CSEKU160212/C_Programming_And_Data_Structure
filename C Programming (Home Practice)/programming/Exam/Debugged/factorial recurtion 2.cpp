#include<stdio.h>
long long int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int n;
    long long int f;
    scanf("%d",&n);
    f = fact(n);
    printf("%lld",f);
}
