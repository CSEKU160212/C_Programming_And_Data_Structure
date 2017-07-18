#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        n/=10;
        sum+=rem;
    }
    printf("%d",sum);
}
