#include<stdio.h>
int isprime(int num,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(num%i==0)
            return 0;

        else
            return isprime(num,i-1);
    }
}
int main()
{
    int prime,num;
    scanf("%d",&num);
    prime = isprime(num,num/2);
    if(prime==1)
    {
        printf("%d is prime\n",num);
    }
    else
    {
        printf("%d is not prime\n",num);
    }
}


