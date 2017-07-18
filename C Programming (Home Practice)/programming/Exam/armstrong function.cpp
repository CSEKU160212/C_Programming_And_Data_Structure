#include<stdio.h>
int pow(int n,int r)
{
    int c;
    long int p=1;
    for(c=1;c<=r;c++)
    {
        p*=n;
    }
    return p;
}
int arm(int n)
{
    int temp,digit,rem;
    long long int sum =0;
    temp = n;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        sum+=pow(rem,digit);
        temp/=10;
    }
    if(n==sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(arm(n)==1)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not armstrong\n");
    }
}
