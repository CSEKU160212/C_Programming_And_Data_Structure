#include<stdio.h>
#include <math.h>
int main()
{
    long long int num,i,n,rem,power,sum=0,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        num=num/10;
        count++;
        printf("%lld\n",count);
    }

    for(i=n; i>0;i--,i/=10)
    {

        rem= i%10;
        power = pow(rem, count);
        sum=sum+power;

    }
    if(sum==n)
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);

}
