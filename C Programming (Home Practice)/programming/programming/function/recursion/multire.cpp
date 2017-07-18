#include<stdio.h>
int main()
{
    int sum = 1,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    printf("%d",sum);
}
