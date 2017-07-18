#include<stdio.h>
int main()
{
    int i,n;
    float sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(1/i);
    }
    printf("%0.2f",sum);
}
