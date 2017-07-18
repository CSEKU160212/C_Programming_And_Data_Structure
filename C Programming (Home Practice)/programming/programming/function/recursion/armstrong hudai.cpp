#include<stdio.h>
#include<math.h>
int main()
{

    long long sum = 0, temp,n,mul;
    int remainder, digits = 0;
    scanf("%lld",&n);

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp/10;
    }

    temp = n;

    while (temp != 0)
    {
        remainder = temp%10;
        sum = sum + pow(remainder, digits);
        temp = temp/10;
    }
    if(n==sum)
        printf("Armstrong number\n");
    else
        printf("Not\n");

}
