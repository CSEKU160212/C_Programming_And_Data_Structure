#include<stdio.h>
int main()
{
    float i,j,sum=0,n;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i/(i*(i+1));

    }
    printf("%f",sum);
}

