#include<stdio.h>
int main()
{
    int count=0,sum=0,n,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        n/=10;
        count++;
        sum+=rem;

    }

    printf("%d \n%d",count,sum);



}
