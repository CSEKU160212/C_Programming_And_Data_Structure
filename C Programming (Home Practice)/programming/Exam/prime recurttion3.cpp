#include<stdio.h>
int isprime(int num,int i)
{
    if(i==1)
        return 1;
    else
    {
        if(num%i==0)
            return 0;
        else
            isprime(num,i-1);
    }
}
int main()
{
    int num,prime;
    scanf("%d",&num);
    prime = isprime(num,num/2);
    if(prime==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
