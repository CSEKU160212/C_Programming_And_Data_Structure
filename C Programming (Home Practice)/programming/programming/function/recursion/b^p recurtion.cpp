#include<stdio.h>
int i=1;
long long int sum = 1;
long long int power(int num,int pow)
{

    if(i<=pow)
    {
        sum*=num;
        power(num,pow-1);
    }

    else
        return sum;

}
int main()
{
    int num,pow;
    long long int res;
    scanf("%d %d",&num,&pow);
    res = power(num,pow);
    printf("%lld",res);

}
