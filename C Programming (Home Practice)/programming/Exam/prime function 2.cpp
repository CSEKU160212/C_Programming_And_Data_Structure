#include<stdio.h>
int prime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int isprime,n;
    scanf("%d",&n);
    isprime = prime(n);
    if(isprime==1)
    {
        printf("%d is prime\n",n);
    }
    else
    {
        printf("%d is not prime\n",n);
    }
}
